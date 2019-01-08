#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Reset and clock control
    namespace RccCr{    ///<clock control register
        using Addr = Register::Address<0x58024400,0xc0f00c40,0x00000000,std::uint32_t>;
        ///Internal high-speed clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hsion{}; 
        ///High Speed Internal clock enable in Stop              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hsikeron{}; 
        ///HSI clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsirdy{}; 
        ///HSI clock divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> hsidiv{}; 
        ///HSI divider flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hsidivf{}; 
        ///CSI clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> csion{}; 
        ///CSI clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> csirdy{}; 
        ///CSI clock enable in Stop              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> csikeron{}; 
        ///RC48 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rc48on{}; 
        ///RC48 clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rc48rdy{}; 
        ///D1 domain clocks ready              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> d1ckrdy{}; 
        ///D2 domain clocks ready              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> d2ckrdy{}; 
        ///HSE clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> hseon{}; 
        ///HSE clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> hserdy{}; 
        ///HSE clock bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> hsebyp{}; 
        ///HSE Clock Security System              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> hsecsson{}; 
        ///PLL1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pll1on{}; 
        ///PLL1 clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pll1rdy{}; 
        ///PLL2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pll2on{}; 
        ///PLL2 clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pll2rdy{}; 
        ///PLL3 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pll3on{}; 
        ///PLL3 clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pll3rdy{}; 
    }
    namespace RccIcscr{    ///<RCC Internal Clock Source Calibration          Register
        using Addr = Register::Address<0x58024404,0x80000000,0x00000000,std::uint32_t>;
        ///HSI clock calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hsical{}; 
        ///HSI clock trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,12),Register::ReadWriteAccess,unsigned> hsitrim{}; 
        ///CSI clock calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> csical{}; 
        ///CSI clock trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> csitrim{}; 
    }
    namespace RccCrrcr{    ///<RCC Clock Recovery RC Register
        using Addr = Register::Address<0x58024408,0xfffffc00,0x00000000,std::uint32_t>;
        ///Internal RC 48 MHz clock              calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> rc48cal{}; 
    }
    namespace RccCfgr{    ///<RCC Clock Configuration          Register
        using Addr = Register::Address<0x58024410,0x00030000,0x00000000,std::uint32_t>;
        ///System clock switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sw{}; 
        ///System clock switch status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> sws{}; 
        ///System clock selection after a wake up              from system Stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stopwuck{}; 
        ///Kernel clock selection after a wake up              from system Stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stopkerwuck{}; 
        ///HSE division factor for RTC              clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> rtcpre{}; 
        ///High Resolution Timer clock prescaler              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> hrtimsel{}; 
        ///Timers clocks prescaler              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> timpre{}; 
        ///MCO1 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> mco1pre{}; 
        ///Micro-controller clock output              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,22),Register::ReadWriteAccess,unsigned> mco1sel{}; 
        ///MCO2 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,25),Register::ReadWriteAccess,unsigned> mco2pre{}; 
        ///Micro-controller clock output              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> mco2sel{}; 
    }
    namespace RccD1cfgr{    ///<RCC Domain 1 Clock Configuration          Register
        using Addr = Register::Address<0x58024418,0xfffff080,0x00000000,std::uint32_t>;
        ///D1 domain AHB prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> hpre{}; 
        ///D1 domain APB3 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> d1ppre{}; 
        ///D1 domain Core prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> d1cpre{}; 
    }
    namespace RccD2cfgr{    ///<RCC Domain 2 Clock Configuration          Register
        using Addr = Register::Address<0x5802441c,0xfffff88f,0x00000000,std::uint32_t>;
        ///D2 domain APB1 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> d2ppre1{}; 
        ///D2 domain APB2 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> d2ppre2{}; 
    }
    namespace RccD3cfgr{    ///<RCC Domain 3 Clock Configuration          Register
        using Addr = Register::Address<0x58024420,0xffffff8f,0x00000000,std::uint32_t>;
        ///D3 domain APB4 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> d3ppre{}; 
    }
    namespace RccPllckselr{    ///<RCC PLLs Clock Source Selection          Register
        using Addr = Register::Address<0x58024428,0xfc0c0c0c,0x00000000,std::uint32_t>;
        ///DIVMx and PLLs clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pllsrc{}; 
        ///Prescaler for PLL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,4),Register::ReadWriteAccess,unsigned> divm1{}; 
        ///Prescaler for PLL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,12),Register::ReadWriteAccess,unsigned> divm2{}; 
        ///Prescaler for PLL3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,20),Register::ReadWriteAccess,unsigned> divm3{}; 
    }
    namespace RccPllcfgr{    ///<RCC PLLs Configuration          Register
        using Addr = Register::Address<0x5802442c,0xfe00f000,0x00000000,std::uint32_t>;
        ///PLL1 fractional latch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pll1fracen{}; 
        ///PLL1 VCO selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pll1vcosel{}; 
        ///PLL1 input frequency range
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pll1rge{}; 
        ///PLL2 fractional latch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pll2fracen{}; 
        ///PLL2 VCO selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pll2vcosel{}; 
        ///PLL2 input frequency range
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pll2rge{}; 
        ///PLL3 fractional latch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pll3fracen{}; 
        ///PLL3 VCO selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pll3vcosel{}; 
        ///PLL3 input frequency range
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pll3rge{}; 
        ///PLL1 DIVP divider output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> divp1en{}; 
        ///PLL1 DIVQ divider output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> divq1en{}; 
        ///PLL1 DIVR divider output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> divr1en{}; 
        ///PLL2 DIVP divider output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> divp2en{}; 
        ///PLL2 DIVQ divider output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> divq2en{}; 
        ///PLL2 DIVR divider output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> divr2en{}; 
        ///PLL3 DIVP divider output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> divp3en{}; 
        ///PLL3 DIVQ divider output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> divq3en{}; 
        ///PLL3 DIVR divider output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> divr3en{}; 
    }
    namespace RccPll1divr{    ///<RCC PLL1 Dividers Configuration          Register
        using Addr = Register::Address<0x58024430,0x80800000,0x00000000,std::uint32_t>;
        ///Multiplication factor for PLL1              VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> divn1{}; 
        ///PLL1 DIVP division factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,9),Register::ReadWriteAccess,unsigned> divp1{}; 
        ///PLL1 DIVQ division factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> divq1{}; 
        ///PLL1 DIVR division factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> divr1{}; 
    }
    namespace RccPll1fracr{    ///<RCC PLL1 Fractional Divider          Register
        using Addr = Register::Address<0x58024434,0xffff0007,0x00000000,std::uint32_t>;
        ///Fractional part of the multiplication              factor for PLL1 VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,3),Register::ReadWriteAccess,unsigned> fracn1{}; 
    }
    namespace RccPll2divr{    ///<RCC PLL2 Dividers Configuration          Register
        using Addr = Register::Address<0x58024438,0x80800000,0x00000000,std::uint32_t>;
        ///Multiplication factor for PLL1              VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> divn1{}; 
        ///PLL1 DIVP division factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,9),Register::ReadWriteAccess,unsigned> divp1{}; 
        ///PLL1 DIVQ division factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> divq1{}; 
        ///PLL1 DIVR division factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> divr1{}; 
    }
    namespace RccPll2fracr{    ///<RCC PLL2 Fractional Divider          Register
        using Addr = Register::Address<0x5802443c,0xffff0007,0x00000000,std::uint32_t>;
        ///Fractional part of the multiplication              factor for PLL VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,3),Register::ReadWriteAccess,unsigned> fracn2{}; 
    }
    namespace RccPll3divr{    ///<RCC PLL3 Dividers Configuration          Register
        using Addr = Register::Address<0x58024440,0x80800000,0x00000000,std::uint32_t>;
        ///Multiplication factor for PLL1              VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> divn3{}; 
        ///PLL DIVP division factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,9),Register::ReadWriteAccess,unsigned> divp3{}; 
        ///PLL DIVQ division factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> divq3{}; 
        ///PLL DIVR division factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> divr3{}; 
    }
    namespace RccPll3fracr{    ///<RCC PLL3 Fractional Divider          Register
        using Addr = Register::Address<0x58024444,0xffff0007,0x00000000,std::uint32_t>;
        ///Fractional part of the multiplication              factor for PLL3 VCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,3),Register::ReadWriteAccess,unsigned> fracn3{}; 
    }
    namespace RccD1ccipr{    ///<RCC Domain 1 Kernel Clock Configuration          Register
        using Addr = Register::Address<0x5802444c,0xcffeffcc,0x00000000,std::uint32_t>;
        ///FMC kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fmcsrc{}; 
        ///QUADSPI kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qspisrc{}; 
        ///SDMMC kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sdmmcsrc{}; 
        ///per_ck clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ckpersrc{}; 
    }
    namespace RccD2ccip1r{    ///<RCC Domain 2 Kernel Clock Configuration          Register
        using Addr = Register::Address<0x58024450,0x4ec88e38,0x00000000,std::uint32_t>;
        ///SAI1 and DFSDM1 kernel Aclk clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sai1src{}; 
        ///SAI2 and SAI3 kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> sai23src{}; 
        ///SPI/I2S1,2 and 3 kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> spi123src{}; 
        ///SPI4 and 5 kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> spi45src{}; 
        ///SPDIFRX kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> spdifsrc{}; 
        ///DFSDM1 kernel Clk clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dfsdm1src{}; 
        ///FDCAN kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> fdcansrc{}; 
        ///SWPMI kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> swpsrc{}; 
    }
    namespace RccD2ccip2r{    ///<RCC Domain 2 Kernel Clock Configuration          Register
        using Addr = Register::Address<0x58024454,0x8f0fccc0,0x00000000,std::uint32_t>;
        ///USART2/3, UART4,5, 7/8 (APB1) kernel              clock source selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> usart234578src{}; 
        ///USART1 and 6 kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> usart16src{}; 
        ///RNG kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rngsrc{}; 
        ///I2C1,2,3 kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> i2c123src{}; 
        ///USBOTG 1 and 2 kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> usbsrc{}; 
        ///HDMI-CEC kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> cecsrc{}; 
        ///LPTIM1 kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> lptim1src{}; 
    }
    namespace RccD3ccipr{    ///<RCC Domain 3 Kernel Clock Configuration          Register
        using Addr = Register::Address<0x58024458,0x881c00f8,0x00000000,std::uint32_t>;
        ///LPUART1 kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> lpuart1src{}; 
        ///I2C4 kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> i2c4src{}; 
        ///LPTIM2 kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> lptim2src{}; 
        ///LPTIM3,4,5 kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> lptim345src{}; 
        ///SAR ADC kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> adcsrc{}; 
        ///Sub-Block A of SAI4 kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> sai4asrc{}; 
        ///Sub-Block B of SAI4 kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> sai4bsrc{}; 
        ///SPI6 kernel clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> spi6src{}; 
    }
    namespace RccCier{    ///<RCC Clock Source Interrupt Enable          Register
        using Addr = Register::Address<0x58024460,0xfffffc00,0x00000000,std::uint32_t>;
        ///LSI ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyie{}; 
        ///LSE ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyie{}; 
        ///HSI ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsirdyie{}; 
        ///HSE ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hserdyie{}; 
        ///CSI ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> csirdyie{}; 
        ///RC48 ready Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rc48rdyie{}; 
        ///PLL1 ready Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pll1rdyie{}; 
        ///PLL2 ready Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pll2rdyie{}; 
        ///PLL3 ready Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pll3rdyie{}; 
        ///LSE clock security system Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lsecssie{}; 
    }
    namespace RccCifr{    ///<RCC Clock Source Interrupt Flag          Register
        using Addr = Register::Address<0x58024464,0xfffff800,0x00000000,std::uint32_t>;
        ///LSI ready Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyf{}; 
        ///LSE ready Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyf{}; 
        ///HSI ready Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsirdyf{}; 
        ///HSE ready Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hserdyf{}; 
        ///CSI ready Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> csirdy{}; 
        ///RC48 ready Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rc48rdyf{}; 
        ///PLL1 ready Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pll1rdyf{}; 
        ///PLL2 ready Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pll2rdyf{}; 
        ///PLL3 ready Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pll3rdyf{}; 
        ///LSE clock security system Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lsecssf{}; 
        ///HSE clock security system Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hsecssf{}; 
    }
    namespace RccCicr{    ///<RCC Clock Source Interrupt Clear          Register
        using Addr = Register::Address<0x58024468,0xfffff800,0x00000000,std::uint32_t>;
        ///LSI ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyc{}; 
        ///LSE ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyc{}; 
        ///HSI ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsirdyc{}; 
        ///HSE ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hserdyc{}; 
        ///CSI ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hseReadyInterruptClear{}; 
        ///RC48 ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rc48rdyc{}; 
        ///PLL1 ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pll1rdyc{}; 
        ///PLL2 ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pll2rdyc{}; 
        ///PLL3 ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pll3rdyc{}; 
        ///LSE clock security system Interrupt              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lsecssc{}; 
        ///HSE clock security system Interrupt              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hsecssc{}; 
    }
    namespace RccBdcr{    ///<RCC Backup Domain Control          Register
        using Addr = Register::Address<0x58024470,0xfffe7c80,0x00000000,std::uint32_t>;
        ///LSE oscillator enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lseon{}; 
        ///LSE oscillator ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdy{}; 
        ///LSE oscillator bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lsebyp{}; 
        ///LSE oscillator driving              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> lsedrv{}; 
        ///LSE clock security system              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lsecsson{}; 
        ///LSE clock security system failure              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lsecssd{}; 
        ///RTC clock source selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rtcsrc{}; 
        ///RTC clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rtcen{}; 
        ///VSwitch domain software              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> vswrst{}; 
    }
    namespace RccCsr{    ///<RCC Clock Control and Status          Register
        using Addr = Register::Address<0x58024474,0xfffffffc,0x00000000,std::uint32_t>;
        ///LSI oscillator enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsion{}; 
        ///LSI oscillator ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lsirdy{}; 
    }
    namespace RccAhb3rstr{    ///<RCC AHB3 Reset Register
        using Addr = Register::Address<0x5802447c,0x7ffeafce,0x00000000,std::uint32_t>;
        ///MDMA block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mdmarst{}; 
        ///DMA2D block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dma2drst{}; 
        ///JPGDEC block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jpgdecrst{}; 
        ///FMC block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fmcrst{}; 
        ///QUADSPI and QUADSPI delay block              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> qspirst{}; 
        ///SDMMC1 and SDMMC1 delay block              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sdmmc1rst{}; 
        ///CPU reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cpurst{}; 
    }
    namespace RccAhb1rstr{    ///<RCC AHB1 Peripheral Reset          Register
        using Addr = Register::Address<0x58024480,0xf5ff7fdc,0x00000000,std::uint32_t>;
        ///DMA1 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dma1rst{}; 
        ///DMA2 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dma2rst{}; 
        ///ADC1&2 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adc12rst{}; 
        ///ETH1MAC block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eth1macrst{}; 
        ///USB1OTG block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> usb1otgrst{}; 
        ///USB2OTG block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> usb2otgrst{}; 
    }
    namespace RccAhb2rstr{    ///<RCC AHB2 Peripheral Reset          Register
        using Addr = Register::Address<0x58024484,0xfffffd8e,0x00000000,std::uint32_t>;
        ///CAMITF block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> camitfrst{}; 
        ///Cryptography block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cryptrst{}; 
        ///Hash block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hashrst{}; 
        ///Random Number Generator block              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rngrst{}; 
        ///SDMMC2 and SDMMC2 Delay block              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sdmmc2rst{}; 
    }
    namespace RccAhb4rstr{    ///<RCC AHB4 Peripheral Reset          Register
        using Addr = Register::Address<0x58024488,0xfcd7f800,0x00000000,std::uint32_t>;
        ///GPIO block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioarst{}; 
        ///GPIO block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpiobrst{}; 
        ///GPIO block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpiocrst{}; 
        ///GPIO block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpiodrst{}; 
        ///GPIO block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioerst{}; 
        ///GPIO block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpiofrst{}; 
        ///GPIO block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpiogrst{}; 
        ///GPIO block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpiohrst{}; 
        ///GPIO block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gpioirst{}; 
        ///GPIO block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpiojrst{}; 
        ///GPIO block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gpiokrst{}; 
        ///CRC block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> crcrst{}; 
        ///BDMA block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> bdmarst{}; 
        ///ADC3 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adc3rst{}; 
        ///HSEM block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> hsemrst{}; 
    }
    namespace RccApb3rstr{    ///<RCC APB3 Peripheral Reset          Register
        using Addr = Register::Address<0x5802448c,0xfffffff7,0x00000000,std::uint32_t>;
        ///LTDC block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ltdcrst{}; 
    }
    namespace RccApb1lrstr{    ///<RCC APB1 Peripheral Reset          Register
        using Addr = Register::Address<0x58024490,0x17003c00,0x00000000,std::uint32_t>;
        ///TIM block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2rst{}; 
        ///TIM block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3rst{}; 
        ///TIM block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4rst{}; 
        ///TIM block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5rst{}; 
        ///TIM block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6rst{}; 
        ///TIM block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7rst{}; 
        ///TIM block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tim12rst{}; 
        ///TIM block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tim13rst{}; 
        ///TIM block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tim14rst{}; 
        ///TIM block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lptim1rst{}; 
        ///SPI2 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2rst{}; 
        ///SPI3 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3rst{}; 
        ///SPDIFRX block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> spdifrxrst{}; 
        ///USART2 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2rst{}; 
        ///USART3 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3rst{}; 
        ///UART4 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4rst{}; 
        ///UART5 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5rst{}; 
        ///I2C1 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1rst{}; 
        ///I2C2 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2rst{}; 
        ///I2C3 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2c3rst{}; 
        ///HDMI-CEC block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> hdmicecrst{}; 
        ///DAC1 and 2 Blocks Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dac12rst{}; 
        ///USART7 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> usart7rst{}; 
        ///USART8 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> usart8rst{}; 
    }
    namespace RccApb1hrstr{    ///<RCC APB1 Peripheral Reset          Register
        using Addr = Register::Address<0x58024494,0xfffffec9,0x00000000,std::uint32_t>;
        ///Clock Recovery System              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crsrst{}; 
        ///SWPMI block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swprst{}; 
        ///OPAMP block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> opamprst{}; 
        ///MDIOS block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mdiosrst{}; 
        ///FDCAN block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fdcanrst{}; 
    }
    namespace RccApb2rstr{    ///<RCC APB2 Peripheral Reset          Register
        using Addr = Register::Address<0x58024498,0xce28cfcc,0x00000000,std::uint32_t>;
        ///TIM1 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim1rst{}; 
        ///TIM8 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim8rst{}; 
        ///USART1 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usart1rst{}; 
        ///USART6 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usart6rst{}; 
        ///SPI1 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1rst{}; 
        ///SPI4 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spi4rst{}; 
        ///TIM15 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim15rst{}; 
        ///TIM16 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim16rst{}; 
        ///TIM17 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim17rst{}; 
        ///SPI5 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> spi5rst{}; 
        ///SAI1 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sai1rst{}; 
        ///SAI2 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> sai2rst{}; 
        ///SAI3 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> sai3rst{}; 
        ///DFSDM1 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dfsdm1rst{}; 
        ///HRTIM block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> hrtimrst{}; 
    }
    namespace RccApb4rstr{    ///<RCC APB4 Peripheral Reset          Register
        using Addr = Register::Address<0x5802449c,0xffdf2155,0x00000000,std::uint32_t>;
        ///SYSCFG block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syscfgrst{}; 
        ///LPUART1 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lpuart1rst{}; 
        ///SPI6 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi6rst{}; 
        ///I2C4 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> i2c4rst{}; 
        ///LPTIM2 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lptim2rst{}; 
        ///LPTIM3 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lptim3rst{}; 
        ///LPTIM4 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lptim4rst{}; 
        ///LPTIM5 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lptim5rst{}; 
        ///COMP12 Blocks Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> comp12rst{}; 
        ///VREF block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> vrefrst{}; 
        ///SAI4 block reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sai4rst{}; 
    }
    namespace RccGcr{    ///<RCC Global Control Register
        using Addr = Register::Address<0x580244a0,0xfffffffe,0x00000000,std::uint32_t>;
        ///WWDG1 reset scope control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ww1rsc{}; 
    }
    namespace RccD3amr{    ///<RCC D3 Autonomous mode          Register
        using Addr = Register::Address<0x580244a8,0xced62156,0x00000000,std::uint32_t>;
        ///BDMA and DMAMUX Autonomous mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bdmaamen{}; 
        ///LPUART1 Autonomous mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lpuart1amen{}; 
        ///SPI6 Autonomous mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi6amen{}; 
        ///I2C4 Autonomous mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> i2c4amen{}; 
        ///LPTIM2 Autonomous mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lptim2amen{}; 
        ///LPTIM3 Autonomous mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lptim3amen{}; 
        ///LPTIM4 Autonomous mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lptim4amen{}; 
        ///LPTIM5 Autonomous mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lptim5amen{}; 
        ///COMP12 Autonomous mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> comp12amen{}; 
        ///VREF Autonomous mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> vrefamen{}; 
        ///RTC Autonomous mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rtcamen{}; 
        ///CRC Autonomous mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> crcamen{}; 
        ///SAI4 Autonomous mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sai4amen{}; 
        ///ADC3 Autonomous mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adc3amen{}; 
        ///Backup RAM Autonomous mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> bkpsramamen{}; 
        ///SRAM4 Autonomous mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> sram4amen{}; 
    }
    namespace RccRsr{    ///<RCC Reset Status Register
        using Addr = Register::Address<0x580244d0,0xaa04ffff,0x00000000,std::uint32_t>;
        ///Remove reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rmvf{}; 
        ///CPU reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cpurstf{}; 
        ///D1 domain power switch reset              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> d1rstf{}; 
        ///D2 domain power switch reset              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> d2rstf{}; 
        ///BOR reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> borrstf{}; 
        ///Pin reset flag (NRST)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinrstf{}; 
        ///POR/PDR reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> porrstf{}; 
        ///System reset from CPU reset              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> sftrstf{}; 
        ///Independent Watchdog reset              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> iwdg1rstf{}; 
        ///Window Watchdog reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> wwdg1rstf{}; 
        ///Reset due to illegal D1 DStandby or CPU              CStop flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> lpwrrstf{}; 
    }
    namespace RccC1Rsr{    ///<RCC Reset Status Register
        using Addr = Register::Address<0x58024530,0xaa04ffff,0x00000000,std::uint32_t>;
        ///Remove reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rmvf{}; 
        ///CPU reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cpurstf{}; 
        ///D1 domain power switch reset              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> d1rstf{}; 
        ///D2 domain power switch reset              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> d2rstf{}; 
        ///BOR reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> borrstf{}; 
        ///Pin reset flag (NRST)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinrstf{}; 
        ///POR/PDR reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> porrstf{}; 
        ///System reset from CPU reset              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> sftrstf{}; 
        ///Independent Watchdog reset              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> iwdg1rstf{}; 
        ///Window Watchdog reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> wwdg1rstf{}; 
        ///Reset due to illegal D1 DStandby or CPU              CStop flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> lpwrrstf{}; 
    }
    namespace RccC1Ahb3enr{    ///<RCC AHB3 Clock Register
        using Addr = Register::Address<0x58024534,0xfffeafce,0x00000000,std::uint32_t>;
        ///MDMA Peripheral Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mdmaen{}; 
        ///DMA2D Peripheral Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dma2den{}; 
        ///JPGDEC Peripheral Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jpgdecen{}; 
        ///FMC Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fmcen{}; 
        ///QUADSPI and QUADSPI Delay Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> qspien{}; 
        ///SDMMC1 and SDMMC1 Delay Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sdmmc1en{}; 
    }
    namespace RccAhb3enr{    ///<RCC AHB3 Clock Register
        using Addr = Register::Address<0x580244d4,0xfffeafce,0x00000000,std::uint32_t>;
        ///MDMA Peripheral Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mdmaen{}; 
        ///DMA2D Peripheral Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dma2den{}; 
        ///JPGDEC Peripheral Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jpgdecen{}; 
        ///FMC Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fmcen{}; 
        ///QUADSPI and QUADSPI Delay Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> qspien{}; 
        ///SDMMC1 and SDMMC1 Delay Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sdmmc1en{}; 
    }
    namespace RccAhb1enr{    ///<RCC AHB1 Clock Register
        using Addr = Register::Address<0x580244d8,0xe1fc7fdc,0x00000000,std::uint32_t>;
        ///DMA1 Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dma1en{}; 
        ///DMA2 Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dma2en{}; 
        ///ADC1/2 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adc12en{}; 
        ///Ethernet MAC bus interface Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eth1macen{}; 
        ///Ethernet Transmission Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eth1txen{}; 
        ///Ethernet Reception Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eth1rxen{}; 
        ///USB1OTG Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> usb1otgen{}; 
        ///USB_PHY1 Clocks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> usb1ulpien{}; 
        ///USB2OTG Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> usb2otgen{}; 
        ///USB_PHY2 Clocks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> usb2ulpien{}; 
    }
    namespace RccC1Ahb1enr{    ///<RCC AHB1 Clock Register
        using Addr = Register::Address<0x58024538,0xe1fc7fdc,0x00000000,std::uint32_t>;
        ///DMA1 Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dma1en{}; 
        ///DMA2 Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dma2en{}; 
        ///ADC1/2 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adc12en{}; 
        ///Ethernet MAC bus interface Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eth1macen{}; 
        ///Ethernet Transmission Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eth1txen{}; 
        ///Ethernet Reception Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eth1rxen{}; 
        ///USB1OTG Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> usb1otgen{}; 
        ///USB_PHY1 Clocks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> usb1ulpien{}; 
        ///USB2OTG Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> usb2otgen{}; 
        ///USB_PHY2 Clocks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> usb2ulpien{}; 
    }
    namespace RccC1Ahb2enr{    ///<RCC AHB2 Clock Register
        using Addr = Register::Address<0x5802453c,0x1ffffd8e,0x00000000,std::uint32_t>;
        ///CAMITF peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> camitfen{}; 
        ///CRYPT peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crypten{}; 
        ///HASH peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hashen{}; 
        ///RNG peripheral clocks              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rngen{}; 
        ///SDMMC2 and SDMMC2 delay clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sdmmc2en{}; 
        ///SRAM1 block enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> sram1en{}; 
        ///SRAM2 block enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sram2en{}; 
        ///SRAM3 block enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> sram3en{}; 
    }
    namespace RccAhb2enr{    ///<RCC AHB2 Clock Register
        using Addr = Register::Address<0x580244dc,0x1ffffd8e,0x00000000,std::uint32_t>;
        ///CAMITF peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> camitfen{}; 
        ///CRYPT peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crypten{}; 
        ///HASH peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hashen{}; 
        ///RNG peripheral clocks              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rngen{}; 
        ///SDMMC2 and SDMMC2 delay clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sdmmc2en{}; 
        ///SRAM1 block enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> sram1en{}; 
        ///SRAM2 block enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sram2en{}; 
        ///SRAM3 block enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> sram3en{}; 
    }
    namespace RccAhb4enr{    ///<RCC AHB4 Clock Register
        using Addr = Register::Address<0x580244e0,0xecd7f800,0x00000000,std::uint32_t>;
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioaen{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpioben{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpiocen{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpioden{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioeen{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpiofen{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpiogen{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpiohen{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gpioien{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpiojen{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gpioken{}; 
        ///CRC peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> crcen{}; 
        ///BDMA and DMAMUX2 Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> bdmaen{}; 
        ///ADC3 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adc3en{}; 
        ///HSEM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> hsemen{}; 
        ///Backup RAM Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> bkpramen{}; 
    }
    namespace RccC1Ahb4enr{    ///<RCC AHB4 Clock Register
        using Addr = Register::Address<0x58024540,0xecd7f800,0x00000000,std::uint32_t>;
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioaen{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpioben{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpiocen{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpioden{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioeen{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpiofen{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpiogen{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpiohen{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gpioien{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpiojen{}; 
        ///0GPIO peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gpioken{}; 
        ///CRC peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> crcen{}; 
        ///BDMA and DMAMUX2 Clock              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> bdmaen{}; 
        ///ADC3 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adc3en{}; 
        ///HSEM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> hsemen{}; 
        ///Backup RAM Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> bkpramen{}; 
    }
    namespace RccC1Apb3enr{    ///<RCC APB3 Clock Register
        using Addr = Register::Address<0x58024544,0xffffffb7,0x00000000,std::uint32_t>;
        ///LTDC peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ltdcen{}; 
        ///WWDG1 Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wwdg1en{}; 
    }
    namespace RccApb3enr{    ///<RCC APB3 Clock Register
        using Addr = Register::Address<0x580244e4,0xffffffb7,0x00000000,std::uint32_t>;
        ///LTDC peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ltdcen{}; 
        ///WWDG1 Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wwdg1en{}; 
    }
    namespace RccApb1lenr{    ///<RCC APB1 Clock Register
        using Addr = Register::Address<0x580244e8,0x17003c00,0x00000000,std::uint32_t>;
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2en{}; 
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3en{}; 
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4en{}; 
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5en{}; 
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6en{}; 
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7en{}; 
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tim12en{}; 
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tim13en{}; 
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tim14en{}; 
        ///LPTIM1 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lptim1en{}; 
        ///SPI2 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2en{}; 
        ///SPI3 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3en{}; 
        ///SPDIFRX Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> spdifrxen{}; 
        ///USART2 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2en{}; 
        ///USART3 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3en{}; 
        ///UART4 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4en{}; 
        ///UART5 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5en{}; 
        ///I2C1 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1en{}; 
        ///I2C2 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2en{}; 
        ///I2C3 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2c3en{}; 
        ///HDMI-CEC peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> hdmicecen{}; 
        ///DAC1&2 peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dac12en{}; 
        ///USART7 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> usart7en{}; 
        ///USART8 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> usart8en{}; 
    }
    namespace RccC1Apb1lenr{    ///<RCC APB1 Clock Register
        using Addr = Register::Address<0x58024548,0x17003c00,0x00000000,std::uint32_t>;
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2en{}; 
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3en{}; 
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4en{}; 
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5en{}; 
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6en{}; 
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7en{}; 
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tim12en{}; 
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tim13en{}; 
        ///TIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tim14en{}; 
        ///LPTIM1 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lptim1en{}; 
        ///SPI2 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2en{}; 
        ///SPI3 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3en{}; 
        ///SPDIFRX Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> spdifrxen{}; 
        ///USART2 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2en{}; 
        ///USART3 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3en{}; 
        ///UART4 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4en{}; 
        ///UART5 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5en{}; 
        ///I2C1 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1en{}; 
        ///I2C2 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2en{}; 
        ///I2C3 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2c3en{}; 
        ///HDMI-CEC peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> hdmicecen{}; 
        ///DAC1&2 peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dac12en{}; 
        ///USART7 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> usart7en{}; 
        ///USART8 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> usart8en{}; 
    }
    namespace RccApb1henr{    ///<RCC APB1 Clock Register
        using Addr = Register::Address<0x580244ec,0xfffffec9,0x00000000,std::uint32_t>;
        ///Clock Recovery System peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crsen{}; 
        ///SWPMI Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swpen{}; 
        ///OPAMP peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> opampen{}; 
        ///MDIOS peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mdiosen{}; 
        ///FDCAN Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fdcanen{}; 
    }
    namespace RccC1Apb1henr{    ///<RCC APB1 Clock Register
        using Addr = Register::Address<0x5802454c,0xfffffec9,0x00000000,std::uint32_t>;
        ///Clock Recovery System peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crsen{}; 
        ///SWPMI Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swpen{}; 
        ///OPAMP peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> opampen{}; 
        ///MDIOS peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mdiosen{}; 
        ///FDCAN Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fdcanen{}; 
    }
    namespace RccC1Apb2enr{    ///<RCC APB2 Clock Register
        using Addr = Register::Address<0x58024550,0xce28cfcc,0x00000000,std::uint32_t>;
        ///TIM1 peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim1en{}; 
        ///TIM8 peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim8en{}; 
        ///USART1 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usart1en{}; 
        ///USART6 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usart6en{}; 
        ///SPI1 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1en{}; 
        ///SPI4 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spi4en{}; 
        ///TIM16 peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim16en{}; 
        ///TIM15 peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim15en{}; 
        ///TIM17 peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim17en{}; 
        ///SPI5 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> spi5en{}; 
        ///SAI1 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sai1en{}; 
        ///SAI2 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> sai2en{}; 
        ///SAI3 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> sai3en{}; 
        ///DFSDM1 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dfsdm1en{}; 
        ///HRTIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> hrtimen{}; 
    }
    namespace RccApb2enr{    ///<RCC APB2 Clock Register
        using Addr = Register::Address<0x580244f0,0xce28cfcc,0x00000000,std::uint32_t>;
        ///TIM1 peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim1en{}; 
        ///TIM8 peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim8en{}; 
        ///USART1 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usart1en{}; 
        ///USART6 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usart6en{}; 
        ///SPI1 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1en{}; 
        ///SPI4 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spi4en{}; 
        ///TIM16 peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim16en{}; 
        ///TIM15 peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim15en{}; 
        ///TIM17 peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim17en{}; 
        ///SPI5 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> spi5en{}; 
        ///SAI1 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sai1en{}; 
        ///SAI2 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> sai2en{}; 
        ///SAI3 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> sai3en{}; 
        ///DFSDM1 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dfsdm1en{}; 
        ///HRTIM peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> hrtimen{}; 
    }
    namespace RccApb4enr{    ///<RCC APB4 Clock Register
        using Addr = Register::Address<0x580244f4,0xffde2155,0x00000000,std::uint32_t>;
        ///SYSCFG peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syscfgen{}; 
        ///LPUART1 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lpuart1en{}; 
        ///SPI6 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi6en{}; 
        ///I2C4 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> i2c4en{}; 
        ///LPTIM2 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lptim2en{}; 
        ///LPTIM3 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lptim3en{}; 
        ///LPTIM4 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lptim4en{}; 
        ///LPTIM5 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lptim5en{}; 
        ///COMP1/2 peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> comp12en{}; 
        ///VREF peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> vrefen{}; 
        ///RTC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rtcapben{}; 
        ///SAI4 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sai4en{}; 
    }
    namespace RccC1Apb4enr{    ///<RCC APB4 Clock Register
        using Addr = Register::Address<0x58024554,0xffde2155,0x00000000,std::uint32_t>;
        ///SYSCFG peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syscfgen{}; 
        ///LPUART1 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lpuart1en{}; 
        ///SPI6 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi6en{}; 
        ///I2C4 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> i2c4en{}; 
        ///LPTIM2 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lptim2en{}; 
        ///LPTIM3 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lptim3en{}; 
        ///LPTIM4 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lptim4en{}; 
        ///LPTIM5 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lptim5en{}; 
        ///COMP1/2 peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> comp12en{}; 
        ///VREF peripheral clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> vrefen{}; 
        ///RTC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rtcapben{}; 
        ///SAI4 Peripheral Clocks              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sai4en{}; 
    }
    namespace RccC1Ahb3lpenr{    ///<RCC AHB3 Sleep Clock Register
        using Addr = Register::Address<0x5802455c,0x0ffeaece,0x00000000,std::uint32_t>;
        ///MDMA Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mdmalpen{}; 
        ///DMA2D Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dma2dlpen{}; 
        ///JPGDEC Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jpgdeclpen{}; 
        ///FLITF Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> flitflpen{}; 
        ///FMC Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fmclpen{}; 
        ///QUADSPI and QUADSPI Delay Clock Enable              During CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> qspilpen{}; 
        ///SDMMC1 and SDMMC1 Delay Clock Enable              During CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sdmmc1lpen{}; 
        ///D1DTCM1 Block Clock Enable During CSleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> d1dtcm1lpen{}; 
        ///D1 DTCM2 Block Clock Enable During              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dtcm2lpen{}; 
        ///D1ITCM Block Clock Enable During CSleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> itcmlpen{}; 
        ///AXISRAM Block Clock Enable During CSleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> axisramlpen{}; 
    }
    namespace RccAhb3lpenr{    ///<RCC AHB3 Sleep Clock Register
        using Addr = Register::Address<0x580244fc,0x0ffeaece,0x00000000,std::uint32_t>;
        ///MDMA Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mdmalpen{}; 
        ///DMA2D Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dma2dlpen{}; 
        ///JPGDEC Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jpgdeclpen{}; 
        ///FLITF Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> flitflpen{}; 
        ///FMC Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fmclpen{}; 
        ///QUADSPI and QUADSPI Delay Clock Enable              During CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> qspilpen{}; 
        ///SDMMC1 and SDMMC1 Delay Clock Enable              During CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sdmmc1lpen{}; 
        ///D1DTCM1 Block Clock Enable During CSleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> d1dtcm1lpen{}; 
        ///D1 DTCM2 Block Clock Enable During              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dtcm2lpen{}; 
        ///D1ITCM Block Clock Enable During CSleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> itcmlpen{}; 
        ///AXISRAM Block Clock Enable During CSleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> axisramlpen{}; 
    }
    namespace RccAhb1lpenr{    ///<RCC AHB1 Sleep Clock Register
        using Addr = Register::Address<0x58024500,0xe1fc7fdc,0x00000000,std::uint32_t>;
        ///DMA1 Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dma1lpen{}; 
        ///DMA2 Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dma2lpen{}; 
        ///ADC1/2 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adc12lpen{}; 
        ///Ethernet MAC bus interface Clock Enable              During CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eth1maclpen{}; 
        ///Ethernet Transmission Clock Enable              During CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eth1txlpen{}; 
        ///Ethernet Reception Clock Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eth1rxlpen{}; 
        ///USB1OTG peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> usb1otglpen{}; 
        ///USB_PHY1 clock enable during CSleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> usb1ulpilpen{}; 
        ///USB2OTG peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> usb2otglpen{}; 
        ///USB_PHY2 clocks enable during CSleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> usb2ulpilpen{}; 
    }
    namespace RccC1Ahb1lpenr{    ///<RCC AHB1 Sleep Clock Register
        using Addr = Register::Address<0x58024560,0xe1fc7fdc,0x00000000,std::uint32_t>;
        ///DMA1 Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dma1lpen{}; 
        ///DMA2 Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dma2lpen{}; 
        ///ADC1/2 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adc12lpen{}; 
        ///Ethernet MAC bus interface Clock Enable              During CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eth1maclpen{}; 
        ///Ethernet Transmission Clock Enable              During CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eth1txlpen{}; 
        ///Ethernet Reception Clock Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eth1rxlpen{}; 
        ///USB1OTG peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> usb1otglpen{}; 
        ///USB_PHY1 clock enable during CSleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> usb1ulpilpen{}; 
        ///USB2OTG peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> usb2otglpen{}; 
        ///USB_PHY2 clocks enable during CSleep              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> usb2ulpilpen{}; 
    }
    namespace RccC1Ahb2lpenr{    ///<RCC AHB2 Sleep Clock Register
        using Addr = Register::Address<0x58024564,0x1ffffd8e,0x00000000,std::uint32_t>;
        ///CAMITF peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> camitflpen{}; 
        ///CRYPT peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cryptlpen{}; 
        ///HASH peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hashlpen{}; 
        ///SDMMC2 and SDMMC2 Delay Clock Enable              During CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sdmmc2lpen{}; 
        ///RNG peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rnglpen{}; 
        ///SRAM1 Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> sram1lpen{}; 
        ///SRAM2 Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sram2lpen{}; 
        ///SRAM3 Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> sram3lpen{}; 
    }
    namespace RccAhb2lpenr{    ///<RCC AHB2 Sleep Clock Register
        using Addr = Register::Address<0x58024504,0x1ffffd8e,0x00000000,std::uint32_t>;
        ///CAMITF peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> camitflpen{}; 
        ///CRYPT peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cryptlpen{}; 
        ///HASH peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hashlpen{}; 
        ///SDMMC2 and SDMMC2 Delay Clock Enable              During CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sdmmc2lpen{}; 
        ///RNG peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rnglpen{}; 
        ///SRAM1 Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> sram1lpen{}; 
        ///SRAM2 Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sram2lpen{}; 
        ///SRAM3 Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> sram3lpen{}; 
    }
    namespace RccAhb4lpenr{    ///<RCC AHB4 Sleep Clock Register
        using Addr = Register::Address<0x58024508,0xced7f800,0x00000000,std::uint32_t>;
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioalpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpioblpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpioclpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpiodlpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioelpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpioflpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpioglpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpiohlpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gpioilpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpiojlpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gpioklpen{}; 
        ///CRC peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> crclpen{}; 
        ///BDMA Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> bdmalpen{}; 
        ///ADC3 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adc3lpen{}; 
        ///Backup RAM Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> bkpramlpen{}; 
        ///SRAM4 Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> sram4lpen{}; 
    }
    namespace RccC1Ahb4lpenr{    ///<RCC AHB4 Sleep Clock Register
        using Addr = Register::Address<0x58024568,0xced7f800,0x00000000,std::uint32_t>;
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioalpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpioblpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpioclpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpiodlpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioelpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpioflpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpioglpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpiohlpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gpioilpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpiojlpen{}; 
        ///GPIO peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gpioklpen{}; 
        ///CRC peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> crclpen{}; 
        ///BDMA Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> bdmalpen{}; 
        ///ADC3 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adc3lpen{}; 
        ///Backup RAM Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> bkpramlpen{}; 
        ///SRAM4 Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> sram4lpen{}; 
    }
    namespace RccC1Apb3lpenr{    ///<RCC APB3 Sleep Clock Register
        using Addr = Register::Address<0x5802456c,0xffffffb7,0x00000000,std::uint32_t>;
        ///LTDC peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ltdclpen{}; 
        ///WWDG1 Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wwdg1lpen{}; 
    }
    namespace RccApb3lpenr{    ///<RCC APB3 Sleep Clock Register
        using Addr = Register::Address<0x5802450c,0xffffffb7,0x00000000,std::uint32_t>;
        ///LTDC peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ltdclpen{}; 
        ///WWDG1 Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wwdg1lpen{}; 
    }
    namespace RccApb1llpenr{    ///<RCC APB1 Low Sleep Clock          Register
        using Addr = Register::Address<0x58024510,0x17003c00,0x00000000,std::uint32_t>;
        ///TIM2 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2lpen{}; 
        ///TIM3 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3lpen{}; 
        ///TIM4 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4lpen{}; 
        ///TIM5 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5lpen{}; 
        ///TIM6 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6lpen{}; 
        ///TIM7 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7lpen{}; 
        ///TIM12 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tim12lpen{}; 
        ///TIM13 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tim13lpen{}; 
        ///TIM14 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tim14lpen{}; 
        ///LPTIM1 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lptim1lpen{}; 
        ///SPI2 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2lpen{}; 
        ///SPI3 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3lpen{}; 
        ///SPDIFRX Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> spdifrxlpen{}; 
        ///USART2 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2lpen{}; 
        ///USART3 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3lpen{}; 
        ///UART4 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4lpen{}; 
        ///UART5 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5lpen{}; 
        ///I2C1 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1lpen{}; 
        ///I2C2 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2lpen{}; 
        ///I2C3 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2c3lpen{}; 
        ///HDMI-CEC Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> hdmiceclpen{}; 
        ///DAC1/2 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dac12lpen{}; 
        ///USART7 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> usart7lpen{}; 
        ///USART8 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> usart8lpen{}; 
    }
    namespace RccC1Apb1llpenr{    ///<RCC APB1 Low Sleep Clock          Register
        using Addr = Register::Address<0x58024570,0x17003c00,0x00000000,std::uint32_t>;
        ///TIM2 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2lpen{}; 
        ///TIM3 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3lpen{}; 
        ///TIM4 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4lpen{}; 
        ///TIM5 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tim5lpen{}; 
        ///TIM6 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6lpen{}; 
        ///TIM7 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7lpen{}; 
        ///TIM12 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tim12lpen{}; 
        ///TIM13 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tim13lpen{}; 
        ///TIM14 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tim14lpen{}; 
        ///LPTIM1 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lptim1lpen{}; 
        ///SPI2 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2lpen{}; 
        ///SPI3 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3lpen{}; 
        ///SPDIFRX Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> spdifrxlpen{}; 
        ///USART2 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2lpen{}; 
        ///USART3 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3lpen{}; 
        ///UART4 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4lpen{}; 
        ///UART5 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5lpen{}; 
        ///I2C1 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1lpen{}; 
        ///I2C2 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2lpen{}; 
        ///I2C3 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2c3lpen{}; 
        ///HDMI-CEC Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> hdmiceclpen{}; 
        ///DAC1/2 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dac12lpen{}; 
        ///USART7 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> usart7lpen{}; 
        ///USART8 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> usart8lpen{}; 
    }
    namespace RccC1Apb1hlpenr{    ///<RCC APB1 High Sleep Clock          Register
        using Addr = Register::Address<0x58024574,0xfffffec9,0x00000000,std::uint32_t>;
        ///Clock Recovery System peripheral clock              enable during CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crslpen{}; 
        ///SWPMI Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swplpen{}; 
        ///OPAMP peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> opamplpen{}; 
        ///MDIOS peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mdioslpen{}; 
        ///FDCAN Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fdcanlpen{}; 
    }
    namespace RccApb1hlpenr{    ///<RCC APB1 High Sleep Clock          Register
        using Addr = Register::Address<0x58024514,0xfffffec9,0x00000000,std::uint32_t>;
        ///Clock Recovery System peripheral clock              enable during CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crslpen{}; 
        ///SWPMI Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swplpen{}; 
        ///OPAMP peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> opamplpen{}; 
        ///MDIOS peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mdioslpen{}; 
        ///FDCAN Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fdcanlpen{}; 
    }
    namespace RccApb2lpenr{    ///<RCC APB2 Sleep Clock Register
        using Addr = Register::Address<0x58024518,0xce28cfcc,0x00000000,std::uint32_t>;
        ///TIM1 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim1lpen{}; 
        ///TIM8 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim8lpen{}; 
        ///USART1 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usart1lpen{}; 
        ///USART6 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usart6lpen{}; 
        ///SPI1 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1lpen{}; 
        ///SPI4 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spi4lpen{}; 
        ///TIM15 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim15lpen{}; 
        ///TIM16 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim16lpen{}; 
        ///TIM17 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim17lpen{}; 
        ///SPI5 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> spi5lpen{}; 
        ///SAI1 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sai1lpen{}; 
        ///SAI2 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> sai2lpen{}; 
        ///SAI3 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> sai3lpen{}; 
        ///DFSDM1 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dfsdm1lpen{}; 
        ///HRTIM peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> hrtimlpen{}; 
    }
    namespace RccC1Apb2lpenr{    ///<RCC APB2 Sleep Clock Register
        using Addr = Register::Address<0x58024578,0xce28cfcc,0x00000000,std::uint32_t>;
        ///TIM1 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim1lpen{}; 
        ///TIM8 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim8lpen{}; 
        ///USART1 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usart1lpen{}; 
        ///USART6 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usart6lpen{}; 
        ///SPI1 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1lpen{}; 
        ///SPI4 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spi4lpen{}; 
        ///TIM15 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim15lpen{}; 
        ///TIM16 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim16lpen{}; 
        ///TIM17 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim17lpen{}; 
        ///SPI5 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> spi5lpen{}; 
        ///SAI1 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sai1lpen{}; 
        ///SAI2 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> sai2lpen{}; 
        ///SAI3 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> sai3lpen{}; 
        ///DFSDM1 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dfsdm1lpen{}; 
        ///HRTIM peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> hrtimlpen{}; 
    }
    namespace RccC1Apb4lpenr{    ///<RCC APB4 Sleep Clock Register
        using Addr = Register::Address<0x5802457c,0xffde2155,0x00000000,std::uint32_t>;
        ///SYSCFG peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syscfglpen{}; 
        ///LPUART1 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lpuart1lpen{}; 
        ///SPI6 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi6lpen{}; 
        ///I2C4 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> i2c4lpen{}; 
        ///LPTIM2 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lptim2lpen{}; 
        ///LPTIM3 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lptim3lpen{}; 
        ///LPTIM4 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lptim4lpen{}; 
        ///LPTIM5 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lptim5lpen{}; 
        ///COMP1/2 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> comp12lpen{}; 
        ///VREF peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> vreflpen{}; 
        ///RTC APB Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rtcapblpen{}; 
        ///SAI4 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sai4lpen{}; 
    }
    namespace RccApb4lpenr{    ///<RCC APB4 Sleep Clock Register
        using Addr = Register::Address<0x5802451c,0xffde2155,0x00000000,std::uint32_t>;
        ///SYSCFG peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syscfglpen{}; 
        ///LPUART1 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lpuart1lpen{}; 
        ///SPI6 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi6lpen{}; 
        ///I2C4 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> i2c4lpen{}; 
        ///LPTIM2 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lptim2lpen{}; 
        ///LPTIM3 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lptim3lpen{}; 
        ///LPTIM4 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lptim4lpen{}; 
        ///LPTIM5 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lptim5lpen{}; 
        ///COMP1/2 peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> comp12lpen{}; 
        ///VREF peripheral clock enable during              CSleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> vreflpen{}; 
        ///RTC APB Clock Enable During CSleep              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rtcapblpen{}; 
        ///SAI4 Peripheral Clocks Enable During              CSleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sai4lpen{}; 
    }
}
