#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//External Watchdog Monitor
    namespace EwmCtrl{    ///<Control Register
        using Addr = Register::Address<0x40061000,0xfffffff0,0x00000000,std::uint8_t>;
        ///EWM enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ewmen{}; 
        ///EWM_in's Assertion State Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> assin{}; 
        ///Input Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Interrupt Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> inten{}; 
    }
    namespace EwmServ{    ///<Service Register
        using Addr = Register::Address<0x40061001,0xffffff00,0x00000000,std::uint8_t>;
        ///The EWM service mechanism requires the CPU to write two values to the SERV register: a first data byte of 0xB4, followed by a second data byte of 0x2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> service{}; 
    }
    namespace EwmCmpl{    ///<Compare Low Register
        using Addr = Register::Address<0x40061002,0xffffff00,0x00000000,std::uint8_t>;
        ///To prevent runaway code from changing this field, software should write to this field after a CPU reset even if the (default) minimum service time is required
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> comparel{}; 
    }
    namespace EwmCmph{    ///<Compare High Register
        using Addr = Register::Address<0x40061003,0xffffff00,0x00000000,std::uint8_t>;
        ///To prevent runaway code from changing this field, software should write to this field after a CPU reset even if the (default) maximum service time is required
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> compareh{}; 
    }
}
