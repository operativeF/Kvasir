#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System configuration controller
    namespace SyscfgPmcr{    ///<peripheral mode configuration          register
        using Addr = Register::Address<0x58000404,0xf01ffe00,0x00000000,std::uint32_t>;
        ///I2C1 Fm+
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> i2c1fmp{}; 
        ///I2C2 Fm+
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> i2c2fmp{}; 
        ///I2C3 Fm+
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> i2c3fmp{}; 
        ///I2C4 Fm+
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> i2c4fmp{}; 
        ///PB(6) Fm+
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pb6fmp{}; 
        ///PB(7) Fast Mode Plus
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pb7fmp{}; 
        ///PB(8) Fast Mode Plus
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pb8fmp{}; 
        ///PB(9) Fm+
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pb9fmp{}; 
        ///Booster Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> booste{}; 
        ///Ethernet PHY Interface              Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> epis{}; 
        ///PA0 Switch Open
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pa0so{}; 
        ///PA1 Switch Open
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pa1so{}; 
        ///PC2 Switch Open
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pc2so{}; 
        ///PC3 Switch Open
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pc3so{}; 
    }
    namespace SyscfgExticr1{    ///<external interrupt configuration register          1
        using Addr = Register::Address<0x58000408,0xffff0000,0x00000000,std::uint32_t>;
        ///EXTI x configuration (x = 0 to              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti3{}; 
        ///EXTI x configuration (x = 0 to              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti2{}; 
        ///EXTI x configuration (x = 0 to              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti1{}; 
        ///EXTI x configuration (x = 0 to              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti0{}; 
    }
    namespace SyscfgExticr2{    ///<external interrupt configuration register          2
        using Addr = Register::Address<0x5800040c,0xffff0000,0x00000000,std::uint32_t>;
        ///EXTI x configuration (x = 4 to              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti7{}; 
        ///EXTI x configuration (x = 4 to              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti6{}; 
        ///EXTI x configuration (x = 4 to              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti5{}; 
        ///EXTI x configuration (x = 4 to              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti4{}; 
    }
    namespace SyscfgExticr3{    ///<external interrupt configuration register          3
        using Addr = Register::Address<0x58000410,0xffff0000,0x00000000,std::uint32_t>;
        ///EXTI x configuration (x = 8 to              11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti11{}; 
        ///EXTI10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti10{}; 
        ///EXTI x configuration (x = 8 to              11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti9{}; 
        ///EXTI x configuration (x = 8 to              11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti8{}; 
    }
    namespace SyscfgExticr4{    ///<external interrupt configuration register          4
        using Addr = Register::Address<0x58000414,0xffff0000,0x00000000,std::uint32_t>;
        ///EXTI x configuration (x = 12 to              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti15{}; 
        ///EXTI x configuration (x = 12 to              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti14{}; 
        ///EXTI x configuration (x = 12 to              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti13{}; 
        ///EXTI x configuration (x = 12 to              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti12{}; 
    }
    namespace SyscfgCccsr{    ///<compensation cell control/status          register
        using Addr = Register::Address<0x58000420,0xfffefefc,0x00000000,std::uint32_t>;
        ///enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Code selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cs{}; 
        ///Compensation cell ready              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ready{}; 
        ///High-speed at low-voltage
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> hslv{}; 
    }
    namespace SyscfgCcvr{    ///<SYSCFG compensation cell value          register
        using Addr = Register::Address<0x58000424,0xffffff00,0x00000000,std::uint32_t>;
        ///NMOS compensation value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ncv{}; 
        ///PMOS compensation value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pcv{}; 
    }
    namespace SyscfgCccr{    ///<SYSCFG compensation cell code          register
        using Addr = Register::Address<0x58000428,0xffffff00,0x00000000,std::uint32_t>;
        ///NMOS compensation code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ncc{}; 
        ///PMOS compensation code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pcc{}; 
    }
    namespace SyscfgPkgr{    ///<SYSCFG package register
        using Addr = Register::Address<0x58000524,0xfffffff0,0x00000000,std::uint32_t>;
        ///Package
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pkg{}; 
    }
    namespace SyscfgUr0{    ///<SYSCFG user register 0
        using Addr = Register::Address<0x58000700,0xff00fffe,0x00000000,std::uint32_t>;
        ///Bank Swap
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bks{}; 
        ///Readout protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rdp{}; 
    }
    namespace SyscfgUr2{    ///<SYSCFG user register 2
        using Addr = Register::Address<0x58000708,0x0000fffc,0x00000000,std::uint32_t>;
        ///BOR_LVL Brownout Reset Threshold              Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> borh{}; 
        ///Boot Address 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bootAdd0{}; 
    }
    namespace SyscfgUr3{    ///<SYSCFG user register 3
        using Addr = Register::Address<0x5800070c,0x0000ffff,0x00000000,std::uint32_t>;
        ///Boot Address 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bootAdd1{}; 
    }
    namespace SyscfgUr4{    ///<SYSCFG user register 4
        using Addr = Register::Address<0x58000710,0xfffeffff,0x00000000,std::uint32_t>;
        ///Mass Erase Protected Area Disabled for              bank 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mepad1{}; 
    }
    namespace SyscfgUr5{    ///<SYSCFG user register 5
        using Addr = Register::Address<0x58000714,0xff00fffe,0x00000000,std::uint32_t>;
        ///Mass erase secured area disabled for              bank 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mesad1{}; 
        ///Write protection for flash bank              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wrpn1{}; 
    }
    namespace SyscfgUr6{    ///<SYSCFG user register 6
        using Addr = Register::Address<0x58000718,0xf000f000,0x00000000,std::uint32_t>;
        ///Protected area start address for bank              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> paBeg1{}; 
        ///Protected area end address for bank              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> paEnd1{}; 
    }
    namespace SyscfgUr7{    ///<SYSCFG user register 7
        using Addr = Register::Address<0x5800071c,0xf000f000,0x00000000,std::uint32_t>;
        ///Secured area start address for bank              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> saBeg1{}; 
        ///Secured area end address for bank              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> saEnd1{}; 
    }
    namespace SyscfgUr8{    ///<SYSCFG user register 8
        using Addr = Register::Address<0x58000720,0xfffefffe,0x00000000,std::uint32_t>;
        ///Mass erase protected area disabled for              bank 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mepad2{}; 
        ///Mass erase secured area disabled for              bank 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mesad2{}; 
    }
    namespace SyscfgUr9{    ///<SYSCFG user register 9
        using Addr = Register::Address<0x58000724,0xf000ff00,0x00000000,std::uint32_t>;
        ///Write protection for flash bank              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wrpn2{}; 
        ///Protected area start address for bank              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> paBeg2{}; 
    }
    namespace SyscfgUr10{    ///<SYSCFG user register 10
        using Addr = Register::Address<0x58000728,0xf000f000,0x00000000,std::uint32_t>;
        ///Protected area end address for bank              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> paEnd2{}; 
        ///Secured area start address for bank              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> saBeg2{}; 
    }
    namespace SyscfgUr11{    ///<SYSCFG user register 11
        using Addr = Register::Address<0x5800072c,0xfffef000,0x00000000,std::uint32_t>;
        ///Secured area end address for bank              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> saEnd2{}; 
        ///Independent Watchdog 1              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> iwdg1m{}; 
    }
    namespace SyscfgUr12{    ///<SYSCFG user register 12
        using Addr = Register::Address<0x58000730,0xfffeffff,0x00000000,std::uint32_t>;
        ///Secure mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> secure{}; 
    }
    namespace SyscfgUr13{    ///<SYSCFG user register 13
        using Addr = Register::Address<0x58000734,0xfffefffc,0x00000000,std::uint32_t>;
        ///Secured DTCM RAM Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sdrs{}; 
        ///D1 Standby reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> d1sbrst{}; 
    }
    namespace SyscfgUr14{    ///<SYSCFG user register 14
        using Addr = Register::Address<0x58000738,0xfffffffe,0x00000000,std::uint32_t>;
        ///D1 Stop Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> d1stprst{}; 
    }
    namespace SyscfgUr15{    ///<SYSCFG user register 15
        using Addr = Register::Address<0x5800073c,0xfffeffff,0x00000000,std::uint32_t>;
        ///Freeze independent watchdog in Standby              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fziwdgstb{}; 
    }
    namespace SyscfgUr16{    ///<SYSCFG user register 16
        using Addr = Register::Address<0x58000740,0xfffefffe,0x00000000,std::uint32_t>;
        ///Freeze independent watchdog in Stop              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fziwdgstp{}; 
        ///Private key programmed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pkp{}; 
    }
    namespace SyscfgUr17{    ///<SYSCFG user register 17
        using Addr = Register::Address<0x58000744,0xfffffffe,0x00000000,std::uint32_t>;
        ///I/O high speed / low              voltage
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ioHslv{}; 
    }
}
