#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose Input/Output
    namespace PtaPdor{    ///<Port Data Output Register
        using Addr = Register::Address<0x400ff000,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
    }
    namespace PtaPsor{    ///<Port Set Output Register
        using Addr = Register::Address<0x400ff004,0x00000000,0x00000000,std::uint32_t>;
        ///Port Set Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptso{}; 
    }
    namespace PtaPcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0x400ff008,0x00000000,0x00000000,std::uint32_t>;
        ///Port Clear Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptco{}; 
    }
    namespace PtaPtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0x400ff00c,0x00000000,0x00000000,std::uint32_t>;
        ///Port Toggle Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptto{}; 
    }
    namespace PtaPdir{    ///<Port Data Input Register
        using Addr = Register::Address<0x400ff010,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdi{}; 
    }
    namespace PtaPddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0x400ff014,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
    }
}
