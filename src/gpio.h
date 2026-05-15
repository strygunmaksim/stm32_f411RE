#ifndef GPIO_H
#define GPIO_H

typedef struct {
    volatile uint32_t MODER;
    volatile uint32_t OTYPER;
    volatile uint32_t OSPEEDR;
    volatile uint32_t PUPDR;
    volatile uint32_t IDR;
    volatile uint32_t ODR;
    volatile uint32_t BSRR;
    volatile uint32_t LCKR;
    volatile uint32_t AFRL;
    volatile uint32_t AFRH;
} GPIO_Type;

typedef enum {
    GPIO_PIN_OFF,
    GPIO_PIN_ON,
} GPIO_PIN_State;

#define GPIOA_BASE 0x40020000UL
#define GPIOB_BASE 0x40020400UL
#define GPIOC_BASE 0x40020800UL
#define GPIOD_BASE 0x40020C00UL
#define GPIOE_BASE 0x40021000UL
#define GPIOH_BASE 0x40021C00UL

#define GPIOA ((GPIO_Type*) GPIOA_BASE)
#define GPIOB ((GPIO_Type*) GPIOB_BASE)
#define GPIOC ((GPIO_Type*) GPIOC_BASE)
#define GPIOD ((GPIO_Type*) GPIOD_BASE)
#define GPIOE ((GPIO_Type*) GPIOE_BASE)
#define GPIOH ((GPIO_Type*) GPIOH_BASE)

#define GPIO_NUM_0   0U
#define GPIO_NUM_1   1U
#define GPIO_NUM_2   2U
#define GPIO_NUM_3   3U
#define GPIO_NUM_4   4U
#define GPIO_NUM_5   5U
#define GPIO_NUM_6   6U
#define GPIO_NUM_7   7U
#define GPIO_NUM_8   8U
#define GPIO_NUM_9   9U
#define GPIO_NUM_10  10U
#define GPIO_NUM_11  11U
#define GPIO_NUM_12  12U
#define GPIO_NUM_13  13U
#define GPIO_NUM_14  14U
#define GPIO_NUM_15  15U

void gpio_input_pin(GPIO_Type* GPIOx, uint32_t pin);
void gpio_output_pin(GPIO_Type* GPIOx, uint32_t pin);
void gpio_toggle_pin(GPIO_Type* GPIOx, uint32_t pin);

#endif
