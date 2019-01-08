#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Power control
    namespace PwrCr{    ///<power control register
        using Addr = Register::Address<0x40007000,0xfffff000,0x00000000,std::uint32_t>;
        ///Low-power deep sleep
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpds{}; 
        ///Power down deepsleep
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdds{}; 
        ///Clear wakeup flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cwuf{}; 
        ///Clear standby flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csbf{}; 
        ///Power voltage detector              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pvde{}; 
        ///PVD level selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> pls{}; 
        ///Disable backup domain write              protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dbp{}; 
        ///ENable SD1 ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ensd1{}; 
        ///ENable SD2 ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ensd2{}; 
        ///ENable SD3 ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ensd3{}; 
    }
    namespace PwrCsr{    ///<power control/status register
        using Addr = Register::Address<0x40007004,0xfffff8f8,0x00000000,std::uint32_t>;
        ///Wakeup flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wuf{}; 
        ///Standby flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sbf{}; 
        ///PVD output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pvdo{}; 
        ///Enable WKUP1 pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ewup1{}; 
        ///Enable WKUP2 pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ewup2{}; 
        ///Enable WKUP3 pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ewup3{}; 
    }
}
