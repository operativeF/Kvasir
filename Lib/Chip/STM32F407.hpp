#pragma once 
#include <cstdint>
#include <Chip/CM4/STMicro/STM32F407/RNG.hpp>
#include <Chip/CM4/STMicro/STM32F407/DCMI.hpp>
#include <Chip/CM4/STMicro/STM32F407/FSMC.hpp>
#include <Chip/CM4/STMicro/STM32F407/DBG.hpp>
#include <Chip/CM4/STMicro/STM32F407/DMA2.hpp>
#include <Chip/CM4/STMicro/STM32F407/DMA1.hpp>
#include <Chip/CM4/STMicro/STM32F407/RCC.hpp>
#include <Chip/CM4/STMicro/STM32F407/GPIOI.hpp>
#include <Chip/CM4/STMicro/STM32F407/GPIOH.hpp>
#include <Chip/CM4/STMicro/STM32F407/GPIOG.hpp>
#include <Chip/CM4/STMicro/STM32F407/GPIOF.hpp>
#include <Chip/CM4/STMicro/STM32F407/GPIOE.hpp>
#include <Chip/CM4/STMicro/STM32F407/GPIOD.hpp>
#include <Chip/CM4/STMicro/STM32F407/GPIOC.hpp>
#include <Chip/CM4/STMicro/STM32F407/GPIOJ.hpp>
#include <Chip/CM4/STMicro/STM32F407/GPIOK.hpp>
#include <Chip/CM4/STMicro/STM32F407/GPIOB.hpp>
#include <Chip/CM4/STMicro/STM32F407/GPIOA.hpp>
#include <Chip/CM4/STMicro/STM32F407/SYSCFG.hpp>
#include <Chip/CM4/STMicro/STM32F407/SPI1.hpp>
#include <Chip/CM4/STMicro/STM32F407/SPI2.hpp>
#include <Chip/CM4/STMicro/STM32F407/SPI3.hpp>
#include <Chip/CM4/STMicro/STM32F407/I2S2ext.hpp>
#include <Chip/CM4/STMicro/STM32F407/I2S3ext.hpp>
#include <Chip/CM4/STMicro/STM32F407/SPI4.hpp>
#include <Chip/CM4/STMicro/STM32F407/SPI5.hpp>
#include <Chip/CM4/STMicro/STM32F407/SPI6.hpp>
#include <Chip/CM4/STMicro/STM32F407/SDIO.hpp>
#include <Chip/CM4/STMicro/STM32F407/ADC1.hpp>
#include <Chip/CM4/STMicro/STM32F407/ADC2.hpp>
#include <Chip/CM4/STMicro/STM32F407/ADC3.hpp>
#include <Chip/CM4/STMicro/STM32F407/USART6.hpp>
#include <Chip/CM4/STMicro/STM32F407/USART1.hpp>
#include <Chip/CM4/STMicro/STM32F407/USART2.hpp>
#include <Chip/CM4/STMicro/STM32F407/USART3.hpp>
#include <Chip/CM4/STMicro/STM32F407/DAC.hpp>
#include <Chip/CM4/STMicro/STM32F407/PWR.hpp>
#include <Chip/CM4/STMicro/STM32F407/I2C3.hpp>
#include <Chip/CM4/STMicro/STM32F407/I2C2.hpp>
#include <Chip/CM4/STMicro/STM32F407/I2C1.hpp>
#include <Chip/CM4/STMicro/STM32F407/IWDG.hpp>
#include <Chip/CM4/STMicro/STM32F407/WWDG.hpp>
#include <Chip/CM4/STMicro/STM32F407/RTC.hpp>
#include <Chip/CM4/STMicro/STM32F407/UART4.hpp>
#include <Chip/CM4/STMicro/STM32F407/UART5.hpp>
#include <Chip/CM4/STMicro/STM32F407/UART7.hpp>
#include <Chip/CM4/STMicro/STM32F407/UART8.hpp>
#include <Chip/CM4/STMicro/STM32F407/C_ADC.hpp>
#include <Chip/CM4/STMicro/STM32F407/TIM1.hpp>
#include <Chip/CM4/STMicro/STM32F407/TIM8.hpp>
#include <Chip/CM4/STMicro/STM32F407/TIM2.hpp>
#include <Chip/CM4/STMicro/STM32F407/TIM3.hpp>
#include <Chip/CM4/STMicro/STM32F407/TIM4.hpp>
#include <Chip/CM4/STMicro/STM32F407/TIM5.hpp>
#include <Chip/CM4/STMicro/STM32F407/TIM9.hpp>
#include <Chip/CM4/STMicro/STM32F407/TIM12.hpp>
#include <Chip/CM4/STMicro/STM32F407/TIM10.hpp>
#include <Chip/CM4/STMicro/STM32F407/TIM13.hpp>
#include <Chip/CM4/STMicro/STM32F407/TIM14.hpp>
#include <Chip/CM4/STMicro/STM32F407/TIM11.hpp>
#include <Chip/CM4/STMicro/STM32F407/TIM6.hpp>
#include <Chip/CM4/STMicro/STM32F407/TIM7.hpp>
#include <Chip/CM4/STMicro/STM32F407/Ethernet_MAC.hpp>
#include <Chip/CM4/STMicro/STM32F407/Ethernet_MMC.hpp>
#include <Chip/CM4/STMicro/STM32F407/Ethernet_PTP.hpp>
#include <Chip/CM4/STMicro/STM32F407/Ethernet_DMA.hpp>
#include <Chip/CM4/STMicro/STM32F407/CRC.hpp>
#include <Chip/CM4/STMicro/STM32F407/OTG_FS_GLOBAL.hpp>
#include <Chip/CM4/STMicro/STM32F407/OTG_FS_HOST.hpp>
#include <Chip/CM4/STMicro/STM32F407/OTG_FS_DEVICE.hpp>
#include <Chip/CM4/STMicro/STM32F407/OTG_FS_PWRCLK.hpp>
#include <Chip/CM4/STMicro/STM32F407/CAN1.hpp>
#include <Chip/CM4/STMicro/STM32F407/CAN2.hpp>
#include <Chip/CM4/STMicro/STM32F407/FLASH.hpp>
#include <Chip/CM4/STMicro/STM32F407/EXTI.hpp>
#include <Chip/CM4/STMicro/STM32F407/OTG_HS_GLOBAL.hpp>
#include <Chip/CM4/STMicro/STM32F407/OTG_HS_HOST.hpp>
#include <Chip/CM4/STMicro/STM32F407/OTG_HS_DEVICE.hpp>
#include <Chip/CM4/STMicro/STM32F407/OTG_HS_PWRCLK.hpp>
#include <Chip/CM4/STMicro/STM32F407/NVIC.hpp>
#include <Chip/CM4/STMicro/STM32F407/SAI1.hpp>
#include <Chip/CM4/STMicro/STM32F407/LTDC.hpp>
#include <Chip/CM4/STMicro/STM32F407/HASH.hpp>
#include <Chip/CM4/STMicro/STM32F407/CRYP.hpp>
#include <Chip/CM4/STMicro/STM32F407/FPU.hpp>
#include <Chip/CM4/STMicro/STM32F407/MPU.hpp>
#include <Chip/CM4/STMicro/STM32F407/STK.hpp>
#include <Chip/CM4/STMicro/STM32F407/SCB.hpp>
#include <Chip/CM4/STMicro/STM32F407/NVIC_STIR.hpp>
#include <Chip/CM4/STMicro/STM32F407/FPU_CPACR.hpp>
#include <Chip/CM4/STMicro/STM32F407/SCB_ACTRL.hpp>
