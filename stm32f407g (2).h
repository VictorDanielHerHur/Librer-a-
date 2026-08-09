/*
 * stm32f407g_uteq.h
 *
 *  Created on: Jul 9, 2026
 *      Author: De Leòn Montes
 */

#ifndef STM32F407G_H_
#define STM32F407G_H_

#include <stdint.h>

/********************************** Library for RCC **********************************/
#define ADDR_RCC_BASE       0x40023800UL

#define RCC_OFFSET_AHB1ENR  0x30UL
#define RCC_OFFSET_APB1ENR  0x40UL
#define RCC_OFFSET_APB2ENR  0x44UL

/* RCC_AHB1ENR */
typedef struct
{
    uint32_t gpioa_en       : 1;
    uint32_t gpiob_en       : 1;
    uint32_t gpioc_en       : 1;
    uint32_t gpiod_en       : 1;
    uint32_t gpioe_en       : 1;
    uint32_t gpiof_en       : 1;
    uint32_t gpiog_en       : 1;
    uint32_t gpioh_en       : 1;
    uint32_t gpioi_en       : 1;
    uint32_t gpioj_en       : 1;
    uint32_t gpiok_en       : 1;
    uint32_t reserved1      : 1;
    uint32_t crc_en         : 1;
    uint32_t reserved2      : 5;
    uint32_t bkpsramen      : 1;
    uint32_t reserved3      : 1;
    uint32_t ccmdataram_en  : 1;
    uint32_t dma1_en        : 1;
    uint32_t dma2_en        : 1;
    uint32_t dma2d_en       : 1;
    uint32_t reserved4      : 1;
    uint32_t ethmac_en      : 1;
    uint32_t ethmactx_en    : 1;
    uint32_t ethmacrx_en    : 1;
    uint32_t ethmacptp_en   : 1;
    uint32_t otghs_en       : 1;
    uint32_t otghsulpi_en   : 1;
    uint32_t reserved5      : 1;
}RCC_AHB1ENR_t;

#define ADDR_RCC_AHB1ENR    ((volatile RCC_AHB1ENR_t*)(ADDR_RCC_BASE + RCC_OFFSET_AHB1ENR))


/* RCC_APB1ENR */
typedef struct
{
    uint32_t tim2en      : 1;  /* Bit 0: TIM2 clock enable */
    uint32_t tim3en      : 1;  /* Bit 1: TIM3 clock enable */
    uint32_t tim4en      : 1;  /* Bit 2: TIM4 clock enable */
    uint32_t tim5en      : 1;  /* Bit 3: TIM5 clock enable */
    uint32_t tim6en      : 1;  /* Bit 4: TIM6 clock enable */
    uint32_t tim7en      : 1;  /* Bit 5: TIM7 clock enable */
    uint32_t tim12en     : 1;  /* Bit 6: TIM12 clock enable */
    uint32_t tim13en     : 1;  /* Bit 7: TIM13 clock enable */
    uint32_t tim14en     : 1;  /* Bit 8: TIM14 clock enable */
    uint32_t reserved1   : 2;  /* Bits 9-10: Reserved */
    uint32_t wwdgen      : 1;  /* Bit 11: Window watchdog clock enable */
    uint32_t reserved2   : 2;  /* Bits 12-13: Reserved */
    uint32_t spi2en      : 1;  /* Bit 14: SPI2 clock enable */
    uint32_t spi3en      : 1;  /* Bit 15: SPI3 clock enable */
    uint32_t reserved3   : 1;  /* Bit 16: Reserved */
    uint32_t usart2en    : 1;  /* Bit 17: USART2 clock enable */
    uint32_t usart3en    : 1;  /* Bit 18: USART3 clock enable */
    uint32_t uart4en     : 1;  /* Bit 19: UART4 clock enable */
    uint32_t uart5en     : 1;  /* Bit 20: UART5 clock enable */
    uint32_t i2c1en      : 1;  /* Bit 21: I2C1 clock enable */
    uint32_t i2c2en      : 1;  /* Bit 22: I2C2 clock enable */
    uint32_t i2c3en      : 1;  /* Bit 23: I2C3 clock enable */
    uint32_t reserved4   : 1;  /* Bit 24: Reserved */
    uint32_t can1en      : 1;  /* Bit 25: CAN1 clock enable */
    uint32_t can2en      : 1;  /* Bit 26: CAN2 clock enable */
    uint32_t reserved5   : 1;  /* Bit 27: Reserved */
    uint32_t pwren       : 1;  /* Bit 28: Power interface clock enable */
    uint32_t dacen       : 1;  /* Bit 29: DAC interface clock enable */
    uint32_t uart7en     : 1;  /* Bit 30: UART7 clock enable */
    uint32_t uart8en     : 1;  /* Bit 31: UART8 clock enable */
} RCC_APB1ENR_t;

#define ADDR_RCC_APB1ENR    ((volatile RCC_APB1ENR_t*)(ADDR_RCC_BASE + RCC_OFFSET_APB1ENR))


/* RCC_APB2ENR */
typedef struct
{
    uint32_t tim1_en        : 1;
    uint32_t tim8_en        : 1;
    uint32_t reserved1      : 2;
    uint32_t usart1_en      : 1;
    uint32_t usart6_en      : 1;
    uint32_t reserved2      : 2;
    uint32_t adc1_en        : 1;
    uint32_t adc2_en        : 1;
    uint32_t adc3_en        : 1;
    uint32_t sdio_en        : 1;
    uint32_t spi1_en        : 1;
    uint32_t spi4_en        : 1;
    uint32_t syscfg_en      : 1;
    uint32_t reserved3      : 1;
    uint32_t tim9_en        : 1;
    uint32_t tim10_en       : 1;
    uint32_t tim11_en       : 1;
    uint32_t reserved4      : 1;
    uint32_t spi5_en        : 1;
    uint32_t spi6_en        : 1;
    uint32_t sai1_en        : 1;
    uint32_t reserved5      : 3;
    uint32_t ltdc_en        : 1;
    uint32_t reserved6      : 5;
}RCC_APB2ENR_t;

#define ADDR_RCC_APB2ENR    ((volatile RCC_APB2ENR_t*)(ADDR_RCC_BASE + RCC_OFFSET_APB2ENR))




/********************************** Library for GPIO **********************************/
#define ADDR_GPIOA_BASE     0x40020000UL
#define ADDR_GPIOB_BASE     0x40020400UL
#define ADDR_GPIOC_BASE     0x40020800UL
#define ADDR_GPIOD_BASE     0x40020C00UL
#define ADDR_GPIOE_BASE     0x40021000UL
#define ADDR_GPIOF_BASE     0x40021400UL
#define ADDR_GPIOG_BASE     0x40021800UL
#define ADDR_GPIOH_BASE     0x40021C00UL
#define ADDR_GPIOI_BASE     0x40022000UL

#define GPIO_OFFSET_MODER   0x00UL
#define GPIO_OFFSET_OTYPER  0x04UL
#define GPIO_OFFSET_OSPEEDR 0x08UL
#define GPIO_OFFSET_PUPDR   0x0CUL
#define GPIO_OFFSET_IDR	    0x10UL
#define GPIO_OFFSET_ODR	    0x14UL
#define GPIO_OFFSET_BSRR    0x18UL
#define GPIO_OFFSET_LCKR    0x1CUL
#define GPIO_OFFSET_AFRL    0x20UL
#define GPIO_OFFSET_AFRH    0x24UL


/* GPIOx_MODER */
typedef struct
{
    uint32_t moder0 : 2;
    uint32_t moder1 : 2;
    uint32_t moder2 : 2;
    uint32_t moder3 : 2;
    uint32_t moder4 : 2;
    uint32_t moder5 : 2;
    uint32_t moder6 : 2;
    uint32_t moder7 : 2;
    uint32_t moder8 : 2;
    uint32_t moder9 : 2;
    uint32_t moder10 : 2;
    uint32_t moder11 : 2;
    uint32_t moder12 : 2;
    uint32_t moder13 : 2;
    uint32_t moder14 : 2;
    uint32_t moder15 : 2;
}GPIOx_MODER_t;

#define ADDR_GPIOA_MODER    ((volatile GPIOx_MODER_t*)(ADDR_GPIOA_BASE + GPIO_OFFSET_MODER))
#define ADDR_GPIOB_MODER    ((volatile GPIOx_MODER_t*)(ADDR_GPIOB_BASE + GPIO_OFFSET_MODER))
#define ADDR_GPIOC_MODER    ((volatile GPIOx_MODER_t*)(ADDR_GPIOC_BASE + GPIO_OFFSET_MODER))
#define ADDR_GPIOD_MODER    ((volatile GPIOx_MODER_t*)(ADDR_GPIOD_BASE + GPIO_OFFSET_MODER))
#define ADDR_GPIOE_MODER    ((volatile GPIOx_MODER_t*)(ADDR_GPIOE_BASE + GPIO_OFFSET_MODER))
#define ADDR_GPIOF_MODER    ((volatile GPIOx_MODER_t*)(ADDR_GPIOF_BASE + GPIO_OFFSET_MODER))
#define ADDR_GPIOG_MODER    ((volatile GPIOx_MODER_t*)(ADDR_GPIOG_BASE + GPIO_OFFSET_MODER))
#define ADDR_GPIOH_MODER    ((volatile GPIOx_MODER_t*)(ADDR_GPIOH_BASE + GPIO_OFFSET_MODER))
#define ADDR_GPIOI_MODER    ((volatile GPIOx_MODER_t*)(ADDR_GPIOI_BASE + GPIO_OFFSET_MODER))


/* GPIOx_PUPDR */
typedef struct
{
        uint32_t pupdr0 : 2;
        uint32_t pupdr1 : 2;
        uint32_t pupdr2 : 2;
        uint32_t pupdr3 : 2;
        uint32_t pupdr4 : 2;
        uint32_t pupdr5 : 2;
        uint32_t pupdr6 : 2;
        uint32_t pupdr7 : 2;
        uint32_t pupdr8 : 2;
        uint32_t pupdr9 : 2;
        uint32_t pupdr10 : 2;
        uint32_t pupdr11 : 2;
        uint32_t pupdr12 : 2;
        uint32_t pupdr13 : 2;
        uint32_t pupdr14 : 2;
        uint32_t pupdr15 : 2;
}GPIOx_PUPDR_t;

