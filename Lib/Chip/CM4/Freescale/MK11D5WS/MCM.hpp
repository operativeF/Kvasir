#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Core Platform Miscellaneous Control Module
    namespace McmPlasc{    ///<Crossbar Switch (AXBS) Slave Configuration
        using Addr = Register::Address<0xe0080008,0xffff0000,0x00000000,std::uint16_t>;
        ///Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> asc{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace McmPlamc{    ///<Crossbar Switch (AXBS) Master Configuration
        using Addr = Register::Address<0xe008000a,0xffff0000,0x00000000,std::uint16_t>;
        ///Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> amc{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace McmPlacr{    ///<Crossbar Switch (AXBS) Control Register
        using Addr = Register::Address<0xe008000c,0x00000000,0x00000000,std::uint32_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Arbitration select
        enum class ArbVal {
            v0=0x00000000,     ///<Fixed-priority arbitration for the crossbar masters
            v1=0x00000001,     ///<Round-robin arbitration for the crossbar masters
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb)::Type,ArbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(arb)::Type,ArbVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
}
