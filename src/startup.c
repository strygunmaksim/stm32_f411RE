#include <stdint.h>

#define WEAK_ALIAS __attribute__((weak, alias("Default_Handler")))

void Default_Handler( void ) {
    while ( 1 ) {}
}

void Reset_Handler( void );
void NMI_Handler( void ) WEAK_ALIAS;
void HardFault_Handler( void ) WEAK_ALIAS;
void MemManage_Handler( void ) WEAK_ALIAS;
void BusFault_Handler( void ) WEAK_ALIAS;
void UsageFault_Handler( void ) WEAK_ALIAS;
void SVC_Handler( void ) WEAK_ALIAS;
void DebugMon_Handler( void ) WEAK_ALIAS;
void PendSV_Handler( void ) WEAK_ALIAS;
void SysTick_Handler( void ) WEAK_ALIAS;
void WWDG_Handler( void ) WEAK_ALIAS;
void EXTI16_PVD_Handler( void ) WEAK_ALIAS;
void EXTI21_TAMP_STAMP_Handler( void ) WEAK_ALIAS;
void EXTI22_RTC_WKUP_Handler( void ) WEAK_ALIAS;
void FLASH_Handler( void ) WEAK_ALIAS;
void RCC_Handler( void ) WEAK_ALIAS;
void EXTI0_Handler( void ) WEAK_ALIAS;
void EXTI1_Handler( void ) WEAK_ALIAS;
void EXTI2_Handler( void ) WEAK_ALIAS;
void EXTI3_Handler( void ) WEAK_ALIAS;
void EXTI4_Handler( void ) WEAK_ALIAS;
void DMA1_Stream0_Handler( void ) WEAK_ALIAS;
void DMA1_Stream1_Handler( void ) WEAK_ALIAS;
void DMA1_Stream2_Handler( void ) WEAK_ALIAS;
void DMA1_Stream3_Handler( void ) WEAK_ALIAS;
void DMA1_Stream4_Handler( void ) WEAK_ALIAS;
void DMA1_Stream5_Handler( void ) WEAK_ALIAS;
void DMA1_Stream6_Handler( void ) WEAK_ALIAS;
void ADC_Handler( void ) WEAK_ALIAS;
void EXTI9_5_Handler( void ) WEAK_ALIAS;
void TIM1_BRK_Handler( void ) WEAK_ALIAS;
void TIM1_UP_Handler( void ) WEAK_ALIAS;
void TIM1_TRG_COM_Handler( void ) WEAK_ALIAS;
void TIM1_CC_Handler( void ) WEAK_ALIAS;
void TIM2_Handler( void ) WEAK_ALIAS;
void TIM3_Handler( void ) WEAK_ALIAS;
void TIM4_Handler( void ) WEAK_ALIAS;
void I2C1_EV_Handler( void ) WEAK_ALIAS;
void I2C1_ER_Handler( void ) WEAK_ALIAS;
void I2C2_EV_Handler( void ) WEAK_ALIAS;
void I2C2_ER_Handler( void ) WEAK_ALIAS;
void SPI1_Handler( void ) WEAK_ALIAS;
void SPI2_Handler( void ) WEAK_ALIAS;
void USART1_Handler( void ) WEAK_ALIAS;
void USART2_Handler( void ) WEAK_ALIAS;
void EXTI15_10_Handler( void ) WEAK_ALIAS;
void EXTI17_RTC_Alarm_Handler( void ) WEAK_ALIAS;
void EXTI18_OTG_FS_WKUP_Handler( void ) WEAK_ALIAS;
void DMA1_Stream7_Handler( void ) WEAK_ALIAS;
void SDIO_Handler( void ) WEAK_ALIAS;
void TIM5_Handler( void ) WEAK_ALIAS;
void SPI3_Handler( void ) WEAK_ALIAS;
void DMA2_Stream0_Handler( void ) WEAK_ALIAS;
void DMA2_Stream1_Handler( void ) WEAK_ALIAS;
void DMA2_Stream2_Handler( void ) WEAK_ALIAS;
void DMA2_Stream3_Handler( void ) WEAK_ALIAS;
void DMA2_Stream4_Handler( void ) WEAK_ALIAS;
void OTG_FS_Handler( void ) WEAK_ALIAS;
void DMA2_Stream5_Handler( void ) WEAK_ALIAS;
void DMA2_Stream6_Handler( void ) WEAK_ALIAS;
void DMA2_Stream7_Handler( void ) WEAK_ALIAS;
void USART6_Handler( void ) WEAK_ALIAS;
void I2C3_EV_Handler( void ) WEAK_ALIAS;
void I2C3_ER_Handler( void ) WEAK_ALIAS;
void FPU_Handler( void ) WEAK_ALIAS;
void SPI4_Handler( void ) WEAK_ALIAS;
void SPI5_Handler( void ) WEAK_ALIAS;