#define ADDR_GPIOA_PUPDR     ((volatile GPIOx_PUPDR_t *)(ADDR_GPIOA_BASE + GPIO_OFFSET_PUPDR))
#define ADDR_GPIOB_PUPDR     ((volatile GPIOx_PUPDR_t *)(ADDR_GPIOB_BASE + GPIO_OFFSET_PUPDR))
#define ADDR_GPIOC_PUPDR     ((volatile GPIOx_PUPDR_t *)(ADDR_GPIOC_BASE + GPIO_OFFSET_PUPDR))
#define ADDR_GPIOD_PUPDR     ((volatile GPIOx_PUPDR_t *)(ADDR_GPIOD_BASE + GPIO_OFFSET_PUPDR))
#define ADDR_GPIOE_PUPDR     ((volatile GPIOx_PUPDR_t *)(ADDR_GPIOE_BASE + GPIO_OFFSET_PUPDR))
#define ADDR_GPIOF_PUPDR     ((volatile GPIOx_PUPDR_t *)(ADDR_GPIOF_BASE + GPIO_OFFSET_PUPDR))
#define ADDR_GPIOG_PUPDR     ((volatile GPIOx_PUPDR_t *)(ADDR_GPIOG_BASE + GPIO_OFFSET_PUPDR))
#define ADDR_GPIOH_PUPDR     ((volatile GPIOx_PUPDR_t *)(ADDR_GPIOH_BASE + GPIO_OFFSET_PUPDR))
#define ADDR_GPIOI_PUPDR     ((volatile GPIOx_PUPDR_t *)(ADDR_GPIOI_BASE + GPIO_OFFSET_PUPDR))


/* GPIOx_IDR */
typedef struct
{
    uint32_t idr0 : 1;
    uint32_t ide1 : 1;
    uint32_t idr2 : 1;
    uint32_t idr3 : 1;
    uint32_t idr4 : 1;
    uint32_t idr5 : 1;
    uint32_t idr6 : 1;
    uint32_t idr7 : 1;
    uint32_t idr8 : 1;
    uint32_t idr9 : 1;
    uint32_t idr10 : 1;
    uint32_t idr11 : 1;
    uint32_t idr12 : 1;
    uint32_t idr13 : 1;
    uint32_t idr14 : 1;
    uint32_t idr15 : 1;
    uint32_t reserved : 16;
}GPIOx_IDR_t;

#define ADDR_GPIOA_IDR     ((volatile GPIOx_IDR_t *)(ADDR_GPIOA_BASE + GPIO_OFFSET_IDR))
#define ADDR_GPIOB_IDR     ((volatile GPIOx_IDR_t *)(ADDR_GPIOB_BASE + GPIO_OFFSET_IDR))
#define ADDR_GPIOC_IDR     ((volatile GPIOx_IDR_t *)(ADDR_GPIOC_BASE + GPIO_OFFSET_IDR))
#define ADDR_GPIOD_IDR     ((volatile GPIOx_IDR_t *)(ADDR_GPIOD_BASE + GPIO_OFFSET_IDR))
#define ADDR_GPIOE_IDR     ((volatile GPIOx_IDR_t *)(ADDR_GPIOE_BASE + GPIO_OFFSET_IDR))
#define ADDR_GPIOF_IDR     ((volatile GPIOx_IDR_t *)(ADDR_GPIOF_BASE + GPIO_OFFSET_IDR))
#define ADDR_GPIOG_IDR     ((volatile GPIOx_IDR_t *)(ADDR_GPIOG_BASE + GPIO_OFFSET_IDR))
#define ADDR_GPIOH_IDR     ((volatile GPIOx_IDR_t *)(ADDR_GPIOH_BASE + GPIO_OFFSET_IDR))
#define ADDR_GPIOI_IDR     ((volatile GPIOx_IDR_t *)(ADDR_GPIOI_BASE + GPIO_OFFSET_IDR))


/* GPIOx_ODR */
typedef struct
{
    uint32_t odr0 : 1;
    uint32_t odr1 : 1;
    uint32_t odr2 : 1;
    uint32_t odr3 : 1;
    uint32_t odr4 : 1;
    uint32_t odr5 : 1;
    uint32_t odr6 : 1;
    uint32_t odr7 : 1;
    uint32_t odr8 : 1;
    uint32_t odr9 : 1;
    uint32_t odr10 : 1;
    uint32_t odr11 : 1;
    uint32_t odr12 : 1;
    uint32_t odr13 : 1;
    uint32_t odr14 : 1;
    uint32_t odr15 : 1;
    uint32_t reserved : 16;
}GPIOx_ODR_t;

#define ADDR_GPIOA_ODR     ((volatile GPIOx_ODR_t *)(ADDR_GPIOA_BASE + GPIO_OFFSET_ODR))
#define ADDR_GPIOB_ODR     ((volatile GPIOx_ODR_t *)(ADDR_GPIOB_BASE + GPIO_OFFSET_ODR))
#define ADDR_GPIOC_ODR     ((volatile GPIOx_ODR_t *)(ADDR_GPIOC_BASE + GPIO_OFFSET_ODR))
#define ADDR_GPIOD_ODR     ((volatile GPIOx_ODR_t *)(ADDR_GPIOD_BASE + GPIO_OFFSET_ODR))
#define ADDR_GPIOE_ODR     ((volatile GPIOx_ODR_t *)(ADDR_GPIOE_BASE + GPIO_OFFSET_ODR))
#define ADDR_GPIOF_ODR     ((volatile GPIOx_ODR_t *)(ADDR_GPIOF_BASE + GPIO_OFFSET_ODR))
#define ADDR_GPIOG_ODR     ((volatile GPIOx_ODR_t *)(ADDR_GPIOG_BASE + GPIO_OFFSET_ODR))
#define ADDR_GPIOH_ODR     ((volatile GPIOx_ODR_t *)(ADDR_GPIOH_BASE + GPIO_OFFSET_ODR))
#define ADDR_GPIOI_ODR     ((volatile GPIOx_ODR_t *)(ADDR_GPIOI_BASE + GPIO_OFFSET_ODR))

/* GPIOx_AFRL */
typedef struct 
{
    uint32_t AFRL0 : 4;  // Bits 0-3:   Alternate function selection for port x pin 0
    uint32_t AFRL1 : 4;  // Bits 4-7:   Alternate function selection for port x pin 1
    uint32_t AFRL2 : 4;  // Bits 8-11:  Alternate function selection for port x pin 2
    uint32_t AFRL3 : 4;  // Bits 12-15: Alternate function selection for port x pin 3
    uint32_t AFRL4 : 4;  // Bits 16-19: Alternate function selection for port x pin 4
    uint32_t AFRL5 : 4;  // Bits 20-23: Alternate function selection for port x pin 5
    uint32_t AFRL6 : 4;  // Bits 24-27: Alternate function selection for port x pin 6
    uint32_t AFRL7 : 4;  // Bits 28-31: Alternate function selection for port x pin 7
}GPIOx_AFRL_t;;
#define ADDR_GPIOA_AFRL     ((volatile GPIOx_AFRL_t*)(ADDR_GPIOA_BASE + GPIO_OFFSET_AFRL))
#define ADDR_GPIOB_AFRL     ((volatile GPIOx_AFRL_t*)(ADDR_GPIOB_BASE + GPIO_OFFSET_AFRL))
#define ADDR_GPIOC_AFRL     ((volatile GPIOx_AFRL_t*)(ADDR_GPIOC_BASE + GPIO_OFFSET_AFRL))
#define ADDR_GPIOD_AFRL     ((volatile GPIOx_AFRL_t*)(ADDR_GPIOD_BASE + GPIO_OFFSET_AFRL))
#define ADDR_GPIOE_AFRL     ((volatile GPIOx_AFRL_t*)(ADDR_GPIOE_BASE + GPIO_OFFSET_AFRL))
#define ADDR_GPIOF_AFRL     ((volatile GPIOx_AFRL_t*)(ADDR_GPIOF_BASE + GPIO_OFFSET_AFRL))
#define ADDR_GPIOG_AFRL     ((volatile GPIOx_AFRL_t*)(ADDR_GPIOG_BASE + GPIO_OFFSET_AFRL))
#define ADDR_GPIOH_AFRL     ((volatile GPIOx_AFRL_t*)(ADDR_GPIOH_BASE + GPIO_OFFSET_AFRL))
#define ADDR_GPIOI_AFRL     ((volatile GPIOx_AFRL_t*)(ADDR_GPIOI_BASE + GPIO_OFFSET_AFRL))


/* GPIOx_AFRH */
typedef struct 
{
    uint32_t AFRH8 : 4;  // Bits 0-3:   Alternate function selection for port x pin 0
    uint32_t AFRH9 : 4;  // Bits 4-7:   Alternate function selection for port x pin 1
    uint32_t AFRH10 : 4;  // Bits 8-11:  Alternate function selection for port x pin 2
    uint32_t AFRH11 : 4;  // Bits 12-15: Alternate function selection for port x pin 3
    uint32_t AFRH12 : 4;  // Bits 16-19: Alternate function selection for port x pin 4
    uint32_t AFRH13 : 4;  // Bits 20-23: Alternate function selection for port x pin 5
    uint32_t AFRH14 : 4;  // Bits 24-27: Alternate function selection for port x pin 6
    uint32_t AFRH15 : 4;  // Bits 28-31: Alternate function selection for port x pin 7
}GPIOx_AFRH_t;;
#define ADDR_GPIOA_AFRH     ((volatile GPIOx_AFRH_t*)(ADDR_GPIOA_BASE + GPIO_OFFSET_AFRH))
#define ADDR_GPIOB_AFRH     ((volatile GPIOx_AFRH_t*)(ADDR_GPIOB_BASE + GPIO_OFFSET_AFRH))
#define ADDR_GPIOC_AFRH     ((volatile GPIOx_AFRH_t*)(ADDR_GPIOC_BASE + GPIO_OFFSET_AFRH))
#define ADDR_GPIOD_AFRH     ((volatile GPIOx_AFRH_t*)(ADDR_GPIOD_BASE + GPIO_OFFSET_AFRH))
#define ADDR_GPIOE_AFRH     ((volatile GPIOx_AFRH_t*)(ADDR_GPIOE_BASE + GPIO_OFFSET_AFRH))
#define ADDR_GPIOF_AFRH     ((volatile GPIOx_AFRH_t*)(ADDR_GPIOF_BASE + GPIO_OFFSET_AFRH))
#define ADDR_GPIOG_AFRH     ((volatile GPIOx_AFRH_t*)(ADDR_GPIOG_BASE + GPIO_OFFSET_AFRH))
#define ADDR_GPIOH_AFRH     ((volatile GPIOx_AFRH_t*)(ADDR_GPIOH_BASE + GPIO_OFFSET_AFRH))
#define ADDR_GPIOI_AFRH     ((volatile GPIOx_AFRH_t*)(ADDR_GPIOI_BASE + GPIO_OFFSET_AFRH))


