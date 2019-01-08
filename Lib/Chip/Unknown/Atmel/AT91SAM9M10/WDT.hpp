#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Watchdog Timer
    namespace WdtCr{    ///<Control Register
        using Addr = Register::Address<0xfffffd40,0x00fffffe,0x00000000,std::uint32_t>;
        ///Watchdog Restart
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wdrstt{}; 
        ///Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> key{}; 
    }
    namespace WdtMr{    ///<Mode Register
        using Addr = Register::Address<0xfffffd44,0xc0000000,0x00000000,std::uint32_t>;
        ///Watchdog Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> wdv{}; 
        ///Watchdog Fault Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wdfien{}; 
        ///Watchdog Reset Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wdrsten{}; 
        ///Watchdog Reset Processor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wdrproc{}; 
        ///Watchdog Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wddis{}; 
        ///Watchdog Delta Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> wdd{}; 
        ///Watchdog Debug Halt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> wddbghlt{}; 
        ///Watchdog Idle Halt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> wdidlehlt{}; 
    }
    namespace WdtSr{    ///<Status Register
        using Addr = Register::Address<0xfffffd48,0xfffffffc,0x00000000,std::uint32_t>;
        ///Watchdog Underflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wdunf{}; 
        ///Watchdog Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wderr{}; 
    }
}
