#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Reset Controller
    namespace RstcRcause{    ///<Reset Cause
        using Addr = Register::Address<0x40000c00,0xffffff00,0x00000000,std::uint8_t>;
        ///Power On Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> por{}; 
        ///Brown Out CORE Detector Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bodcore{}; 
        ///Brown Out VDD Detector Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bodvdd{}; 
        ///NVM Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nvm{}; 
        ///External Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Watchdog Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wdt{}; 
        ///System Reset Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> syst{}; 
        ///Backup Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> backup{}; 
    }
    namespace RstcBkupexit{    ///<Backup Exit Source
        using Addr = Register::Address<0x40000c02,0xffffff79,0x00000000,std::uint8_t>;
        ///Real Timer Counter Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rtc{}; 
        ///Battery Backup Power Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bbps{}; 
        ///Hibernate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hib{}; 
    }
}