/********************************** Library for ADC **********************************/
#define ADDR_ADC1_BASE      0x40012000UL
#define ADDR_ADC2_BASE      0x40012100UL
#define ADDR_ADC3_BASE      0x40012200UL

#define ADC_OFFSET_SR       0x00UL
#define ADC_OFFSET_CR1      0x04UL
#define ADC_OFFSET_CR2      0x08UL
#define ADC_OFFSET_SQR1     0x2CUL
#define ADC_OFFSET_SQR3     0x34UL
#define ADC_OFFSET_DR       0x4CUL
#define ADC_OFFSET_CCR      0x304UL

/* ADC_SR */
typedef struct
{
    uint32_t awd       : 1;  /* Bit 0: Analog watchdog flag */
    uint32_t eoc       : 1;  /* Bit 1: Regular channel end of conversion */
    uint32_t jeoc      : 1;  /* Bit 2: Injected channel end of conversion */
    uint32_t jstrt     : 1;  /* Bit 3: Injected channel start flag */
    uint32_t strt      : 1;  /* Bit 4: Regular channel start flag */
    uint32_t ovr       : 1;  /* Bit 5: Overrun flag */
    uint32_t reserved  : 26; /* Bits 26-31: Reserved, must be kept at reset value */
} ADC_SR_t;

#define ADDR_ADC1_SR        ((volatile ADC_SR_t*)(ADDR_ADC1_BASE + ADC_OFFSET_SR))
#define ADDR_ADC2_SR        ((volatile ADC_SR_t*)(ADDR_ADC2_BASE + ADC_OFFSET_SR))
#define ADDR_ADC3_SR        ((volatile ADC_SR_t*)(ADDR_ADC3_BASE + ADC_OFFSET_SR))


/* ADC_CR1 */
typedef struct
{
    uint32_t awdch      : 5;  /* Bits 0-4: Analog watchdog channel select bits */
    uint32_t eocie      : 1;  /* Bit 5: Interrupt enable for EOC */
    uint32_t awdie      : 1;  /* Bit 6: Analog watchdog interrupt enable */
    uint32_t jeocie     : 1;  /* Bit 7: Interrupt enable for injected channels */
    uint32_t scan       : 1;  /* Bit 8: Scan mode */
    uint32_t awdsgl     : 1;  /* Bit 9: Enable the watchdog on a single channel in single conversion mode */
    uint32_t jauto      : 1;  /* Bit 10: Automatic injected group conversion */
    uint32_t discen     : 1;  /* Bit 11: Discontinuous mode on regular channels */
    uint32_t jdiscen    : 1;  /* Bit 12: Discontinuous mode on injected channels */
    uint32_t discnum    : 3;  /* Bits 13-15: Discontinuous mode channel count */
    uint32_t reserved1  : 6;  /* Bits 16-21: Reserved, must be kept at reset value */
    uint32_t jawden     : 1;  /* Bit 22: Analog watchdog enable on injected channels */
    uint32_t awden      : 1;  /* Bit 23: Analog watchdog enable on regular channels */
    uint32_t res        : 2;  /* Bits 24-25: ADC resolution (00: 12-bit, 01: 10-bit, 10: 8-bit, 11: 6-bit) */
    uint32_t ovrie      : 1;  /* Bit 26: Overrun interrupt enable */
    uint32_t reserved2  : 5;  /* Bits 27-31: Reserved, must be kept at reset value */
} ADC_CR1_t;

#define ADDR_ADC1_CR1       ((volatile ADC_CR1_t*)(ADDR_ADC1_BASE + ADC_OFFSET_CR1))
#define ADDR_ADC2_CR1       ((volatile ADC_CR1_t*)(ADDR_ADC2_BASE + ADC_OFFSET_CR1))
#define ADDR_ADC3_CR1       ((volatile ADC_CR1_t*)(ADDR_ADC3_BASE + ADC_OFFSET_CR1))

/* ADC_CR2 */
typedef struct
{
    uint32_t adon       : 1;  /* Bit 0: A/D Converter ON / OFF */
    uint32_t cont       : 1;  /* Bit 1: Continuous conversion */
    uint32_t reserved1  : 6;  /* Bits 2-7: Reserved, must be kept at reset value */
    uint32_t dma        : 1;  /* Bit 8: Direct memory access mode */
    uint32_t dds        : 1;  /* Bit 9: DMA disable selection (for single ADC mode) */
    uint32_t eocs       : 1;  /* Bit 10: End of conversion selection */
    uint32_t align      : 1;  /* Bit 11: Data alignment (0: Right alignment, 1: Left alignment) */
    uint32_t reserved2  : 4;  /* Bits 12-15: Reserved, must be kept at reset value */
    uint32_t jextsel    : 4;  /* Bits 16-19: External trigger conversion select for injected channels */
    uint32_t jexten     : 2;  /* Bits 20-21: External trigger enable for injected channels */
    uint32_t jswstart   : 1;  /* Bit 22: Start conversion of injected channels */
    uint32_t reserved3  : 1;  /* Bit 23: Reserved, must be kept at reset value */
    uint32_t extsel     : 4;  /* Bits 24-27: External trigger conversion select for regular channels */
    uint32_t exten      : 2;  /* Bits 28-29: External trigger enable for regular channels */
    uint32_t swstart    : 1;  /* Bit 30: Start conversion of regular channels */
    uint32_t reserved4  : 1;  /* Bit 31: Reserved, must be kept at reset value */
} ADC_CR2_t;

#define ADDR_ADC1_CR2       ((volatile ADC_CR2_t*)(ADDR_ADC1_BASE + ADC_OFFSET_CR2))
#define ADDR_ADC2_CR2       ((volatile ADC_CR2_t*)(ADDR_ADC2_BASE + ADC_OFFSET_CR2))
#define ADDR_ADC3_CR2       ((volatile ADC_CR2_t*)(ADDR_ADC3_BASE + ADC_OFFSET_CR2))

/* ADC_SQR1 */
typedef struct
{
    uint32_t sq13       : 5;  /* Bits 0-4: 13th conversion in regular sequence */
    uint32_t sq14       : 5;  /* Bits 5-9: 14th conversion in regular sequence */
    uint32_t sq15       : 5;  /* Bits 10-14: 15th conversion in regular sequence */
    uint32_t sq16_0     : 1;  /* Bit 15: Least significant bit of 16th conversion */
    uint32_t sq16_4_1   : 4;  /* Bits 16-19: Most significant bits of 16th conversion */
    uint32_t l          : 4;  /* Bits 20-23: Regular sequence length (0000: 1 conversion, ..., 1111: 16 conversions) */
    uint32_t reserved   : 8;  /* Bits 24-31: Reserved, must be kept at reset value */
} ADC_SQR1_t;

#define ADDR_ADC1_SQR1      ((volatile ADC_SQR1_t*)(ADDR_ADC1_BASE + ADC_OFFSET_SQR1))
#define ADDR_ADC2_SQR1      ((volatile ADC_SQR1_t*)(ADDR_ADC2_BASE + ADC_OFFSET_SQR1))
#define ADDR_ADC3_SQR1      ((volatile ADC_SQR1_t*)(ADDR_ADC3_BASE + ADC_OFFSET_SQR1))

/* ADC_SQR3 */
typedef struct
{
    uint32_t sq1        : 5;  /* Bits 0-4: 1st conversion in regular sequence */
    uint32_t sq2        : 5;  /* Bits 5-9: 2nd conversion in regular sequence */
    uint32_t sq3        : 5;  /* Bits 10-14: 3rd conversion in regular sequence */
    uint32_t sq4        : 5;  /* Bits 19-15: 4th conversion in regular sequence */
    uint32_t sq5        : 5;  /* Bits 20-24: 5th conversion in regular sequence */
    uint32_t sq6        : 5;  /* Bits 25-29: 6th conversion in regular sequence */
    uint32_t reserved   : 2;  /* Bits 30-31: Reserved, must be kept at reset value */
} ADC_SQR3_t;

#define ADDR_ADC1_SQR3      ((volatile ADC_SQR3_t*)(ADDR_ADC1_BASE + ADC_OFFSET_SQR3))
#define ADDR_ADC2_SQR3      ((volatile ADC_SQR3_t*)(ADDR_ADC2_BASE + ADC_OFFSET_SQR3))
#define ADDR_ADC3_SQR3      ((volatile ADC_SQR3_t*)(ADDR_ADC3_BASE + ADC_OFFSET_SQR3))

/* ADC_DR */
typedef struct
{
    uint32_t data       : 16; /* Bits 0-15: Regular data */
    uint32_t reserved   : 16; /* Bits 16-31: Reserved, must be kept at reset value */
} ADC_DR_t;

