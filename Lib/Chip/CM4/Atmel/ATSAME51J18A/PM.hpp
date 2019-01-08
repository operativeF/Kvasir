#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Power Manager
    namespace PmCtrla{    ///<Control A
        using Addr = Register::Address<0x40000400,0xfffffffb,0x00000000,std::uint8_t>;
        ///I/O Retention
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ioret{}; 
    }
    namespace PmSleepcfg{    ///<Sleep Configuration
        using Addr = Register::Address<0x40000401,0xfffffff8,0x00000000,std::uint8_t>;
        ///Sleep Mode
        enum class SleepmodeVal {
            idle0=0x00000000,     ///<CPU clock is OFF
            idle1=0x00000001,     ///<AHB clock is OFF
            idle2=0x00000002,     ///<APB clock are OFF
            standby=0x00000004,     ///<All Clocks are OFF
            hibernate=0x00000005,     ///<Backup domain is ON as well as some PDRAMs
            backup=0x00000006,     ///<Only Backup domain is powered ON
            off=0x00000007,     ///<All power domains are powered OFF
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,SleepmodeVal> sleepmode{}; 
        namespace SleepmodeValC{
            constexpr Register::FieldValue<decltype(sleepmode)::Type,SleepmodeVal::idle0> idle0{};
            constexpr Register::FieldValue<decltype(sleepmode)::Type,SleepmodeVal::idle1> idle1{};
            constexpr Register::FieldValue<decltype(sleepmode)::Type,SleepmodeVal::idle2> idle2{};
            constexpr Register::FieldValue<decltype(sleepmode)::Type,SleepmodeVal::standby> standby{};
            constexpr Register::FieldValue<decltype(sleepmode)::Type,SleepmodeVal::hibernate> hibernate{};
            constexpr Register::FieldValue<decltype(sleepmode)::Type,SleepmodeVal::backup> backup{};
            constexpr Register::FieldValue<decltype(sleepmode)::Type,SleepmodeVal::off> off{};
        }
    }
    namespace PmIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x40000404,0xfffffffe,0x00000000,std::uint8_t>;
        ///Sleep Mode Entry Ready Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sleeprdy{}; 
    }
    namespace PmIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x40000405,0xfffffffe,0x00000000,std::uint8_t>;
        ///Sleep Mode Entry Ready Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sleeprdy{}; 
    }
    namespace PmIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40000406,0xfffffffe,0x00000000,std::uint8_t>;
        ///Sleep Mode Entry Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sleeprdy{}; 
    }
    namespace PmStdbycfg{    ///<Standby Configuration
        using Addr = Register::Address<0x40000408,0xffffffcc,0x00000000,std::uint8_t>;
        ///Ram Configuration
        enum class RamcfgVal {
            ret=0x00000000,     ///<All the RAMs are retained
            partial=0x00000001,     ///<Only the first 32K bytes are retained
            off=0x00000002,     ///<All the RAMs are OFF
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RamcfgVal> ramcfg{}; 
        namespace RamcfgValC{
            constexpr Register::FieldValue<decltype(ramcfg)::Type,RamcfgVal::ret> ret{};
            constexpr Register::FieldValue<decltype(ramcfg)::Type,RamcfgVal::partial> partial{};
            constexpr Register::FieldValue<decltype(ramcfg)::Type,RamcfgVal::off> off{};
        }
        ///Fast Wakeup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> fastwkup{}; 
    }
    namespace PmHibcfg{    ///<Hibernate Configuration
        using Addr = Register::Address<0x40000409,0xfffffff0,0x00000000,std::uint8_t>;
        ///Ram Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ramcfg{}; 
        ///Backup Ram Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> bramcfg{}; 
    }
    namespace PmBkupcfg{    ///<Backup Configuration
        using Addr = Register::Address<0x4000040a,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ram Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> bramcfg{}; 
    }
    namespace PmPwsakdly{    ///<Power Switch Acknowledge Delay
        using Addr = Register::Address<0x40000412,0xffffff00,0x00000000,std::uint8_t>;
        ///Delay Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> dlyval{}; 
        ///Ignore Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ignack{}; 
    }
}
