#include <stdint.h>

#include "gpio.h"

void gpio_input_pin(GPIO_Type* GPIOx, uint32_t pin) {
    GPIOx->MODER &= ~(0x3U << (2 * pin));
}

void gpio_output_pin(GPIO_Type* GPIOx, uint32_t pin) {
    GPIOx->MODER &= ~(0x3U << (2 * pin));
    GPIOx->MODER |=  (0x1U << (2 * pin));
}

void gpio_toggle_pin(GPIO_Type* GPIOx, uint32_t pin) {
    GPIOx->ODR ^= (0x1U << pin);
}