extern uint32_t _end_stack;
extern uint32_t _start_data;
extern uint32_t _end_data;
extern uint32_t _start_idata;
extern uint32_t _start_bss;
extern uint32_t _end_bss;

extern int main( void );

__attribute__((section(".vectors")))
void (* const vector_table[])(void) = {
    (void (*)(void))&_end_stack,
    Reset_Handler,
    NMI_Handler,
    HardFault_Handler,
    MemManage_Handler,
    BusFault_Handler,
    UsageFault_Handler,
    0, 0, 0, 0,
    SVC_Handler,
    DebugMon_Handler,
    0,
    PendSV_Handler,
    SysTick_Handler,
    WWDG_Handler,
    EXTI16_PVD_Handler, // +
    EXTI21_TAMP_STAMP_Handler,
    EXTI22_RTC_WKUP_Handler,
    FLASH_Handler,
    RCC_Handler,
    EXTI0_Handler,
    EXTI1_Handler,
    EXTI2_Handler,
    EXTI3_Handler,
    EXTI4_Handler,
    DMA1_Stream0_Handler,
    DMA1_Stream1_Handler,
    DMA1_Stream2_Handler,
    DMA1_Stream3_Handler,
    DMA1_Stream4_Handler,
    DMA1_Stream5_Handler,
    DMA1_Stream6_Handler,
    ADC_Handler,
    0,0,0,0,
    EXTI9_5_Handler,
    TIM1_BRK_Handler,
    TIM1_UP_Handler,
    TIM1_TRG_COM_Handler,
    TIM1_CC_Handler,
    TIM2_Handler,
    TIM3_Handler,
    TIM4_Handler,
    I2C1_EV_Handler,
    I2C1_ER_Handler,
    I2C2_EV_Handler,
    I2C2_ER_Handler,
    SPI1_Handler,
    SPI2_Handler,
    USART1_Handler,
    USART2_Handler,
    0,
    EXTI15_10_Handler,
    EXTI17_RTC_Alarm_Handler,
    EXTI18_OTG_FS_WKUP_Handler,
    0,0,0,0,
    DMA1_Stream7_Handler,
    0,
    SDIO_Handler,
    TIM5_Handler,
    SPI3_Handler,
    0,0,0,0,
    DMA2_Stream0_Handler,
    DMA2_Stream1_Handler,
    DMA2_Stream2_Handler,
    DMA2_Stream3_Handler,
    DMA2_Stream4_Handler,
    0,0,0,0,0,0,
    OTG_FS_Handler,
    DMA2_Stream5_Handler,
    DMA2_Stream6_Handler,
    DMA2_Stream7_Handler,
    USART6_Handler,
    I2C3_EV_Handler,
    I2C3_ER_Handler,
    0,0,0,0,0,0,0,
    FPU_Handler,
    0,0,
    SPI4_Handler,
    SPI5_Handler,
};

void Reset_Handler( void ) {
    uint32_t *pSrc, *pDest;

    pSrc = &_start_idata;
    pDest = &_start_data;
    while( pDest < &_end_data ) {
        *pDest++ = *pSrc++;
    }

    pDest = &_start_bss;
    while( pDest < &_end_bss ) {
        *pDest++ = 0;
    }

    main();
    while(1);
}