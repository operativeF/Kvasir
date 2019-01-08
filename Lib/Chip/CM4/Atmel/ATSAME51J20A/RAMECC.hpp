#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//RAM ECC
    namespace RameccIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x41020000,0xfffffffc,0x00000000,std::uint8_t>;
        ///Single Bit ECC Error Interrupt Enable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> singlee{}; 
        ///Dual Bit ECC Error Interrupt Enable Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> duale{}; 
    }
    namespace RameccIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x41020001,0xfffffffc,0x00000000,std::uint8_t>;
        ///Single Bit ECC Error Interrupt Enable Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> singlee{}; 
        ///Dual Bit ECC Error Interrupt Enable Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> duale{}; 
    }
    namespace RameccIntflag{    ///<Interrupt Flag
        using Addr = Register::Address<0x41020002,0xfffffffc,0x00000000,std::uint8_t>;
        ///Single Bit ECC Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> singlee{}; 
        ///Dual Bit ECC Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> duale{}; 
    }
    namespace RameccStatus{    ///<Status
        using Addr = Register::Address<0x41020003,0xfffffffe,0x00000000,std::uint8_t>;
        ///ECC Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccdis{}; 
    }
    namespace RameccErraddr{    ///<Error Address
        using Addr = Register::Address<0x41020004,0xfffe0000,0x00000000,std::uint32_t>;
        ///Error Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> erraddr{}; 
    }
    namespace RameccDbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4102000f,0xfffffffc,0x00000000,std::uint8_t>;
        ///ECC Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eccdis{}; 
        ///ECC Error Log
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eccelog{}; 
    }
}
