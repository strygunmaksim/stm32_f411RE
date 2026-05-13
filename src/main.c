#include <stdint.h>

#include "memory.h"

// move to memory!
#define GPIOA_MODER   (*(volatile uint32_t *)(GPIOA_BASE + 0x00))
#define GPIOA_ODR     (*(volatile uint32_t *)(GPIOA_BASE + 0x14))


void delay_ms( uint32_t ms ) {
    while ( ms != 0 ) {
        ms--;
    }
}

int main( void ) {
    RCC_AHB1ENR |= (1 << 0);

    GPIOA_MODER &= ~(0x3 << 10);
    GPIOA_MODER |=  (0x1 << 10);

    while (1) {
        GPIOA_ODR |= (1 << 5);
    }
    return 0;
}