CC      = arm-none-eabi-gcc
OBJCOPY = arm-none-eabi-objcopy

TARGET = prog

BUILD_DIR = build
SRC_DIR   = src

LDSCRIPT = stm32F411RE.ld

CFLAGS  = -mcpu=cortex-m4 -mthumb -Wall -Wextra -O0 -g3 -nostdlib

LDFLAGS  = -T $(SRC_DIR)/$(LDSCRIPT)
LDFLAGS += -nostdlib

SRC = $(SRC_DIR)/startup.c $(SRC_DIR)/main.c $(SRC_DIR)/gpio.c

OBJ = $(BUILD_DIR)/startup.o $(BUILD_DIR)/main.o $(BUILD_DIR)/gpio.o

TARGET_ELF = $(BUILD_DIR)/$(TARGET).elf
TARGET_BIN = $(BUILD_DIR)/$(TARGET).bin

ifeq ($(OS),Windows_NT)
    MKDIR = if not exist $(BUILD_DIR) mkdir $(BUILD_DIR)
    RM    = if exist $(BUILD_DIR) rmdir /s /q $(BUILD_DIR)
else
    MKDIR = mkdir -p $(BUILD_DIR)
    RM    = rm -rf $(BUILD_DIR)
endif

all: $(TARGET_BIN)

$(BUILD_DIR):
	$(MKDIR)

$(BUILD_DIR)/startup.o: $(SRC_DIR)/startup.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/gpio.o: $(SRC_DIR)/gpio.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET_ELF): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LDFLAGS) -o $@

$(TARGET_BIN): $(TARGET_ELF)
	$(OBJCOPY) -O binary $< $@

clean:
	$(RM)

flash:
	st-flash write $(TARGET_BIN) 0x08000000

.PHONY: all clean flash