#define ADDR_ADC1_DR        ((volatile ADC_DR_t*)(ADDR_ADC1_BASE + ADC_OFFSET_DR))
#define ADDR_ADC2_DR        ((volatile ADC_DR_t*)(ADDR_ADC2_BASE + ADC_OFFSET_DR))
#define ADDR_ADC3_DR        ((volatile ADC_DR_t*)(ADDR_ADC3_BASE + ADC_OFFSET_DR))


/* ADC_CCR */
typedef struct
{
    uint32_t multi      : 5;  /* Bits 0-4: Multi-ADC mode selection */
    uint32_t reserved1  : 3;  /* Bits 5-7: Reserved, must be kept at reset value */
    uint32_t delay      : 4;  /* Bits 8-11: Delay between 2 sampling phases */
    uint32_t res        : 1;  /* Bit 12: Reserved, must be kept at reset value */
    uint32_t dds        : 1;  /* Bit 13: DMA disable selection (for multi-ADC mode) */
    uint32_t dma        : 2;  /* Bits 14-15: Direct memory access mode for multi-ADC mode */
    uint32_t adcpre     : 2;  /* Bits 16-17: ADC prescaler */
    uint32_t reserved2  : 4;  /* Bits 18-21: Reserved, must be kept at reset value */
    uint32_t vbate      : 1;  /* Bit 22: VBAT enable */
    uint32_t tsvrefe    : 1;  /* Bit 23: Temperature sensor and VREFINT enable */
    uint32_t reserved3  : 8;  /* Bits 24-31: Reserved, must be kept at reset value */
} ADC_CCR_t;

#define ADDR_ADC_CCR        ((volatile ADC_CCR_t*)(ADDR_ADC1_BASE + ADC_OFFSET_CCR))

/********************************** Library for timers **********************************/
/* TIM 2 to TIM5 registers */
#define ADDR_TIM3_BASE      0x40000400UL
#define ADDR_TIM4_BASE      0x40000800UL

#define TIM_OFFSET_CR1      0x00UL
#define TIM_OFFSET_CR2      0x04UL
#define TIM_OFFSET_DIER     0x0CUL
#define TIM_OFFSET_SR       0x10UL
#define TIM_OFFSET_EGR      0x14UL
#define TIM_OFFSET_CCMR1    0x18UL
#define TIM_OFFSET_CCER     0x20UL
#define TIM_OFFSET_PSC      0x28UL
#define TIM_OFFSET_ARR      0x2CUL
#define TIM_OFFSET_CCR1     0x34UL


/* TIMx_CR1 */
typedef struct
{
    uint32_t cen         : 1;  /* Bit 0: Counter enable */
    uint32_t udis        : 1;  /* Bit 1: Update disable */
    uint32_t urs         : 1;  /* Bit 2: Update request source */
    uint32_t opm         : 1;  /* Bit 3: One-pulse mode */
    uint32_t dir         : 1;  /* Bit 4: Direction */
    uint32_t cms         : 2;  /* Bits 5-6: Center-aligned mode selection */
    uint32_t arpe        : 1;  /* Bit 7: Auto-reload preload enable */
    uint32_t ckd         : 2;  /* Bits 8-9: Clock division */
    uint32_t reserved    : 22; /* Bits 10-31: Reserved, must be kept at reset value */
} TIM_CR1_t;

#define ADDR_TIM3_CR1       ((volatile TIM_CR1_t*)(ADDR_TIM3_BASE + TIM_OFFSET_CR1))
#define ADDR_TIM4_CR1       ((volatile TIM_CR1_t*)(ADDR_TIM4_BASE + TIM_OFFSET_CR1))

/* TIMx_CR2 */
typedef struct
{
    //uint32_t reserved1   : 4;  /* Bits 0-3: Reserved */
	uint32_t reserved1   : 3;  /* Bits 0-3: Reserved */
	uint32_t ccds        : 1;  /* Bit 3 Capture/compare DMA selection */
    uint32_t mms         : 3;  /* Bits 4-6: Master mode selection */
    uint32_t ti1s        : 1;  /* Bit 7: TI1 selection */
    uint32_t reserved2   : 24; /* Bits 8-31: Reserved */
} TIM_CR2_t;

#define ADDR_TIM3_CR2       ((volatile TIM_CR2_t*)(ADDR_TIM3_BASE + TIM_OFFSET_CR2))
#define ADDR_TIM4_CR2       ((volatile TIM_CR2_t*)(ADDR_TIM4_BASE + TIM_OFFSET_CR2))


/* TIMx_DIER */
typedef struct
{
    uint32_t uie         : 1;  /* Bit 0: Update interrupt enable */
    uint32_t cc1ie       : 1;  /* Bit 1: Capture/compare 1 interrupt enable */
    uint32_t cc2ie       : 1;  /* Bit 2: Capture/compare 2 interrupt enable */
    uint32_t cc3ie       : 1;  /* Bit 3: Capture/compare 3 interrupt enable */
    uint32_t cc4ie       : 1;  /* Bit 4: Capture/compare 4 interrupt enable */
    uint32_t reserved1   : 1;  /* Bit 5: Reserved */
    uint32_t tie         : 1;  /* Bit 6: Trigger interrupt enable */
    uint32_t reserved2   : 1;  /* Bit 7: Reserved */
    uint32_t ude         : 1;  /* Bit 8: Update DMA request enable */
    uint32_t cc1de       : 1;  /* Bit 9: Capture/compare 1 DMA request enable */
    uint32_t cc2de       : 1;  /* Bit 10: Capture/compare 2 DMA request enable */
    uint32_t cc3de       : 1;  /* Bit 11: Capture/compare 3 DMA request enable */
    uint32_t cc4de       : 1;  /* Bit 12: Capture/compare 4 DMA request enable */
    uint32_t reserved3   : 1;  /* Bit 13: Reserved */
    uint32_t tde         : 1;  /* Bit 14: Trigger DMA request enable */
    uint32_t reserved4   : 17; /* Bits 15-31: Reserved */
} TIM_DIER_t;

#define ADDR_TIM3_DIER      ((volatile TIM_DIER_t*)(ADDR_TIM3_BASE + TIM_OFFSET_DIER))
#define ADDR_TIM4_DIER      ((volatile TIM_DIER_t*)(ADDR_TIM4_BASE + TIM_OFFSET_DIER))


/* TIMx_SR */
typedef struct
{
    uint32_t uif         : 1;  /* Bit 0: Update interrupt flag */
    uint32_t cc1if       : 1;  /* Bit 1: Capture/compare 1 interrupt flag */
    uint32_t cc2if       : 1;  /* Bit 2: Capture/compare 2 interrupt flag */
    uint32_t cc3if       : 1;  /* Bit 3: Capture/compare 3 interrupt flag */
    uint32_t cc4if       : 1;  /* Bit 4: Capture/compare 4 interrupt flag */
    uint32_t reserved1   : 1;  /* Bit 5: Reserved */
    uint32_t tif         : 1;  /* Bit 6: Trigger interrupt flag */
    uint32_t reserved2   : 2;  /* Bits 7-8: Reserved */
    uint32_t cc1of       : 1;  /* Bit 9: Capture/Compare 1 overcapture flag */
    uint32_t cc2of       : 1;  /* Bit 10: Capture/Compare 2 overcapture flag */
    uint32_t cc3of       : 1;  /* Bit 11: Capture/Compare 3 overcapture flag */
    uint32_t cc4of       : 1;  /* Bit 12: Capture/Compare 4 overcapture flag */
    uint32_t reserved3   : 19; /* Bits 13-31: Reserved, must be kept at reset value */
} TIM_SR_t;

#define ADDR_TIM3_SR        ((volatile TIM_SR_t*)(ADDR_TIM3_BASE + TIM_OFFSET_SR))
#define ADDR_TIM4_SR        ((volatile TIM_SR_t*)(ADDR_TIM4_BASE + TIM_OFFSET_SR))


/* TIMx_EGR */
typedef struct
{
    uint32_t ug          : 1;  /* Bit 0: Update generation */
    uint32_t cc1g        : 1;  /* Bit 1: Capture/compare 1 generation */
    uint32_t cc2g        : 1;  /* Bit 2: Capture/compare 2 generation */
    uint32_t cc3g        : 1;  /* Bit 3: Capture/compare 3 generation */
    uint32_t cc4g        : 1;  /* Bit 4: Capture/compare 4 generation */
    uint32_t reserved1   : 1;  /* Bit 5: Reserved, must be kept at reset value */
    uint32_t tg          : 1;  /* Bit 6: Trigger generation */
    uint32_t reserved2   : 25; /* Bits 7-31: Reserved, must be kept at reset value */
} TIM_EGR_t;

#define ADDR_TIM3_EGR       ((volatile TIM_EGR_t*)(ADDR_TIM3_BASE + TIM_OFFSET_EGR))
#define ADDR_TIM4_EGR       ((volatile TIM_EGR_t*)(ADDR_TIM4_BASE + TIM_OFFSET_EGR))


/* TIMx_CCMR1 */
typedef struct
{
    union {
        /* Modo Output Compare (Salida) */
        struct {
            uint32_t cc1s     : 2;  /* Bits 0-1: Capture/Compare 1 selection */
            uint32_t oc1fe    : 1;  /* Bit 2: Output compare 1 fast enable */
            uint32_t oc1pe    : 1;  /* Bit 3: Output compare 1 preload enable */
            uint32_t oc1m     : 3;  /* Bits 4-6: Output compare 1 mode */
            uint32_t oc1ce    : 1;  /* Bit 7: Output compare 1 clear enable */
            uint32_t cc2s     : 2;  /* Bits 8-9: Capture/Compare 2 selection */
            uint32_t oc2fe    : 1;  /* Bit 10: Output compare 2 fast enable */
            uint32_t oc2pe    : 1;  /* Bit 11: Output compare 2 preload enable */
            uint32_t oc2m     : 3;  /* Bits 12-14: Output compare 2 mode */
            uint32_t oc2ce    : 1;  /* Bit 15: Output compare 2 clear enable */
        };

        /* Modo Input Capture (Entrada) */
        struct {
            uint32_t          : 2;  /* Bits 0-1: Mismos bits CC1S */
            uint32_t ic1psc   : 2;  /* Bits 2-3: Input capture 1 prescaler */
            uint32_t ic1f     : 4;  /* Bits 4-7: Input capture 1 filter */
            uint32_t          : 2;  /* Bits 8-9: Mismos bits CC2S */
            uint32_t ic2psc   : 2;  /* Bits 10-11: Input capture 2 prescaler */
            uint32_t ic2f     : 4;  /* Bits 12-15: Input capture 2 filter */
        };
    };
    uint32_t reserved         : 16; /* Bits 16-31: Reserved, must be kept at reset value */
} TIM_CCMR1_t;

