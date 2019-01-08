#pragma once 
#include <cstdint>
#include <Chip/Unknown/STMicro/STM32F429x/RNG.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/DCMI.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/FMC.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/DBG.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/DMA2.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/DMA1.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/RCC.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/GPIOK.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/GPIOJ.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/GPIOI.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/GPIOH.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/GPIOG.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/GPIOF.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/GPIOE.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/GPIOD.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/GPIOC.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/GPIOB.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/GPIOA.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/SYSCFG.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/SPI1.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/SPI2.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/SPI3.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/I2S2ext.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/I2S3ext.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/SPI4.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/SPI5.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/SPI6.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/SDIO.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/ADC1.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/ADC2.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/ADC3.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/USART6.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/USART1.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/USART2.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/USART3.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/UART7.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/UART8.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/DAC.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/I2C3.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/I2C2.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/I2C1.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/IWDG.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/WWDG.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/RTC.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/UART4.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/UART5.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/C_ADC.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/TIM1.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/TIM8.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/TIM2.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/TIM3.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/TIM4.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/TIM5.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/TIM9.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/TIM12.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/TIM10.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/TIM13.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/TIM14.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/TIM11.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/TIM6.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/TIM7.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/Ethernet_MAC.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/Ethernet_MMC.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/Ethernet_PTP.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/Ethernet_DMA.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/CRC.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/OTG_FS_GLOBAL.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/OTG_FS_HOST.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/OTG_FS_DEVICE.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/OTG_FS_PWRCLK.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/CAN1.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/CAN2.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/NVIC.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/FLASH.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/EXTI.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/OTG_HS_GLOBAL.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/OTG_HS_HOST.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/OTG_HS_DEVICE.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/OTG_HS_PWRCLK.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/LTDC.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/SAI.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/DMA2D.hpp>
#include <Chip/Unknown/STMicro/STM32F429x/PWR.hpp>
