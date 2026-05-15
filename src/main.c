#include <stdint.h>

#include "rcc.h"
#include "gpio.h"

void delay( uint32_t ms ) {
    while ( ms ) {
        ms--;
    }
}

int main( void ) {
    RCC_AHB1ENR |= RCC_AHB1ENR_GPIOA;

    gpio_output_pin(GPIOA, GPIO_NUM_5);

    while (1) {
        gpio_toggle_pin(GPIOA, GPIO_NUM_5);
        delay(1000000);
    }

    return 0;
}