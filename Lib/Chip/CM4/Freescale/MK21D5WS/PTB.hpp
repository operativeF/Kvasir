#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose Input/Output
    namespace PtbPdor{    ///<Port Data Output Register
        using Addr = Register::Address<0x400ff040,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
    }
    namespace PtbPsor{    ///<Port Set Output Register
        using Addr = Register::Address<0x400ff044,0x00000000,0x00000000,std::uint32_t>;
        ///Port Set Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptso{}; 
    }
    namespace PtbPcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0x400ff048,0x00000000,0x00000000,std::uint32_t>;
        ///Port Clear Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptco{}; 
    }
    namespace PtbPtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0x400ff04c,0x00000000,0x00000000,std::uint32_t>;
        ///Port Toggle Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptto{}; 
    }
    namespace PtbPdir{    ///<Port Data Input Register
        using Addr = Register::Address<0x400ff050,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdi{}; 
    }
    namespace PtbPddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0x400ff054,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
    }
}
