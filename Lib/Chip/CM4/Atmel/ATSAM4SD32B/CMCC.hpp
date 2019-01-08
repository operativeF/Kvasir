#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Cortex M Cache Controller
    namespace CmccType{    ///<Cache Type Register
        using Addr = Register::Address<0x4007c000,0xffffc000,0x00000000,std::uint32_t>;
        ///Access Port Access Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ap{}; 
        ///Dynamic Clock Gating Supported
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gclk{}; 
        ///Random Selection Policy Supported
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> randp{}; 
        ///Least Recently Used Policy Supported
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lrup{}; 
        ///Random Selection Policy Supported
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rrp{}; 
        ///Number of Way
        enum class WaynumVal {
            dmapped=0x00000000,     ///<Direct Mapped Cache
            arch2way=0x00000001,     ///<2-WAY set associative
            arch4way=0x00000002,     ///<4-WAY set associative
            arch8way=0x00000003,     ///<8-WAY set associative
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,WaynumVal> waynum{}; 
        namespace WaynumValC{
            constexpr Register::FieldValue<decltype(waynum)::Type,WaynumVal::dmapped> dmapped{};
            constexpr Register::FieldValue<decltype(waynum)::Type,WaynumVal::arch2way> arch2way{};
            constexpr Register::FieldValue<decltype(waynum)::Type,WaynumVal::arch4way> arch4way{};
            constexpr Register::FieldValue<decltype(waynum)::Type,WaynumVal::arch8way> arch8way{};
        }
        ///Lock Down Supported
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lckdown{}; 
        ///Cache Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> csize{}; 
        ///Cache Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clsize{}; 
    }
    namespace CmccCfg{    ///<Cache Configuration Register
        using Addr = Register::Address<0x4007c004,0xfffffffe,0x00000000,std::uint32_t>;
        ///Disable Clock Gating
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gclkdis{}; 
    }
    namespace CmccCtrl{    ///<Cache Control Register
        using Addr = Register::Address<0x4007c008,0xfffffffe,0x00000000,std::uint32_t>;
        ///Cache Controller Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cen{}; 
    }
    namespace CmccSr{    ///<Cache Status Register
        using Addr = Register::Address<0x4007c00c,0xfffffffe,0x00000000,std::uint32_t>;
        ///Cache Controller Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> csts{}; 
    }
    namespace CmccMaint0{    ///<Cache Maintenance Register 0
        using Addr = Register::Address<0x4007c020,0xfffffffe,0x00000000,std::uint32_t>;
        ///Cache Controller Invalidate All
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> invall{}; 
    }
    namespace CmccMaint1{    ///<Cache Maintenance Register 1
        using Addr = Register::Address<0x4007c024,0x3ffffe0f,0x00000000,std::uint32_t>;
        ///Invalidate Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> index{}; 
        ///Invalidate Way
        enum class WayVal {
            way0=0x00000000,     ///<Way 0 is selection for index invalidation
            way1=0x00000001,     ///<Way 1 is selection for index invalidation
            way2=0x00000002,     ///<Way 2 is selection for index invalidation
            way3=0x00000003,     ///<Way 3 is selection for index invalidation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,WayVal> way{}; 
        namespace WayValC{
            constexpr Register::FieldValue<decltype(way)::Type,WayVal::way0> way0{};
            constexpr Register::FieldValue<decltype(way)::Type,WayVal::way1> way1{};
            constexpr Register::FieldValue<decltype(way)::Type,WayVal::way2> way2{};
            constexpr Register::FieldValue<decltype(way)::Type,WayVal::way3> way3{};
        }
    }
    namespace CmccMcfg{    ///<Cache Monitor Configuration Register
        using Addr = Register::Address<0x4007c028,0xfffffffc,0x00000000,std::uint32_t>;
        ///Cache Controller Monitor Counter Mode
        enum class ModeVal {
            cycleCount=0x00000000,     ///<Cycle counter
            ihitCount=0x00000001,     ///<Instruction hit counter
            dhitCount=0x00000002,     ///<Data hit counter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::cycleCount> cycleCount{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::ihitCount> ihitCount{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::dhitCount> dhitCount{};
        }
    }
    namespace CmccMen{    ///<Cache Monitor Enable Register
        using Addr = Register::Address<0x4007c02c,0xfffffffe,0x00000000,std::uint32_t>;
        ///Cache Controller Monitor Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> menable{}; 
    }
    namespace CmccMctrl{    ///<Cache Monitor Control Register
        using Addr = Register::Address<0x4007c030,0xfffffffe,0x00000000,std::uint32_t>;
        ///Monitor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
    }
    namespace CmccMsr{    ///<Cache Monitor Status Register
        using Addr = Register::Address<0x4007c034,0x00000000,0x00000000,std::uint32_t>;
        ///Monitor Event Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eventCnt{}; 
    }
}
