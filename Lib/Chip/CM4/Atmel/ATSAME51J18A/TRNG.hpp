#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//True Random Generator
    namespace TrngCtrla{    ///<Control A
        using Addr = Register::Address<0x42002800,0xffffffbd,0x00000000,std::uint8_t>;
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
    }
    namespace TrngEvctrl{    ///<Event Control
        using Addr = Register::Address<0x42002804,0xfffffffe,0x00000000,std::uint8_t>;
        ///Data Ready Event Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datardyeo{}; 
    }
    namespace TrngIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x42002808,0xfffffffe,0x00000000,std::uint8_t>;
        ///Data Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datardy{}; 
    }
    namespace TrngIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x42002809,0xfffffffe,0x00000000,std::uint8_t>;
        ///Data Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datardy{}; 
    }
    namespace TrngIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4200280a,0xfffffffe,0x00000000,std::uint8_t>;
        ///Data Ready Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datardy{}; 
    }
    namespace TrngData{    ///<Output Data
        using Addr = Register::Address<0x42002820,0x00000000,0x00000000,std::uint32_t>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> data{}; 
    }
}
