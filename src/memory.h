#ifndef MEMORY_H
#define MEMORY_H

#define RCC_BASE   0x40023800UL
#define GPIOH_BASE 0x40021C00UL
#define GPIOE_BASE 0x40021000UL
#define GPIOD_BASE 0x40020C00UL
#define GPIOC_BASE 0x40020800UL
#define GPIOB_BASE 0x40020400UL
#define GPIOA_BASE 0x40020000UL

// RCC Register map
#define RCC_CR          ( *(volatile unsigned int *)(RCC_BASE + 0x00) )
#define RCC_PLLCFGR     ( *(volatile unsigned int *)(RCC_BASE + 0x04) )
#define RCC_CFGR        ( *(volatile unsigned int *)(RCC_BASE + 0x08) )
#define RCC_CIR         ( *(volatile unsigned int *)(RCC_BASE + 0x0C) )
#define RCC_AHB1RSTR    ( *(volatile unsigned int *)(RCC_BASE + 0x10) )
#define RCC_AHB2RSTR    ( *(volatile unsigned int *)(RCC_BASE + 0x14) )
#define RCC_APB1RSTR    ( *(volatile unsigned int *)(RCC_BASE + 0x20) )
#define RCC_APB2RSTR    ( *(volatile unsigned int *)(RCC_BASE + 0x24) )
#define RCC_AHB1ENR     ( *(volatile unsigned int *)(RCC_BASE + 0x30) )
#define RCC_AHB2ENR     ( *(volatile unsigned int *)(RCC_BASE + 0x34) )
#define RCC_APB1ENR     ( *(volatile unsigned int *)(RCC_BASE + 0x40) )
#define RCC_APB2ENR     ( *(volatile unsigned int *)(RCC_BASE + 0x44) )
#define RCC_AHB1LPENR   ( *(volatile unsigned int *)(RCC_BASE + 0x50) )
#define RCC_AHB2LPENR   ( *(volatile unsigned int *)(RCC_BASE + 0x54) )
#define RCC_APB1LPENR   ( *(volatile unsigned int *)(RCC_BASE + 0x60) )
#define RCC_APB2LPENR   ( *(volatile unsigned int *)(RCC_BASE + 0x64) )
#define RCC_BDCR        ( *(volatile unsigned int *)(RCC_BASE + 0x70) )
#define RCC_CSR         ( *(volatile unsigned int *)(RCC_BASE + 0x74) )
#define RCC_SSCGR       ( *(volatile unsigned int *)(RCC_BASE + 0x80) )
#define RCC_PLLI2SCFGR  ( *(volatile unsigned int *)(RCC_BASE + 0x84) )
#define RCC_DCKCFGR     ( *(volatile unsigned int *)(RCC_BASE + 0x88) )

// GPIO Registes Map


#endif
