#pragma once 
#include <cstdint>
#include <Chip/CM4/STMicro/STM32F469/RNG.hpp>
#include <Chip/CM4/STMicro/STM32F469/HASH.hpp>
#include <Chip/CM4/STMicro/STM32F469/CRYP.hpp>
#include <Chip/CM4/STMicro/STM32F469/DCMI.hpp>
#include <Chip/CM4/STMicro/STM32F469/FMC.hpp>
#include <Chip/CM4/STMicro/STM32F469/DBG.hpp>
#include <Chip/CM4/STMicro/STM32F469/DMA2.hpp>
#include <Chip/CM4/STMicro/STM32F469/DMA1.hpp>
#include <Chip/CM4/STMicro/STM32F469/RCC.hpp>
#include <Chip/CM4/STMicro/STM32F469/GPIOK.hpp>
#include <Chip/CM4/STMicro/STM32F469/GPIOJ.hpp>
#include <Chip/CM4/STMicro/STM32F469/GPIOI.hpp>
#include <Chip/CM4/STMicro/STM32F469/GPIOH.hpp>
#include <Chip/CM4/STMicro/STM32F469/GPIOG.hpp>
#include <Chip/CM4/STMicro/STM32F469/GPIOF.hpp>
#include <Chip/CM4/STMicro/STM32F469/GPIOE.hpp>
#include <Chip/CM4/STMicro/STM32F469/GPIOD.hpp>
#include <Chip/CM4/STMicro/STM32F469/GPIOC.hpp>
#include <Chip/CM4/STMicro/STM32F469/GPIOB.hpp>
#include <Chip/CM4/STMicro/STM32F469/GPIOA.hpp>
#include <Chip/CM4/STMicro/STM32F469/SYSCFG.hpp>
#include <Chip/CM4/STMicro/STM32F469/SPI1.hpp>
#include <Chip/CM4/STMicro/STM32F469/SPI2.hpp>
#include <Chip/CM4/STMicro/STM32F469/SPI3.hpp>
#include <Chip/CM4/STMicro/STM32F469/I2S2ext.hpp>
#include <Chip/CM4/STMicro/STM32F469/I2S3ext.hpp>
#include <Chip/CM4/STMicro/STM32F469/SPI4.hpp>
#include <Chip/CM4/STMicro/STM32F469/SPI5.hpp>
#include <Chip/CM4/STMicro/STM32F469/SPI6.hpp>
#include <Chip/CM4/STMicro/STM32F469/SDIO.hpp>
#include <Chip/CM4/STMicro/STM32F469/ADC1.hpp>
#include <Chip/CM4/STMicro/STM32F469/ADC2.hpp>
#include <Chip/CM4/STMicro/STM32F469/ADC3.hpp>
#include <Chip/CM4/STMicro/STM32F469/USART6.hpp>
#include <Chip/CM4/STMicro/STM32F469/USART1.hpp>
#include <Chip/CM4/STMicro/STM32F469/USART2.hpp>
#include <Chip/CM4/STMicro/STM32F469/USART3.hpp>
#include <Chip/CM4/STMicro/STM32F469/UART7.hpp>
#include <Chip/CM4/STMicro/STM32F469/UART8.hpp>
#include <Chip/CM4/STMicro/STM32F469/DAC.hpp>
#include <Chip/CM4/STMicro/STM32F469/PWR.hpp>
#include <Chip/CM4/STMicro/STM32F469/IWDG.hpp>
#include <Chip/CM4/STMicro/STM32F469/WWDG.hpp>
#include <Chip/CM4/STMicro/STM32F469/RTC.hpp>
#include <Chip/CM4/STMicro/STM32F469/UART4.hpp>
#include <Chip/CM4/STMicro/STM32F469/UART5.hpp>
#include <Chip/CM4/STMicro/STM32F469/C_ADC.hpp>
#include <Chip/CM4/STMicro/STM32F469/TIM1.hpp>
#include <Chip/CM4/STMicro/STM32F469/TIM8.hpp>
#include <Chip/CM4/STMicro/STM32F469/TIM2.hpp>
#include <Chip/CM4/STMicro/STM32F469/TIM3.hpp>
#include <Chip/CM4/STMicro/STM32F469/TIM4.hpp>
#include <Chip/CM4/STMicro/STM32F469/TIM5.hpp>
#include <Chip/CM4/STMicro/STM32F469/TIM9.hpp>
#include <Chip/CM4/STMicro/STM32F469/TIM12.hpp>
#include <Chip/CM4/STMicro/STM32F469/TIM10.hpp>
#include <Chip/CM4/STMicro/STM32F469/TIM13.hpp>
#include <Chip/CM4/STMicro/STM32F469/TIM14.hpp>
#include <Chip/CM4/STMicro/STM32F469/TIM11.hpp>
#include <Chip/CM4/STMicro/STM32F469/TIM6.hpp>
#include <Chip/CM4/STMicro/STM32F469/TIM7.hpp>
#include <Chip/CM4/STMicro/STM32F469/Ethernet_MAC.hpp>
#include <Chip/CM4/STMicro/STM32F469/Ethernet_MMC.hpp>
#include <Chip/CM4/STMicro/STM32F469/Ethernet_PTP.hpp>
#include <Chip/CM4/STMicro/STM32F469/Ethernet_DMA.hpp>
#include <Chip/CM4/STMicro/STM32F469/CRC.hpp>
#include <Chip/CM4/STMicro/STM32F469/OTG_FS_GLOBAL.hpp>
#include <Chip/CM4/STMicro/STM32F469/OTG_FS_HOST.hpp>
#include <Chip/CM4/STMicro/STM32F469/OTG_FS_DEVICE.hpp>
#include <Chip/CM4/STMicro/STM32F469/OTG_FS_PWRCLK.hpp>
#include <Chip/CM4/STMicro/STM32F469/CAN1.hpp>
#include <Chip/CM4/STMicro/STM32F469/CAN2.hpp>
#include <Chip/CM4/STMicro/STM32F469/NVIC.hpp>
#include <Chip/CM4/STMicro/STM32F469/FLASH.hpp>
#include <Chip/CM4/STMicro/STM32F469/EXTI.hpp>
#include <Chip/CM4/STMicro/STM32F469/OTG_HS_GLOBAL.hpp>
#include <Chip/CM4/STMicro/STM32F469/OTG_HS_HOST.hpp>
#include <Chip/CM4/STMicro/STM32F469/OTG_HS_DEVICE.hpp>
#include <Chip/CM4/STMicro/STM32F469/OTG_HS_PWRCLK.hpp>
#include <Chip/CM4/STMicro/STM32F469/LTDC.hpp>
#include <Chip/CM4/STMicro/STM32F469/SAI.hpp>
#include <Chip/CM4/STMicro/STM32F469/DMA2D.hpp>
#include <Chip/CM4/STMicro/STM32F469/I2C3.hpp>
#include <Chip/CM4/STMicro/STM32F469/I2C2.hpp>
#include <Chip/CM4/STMicro/STM32F469/I2C1.hpp>
#include <Chip/CM4/STMicro/STM32F469/DSIHOST.hpp>
#include <Chip/CM4/STMicro/STM32F469/QUADSPI.hpp>
#include <Chip/CM4/STMicro/STM32F469/FPU.hpp>
#include <Chip/CM4/STMicro/STM32F469/MPU.hpp>
#include <Chip/CM4/STMicro/STM32F469/STK.hpp>
#include <Chip/CM4/STMicro/STM32F469/SCB.hpp>
#include <Chip/CM4/STMicro/STM32F469/NVIC_STIR.hpp>
#include <Chip/CM4/STMicro/STM32F469/FPU_CPACR.hpp>
#include <Chip/CM4/STMicro/STM32F469/SCB_ACTRL.hpp>
