#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose Input/Output
    namespace PtePdor{    ///<Port Data Output Register
        using Addr = Register::Address<0x400ff100,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
    }
    namespace PtePsor{    ///<Port Set Output Register
        using Addr = Register::Address<0x400ff104,0x00000000,0x00000000,std::uint32_t>;
        ///Port Set Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptso{}; 
    }
    namespace PtePcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0x400ff108,0x00000000,0x00000000,std::uint32_t>;
        ///Port Clear Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptco{}; 
    }
    namespace PtePtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0x400ff10c,0x00000000,0x00000000,std::uint32_t>;
        ///Port Toggle Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptto{}; 
    }
    namespace PtePdir{    ///<Port Data Input Register
        using Addr = Register::Address<0x400ff110,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdi{}; 
    }
    namespace PtePddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0x400ff114,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
    }
}
