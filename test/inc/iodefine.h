/* =================================================
 * IO definition file for STM32F303 [iodefine.h]
 * By matekai
 * -------------------------------------------------
 * << REVISION HISTORY >>
 * 2018/05/xx Ver. 1.00 by matekai
 * Initial release.
 *
================================================== */

/* =============================
 * BaseAddress Definition
============================= */
// AHB3
#define ADC12_BAR 0x50000000UL

// AHB2
#define GPIOF_BAR 0x48001400UL
#define GPIOD_BAR 0x48000C00UL
#define GPIOC_BAR 0x48000800UL
#define GPIOB_BAR 0x48000400UL
#define GPIOA_BAR 0x48000000UL

// AHB1
#define TSC_BAR   0x40024000UL
#define CRC_BAR   0x40023000UL
#define FLIF_BAR  0x40022000UL
#define RCC_BAR   0x40021000UL
#define DMA1_BAR  0x40020000UL

// APB2
#define TIM17_BAR  0x40014800UL
#define TIM16_BAR  0x40014400UL
#define TIM15_BAR  0x40014000UL
#define USART1_BAR 0x40013800UL
#define SPI1_BAR   0x40013000UL
#define TIM1_BAR   0x40012C00UL
#define EXTI_BAR   0x40010400UL
#define SYSCFG_BAR 0x40010000UL

// APB1
#define DAC2_BAR   0x40009800UL
#define DAC1_BAR   0x40007400UL
#define PWR_BAR    0x40007000UL
#define BXCAN_BAR  0x40006400UL
#define I2C1_BAR   0x40005400UL
#define USART3_BAR 0x40004800UL
#define USART2_BAR 0x40004400UL
#define IWDG_BAR   0x40003000UL
#define WWDG_BAR   0x40002C00UL
#define RTC_BAR    0x40002800UL
#define TIM7_BAR   0x40001400UL
#define TIM6_BAR   0x40001000UL
#define TIM3_BAR   0x40000400UL
#define TIM2_BAR   0x40000000UL

/* ==========================
 *  GPIO SFR definition
========================== */

#define GPIOA_MODER   ( *( ( unsigned long int *)( GPIOA_BAR + 0x00UL ) ) )
#define GPIOA_OTYPER  ( *( ( unsigned long int *)( GPIOA_BAR + 0x04UL ) ) )
#define GPIOA_OSPEEDR ( *( ( unsigned long int *)( GPIOA_BAR + 0x08UL ) ) )
#define GPIOA_PUPDR   ( *( ( unsigned long int *)( GPIOA_BAR + 0x0CUL ) ) )
#define GPIOA_IDR     ( *( ( unsigned long int *)( GPIOA_BAR + 0x10UL ) ) )
#define GPIOA_ODR     ( *( ( unsigned long int *)( GPIOA_BAR + 0x14UL ) ) )
#define GPIOA_BSRR    ( *( ( unsigned long int *)( GPIOA_BAR + 0x18UL ) ) )
#define GPIOA_LCKR    ( *( ( unsigned long int *)( GPIOA_BAR + 0x1CUL ) ) )
#define GPIOA_AFRL    ( *( ( unsigned long int *)( GPIOA_BAR + 0x20UL ) ) )
#define GPIOA_AFRH    ( *( ( unsigned long int *)( GPIOA_BAR + 0x24UL ) ) )
#define GPIOA_BRR     ( *( ( unsigned long int *)( GPIOA_BAR + 0x28UL ) ) )

#define GPIOB_MODER   ( *( ( unsigned long int *)( GPIOB_BAR + 0x00UL ) ) )
#define GPIOB_OTYPER  ( *( ( unsigned long int *)( GPIOB_BAR + 0x04UL ) ) )
#define GPIOB_OSPEEDR ( *( ( unsigned long int *)( GPIOB_BAR + 0x08UL ) ) )
#define GPIOB_PUPDR   ( *( ( unsigned long int *)( GPIOB_BAR + 0x0CUL ) ) )
#define GPIOB_IDR     ( *( ( unsigned long int *)( GPIOB_BAR + 0x10UL ) ) )
#define GPIOB_ODR     ( *( ( unsigned long int *)( GPIOB_BAR + 0x14UL ) ) )
#define GPIOB_BSRR    ( *( ( unsigned long int *)( GPIOB_BAR + 0x18UL ) ) )
#define GPIOB_LCKR    ( *( ( unsigned long int *)( GPIOB_BAR + 0x1CUL ) ) )
#define GPIOB_AFRL    ( *( ( unsigned long int *)( GPIOB_BAR + 0x20UL ) ) )
#define GPIOB_AFRH    ( *( ( unsigned long int *)( GPIOB_BAR + 0x24UL ) ) )
#define GPIOB_BRR     ( *( ( unsigned long int *)( GPIOB_BAR + 0x28UL ) ) )