#define ADDR_TIM3_CCMR1       ((volatile TIM_CCMR1_t*)(ADDR_TIM3_BASE + TIM_OFFSET_CCMR1))
#define ADDR_TIM4_CCMR1       ((volatile TIM_CCMR1_t*)(ADDR_TIM4_BASE + TIM_OFFSET_CCMR1))

/* TIMx_CCER */
typedef struct
{
    uint32_t cc1e        : 1;  /* Bit 0: Capture/Compare 1 output enable */
    uint32_t cc1p        : 1;  /* Bit 1: Capture/Compare 1 output polarity */
    uint32_t reserved1   : 1;  /* Bit 2: Reserved, must be kept at reset value */
    uint32_t cc1np       : 1;  /* Bit 3: Capture/Compare 1 output NP polarity */
    
    uint32_t cc2e        : 1;  /* Bit 4: Capture/Compare 2 output enable */
    uint32_t cc2p        : 1;  /* Bit 5: Capture/Compare 2 output polarity */
    uint32_t reserved2   : 1;  /* Bit 6: Reserved, must be kept at reset value */
    uint32_t cc2np       : 1;  /* Bit 7: Capture/Compare 2 output NP polarity */
    
    uint32_t cc3e        : 1;  /* Bit 8: Capture/Compare 3 output enable */
    uint32_t cc3p        : 1;  /* Bit 9: Capture/Compare 3 output polarity */
    uint32_t reserved3   : 1;  /* Bit 10: Reserved, must be kept at reset value */
    uint32_t cc3np       : 1;  /* Bit 11: Capture/Compare 3 output NP polarity */
    
    uint32_t cc4e        : 1;  /* Bit 12: Capture/Compare 4 output enable */
    uint32_t cc4p        : 1;  /* Bit 13: Capture/Compare 4 output polarity */
    uint32_t reserved4   : 1;  /* Bit 14: Reserved, must be kept at reset value */
    uint32_t cc4np       : 1;  /* Bit 15: Capture/Compare 4 output NP polarity */
    
    uint32_t reserved5   : 16; /* Bits 16-31: Reserved, must be kept at reset value */
} TIM_CCER_t;

#define ADDR_TIM3_CCER      ((volatile TIM_CCER_t*)(ADDR_TIM3_BASE + TIM_OFFSET_CCER))
#define ADDR_TIM4_CCER      ((volatile TIM_CCER_t*)(ADDR_TIM4_BASE + TIM_OFFSET_CCER))


/* TIMx_PSC */
typedef struct
{
    uint32_t psc         : 16; /* Bits 0-15: Prescaler value */
    uint32_t reserved    : 16; /* Bits 16-31: Reserved, must be kept at reset value */
} TIM_PSC_t;

#define ADDR_TIM3_PSC       ((volatile TIM_PSC_t*)(ADDR_TIM3_BASE + TIM_OFFSET_PSC))
#define ADDR_TIM4_PSC       ((volatile TIM_PSC_t*)(ADDR_TIM4_BASE + TIM_OFFSET_PSC))


/* TIMx_ARR */
typedef struct
{
    uint32_t arr_l       : 16; /* Bits 0-15: Auto-reload value (Low 16 bits) */
    uint32_t arr_h       : 16; /* Bits 16-31: Auto-reload value (High 16 bits, reserved in TIM3) */
} TIM_ARR_t;

#define ADDR_TIM3_ARR       ((volatile TIM_ARR_t*)(ADDR_TIM3_BASE + TIM_OFFSET_ARR))
#define ADDR_TIM4_ARR       ((volatile TIM_ARR_t*)(ADDR_TIM4_BASE + TIM_OFFSET_ARR))


/* TIMx_CCR1 */
typedef union
{
    struct
    {
        uint32_t ccr1_l      : 16; /* Bits 0-15: Capture/Compare 1 value (low elements) */
        uint32_t ccr1_h      : 16; /* Bits 16-31: Capture/Compare 1 value (high elements, depending on timers) */
    };
    uint32_t reg;
} TIM_CCR1_t;

/* Direcciones de memoria para TIMx_CCR1 */
#define ADDR_TIM3_CCR1      ((volatile TIM_CCR1_t*)(ADDR_TIM3_BASE + TIM_OFFSET_CCR1))
#define ADDR_TIM4_CCR1      ((volatile TIM_CCR1_t*)(ADDR_TIM4_BASE + TIM_OFFSET_CCR1))


/****************************************  NVIC *******************************************/
#define ADDR_NVIC_BASE      0xE000E000UL
#define NVIC_OFFSET_ISER0   0x100UL
#define NVIC_OFFSET_ISER1   0x104UL
#define NVIC_OFFSET_IPR7    0x41CUL

/* NVIC_ISER0 */
typedef struct
{
    uint32_t wwdg            : 1;  /* Bit 0: Window Watchdog interrupt */
    uint32_t pvd             : 1;  /* Bit 1: PVD through EXTI line detection */
    uint32_t tamp_stamp      : 1;  /* Bit 2: Tamper and TimeStamp interrupts */
    uint32_t rtc_wkup        : 1;  /* Bit 3: RTC Wakeup interrupt through EXTI */
    uint32_t flash           : 1;  /* Bit 4: Flash global interrupt */
    uint32_t rcc             : 1;  /* Bit 5: RCC global interrupt */
    uint32_t exti0           : 1;  /* Bit 6: EXTI Line0 interrupt */
    uint32_t exti1           : 1;  /* Bit 7: EXTI Line1 interrupt */
    uint32_t exti2           : 1;  /* Bit 8: EXTI Line2 interrupt */
    uint32_t exti3           : 1;  /* Bit 9: EXTI Line3 interrupt */
    uint32_t exti4           : 1;  /* Bit 10: EXTI Line4 interrupt */
    uint32_t dma1_stream0    : 1;  /* Bit 11: DMA1 Stream0 global interrupt */
    uint32_t dma1_stream1    : 1;  /* Bit 12: DMA1 Stream1 global interrupt */
    uint32_t dma1_stream2    : 1;  /* Bit 13: DMA1 Stream2 global interrupt */
    uint32_t dma1_stream3    : 1;  /* Bit 14: DMA1 Stream3 global interrupt */
    uint32_t dma1_stream4    : 1;  /* Bit 15: DMA1 Stream4 global interrupt */
    uint32_t dma1_stream5    : 1;  /* Bit 16: DMA1 Stream5 global interrupt */
    uint32_t dma1_stream6    : 1;  /* Bit 17: DMA1 Stream6 global interrupt */
    uint32_t adc             : 1;  /* Bit 18: ADC1, ADC2 and ADC3 global interrupts */
    uint32_t can1_tx         : 1;  /* Bit 19: CAN1 TX interrupts */
    uint32_t can1_rx0        : 1;  /* Bit 20: CAN1 RX0 interrupts */
    uint32_t can1_rx1        : 1;  /* Bit 21: CAN1 RX1 interrupts */
    uint32_t can1_sce        : 1;  /* Bit 22: CAN1 SCE interrupt */
    uint32_t exti9_5         : 1;  /* Bit 23: EXTI Line[9:5] interrupts */
    uint32_t tim1_brk_tim9   : 1;  /* Bit 24: TIM1 Break and TIM9 global interrupt */
    uint32_t tim1_up_tim10   : 1;  /* Bit 25: TIM1 Update and TIM10 global interrupt */
    uint32_t tim1_trg_com_tim11 : 1; /* Bit 26: TIM1 Trigger/Commutation and TIM11 */
    uint32_t tim1_cc         : 1;  /* Bit 27: TIM1 Capture Compare interrupt */
    uint32_t tim2            : 1;  /* Bit 28: TIM2 global interrupt */
    uint32_t tim3            : 1;  /* Bit 29: TIM3 global interrupt */
    uint32_t tim4            : 1;  /* Bit 30: TIM4 global interrupt */
    uint32_t i2c1_ev         : 1;  /* Bit 31: I2C1 event interrupt */
} NVIC_ISER0_t;

#define ADDR_NVIC_ISER0     ((volatile NVIC_ISER0_t*)(ADDR_NVIC_BASE + NVIC_OFFSET_ISER0))

