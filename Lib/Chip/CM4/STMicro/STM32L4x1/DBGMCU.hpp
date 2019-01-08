#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//MCU debug component
    namespace DbgmcuIdcode{    ///<DBGMCU_IDCODE
        using Addr = Register::Address<0xe0042000,0x0000f000,0x00000000,std::uint32_t>;
        ///Device identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> devId{}; 
        ///Revision identifie
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> revId{}; 
    }
    namespace DbgmcuCr{    ///<Debug MCU configuration          register
        using Addr = Register::Address<0xe0042004,0xffffff18,0x00000000,std::uint32_t>;
        ///Debug Sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgSleep{}; 
        ///Debug Stop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbgStop{}; 
        ///Debug Standby mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dbgStandby{}; 
        ///Trace pin assignment              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> traceIoen{}; 
        ///Trace pin assignment              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> traceMode{}; 
    }
    namespace DbgmcuApb1fzr1{    ///<Debug MCU APB1 freeze          register1
        using Addr = Register::Address<0xe0042008,0x7d1fe3ce,0x00000000,std::uint32_t>;
        ///TIM2 counter stopped when core is              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgTim2Stop{}; 
        ///TIM6 counter stopped when core is              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dbgTim6Stop{}; 
        ///TIM7 counter stopped when core is              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dbgTim7Stop{}; 
        ///RTC counter stopped when core is              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbgRtcStop{}; 
        ///Window watchdog counter stopped when              core is halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dbgWwdgStop{}; 
        ///Independent watchdog counter stopped              when core is halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dbgIwdgStop{}; 
        ///I2C1 SMBUS timeout counter stopped when              core is halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dbgI2c1Stop{}; 
        ///I2C2 SMBUS timeout counter stopped when              core is halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dbgI2c2Stop{}; 
        ///I2C3 SMBUS timeout counter stopped when              core is halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dbgI2c3Stop{}; 
        ///bxCAN stopped when core is              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dbgCanStop{}; 
        ///LPTIM1 counter stopped when core is              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dbgLptim1Stop{}; 
    }
    namespace DbgmcuApb1fzr2{    ///<Debug MCU APB1 freeze register          2
        using Addr = Register::Address<0xe004200c,0xffffffdf,0x00000000,std::uint32_t>;
        ///LPTIM2 counter stopped when core is              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dbgLptim2Stop{}; 
    }
    namespace DbgmcuApb2fzr{    ///<Debug MCU APB2 freeze register
        using Addr = Register::Address<0xe0042010,0xfffcf7ff,0x00000000,std::uint32_t>;
        ///TIM1 counter stopped when core is              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dbgTim1Stop{}; 
        ///TIM15 counter stopped when core is              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dbgTim15Stop{}; 
        ///TIM16 counter stopped when core is              halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbgTim16Stop{}; 
    }
}
