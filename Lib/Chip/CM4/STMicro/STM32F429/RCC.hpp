#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Reset and clock control
    namespace RccCr{    ///<clock control register
        using Addr = Register::Address<0x40023800,0xf0f00004,0x00000000,std::uint32_t>;
        ///PLLI2S clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> plli2srdy{}; 
        ///PLLI2S enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> plli2son{}; 
        ///Main PLL (PLL) clock ready              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pllrdy{}; 
        ///Main PLL (PLL) enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pllon{}; 
        ///Clock security system              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> csson{}; 
        ///HSE clock bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> hsebyp{}; 
        ///HSE clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hserdy{}; 
        ///HSE clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> hseon{}; 
        ///Internal high-speed clock              calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hsical{}; 
        ///Internal high-speed clock              trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> hsitrim{}; 
        ///Internal high-speed clock ready              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hsirdy{}; 
        ///Internal high-speed clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hsion{}; 
    }
    namespace RccPllcfgr{    ///<PLL configuration register
        using Addr = Register::Address<0x40023804,0xf0bc8000,0x00000000,std::uint32_t>;
        ///Main PLL (PLL) division factor for USB              OTG FS, SDIO and random number generator              clocks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pllq3{}; 
        ///Main PLL (PLL) division factor for USB              OTG FS, SDIO and random number generator              clocks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pllq2{}; 
        ///Main PLL (PLL) division factor for USB              OTG FS, SDIO and random number generator              clocks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pllq1{}; 
        ///Main PLL (PLL) division factor for USB              OTG FS, SDIO and random number generator              clocks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pllq0{}; 
        ///Main PLL(PLL) and audio PLL (PLLI2S)              entry clock source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pllsrc{}; 
        ///Main PLL (PLL) division factor for main              system clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pllp1{}; 
        ///Main PLL (PLL) division factor for main              system clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllp0{}; 
        ///Main PLL (PLL) multiplication factor for              VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> plln8{}; 
        ///Main PLL (PLL) multiplication factor for              VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> plln7{}; 
        ///Main PLL (PLL) multiplication factor for              VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> plln6{}; 
        ///Main PLL (PLL) multiplication factor for              VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> plln5{}; 
        ///Main PLL (PLL) multiplication factor for              VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> plln4{}; 
        ///Main PLL (PLL) multiplication factor for              VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> plln3{}; 
        ///Main PLL (PLL) multiplication factor for              VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> plln2{}; 
        ///Main PLL (PLL) multiplication factor for              VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> plln1{}; 
        ///Main PLL (PLL) multiplication factor for              VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> plln0{}; 
        ///Division factor for the main PLL (PLL)              and audio PLL (PLLI2S) input clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pllm5{}; 
        ///Division factor for the main PLL (PLL)              and audio PLL (PLLI2S) input clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pllm4{}; 
        ///Division factor for the main PLL (PLL)              and audio PLL (PLLI2S) input clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pllm3{}; 
        ///Division factor for the main PLL (PLL)              and audio PLL (PLLI2S) input clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pllm2{}; 
        ///Division factor for the main PLL (PLL)              and audio PLL (PLLI2S) input clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pllm1{}; 
        ///Division factor for the main PLL (PLL)              and audio PLL (PLLI2S) input clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pllm0{}; 
    }
    namespace RccCfgr{    ///<clock configuration register
        using Addr = Register::Address<0x40023808,0x00000300,0x00000000,std::uint32_t>;
        ///Microcontroller clock output              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> mco2{}; 
        ///MCO2 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,27),Register::ReadWriteAccess,unsigned> mco2pre{}; 
        ///MCO1 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> mco1pre{}; 
        ///I2S clock selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2ssrc{}; 
        ///Microcontroller clock output              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> mco1{}; 
        ///HSE division factor for RTC              clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> rtcpre{}; 
        ///APB high-speed prescaler              (APB2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> ppre2{}; 
        ///APB Low speed prescaler              (APB1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> ppre1{}; 
        ///AHB prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> hpre{}; 
        ///System clock switch status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sws1{}; 
        ///System clock switch status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sws0{}; 
        ///System clock switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sw1{}; 
        ///System clock switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sw0{}; 
    }
    namespace RccCir{    ///<clock interrupt register
        using Addr = Register::Address<0x4002380c,0xff40c040,0x00000000,std::uint32_t>;
        ///Clock security system interrupt              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cssc{}; 
        ///PLLI2S ready interrupt              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> plli2srdyc{}; 
        ///Main PLL(PLL) ready interrupt              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pllrdyc{}; 
        ///HSE ready interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hserdyc{}; 
        ///HSI ready interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hsirdyc{}; 
        ///LSE ready interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lserdyc{}; 
        ///LSI ready interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lsirdyc{}; 
        ///PLLI2S ready interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> plli2srdyie{}; 
        ///Main PLL (PLL) ready interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pllrdyie{}; 
        ///HSE ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hserdyie{}; 
        ///HSI ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hsirdyie{}; 
        ///LSE ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lserdyie{}; 
        ///LSI ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lsirdyie{}; 
        ///Clock security system interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cssf{}; 
        ///PLLI2S ready interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> plli2srdyf{}; 
        ///Main PLL (PLL) ready interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pllrdyf{}; 
        ///HSE ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hserdyf{}; 
        ///HSI ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hsirdyf{}; 
        ///LSE ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lserdyf{}; 
        ///LSI ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lsirdyf{}; 
    }
    namespace RccAhb1rstr{    ///<AHB1 peripheral reset register
        using Addr = Register::Address<0x40023810,0xdd9fee00,0x00000000,std::uint32_t>;
        ///USB OTG HS module reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> otghsrst{}; 
        ///Ethernet MAC reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ethmacrst{}; 
        ///DMA2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dma2rst{}; 
        ///DMA2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dma1rst{}; 
        ///CRC reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crcrst{}; 
        ///IO port I reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gpioirst{}; 
        ///IO port H reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpiohrst{}; 
        ///IO port G reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpiogrst{}; 
        ///IO port F reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpiofrst{}; 
        ///IO port E reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioerst{}; 
        ///IO port D reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpiodrst{}; 
        ///IO port C reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpiocrst{}; 
        ///IO port B reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpiobrst{}; 
        ///IO port A reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioarst{}; 
    }
    namespace RccAhb2rstr{    ///<AHB2 peripheral reset register
        using Addr = Register::Address<0x40023814,0xffffff0e,0x00000000,std::uint32_t>;
        ///USB OTG FS module reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> otgfsrst{}; 
        ///Random number generator module              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rngrst{}; 
        ///Hash module reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hsahrst{}; 
        ///Cryptographic module reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cryprst{}; 
        ///Camera interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dcmirst{}; 
    }
    namespace RccAhb3rstr{    ///<AHB3 peripheral reset register
        using Addr = Register::Address<0x40023818,0xfffffffe,0x00000000,std::uint32_t>;
        ///Flexible memory controller module              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fmcrst{}; 
    }
    namespace RccApb1rstr{    ///<APB1 peripheral reset register
        using Addr = Register::Address<0x40023820,0xc9013600,0x00000000,std::uint32_t>;
        ///TIM2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2rst{}; 
        ///TIM3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3rst{}; 
        ///TIM4 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4rst{}; 
        ///TIM5 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5rst{}; 
        ///TIM6 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6rst{}; 
        ///TIM7 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7rst{}; 
        ///TIM12 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tim12rst{}; 
        ///TIM13 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tim13rst{}; 
        ///TIM14 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tim14rst{}; 
        ///Window watchdog reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgrst{}; 
        ///SPI 2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2rst{}; 
        ///SPI 3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3rst{}; 
        ///USART 2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> uart2rst{}; 
        ///USART 3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uart3rst{}; 
        ///USART 4 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4rst{}; 
        ///USART 5 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5rst{}; 
        ///I2C 1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1rst{}; 
        ///I2C 2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2rst{}; 
        ///I2C3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2c3rst{}; 
        ///CAN1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> can1rst{}; 
        ///CAN2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> can2rst{}; 
        ///Power interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrrst{}; 
        ///DAC reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacrst{}; 
    }
    namespace RccApb2rstr{    ///<APB2 peripheral reset register
        using Addr = Register::Address<0x40023824,0xfff8a6cc,0x00000000,std::uint32_t>;
        ///TIM1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim1rst{}; 
        ///TIM8 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim8rst{}; 
        ///USART1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usart1rst{}; 
        ///USART6 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usart6rst{}; 
        ///ADC interface reset (common to all              ADCs)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adcrst{}; 
        ///SDIO reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sdiorst{}; 
        ///SPI 1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1rst{}; 
        ///System configuration controller              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> syscfgrst{}; 
        ///TIM9 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim9rst{}; 
        ///TIM10 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim10rst{}; 
        ///TIM11 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim11rst{}; 
    }
    namespace RccAhb1enr{    ///<AHB1 peripheral clock register
        using Addr = Register::Address<0x40023830,0x818bee00,0x00000000,std::uint32_t>;
        ///USB OTG HSULPI clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> otghsulpien{}; 
        ///USB OTG HS clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> otghsen{}; 
        ///Ethernet PTP clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ethmacptpen{}; 
        ///Ethernet Reception clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ethmacrxen{}; 
        ///Ethernet Transmission clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ethmactxen{}; 
        ///Ethernet MAC clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ethmacen{}; 
        ///DMA2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dma2en{}; 
        ///DMA1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dma1en{}; 
        ///CCM data RAM clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ccmdataramen{}; 
        ///Backup SRAM interface clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> bkpsramen{}; 
        ///CRC clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crcen{}; 
        ///IO port I clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gpioien{}; 
        ///IO port H clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpiohen{}; 
        ///IO port G clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpiogen{}; 
        ///IO port F clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpiofen{}; 
        ///IO port E clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioeen{}; 
        ///IO port D clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpioden{}; 
        ///IO port C clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpiocen{}; 
        ///IO port B clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpioben{}; 
        ///IO port A clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioaen{}; 
    }
    namespace RccAhb2enr{    ///<AHB2 peripheral clock enable          register
        using Addr = Register::Address<0x40023834,0xffffff0e,0x00000000,std::uint32_t>;
        ///USB OTG FS clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> otgfsen{}; 
        ///Random number generator clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rngen{}; 
        ///Hash modules clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hashen{}; 
        ///Cryptographic modules clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crypen{}; 
        ///Camera interface enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dcmien{}; 
    }
    namespace RccAhb3enr{    ///<AHB3 peripheral clock enable          register
        using Addr = Register::Address<0x40023838,0xfffffffe,0x00000000,std::uint32_t>;
        ///Flexible memory controller module clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fmcen{}; 
    }
    namespace RccApb1enr{    ///<APB1 peripheral clock enable          register
        using Addr = Register::Address<0x40023840,0xc9013600,0x00000000,std::uint32_t>;
        ///TIM2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2en{}; 
        ///TIM3 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3en{}; 
        ///TIM4 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4en{}; 
        ///TIM5 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5en{}; 
        ///TIM6 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6en{}; 
        ///TIM7 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7en{}; 
        ///TIM12 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tim12en{}; 
        ///TIM13 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tim13en{}; 
        ///TIM14 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tim14en{}; 
        ///Window watchdog clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgen{}; 
        ///SPI2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2en{}; 
        ///SPI3 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3en{}; 
        ///USART 2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2en{}; 
        ///USART3 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3en{}; 
        ///UART4 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4en{}; 
        ///UART5 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5en{}; 
        ///I2C1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1en{}; 
        ///I2C2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2en{}; 
        ///I2C3 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2c3en{}; 
        ///CAN 1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> can1en{}; 
        ///CAN 2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> can2en{}; 
        ///Power interface clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwren{}; 
        ///DAC interface clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacen{}; 
    }
    namespace RccApb2enr{    ///<APB2 peripheral clock enable          register
        using Addr = Register::Address<0x40023844,0xfff8a0cc,0x00000000,std::uint32_t>;
        ///TIM1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim1en{}; 
        ///TIM8 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim8en{}; 
        ///USART1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usart1en{}; 
        ///USART6 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usart6en{}; 
        ///ADC1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adc1en{}; 
        ///ADC2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adc2en{}; 
        ///ADC3 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> adc3en{}; 
        ///SDIO clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sdioen{}; 
        ///SPI1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1en{}; 
        ///System configuration controller clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> syscfgen{}; 
        ///TIM9 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim9en{}; 
        ///TIM10 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim10en{}; 
        ///TIM11 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim11en{}; 
    }
    namespace RccAhb1lpenr{    ///<AHB1 peripheral clock enable in low power          mode register
        using Addr = Register::Address<0x40023850,0x81986e00,0x00000000,std::uint32_t>;
        ///IO port A clock enable during sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioalpen{}; 
        ///IO port B clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpioblpen{}; 
        ///IO port C clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpioclpen{}; 
        ///IO port D clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpiodlpen{}; 
        ///IO port E clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioelpen{}; 
        ///IO port F clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpioflpen{}; 
        ///IO port G clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpioglpen{}; 
        ///IO port H clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpiohlpen{}; 
        ///IO port I clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gpioilpen{}; 
        ///CRC clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crclpen{}; 
        ///Flash interface clock enable during              Sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> flitflpen{}; 
        ///SRAM 1interface clock enable during              Sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sram1lpen{}; 
        ///SRAM 2 interface clock enable during              Sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> sram2lpen{}; 
        ///Backup SRAM interface clock enable              during Sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> bkpsramlpen{}; 
        ///DMA1 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dma1lpen{}; 
        ///DMA2 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dma2lpen{}; 
        ///Ethernet MAC clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ethmaclpen{}; 
        ///Ethernet transmission clock enable              during Sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ethmactxlpen{}; 
        ///Ethernet reception clock enable during              Sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ethmacrxlpen{}; 
        ///Ethernet PTP clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ethmacptplpen{}; 
        ///USB OTG HS clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> otghslpen{}; 
        ///USB OTG HS ULPI clock enable during              Sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> otghsulpilpen{}; 
    }
    namespace RccAhb2lpenr{    ///<AHB2 peripheral clock enable in low power          mode register
        using Addr = Register::Address<0x40023854,0xffffff0e,0x00000000,std::uint32_t>;
        ///USB OTG FS clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> otgfslpen{}; 
        ///Random number generator clock enable              during Sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rnglpen{}; 
        ///Hash modules clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hashlpen{}; 
        ///Cryptography modules clock enable during              Sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cryplpen{}; 
        ///Camera interface enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dcmilpen{}; 
    }
    namespace RccAhb3lpenr{    ///<AHB3 peripheral clock enable in low power          mode register
        using Addr = Register::Address<0x40023858,0xfffffffe,0x00000000,std::uint32_t>;
        ///Flexible memory controller module clock              enable during Sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fmclpen{}; 
    }
    namespace RccApb1lpenr{    ///<APB1 peripheral clock enable in low power          mode register
        using Addr = Register::Address<0x40023860,0xc9013600,0x00000000,std::uint32_t>;
        ///TIM2 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2lpen{}; 
        ///TIM3 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3lpen{}; 
        ///TIM4 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4lpen{}; 
        ///TIM5 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5lpen{}; 
        ///TIM6 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6lpen{}; 
        ///TIM7 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7lpen{}; 
        ///TIM12 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tim12lpen{}; 
        ///TIM13 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tim13lpen{}; 
        ///TIM14 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tim14lpen{}; 
        ///Window watchdog clock enable during              Sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdglpen{}; 
        ///SPI2 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2lpen{}; 
        ///SPI3 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3lpen{}; 
        ///USART2 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2lpen{}; 
        ///USART3 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3lpen{}; 
        ///UART4 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4lpen{}; 
        ///UART5 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5lpen{}; 
        ///I2C1 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1lpen{}; 
        ///I2C2 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2lpen{}; 
        ///I2C3 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2c3lpen{}; 
        ///CAN 1 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> can1lpen{}; 
        ///CAN 2 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> can2lpen{}; 
        ///Power interface clock enable during              Sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrlpen{}; 
        ///DAC interface clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> daclpen{}; 
    }
    namespace RccApb2lpenr{    ///<APB2 peripheral clock enabled in low power          mode register
        using Addr = Register::Address<0x40023864,0xfff8a0cc,0x00000000,std::uint32_t>;
        ///TIM1 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim1lpen{}; 
        ///TIM8 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim8lpen{}; 
        ///USART1 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usart1lpen{}; 
        ///USART6 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usart6lpen{}; 
        ///ADC1 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adc1lpen{}; 
        ///ADC2 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adc2lpen{}; 
        ///ADC 3 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> adc3lpen{}; 
        ///SDIO clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sdiolpen{}; 
        ///SPI 1 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1lpen{}; 
        ///System configuration controller clock              enable during Sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> syscfglpen{}; 
        ///TIM9 clock enable during sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim9lpen{}; 
        ///TIM10 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim10lpen{}; 
        ///TIM11 clock enable during Sleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim11lpen{}; 
    }
    namespace RccBdcr{    ///<Backup domain control register
        using Addr = Register::Address<0x40023870,0xfffe7cf8,0x00000000,std::uint32_t>;
        ///Backup domain software              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> bdrst{}; 
        ///RTC clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rtcen{}; 
        ///RTC clock source selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rtcsel1{}; 
        ///RTC clock source selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rtcsel0{}; 
        ///External low-speed oscillator              bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lsebyp{}; 
        ///External low-speed oscillator              ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lserdy{}; 
        ///External low-speed oscillator              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lseon{}; 
    }
    namespace RccCsr{    ///<clock control & status          register
        using Addr = Register::Address<0x40023874,0x00fffffc,0x00000000,std::uint32_t>;
        ///Low-power reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lpwrrstf{}; 
        ///Window watchdog reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wwdgrstf{}; 
        ///Independent watchdog reset              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> wdgrstf{}; 
        ///Software reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sftrstf{}; 
        ///POR/PDR reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> porrstf{}; 
        ///PIN reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> padrstf{}; 
        ///BOR reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> borrstf{}; 
        ///Remove reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rmvf{}; 
        ///Internal low-speed oscillator              ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lsirdy{}; 
        ///Internal low-speed oscillator              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsion{}; 
    }
    namespace RccSscgr{    ///<spread spectrum clock generation          register
        using Addr = Register::Address<0x40023880,0x30000000,0x00000000,std::uint32_t>;
        ///Spread spectrum modulation              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> sscgen{}; 
        ///Spread Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> spreadsel{}; 
        ///Incrementation step
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,13),Register::ReadWriteAccess,unsigned> incstep{}; 
        ///Modulation period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> modper{}; 
    }
    namespace RccPlli2scfgr{    ///<PLLI2S configuration register
        using Addr = Register::Address<0x40023884,0x80ff803f,0x00000000,std::uint32_t>;
        ///PLLI2S division factor for I2S              clocks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> plli2sr{}; 
        ///PLLI2S division factor for SAI1              clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> plli2sq{}; 
        ///PLLI2S multiplication factor for              VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,6),Register::ReadWriteAccess,unsigned> plli2sn{}; 
    }
    namespace RccDckcfgr{    ///<RCC Dedicated Clock Configuration          Register
        using Addr = Register::Address<0x4002388c,0xfe0ce0e0,0x00000000,std::uint32_t>;
        ///PLLI2S division factor for SAI1              clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> plli2sdivq{}; 
        ///PLLSAI division factor for SAI1              clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> pllsaidivq{}; 
        ///division factor for              LCD_CLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pllsaidivr{}; 
        ///SAI1-A clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sai1asrc{}; 
        ///SAI1-B clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sai1bsrc{}; 
        ///Timers clocks prescalers              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> timpre{}; 
    }
    namespace RccPllsaicfgr{    ///<RCC PLL configuration register
        using Addr = Register::Address<0x40023888,0x80ff803f,0x00000000,std::uint32_t>;
        ///PLLSAI division factor for LCD              clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> pllsair{}; 
        ///PLLSAI division factor for SAI1              clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> pllsaiq{}; 
        ///PLLSAI division factor for              VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,6),Register::ReadWriteAccess,unsigned> pllsain{}; 
    }
}