/* NVIC_ISER1 (Interrupts 32 to 63) */
typedef struct
{
    uint32_t i2c1_er           : 1;  /* Bit 0: I2C1 error interrupt */
    uint32_t i2c2_ev           : 1;  /* Bit 1: I2C2 event interrupt */
    uint32_t i2c2_er           : 1;  /* Bit 2: I2C2 error interrupt */
    uint32_t spi1              : 1;  /* Bit 3: SPI1 global interrupt */
    uint32_t spi2              : 1;  /* Bit 4: SPI2 global interrupt */
    uint32_t usart1            : 1;  /* Bit 5: USART1 global interrupt */
    uint32_t usart2            : 1;  /* Bit 6: USART2 global interrupt */
    uint32_t usart3            : 1;  /* Bit 7: USART3 global interrupt */
    uint32_t exti15_10         : 1;  /* Bit 8: EXTI Line[15:10] interrupts */
    uint32_t rtc_alarm         : 1;  /* Bit 9: RTC Alarms (A and B) through EXTI line interrupt */
    uint32_t otg_fs_wkup       : 1;  /* Bit 10: USB On-The-Go FS Wakeup through EXTI line interrupt */
    uint32_t tim8_brk_tim12    : 1;  /* Bit 11: TIM8 Break interrupt and TIM12 global interrupt */
    uint32_t tim8_up_tim13     : 1;  /* Bit 12: TIM8 Update interrupt and TIM13 global interrupt */
    uint32_t tim8_trg_com_tim14: 1;  /* Bit 13: TIM8 Trigger/Commutation and TIM14 global interrupt */
    uint32_t tim8_cc           : 1;  /* Bit 14: TIM8 Capture Compare interrupt */
    uint32_t dma1_stream7      : 1;  /* Bit 15: DMA1 Stream7 global interrupt */
    uint32_t fsmc              : 1;  /* Bit 16: FSMC global interrupt */
    uint32_t sdio              : 1;  /* Bit 17: SDIO global interrupt */
    uint32_t tim5              : 1;  /* Bit 18: TIM5 global interrupt */
    uint32_t spi3              : 1;  /* Bit 19: SPI3 global interrupt */
    uint32_t uart4             : 1;  /* Bit 20: UART4 global interrupt */
    uint32_t uart5             : 1;  /* Bit 21: UART5 global interrupt */
    uint32_t tim6_dac          : 1;  /* Bit 22: TIM6 global interrupt, DAC1 and DAC2 underrun interrupts */
    uint32_t tim7              : 1;  /* Bit 23: TIM7 global interrupt */
    uint32_t dma2_stream0      : 1;  /* Bit 24: DMA2 Stream0 global interrupt */
    uint32_t dma2_stream1      : 1;  /* Bit 25: DMA2 Stream1 global interrupt */
    uint32_t dma2_stream2      : 1;  /* Bit 26: DMA2 Stream2 global interrupt */
    uint32_t dma2_stream3      : 1;  /* Bit 27: DMA2 Stream3 global interrupt */
    uint32_t dma2_stream4      : 1;  /* Bit 28: DMA2 Stream4 global interrupt */
    uint32_t eth               : 1;  /* Bit 29: Ethernet global interrupt */
    uint32_t eth_wkup          : 1;  /* Bit 30: Ethernet Wakeup through EXTI line interrupt */
    uint32_t can2_tx           : 1;  /* Bit 31: CAN2 TX interrupts */
} NVIC_ISER1_t;

#define ADDR_NVIC_ISER1     ((volatile NVIC_ISER1_t*)(ADDR_NVIC_BASE + NVIC_OFFSET_ISER1))


/* NVIC_IPR7 */
typedef struct
{
    /* Bits 0-7: Interrupt 28 (TIM2) Priority */
    uint32_t tim2_reserved   : 4;  /* Bits 0-3: Read as zero, ignore writes */
    uint32_t tim2_priority   : 4;  /* Bits 4-7: Priority, implements bits [7:4] */

    /* Bits 8-15: Interrupt 29 (TIM3) Priority */
    uint32_t tim3_reserved   : 4;  /* Bits 8-11: Read as zero, ignore writes */
    uint32_t tim3_priority   : 4;  /* Bits 12-15: Priority, implements bits [7:4] */

    /* Bits 16-23: Interrupt 30 (TIM4) Priority */
    uint32_t tim4_reserved   : 4;  /* Bits 16-19: Read as zero, ignore writes */
    uint32_t tim4_priority   : 4;  /* Bits 20-23: Priority, implements bits [7:4] */

    /* Bits 24-31: Interrupt 31 (I2C1_EV) Priority */
    uint32_t i2c1_ev_reserved: 4;  /* Bits 24-27: Read as zero, ignore writes */
    uint32_t i2c1_ev_priority: 4;  /* Bits 28-31: Priority, implements bits [7:4] */
} NVIC_IPR7_t;

#define ADDR_NVIC_IPR7      ((volatile NVIC_IPR7_t*)(ADDR_NVIC_BASE + NVIC_OFFSET_IPR7))


/******************************************** DMA ********************************************************* */
/* DMA_LISR */
#define NUM_DMA_STREAMS 8U
#define ADDR_DMA1_BASE      0x40026000UL
#define ADDR_DMA2_BASE      0x40026400UL

typedef union
{
    struct
    {
        // --- Bits 0 a 15 (Stream 0 y 1) ---
        uint32_t FEIF0    : 1;  // Bit 0: Stream 0 FIFO error interrupt flag
        uint32_t Reserved0: 1;  // Bit 1: Reservado
        uint32_t DMEIF0   : 1;  // Bit 2: Stream 0 Direct mode error interrupt flag
        uint32_t TEIF0    : 1;  // Bit 3: Stream 0 Transfer error interrupt flag
        uint32_t HTIF0    : 1;  // Bit 4: Stream 0 Half transfer interrupt flag
        uint32_t TCIF0    : 1;  // Bit 5: Stream 0 Transfer complete interrupt flag
        
        uint32_t FEIF1    : 1;  // Bit 6: Stream 1 FIFO error interrupt flag
        uint32_t Reserved1: 1;  // Bit 7: Reservado
        uint32_t DMEIF1   : 1;  // Bit 8: Stream 1 Direct mode error interrupt flag
        uint32_t TEIF1    : 1;  // Bit 9: Stream 1 Transfer error interrupt flag
        uint32_t HTIF1    : 1;  // Bit 10: Stream 1 Half transfer interrupt flag
        uint32_t TCIF1    : 1;  // Bit 11: Stream 1 Transfer complete interrupt flag
        
        uint32_t Reserved2 : 4; // Bits 12 a 15: Reservados

        // --- Bits 16 a 31 (Stream 2 y 3) ---
        uint32_t FEIF2    : 1;  // Bit 16: Stream 2 FIFO error interrupt flag
        uint32_t Reserved3: 1;  // Bit 17: Reservado
        uint32_t DMEIF2   : 1;  // Bit 18: Stream 2 Direct mode error interrupt flag
        uint32_t TEIF2    : 1;  // Bit 19: Stream 2 Transfer error interrupt flag
        uint32_t HTIF2    : 1;  // Bit 20: Stream 2 Half transfer interrupt flag
        uint32_t TCIF2    : 1;  // Bit 21: Stream 2 Transfer complete interrupt flag
        
        uint32_t FEIF3    : 1;  // Bit 22: Stream 3 FIFO error interrupt flag
        uint32_t Reserved4: 1;  // Bit 23: Reservado
        uint32_t DMEIF3   : 1;  // Bit 24: Stream 3 Direct mode error interrupt flag
        uint32_t TEIF3    : 1;  // Bit 25: Stream 3 Transfer error interrupt flag
        uint32_t HTIF3    : 1;  // Bit 26: Stream 3 Half transfer interrupt flag
        uint32_t TCIF3    : 1;  // Bit 27: Stream 3 Transfer complete interrupt flag
        
        uint32_t Reserved5 : 4; // Bits 28 a 31: Reservados
    }bit;
    uint32_t reg;
} DMA_LISR_REG_t;

/* DMA_HISR */

typedef union
{
    struct
    {
        // --- Bits 0 a 15 (Stream 4 y 5) ---
        uint32_t FEIF4    : 1;  // Bit 0: Stream 4 FIFO error interrupt flag
        uint32_t Reserved1: 1;  // Bit 1: Reservado
        uint32_t DMEIF4   : 1;  // Bit 2: Stream 4 Direct mode error interrupt flag
        uint32_t TEIF4    : 1;  // Bit 3: Stream 4 Transfer error interrupt flag
        uint32_t HTIF4    : 1;  // Bit 4: Stream 4 Half transfer interrupt flag
        uint32_t TCIF4    : 1;  // Bit 5: Stream 4 Transfer complete interrupt flag
        
        uint32_t FEIF5    : 1;  // Bit 6: Stream 5 FIFO error interrupt flag
        uint32_t Reserved2: 1;  // Bit 7: Reservado
        uint32_t DMEIF5   : 1;  // Bit 8: Stream 5 Direct mode error interrupt flag
        uint32_t TEIF5    : 1;  // Bit 9: Stream 5 Transfer error interrupt flag
        uint32_t HTIF5    : 1;  // Bit 10: Stream 5 Half transfer interrupt flag
        uint32_t TCIF5    : 1;  // Bit 11: Stream 5 Transfer complete interrupt flag
        
        uint32_t Reserved3 : 4; // Bits 12 a 15: Reservados

        // --- Bits 16 a 31 (Stream 6 y 7) ---
        uint32_t FEIF6    : 1;  // Bit 16: Stream 6 FIFO error interrupt flag
        uint32_t Reserved4: 1;  // Bit 17: Reservado
        uint32_t DMEIF6   : 1;  // Bit 18: Stream 6 Direct mode error interrupt flag
        uint32_t TEIF6    : 1;  // Bit 19: Stream 6 Transfer error interrupt flag
        uint32_t HTIF6    : 1;  // Bit 20: Stream 6 Half transfer interrupt flag
        uint32_t TCIF6    : 1;  // Bit 21: Stream 6 Transfer complete interrupt flag
        
        uint32_t FEIF7    : 1;  // Bit 22: Stream 7 FIFO error interrupt flag
        uint32_t Reserved5: 1;  // Bit 23: Reservado
        uint32_t DMEIF7   : 1;  // Bit 24: Stream 7 Direct mode error interrupt flag
        uint32_t TEIF7    : 1;  // Bit 25: Stream 7 Transfer error interrupt flag
        uint32_t HTIF7    : 1;  // Bit 26: Stream 7 Half transfer interrupt flag
        uint32_t TCIF7    : 1;  // Bit 27: Stream 7 Transfer complete interrupt flag
        
        uint32_t Reserved_28_31 : 4; // Bits 28 a 31: Reservados
    }bit;
    uint32_t reg;
} DMA_HISR_REG_t;


/* DMA_LIFCR */

