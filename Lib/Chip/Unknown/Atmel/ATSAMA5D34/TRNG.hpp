#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//True Random Number Generator
    namespace TrngCr{    ///<Control Register
        using Addr = Register::Address<0xf8040000,0x000000fe,0x00000000,std::uint32_t>;
        ///Enables the TRNG to provide random values
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
        ///Security Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> key{}; 
    }
    namespace TrngIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf8040010,0xfffffffe,0x00000000,std::uint32_t>;
        ///Data Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> datrdy{}; 
    }
    namespace TrngIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf8040014,0xfffffffe,0x00000000,std::uint32_t>;
        ///Data Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> datrdy{}; 
    }
    namespace TrngImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf8040018,0xfffffffe,0x00000000,std::uint32_t>;
        ///Data Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> datrdy{}; 
    }
    namespace TrngIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xf804001c,0xfffffffe,0x00000000,std::uint32_t>;
        ///Data Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> datrdy{}; 
    }
    namespace TrngOdata{    ///<Output Data Register
        using Addr = Register::Address<0xf8040050,0x00000000,0x00000000,std::uint32_t>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> odata{}; 
    }
}
