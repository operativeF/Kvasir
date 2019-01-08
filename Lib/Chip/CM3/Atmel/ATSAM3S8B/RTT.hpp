#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Real-time Timer
    namespace RttMr{    ///<Mode Register
        using Addr = Register::Address<0x400e1430,0xfee80000,0x00000000,std::uint32_t>;
        ///Real-time Timer Prescaler Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rtpres{}; 
        ///Alarm Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> almien{}; 
        ///Real-time Timer Increment Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rttincien{}; 
        ///Real-time Timer Restart
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rttrst{}; 
        ///Real-time Timer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rttdis{}; 
        ///Real-Time Clock 1Hz Clock Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rtc1hz{}; 
    }
    namespace RttAr{    ///<Alarm Register
        using Addr = Register::Address<0x400e1434,0x00000000,0x00000000,std::uint32_t>;
        ///Alarm Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> almv{}; 
    }
    namespace RttVr{    ///<Value Register
        using Addr = Register::Address<0x400e1438,0x00000000,0x00000000,std::uint32_t>;
        ///Current Real-time Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crtv{}; 
    }
    namespace RttSr{    ///<Status Register
        using Addr = Register::Address<0x400e143c,0xfffffffc,0x00000000,std::uint32_t>;
        ///Real-time Alarm Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> alms{}; 
        ///Real-time Timer Increment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rttinc{}; 
    }
}