typedef union
{
    struct
    {
        // --- Bits 0 a 15 (Stream 0 y 1) ---
        uint32_t CFEIF0   : 1;  // Bit 0: Clear Stream 0 FIFO error interrupt flag
        uint32_t Reserved1: 1;  // Bit 1: Reservado
        uint32_t CDMEIF0  : 1;  // Bit 2: Clear Stream 0 Direct mode error interrupt flag
        uint32_t CTEIF0   : 1;  // Bit 3: Clear Stream 0 Transfer error interrupt flag
        uint32_t CHTIF0   : 1;  // Bit 4: Clear Stream 0 Half transfer interrupt flag
        uint32_t CTCIF0   : 1;  // Bit 5: Clear Stream 0 Transfer complete interrupt flag
        
        uint32_t CFEIF1   : 1;  // Bit 6: Clear Stream 1 FIFO error interrupt flag
        uint32_t Reserved2: 1;  // Bit 7: Reservado
        uint32_t CDMEIF1  : 1;  // Bit 8: Clear Stream 1 Direct mode error interrupt flag
        uint32_t CTEIF1   : 1;  // Bit 9: Clear Stream 1 Transfer error interrupt flag
        uint32_t CHTIF1   : 1;  // Bit 10: Clear Stream 1 Half transfer interrupt flag
        uint32_t CTCIF1   : 1;  // Bit 11: Clear Stream 1 Transfer complete interrupt flag
        
        uint32_t Reserved3 : 4; // Bits 12 a 15: Reservados

        // --- Bits 16 a 31 (Stream 2 y 3) ---
        uint32_t CFEIF2   : 1;  // Bit 16: Clear Stream 2 FIFO error interrupt flag
        uint32_t Reserved4: 1;  // Bit 17: Reservado
        uint32_t CDMEIF2  : 1;  // Bit 18: Clear Stream 2 Direct mode error interrupt flag
        uint32_t CTEIF2   : 1;  // Bit 19: Clear Stream 2 Transfer error interrupt flag
        uint32_t CHTIF2   : 1;  // Bit 20: Clear Stream 2 Half transfer interrupt flag
        uint32_t CTCIF2   : 1;  // Bit 21: Clear Stream 2 Transfer complete interrupt flag
        
        uint32_t CFEIF3   : 1;  // Bit 22: Clear Stream 3 FIFO error interrupt flag
        uint32_t Reserved5: 1;  // Bit 23: Reservado
        uint32_t CDMEIF3  : 1;  // Bit 24: Clear Stream 3 Direct mode error interrupt flag
        uint32_t CTEIF3   : 1;  // Bit 25: Clear Stream 3 Transfer error interrupt flag
        uint32_t CHTIF3   : 1;  // Bit 26: Clear Stream 3 Half transfer interrupt flag
        uint32_t CTCIF3   : 1;  // Bit 27: Clear Stream 3 Transfer complete interrupt flag
        
        uint32_t Reserved6 : 4; // Bits 28 a 31: Reservados
    }bit;
    uint32_t reg;
} DMA_LIFCR_REG_t;

/* DMA_HIFCR */

typedef union
{
    struct
    {
        // --- Bits 0 a 15 (Stream 4 y 5) ---
        uint32_t CFEIF4   : 1;  // Bit 0: Clear Stream 4 FIFO error interrupt flag
        uint32_t Reserved1: 1;  // Bit 1: Reservado
        uint32_t CDMEIF4  : 1;  // Bit 2: Clear Stream 4 Direct mode error interrupt flag
        uint32_t CTEIF4   : 1;  // Bit 3: Clear Stream 4 Transfer error interrupt flag
        uint32_t CHTIF4   : 1;  // Bit 4: Clear Stream 4 Half transfer interrupt flag
        uint32_t CTCIF4   : 1;  // Bit 5: Clear Stream 4 Transfer complete interrupt flag
        
        uint32_t CFEIF5   : 1;  // Bit 6: Clear Stream 5 FIFO error interrupt flag
        uint32_t Reserved2: 1;  // Bit 7: Reservado
        uint32_t CDMEIF5  : 1;  // Bit 8: Clear Stream 5 Direct mode error interrupt flag
        uint32_t CTEIF5   : 1;  // Bit 9: Clear Stream 5 Transfer error interrupt flag
        uint32_t CHTIF5   : 1;  // Bit 10: Clear Stream 5 Half transfer interrupt flag
        uint32_t CTCIF5   : 1;  // Bit 11: Clear Stream 5 Transfer complete interrupt flag
        
        uint32_t Reserved3 : 4; // Bits 12 a 15: Reservados

        // --- Bits 16 a 31 (Stream 6 y 7) ---
        uint32_t CFEIF6   : 1;  // Bit 16: Clear Stream 6 FIFO error interrupt flag
        uint32_t Reserved4: 1;  // Bit 17: Reservado
        uint32_t CDMEIF6  : 1;  // Bit 18: Clear Stream 6 Direct mode error interrupt flag
        uint32_t CTEIF6   : 1;  // Bit 19: Clear Stream 6 Transfer error interrupt flag
        uint32_t CHTIF6   : 1;  // Bit 20: Clear Stream 6 Half transfer interrupt flag
        uint32_t CTCIF6   : 1;  // Bit 21: Clear Stream 6 Transfer complete interrupt flag
        
        uint32_t CFEIF7   : 1;  // Bit 22: Clear Stream 7 FIFO error interrupt flag
        uint32_t Reserved5: 1;  // Bit 23: Reservado
        uint32_t CDMEIF7  : 1;  // Bit 24: Clear Stream 7 Direct mode error interrupt flag
        uint32_t CTEIF7   : 1;  // Bit 25: Clear Stream 7 Transfer error interrupt flag
        uint32_t CHTIF7   : 1;  // Bit 26: Clear Stream 7 Half transfer interrupt flag
        uint32_t CTCIF7   : 1;  // Bit 27: Clear Stream 7 Transfer complete interrupt flag
        
        uint32_t Reserved6 : 4; // Bits 28 a 31: Reservados
    }bit;
    uint32_t reg;
} DMA_HIFCR_REG_t;


/* DMA_SxCR */

typedef union{
    struct
    {
        // --- Bits 0 a 15 ---
        uint32_t EN       : 1;  // Bit 0: Stream enable / flag de transferencia activa
        uint32_t DMEIE    : 1;  // Bit 1: Direct mode error interrupt enable
        uint32_t TEIE     : 1;  // Bit 2: Transfer error interrupt enable
        uint32_t HTIE     : 1;  // Bit 3: Half transfer interrupt enable
        uint32_t TCIE     : 1;  // Bit 4: Transfer complete interrupt enable
        uint32_t PFCTRL   : 1;  // Bit 5: Peripheral flow controller
        uint32_t DIR      : 2;  // Bits 6-7: Data transfer direction (00: P-to-M, 01: M-to-P, 10: M-to-M)
        uint32_t CIRC     : 1;  // Bit 8: Circular mode
        uint32_t PINC     : 1;  // Bit 9: Peripheral increment mode
        uint32_t MINC     : 1;  // Bit 10: Memory increment mode
        uint32_t PSIZE    : 2;  // Bits 11-12: Peripheral data size (00: 8-bit, 01: 16-bit, 10: 32-bit)
        uint32_t MSIZE    : 2;  // Bits 13-14: Memory data size (00: 8-bit, 01: 16-bit, 10: 32-bit)
        uint32_t PINCOS   : 1;  // Bit 15: Peripheral increment offset size

        // --- Bits 16 a 31 ---
        uint32_t PL       : 2;  // Bits 16-17: Priority level (00: Low, 01: Medium, 10: High, 11: Very high)
        uint32_t DBM      : 1;  // Bit 18: Double buffer mode
        uint32_t CT       : 1;  // Bit 19: Current target (solo en Double buffer mode)
        uint32_t Reserved1: 1;  // Bit 20: Reservado
        uint32_t PBURST   : 2;  // Bits 21-22: Peripheral burst transfer configuration
        uint32_t MBURST   : 2;  // Bits 23-24: Memory burst transfer configuration
        uint32_t CHSEL    : 3;  // Bits 25-27: Channel selection (Selecciona canal del 0 al 7)
        uint32_t Reserved2 : 4; // Bits 28-31: Reservados
    }bit;
    uint32_t reg;
} DMA_CR_REG_t;


/* DMA_SxNDTR */

typedef union
{
    struct
    {
        uint32_t NDT      : 16; // Bits 0-15: Number of data items to transfer
        uint32_t Reserved : 16; // Bits 16-31: Reservados, se leen como 0
    }bit;
    uint32_t reg;
} DMA_NDTR_REG_t;

/* DMA_SxPAR */

typedef union{
    struct
    {
        uint32_t PAR : 32; // Bits 0-31: Peripheral address
    }bit;
    uint32_t reg;
} DMA_PAR_REG_t;

/* DMA_SxM0AR */

typedef union
{
    struct
    {
        uint32_t M0A : 32; // Bits 0-31: Memory 0 address
    }bit;
    uint32_t reg;
} DMA_M0AR_REG_t;

/* DMA_SxM1AR */

typedef union
{
    struct
    {
        uint32_t M1A : 32; // Bits 0-31: Memory 1 address
    }bit;
    uint32_t reg;
} DMA_M1AR_REG_t;


/* DMA_SxFCR */

typedef union{
    struct
    {
        // --- Bits 0 a 15 ---
        uint32_t FTH      : 2;  // Bits 0-1: FIFO threshold selection (00: 1/4, 01: 1/2, 10: 3/4, 11: full)
        uint32_t DMDIS    : 1;  // Bit 2: Direct mode disable
        uint32_t FS       : 3;  // Bits 3-5: FIFO status (Read-only)
        uint32_t Reserved1: 1;  // Bit 6: Reservado
        uint32_t FEIE     : 1;  // Bit 7: FIFO error interrupt enable
        uint32_t Reserved2 : 8; // Bits 8-15: Reservados

        // --- Bits 16 a 31 ---
        uint32_t Reserved3 : 16; // Bits 16-31: Reservados
    }bit;
    uint32_t reg;
} DMA_FCR_REG_t;

/* DMA_Sx */
typedef struct
{
    volatile DMA_CR_REG_t   CR;     // Offset: 0x00
    volatile DMA_NDTR_REG_t NDTR;   // Offset: 0x04
    volatile DMA_PAR_REG_t  PAR;    // Offset: 0x08
    volatile DMA_M0AR_REG_t M0AR;   // Offset: 0x0C
    volatile DMA_M1AR_REG_t M1AR;   // Offset: 0x10
    volatile DMA_FCR_REG_t  FCR;    // Offset: 0x14
} DMA_Stream_TypeDef;

