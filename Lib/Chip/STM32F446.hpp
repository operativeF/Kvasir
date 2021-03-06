#pragma once 
#include <cstdint>
#include <Chip/CM4/STMicro/STM32F446/DCMI.hpp>
#include <Chip/CM4/STMicro/STM32F446/FMC.hpp>
#include <Chip/CM4/STMicro/STM32F446/DBG.hpp>
#include <Chip/CM4/STMicro/STM32F446/DMA2.hpp>
#include <Chip/CM4/STMicro/STM32F446/DMA1.hpp>
#include <Chip/CM4/STMicro/STM32F446/RCC.hpp>
#include <Chip/CM4/STMicro/STM32F446/GPIOH.hpp>
#include <Chip/CM4/STMicro/STM32F446/GPIOG.hpp>
#include <Chip/CM4/STMicro/STM32F446/GPIOF.hpp>
#include <Chip/CM4/STMicro/STM32F446/GPIOE.hpp>
#include <Chip/CM4/STMicro/STM32F446/GPIOD.hpp>
#include <Chip/CM4/STMicro/STM32F446/GPIOC.hpp>
#include <Chip/CM4/STMicro/STM32F446/GPIOB.hpp>
#include <Chip/CM4/STMicro/STM32F446/GPIOA.hpp>
#include <Chip/CM4/STMicro/STM32F446/SYSCFG.hpp>
#include <Chip/CM4/STMicro/STM32F446/SPI1.hpp>
#include <Chip/CM4/STMicro/STM32F446/SPI2.hpp>
#include <Chip/CM4/STMicro/STM32F446/SPI3.hpp>
#include <Chip/CM4/STMicro/STM32F446/SPI4.hpp>
#include <Chip/CM4/STMicro/STM32F446/ADC1.hpp>
#include <Chip/CM4/STMicro/STM32F446/ADC2.hpp>
#include <Chip/CM4/STMicro/STM32F446/ADC3.hpp>
#include <Chip/CM4/STMicro/STM32F446/USART6.hpp>
#include <Chip/CM4/STMicro/STM32F446/USART1.hpp>
#include <Chip/CM4/STMicro/STM32F446/USART2.hpp>
#include <Chip/CM4/STMicro/STM32F446/USART3.hpp>
#include <Chip/CM4/STMicro/STM32F446/DAC.hpp>
#include <Chip/CM4/STMicro/STM32F446/I2C3.hpp>
#include <Chip/CM4/STMicro/STM32F446/I2C2.hpp>
#include <Chip/CM4/STMicro/STM32F446/I2C1.hpp>
#include <Chip/CM4/STMicro/STM32F446/IWDG.hpp>
#include <Chip/CM4/STMicro/STM32F446/WWDG.hpp>
#include <Chip/CM4/STMicro/STM32F446/RTC.hpp>
#include <Chip/CM4/STMicro/STM32F446/UART4.hpp>
#include <Chip/CM4/STMicro/STM32F446/UART5.hpp>
#include <Chip/CM4/STMicro/STM32F446/C_ADC.hpp>
#include <Chip/CM4/STMicro/STM32F446/TIM1.hpp>
#include <Chip/CM4/STMicro/STM32F446/TIM8.hpp>
#include <Chip/CM4/STMicro/STM32F446/TIM2.hpp>
#include <Chip/CM4/STMicro/STM32F446/TIM3.hpp>
#include <Chip/CM4/STMicro/STM32F446/TIM4.hpp>
#include <Chip/CM4/STMicro/STM32F446/TIM5.hpp>
#include <Chip/CM4/STMicro/STM32F446/TIM9.hpp>
#include <Chip/CM4/STMicro/STM32F446/TIM12.hpp>
#include <Chip/CM4/STMicro/STM32F446/TIM10.hpp>
#include <Chip/CM4/STMicro/STM32F446/TIM13.hpp>
#include <Chip/CM4/STMicro/STM32F446/TIM14.hpp>
#include <Chip/CM4/STMicro/STM32F446/TIM11.hpp>
#include <Chip/CM4/STMicro/STM32F446/TIM6.hpp>
#include <Chip/CM4/STMicro/STM32F446/TIM7.hpp>
#include <Chip/CM4/STMicro/STM32F446/CRC.hpp>
#include <Chip/CM4/STMicro/STM32F446/OTG_FS_GLOBAL.hpp>
#include <Chip/CM4/STMicro/STM32F446/OTG_FS_HOST.hpp>
#include <Chip/CM4/STMicro/STM32F446/OTG_FS_DEVICE.hpp>
#include <Chip/CM4/STMicro/STM32F446/OTG_FS_PWRCLK.hpp>
#include <Chip/CM4/STMicro/STM32F446/CAN1.hpp>
#include <Chip/CM4/STMicro/STM32F446/CAN2.hpp>
#include <Chip/CM4/STMicro/STM32F446/NVIC.hpp>
#include <Chip/CM4/STMicro/STM32F446/FLASH.hpp>
#include <Chip/CM4/STMicro/STM32F446/EXTI.hpp>
#include <Chip/CM4/STMicro/STM32F446/OTG_HS_GLOBAL.hpp>
#include <Chip/CM4/STMicro/STM32F446/OTG_HS_HOST.hpp>
#include <Chip/CM4/STMicro/STM32F446/OTG_HS_DEVICE.hpp>
#include <Chip/CM4/STMicro/STM32F446/OTG_HS_PWRCLK.hpp>
#include <Chip/CM4/STMicro/STM32F446/SAI1.hpp>
#include <Chip/CM4/STMicro/STM32F446/SAI2.hpp>
#include <Chip/CM4/STMicro/STM32F446/PWR.hpp>
#include <Chip/CM4/STMicro/STM32F446/QUADSPI.hpp>
#include <Chip/CM4/STMicro/STM32F446/SPDIF_RX.hpp>
#include <Chip/CM4/STMicro/STM32F446/SDMMC.hpp>
#include <Chip/CM4/STMicro/STM32F446/HDMI_CEC.hpp>
#include <Chip/CM4/STMicro/STM32F446/FPU.hpp>
#include <Chip/CM4/STMicro/STM32F446/MPU.hpp>
#include <Chip/CM4/STMicro/STM32F446/STK.hpp>
#include <Chip/CM4/STMicro/STM32F446/SCB.hpp>
#include <Chip/CM4/STMicro/STM32F446/NVIC_STIR.hpp>
#include <Chip/CM4/STMicro/STM32F446/FPU_CPACR.hpp>
#include <Chip/CM4/STMicro/STM32F446/SCB_ACTRL.hpp>
