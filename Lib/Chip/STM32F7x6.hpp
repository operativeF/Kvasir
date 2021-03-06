#pragma once 
#include <cstdint>
#include <Chip/CM7/STMicro/STM32F7x6/RNG.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/HASH.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/CRYP.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/DCMI.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/FMC.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/DBG.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/DMA2.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/DMA1.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/RCC.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/GPIOD.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/GPIOC.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/GPIOK.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/GPIOJ.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/GPIOI.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/GPIOH.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/GPIOG.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/GPIOF.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/GPIOE.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/GPIOB.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/GPIOA.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/SYSCFG.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/SPI1.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/SPI3.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/SPI4.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/SPI5.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/SPI6.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/SPI2.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/ADC1.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/ADC2.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/ADC3.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/DAC.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/PWR.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/IWDG.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/WWDG.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/C_ADC.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/TIM1.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/TIM8.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/TIM2.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/TIM3.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/TIM4.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/TIM5.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/TIM9.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/TIM12.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/TIM10.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/TIM11.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/TIM13.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/TIM14.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/TIM6.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/TIM7.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/Ethernet_MAC.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/Ethernet_MMC.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/Ethernet_PTP.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/Ethernet_DMA.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/CRC.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/CAN1.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/CAN2.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/FLASH.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/EXTI.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/LTDC.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/SAI1.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/SAI2.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/DMA2D.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/QUADSPI.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/CEC.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/SPDIF_RX.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/SDMMC1.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/LPTIM1.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/I2C1.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/I2C2.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/I2C3.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/I2C4.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/RTC.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/USART6.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/USART1.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/USART3.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/USART2.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/UART5.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/UART4.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/UART8.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/UART7.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/OTG_FS_GLOBAL.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/OTG_FS_HOST.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/OTG_FS_DEVICE.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/OTG_FS_PWRCLK.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/OTG_HS_GLOBAL.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/OTG_HS_HOST.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/OTG_HS_DEVICE.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/OTG_HS_PWRCLK.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/NVIC.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/MPU.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/STK.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/NVIC_STIR.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/FPU_CPACR.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/SCB_ACTRL.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/FPU.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/SCB.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/PF.hpp>
#include <Chip/CM7/STMicro/STM32F7x6/AC.hpp>