/* DMA */
typedef struct
{
    volatile DMA_LISR_REG_t  LISR;   // Offset: 0x00
    volatile DMA_HISR_REG_t  HISR;   // Offset: 0x04
    volatile DMA_LIFCR_REG_t LIFCR;  // Offset: 0x08
    volatile DMA_HIFCR_REG_t HIFCR;  // Offset: 0x0C
    
    // El arreglo comienza en el offset 0x10 de forma consecutiva
    DMA_Stream_TypeDef       Sx[NUM_DMA_STREAMS]; 
} DMA_TypeDef;

#define DMA1     ((volatile DMA_TypeDef *)(ADDR_DMA1_BASE))
#define DMA2     ((volatile DMA_TypeDef *)(ADDR_DMA2_BASE))


/********************************************** USART ***************************************************/
#define ADDR_USART2_BASE    0x40004400UL
#define USART_OFFSET_SR     0x00UL
#define USART_OFFSET_DR     0x04UL
#define USART_OFFSER_BRR    0x08UL
#define USART_OFFSET_CR1    0x0CUL

/* USART_SR */
typedef struct
{
    uint32_t PE         : 1;    // Bit 0: Parity error
    uint32_t FE         : 1;    // Bit 1: Framing error
    uint32_t NF         : 1;    // Bit 2: Noise detected flag
    uint32_t ORE        : 1;    // Bit 3: Overrun error
    uint32_t IDLE       : 1;    // Bit 4: IDLE line detected
    uint32_t RXNE       : 1;    // Bit 5: Read data register not empty
    uint32_t TC         : 1;    // Bit 6: Transmission complete
    uint32_t TXE        : 1;    // Bit 7: Transmit data register empty
    uint32_t LBD        : 1;    // Bit 8: LIN break detection flag
    uint32_t CTS        : 1;    // Bit 9: CTS flag
    uint32_t Reserved   : 22;   // Bits 10:31 Reserved, must be kept at reset value
} USART_SR_t;

#define ADDR_USART2_SR      ((volatile USART_SR_t*)(ADDR_USART2_BASE + USART_OFFSET_SR))

/* USART_DR */
typedef struct
{
    uint32_t DR         : 9;    // Bits 0:8 Data value (Received or Transmitted character)
    uint32_t Reserved   : 23;   // Bits 9:31 Reserved, must be kept at reset value
} USART_DR_t;

#define ADDR_USART2_DR      ((volatile USART_DR_t*)(ADDR_USART2_BASE + USART_OFFSET_DR))

/* USART_BRR */
typedef struct
{
    uint32_t DIV_Fraction   : 4;    // Bits 0:3 fraction of USARTDIV
    uint32_t DIV_Mantissa   : 12;   // Bits 4:15 mantissa of USARTDIV
    uint32_t Reserved       : 16;   // Bits 16:31 Reserved, must be kept at reset value
}USART_BRR_t;

#define ADDR_USART2_BRR        ((volatile USART_BRR_t*)(ADDR_USART2_BASE + USART_OFFSER_BRR))

/* USART CR1 */
typedef struct
{
    uint32_t SBK        : 1;    // Bit 0: Send break
    uint32_t RWU        : 1;    // Bit 1: Receiver wakeup
    uint32_t RE         : 1;    // Bit 2: Receiver enable
    uint32_t TE         : 1;    // Bit 3: Transmitter enable
    uint32_t IDLEIE     : 1;    // Bit 4: IDLE interrupt enable
    uint32_t RXNEIE     : 1;    // Bit 5: RXNE interrupt enable
    uint32_t TCIE       : 1;    // Bit 6: Transmission complete interrupt enable
    uint32_t TXEIE      : 1;    // Bit 7: TXE interrupt enable
    uint32_t PEIE       : 1;    // Bit 8: PE interrupt enable
    uint32_t PS         : 1;    // Bit 9: Parity selection
    uint32_t PCE        : 1;    // Bit 10: Parity control enable
    uint32_t WAKE       : 1;    // Bit 11: Wakeup method
    uint32_t M          : 1;    // Bit 12: Word length
    uint32_t UE         : 1;    // Bit 13: USART enable
    uint32_t Reserved1  : 1;    // Bit 14: Reserved, must be kept at reset value
    uint32_t OVER8      : 1;    // Bit 15: Oversampling mode
    uint32_t Reserved2  : 16;   // Bits 16:31 Reserved, must be kept at reset value
} USART_CR1_t;

#define ADDR_USART2_CR1     ((volatile USART_CR1_t*)(ADDR_USART2_BASE + USART_OFFSET_CR1))

/*************************************** Sys_clock_cfg_168 MHz ******************************************/
#define ADDR_FLASH_ACR    ((volatile uint32_t*)0x40023C00)

void SystemClock_Config_168MHz(void) {
    // -------------------------------------------------------------------------
    // 1. Modificar el registro RCC_CR utilizando punteros directos a memoria
    //    ya que estos campos específicos no venían en las estructuras provistas.
    // -------------------------------------------------------------------------
    volatile uint32_t *RCC_CR = (volatile uint32_t *)(ADDR_RCC_BASE + 0x00);

    // Encender el oscilador externo HSE (Bit 16: HSEON = 1)
    *RCC_CR |= (1 << 16);

    // Esperar a que el HSE esté listo y estable (Monitorear Bit 17: HSERDY == 1)
    while (!(*RCC_CR & (1 << 17))) {
        // Espera bloqueante hasta que el cristal de 8MHz se estabilice
    }

    // -------------------------------------------------------------------------
    // 2. Configurar el regulador de voltaje y la latencia de la Memoria Flash
    //    Es obligatorio antes de subir la velocidad para evitar corrupción de datos.
    // -------------------------------------------------------------------------
    // Habilitar el reloj del regulador de energía (Power Interface)
    // En tu estructura de APB2ENR no está, lo hacemos por desplazamiento en APB1ENR (Bit 28)
    volatile uint32_t *RCC_APB1ENR = (volatile uint32_t *)(ADDR_RCC_BASE + 0x40);
    *RCC_APB1ENR |= (1 << 28);

    // Registro de control de energía (PWR_CR Bit 14: VOS = 1 Modo de alto rendimiento)
    volatile uint32_t *PWR_CR = (volatile uint32_t *)0x40007000;
    *PWR_CR |= (1 << 14);

    // Configurar Latencia Flash a 5 ciclos de espera (Bits 2:0 = 101 o 5 decimal)
    // Además habilitamos el Prefetch y las cachés de instrucciones/datos (Bits 8, 9, 10)
    *ADDR_FLASH_ACR = (5 << 0) | (1 << 8) | (1 << 9) | (1 << 10);

    // -------------------------------------------------------------------------
    // 3. Configurar los divisores de los buses internos (Prescalers)
    //    Modificamos el registro de configuración de reloj por direccionamiento directo
    // -------------------------------------------------------------------------
    volatile uint32_t *RCC_CFGR = (volatile uint32_t *)(ADDR_RCC_BASE + 0x08);

    // HPRE  (Bits 7:4)   = 0xxx -> AHB Prescaler = /1  (Queda en 168 MHz)
    // PPRE1 (Bits 12:10) = 101  -> APB1 Prescaler = /4 (Queda en 42 MHz)
    // PPRE2 (Bits 15:13) = 100  -> APB2 Prescaler = /2 (Queda en 84 MHz) -> ¡TU f_PCLK2!
    *RCC_CFGR &= ~((0xF << 4) | (7 << 10) | (7 << 13)); // Limpiar bits antiguos
    *RCC_CFGR |=  (0 << 4)  | (5 << 10) | (4 << 13);

    // -------------------------------------------------------------------------
    // 4. Configurar los parámetros matemáticos del PLL multiplicador
    //    Fórmula: VCO = (HSE / M) * N  --> (8MHz / 8) * 336 = 336 MHz
    //    SYSCLK = VCO / P             --> 336MHz / 2       = 168 MHz
    // -------------------------------------------------------------------------
    volatile uint32_t *RCC_PLLCFGR = (volatile uint32_t *)(ADDR_RCC_BASE + 0x04);

    *RCC_PLLCFGR = 0; // Limpieza inicial
    *RCC_PLLCFGR |= (8 << 0);    // PLLM: Divisor de entrada = 8
    *RCC_PLLCFGR |= (336 << 6);  // PLLN: Multiplicador de lazo = 336
    *RCC_PLLCFGR |= (0 << 16);   // PLLP: Divisor final /2 (El valor 00 significa /2)
    *RCC_PLLCFGR |= (1 << 22);   // PLLSRC: Seleccionar HSE como la fuente del PLL
    *RCC_PLLCFGR |= (7 << 24);   // PLLQ: Divisor para el USB OTG (336MHz / 7 = 48MHz exactos)

    // -------------------------------------------------------------------------
    // 5. Encender el PLL y realizar el cambio de reloj del sistema
    // -------------------------------------------------------------------------
    // Activar el PLL principal (Bit 24: PLLON = 1 en RCC_CR)
    *RCC_CR |= (1 << 24);

    // Esperar a que el PLL se enganche y esté listo (Monitorear Bit 25: PLLRDY == 1)
    while (!(*RCC_CR & (1 << 25))) {
        // Espera bloqueante
    }

    // Seleccionar el PLL como la fuente del reloj del sistema (Bits 1:0 = 10 en RCC_CFGR)
    *RCC_CFGR &= ~(3 << 0);
    *RCC_CFGR |=  (2 << 0);

    // Esperar a que el hardware confirme el cambio de fuente (Bits 3:2 deben leerse como 10)
    while ((*RCC_CFGR & (12 << 0)) != (8 << 0)) {
        // Espera bloqueante hasta completar la conmutación
    }

    // ¡Listo! A partir de esta línea, el microcontrolador vuela a 168 MHz
    // y tu bus APB2 (PCLK2) queda fijado exactamente a 84 MHz.
}

#endif /* STM32F407G_H_ */