#define GPIOC_MODER   ( *( ( unsigned long int *)( GPIOC_BAR + 0x00UL ) ) )
#define GPIOC_OTYPER  ( *( ( unsigned long int *)( GPIOC_BAR + 0x04UL ) ) )
#define GPIOC_OSPEEDR ( *( ( unsigned long int *)( GPIOC_BAR + 0x08UL ) ) )
#define GPIOC_PUPDR   ( *( ( unsigned long int *)( GPIOC_BAR + 0x0CUL ) ) )
#define GPIOC_IDR     ( *( ( unsigned long int *)( GPIOC_BAR + 0x10UL ) ) )
#define GPIOC_ODR     ( *( ( unsigned long int *)( GPIOC_BAR + 0x14UL ) ) )
#define GPIOC_BSRR    ( *( ( unsigned long int *)( GPIOC_BAR + 0x18UL ) ) )
#define GPIOC_LCKR    ( *( ( unsigned long int *)( GPIOC_BAR + 0x1CUL ) ) )
#define GPIOC_AFRL    ( *( ( unsigned long int *)( GPIOC_BAR + 0x20UL ) ) )
#define GPIOC_AFRH    ( *( ( unsigned long int *)( GPIOC_BAR + 0x24UL ) ) )
#define GPIOC_BRR     ( *( ( unsigned long int *)( GPIOC_BAR + 0x28UL ) ) )

#define GPIOD_MODER   ( *( ( unsigned long int *)( GPIOD_BAR + 0x00UL ) ) )
#define GPIOD_OTYPER  ( *( ( unsigned long int *)( GPIOD_BAR + 0x04UL ) ) )
#define GPIOD_OSPEEDR ( *( ( unsigned long int *)( GPIOD_BAR + 0x08UL ) ) )
#define GPIOD_PUPDR   ( *( ( unsigned long int *)( GPIOD_BAR + 0x0CUL ) ) )
#define GPIOD_IDR     ( *( ( unsigned long int *)( GPIOD_BAR + 0x10UL ) ) )
#define GPIOD_ODR     ( *( ( unsigned long int *)( GPIOD_BAR + 0x14UL ) ) )
#define GPIOD_BSRR    ( *( ( unsigned long int *)( GPIOD_BAR + 0x18UL ) ) )
#define GPIOD_LCKR    ( *( ( unsigned long int *)( GPIOD_BAR + 0x1CUL ) ) )
#define GPIOD_AFRL    ( *( ( unsigned long int *)( GPIOD_BAR + 0x20UL ) ) )
#define GPIOD_AFRH    ( *( ( unsigned long int *)( GPIOD_BAR + 0x24UL ) ) )
#define GPIOD_BRR     ( *( ( unsigned long int *)( GPIOD_BAR + 0x28UL ) ) )

#define GPIOF_MODER   ( *( ( unsigned long int *)( GPIOF_BAR + 0x00UL ) ) )
#define GPIOF_OTYPER  ( *( ( unsigned long int *)( GPIOF_BAR + 0x04UL ) ) )
#define GPIOF_OSPEEDR ( *( ( unsigned long int *)( GPIOF_BAR + 0x08UL ) ) )
#define GPIOF_PUPDR   ( *( ( unsigned long int *)( GPIOF_BAR + 0x0CUL ) ) )
#define GPIOF_IDR     ( *( ( unsigned long int *)( GPIOF_BAR + 0x10UL ) ) )
#define GPIOF_ODR     ( *( ( unsigned long int *)( GPIOF_BAR + 0x14UL ) ) )
#define GPIOF_BSRR    ( *( ( unsigned long int *)( GPIOF_BAR + 0x18UL ) ) )
#define GPIOF_LCKR    ( *( ( unsigned long int *)( GPIOF_BAR + 0x1CUL ) ) )
#define GPIOF_AFRL    ( *( ( unsigned long int *)( GPIOF_BAR + 0x20UL ) ) )
#define GPIOF_AFRH    ( *( ( unsigned long int *)( GPIOF_BAR + 0x24UL ) ) )
#define GPIOF_BRR     ( *( ( unsigned long int *)( GPIOF_BAR + 0x28UL ) ) )

/* ==========================
 *  RCC SFR definition
========================== */
#define RCC_CR       ( *( ( unsigned long int *)( RCC_BAR + 0x00UL ) ) )
#define RCC_CFGR     ( *( ( unsigned long int *)( RCC_BAR + 0x04UL ) ) )
#define RCC_CIR      ( *( ( unsigned long int *)( RCC_BAR + 0x08UL ) ) )
#define RCC_APB2RSTR ( *( ( unsigned long int *)( RCC_BAR + 0x0CUL ) ) )
#define RCC_APB1RSTR ( *( ( unsigned long int *)( RCC_BAR + 0x10UL ) ) )
#define RCC_AHBENR   ( *( ( unsigned long int *)( RCC_BAR + 0x14UL ) ) )
#define RCC_APB2ENR  ( *( ( unsigned long int *)( RCC_BAR + 0x18UL ) ) )
#define RCC_APB1ENR  ( *( ( unsigned long int *)( RCC_BAR + 0x1CUL ) ) )
#define RCC_BDCR     ( *( ( unsigned long int *)( RCC_BAR + 0x20UL ) ) )
#define RCC_CSR      ( *( ( unsigned long int *)( RCC_BAR + 0x24UL ) ) )
#define RCC_AHBRSTR  ( *( ( unsigned long int *)( RCC_BAR + 0x28UL ) ) )
#define RCC_CFGR2    ( *( ( unsigned long int *)( RCC_BAR + 0x2CUL ) ) )
#define RCC_CFGR3    ( *( ( unsigned long int *)( RCC_BAR + 0x30UL ) ) )
