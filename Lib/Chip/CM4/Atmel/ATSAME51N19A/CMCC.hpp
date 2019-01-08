#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Cortex M Cache Controller
    namespace CmccType{    ///<Cache Type Register
        using Addr = Register::Address<0x41006000,0xffffc00d,0x00000000,std::uint32_t>;
        ///dynamic Clock Gating supported
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gclk{}; 
        ///Round Robin Policy supported
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rrp{}; 
        ///Number of Way
        enum class WaynumVal {
            dmapped=0x00000000,     ///<Direct Mapped Cache
            arch2way=0x00000001,     ///<2-WAY set associative
            arch4way=0x00000002,     ///<4-WAY set associative
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,WaynumVal> waynum{}; 
        namespace WaynumValC{
            constexpr Register::FieldValue<decltype(waynum)::Type,WaynumVal::dmapped> dmapped{};
            constexpr Register::FieldValue<decltype(waynum)::Type,WaynumVal::arch2way> arch2way{};
            constexpr Register::FieldValue<decltype(waynum)::Type,WaynumVal::arch4way> arch4way{};
        }
        ///Lock Down supported
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lckdown{}; 
        ///Cache Size
        enum class CsizeVal {
            csize1kb=0x00000000,     ///<Cache Size is 1 KB
            csize2kb=0x00000001,     ///<Cache Size is 2 KB
            csize4kb=0x00000002,     ///<Cache Size is 4 KB
            csize8kb=0x00000003,     ///<Cache Size is 8 KB
            csize16kb=0x00000004,     ///<Cache Size is 16 KB
            csize32kb=0x00000005,     ///<Cache Size is 32 KB
            csize64kb=0x00000006,     ///<Cache Size is 64 KB
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,CsizeVal> csize{}; 
        namespace CsizeValC{
            constexpr Register::FieldValue<decltype(csize)::Type,CsizeVal::csize1kb> csize1kb{};
            constexpr Register::FieldValue<decltype(csize)::Type,CsizeVal::csize2kb> csize2kb{};
            constexpr Register::FieldValue<decltype(csize)::Type,CsizeVal::csize4kb> csize4kb{};
            constexpr Register::FieldValue<decltype(csize)::Type,CsizeVal::csize8kb> csize8kb{};
            constexpr Register::FieldValue<decltype(csize)::Type,CsizeVal::csize16kb> csize16kb{};
            constexpr Register::FieldValue<decltype(csize)::Type,CsizeVal::csize32kb> csize32kb{};
            constexpr Register::FieldValue<decltype(csize)::Type,CsizeVal::csize64kb> csize64kb{};
        }
        ///Cache Line Size
        enum class ClsizeVal {
            clsize4b=0x00000000,     ///<Cache Line Size is 4 bytes
            clsize8b=0x00000001,     ///<Cache Line Size is 8 bytes
            clsize16b=0x00000002,     ///<Cache Line Size is 16 bytes
            clsize32b=0x00000003,     ///<Cache Line Size is 32 bytes
            clsize64b=0x00000004,     ///<Cache Line Size is 64 bytes
            clsize128b=0x00000005,     ///<Cache Line Size is 128 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,ClsizeVal> clsize{}; 
        namespace ClsizeValC{
            constexpr Register::FieldValue<decltype(clsize)::Type,ClsizeVal::clsize4b> clsize4b{};
            constexpr Register::FieldValue<decltype(clsize)::Type,ClsizeVal::clsize8b> clsize8b{};
            constexpr Register::FieldValue<decltype(clsize)::Type,ClsizeVal::clsize16b> clsize16b{};
            constexpr Register::FieldValue<decltype(clsize)::Type,ClsizeVal::clsize32b> clsize32b{};
            constexpr Register::FieldValue<decltype(clsize)::Type,ClsizeVal::clsize64b> clsize64b{};
            constexpr Register::FieldValue<decltype(clsize)::Type,ClsizeVal::clsize128b> clsize128b{};
        }
    }
    namespace CmccCfg{    ///<Cache Configuration Register
        using Addr = Register::Address<0x41006004,0xffffff89,0x00000000,std::uint32_t>;
        ///Instruction Cache Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> icdis{}; 
        ///Data Cache Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dcdis{}; 
        ///Cache size configured by software
        enum class CsizeswVal {
            confCsize1kb=0x00000000,     ///<the Cache Size is configured to 1KB
            confCsize2kb=0x00000001,     ///<the Cache Size is configured to 2KB
            confCsize4kb=0x00000002,     ///<the Cache Size is configured to 4KB
            confCsize8kb=0x00000003,     ///<the Cache Size is configured to 8KB
            confCsize16kb=0x00000004,     ///<the Cache Size is configured to 16KB
            confCsize32kb=0x00000005,     ///<the Cache Size is configured to 32KB
            confCsize64kb=0x00000006,     ///<the Cache Size is configured to 64KB
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,CsizeswVal> csizesw{}; 
        namespace CsizeswValC{
            constexpr Register::FieldValue<decltype(csizesw)::Type,CsizeswVal::confCsize1kb> confCsize1kb{};
            constexpr Register::FieldValue<decltype(csizesw)::Type,CsizeswVal::confCsize2kb> confCsize2kb{};
            constexpr Register::FieldValue<decltype(csizesw)::Type,CsizeswVal::confCsize4kb> confCsize4kb{};
            constexpr Register::FieldValue<decltype(csizesw)::Type,CsizeswVal::confCsize8kb> confCsize8kb{};
            constexpr Register::FieldValue<decltype(csizesw)::Type,CsizeswVal::confCsize16kb> confCsize16kb{};
            constexpr Register::FieldValue<decltype(csizesw)::Type,CsizeswVal::confCsize32kb> confCsize32kb{};
            constexpr Register::FieldValue<decltype(csizesw)::Type,CsizeswVal::confCsize64kb> confCsize64kb{};
        }
    }
    namespace CmccCtrl{    ///<Cache Control Register
        using Addr = Register::Address<0x41006008,0xfffffffe,0x00000000,std::uint32_t>;
        ///Cache Controller Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
    }
    namespace CmccSr{    ///<Cache Status Register
        using Addr = Register::Address<0x4100600c,0xfffffffe,0x00000000,std::uint32_t>;
        ///Cache Controller Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csts{}; 
    }
    namespace CmccLckway{    ///<Cache Lock per Way Register
        using Addr = Register::Address<0x41006010,0xfffffff0,0x00000000,std::uint32_t>;
        ///Lockdown way Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> lckway{}; 
    }
    namespace CmccMaint0{    ///<Cache Maintenance Register 0
        using Addr = Register::Address<0x41006020,0xfffffffe,0x00000000,std::uint32_t>;
        ///Cache Controller invalidate All
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> invall{}; 
    }
    namespace CmccMaint1{    ///<Cache Maintenance Register 1
        using Addr = Register::Address<0x41006024,0x0ffff00f,0x00000000,std::uint32_t>;
        ///Invalidate Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> index{}; 
        ///Invalidate Way
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> way{}; 
    }
    namespace CmccMcfg{    ///<Cache Monitor Configuration Register
        using Addr = Register::Address<0x41006028,0xfffffffc,0x00000000,std::uint32_t>;
        ///Cache Controller Monitor Counter Mode
        enum class ModeVal {
            cycleCount=0x00000000,     ///<cycle counter
            ihitCount=0x00000001,     ///<instruction hit counter
            dhitCount=0x00000002,     ///<data hit counter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::cycleCount> cycleCount{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::ihitCount> ihitCount{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::dhitCount> dhitCount{};
        }
    }
    namespace CmccMen{    ///<Cache Monitor Enable Register
        using Addr = Register::Address<0x4100602c,0xfffffffe,0x00000000,std::uint32_t>;
        ///Cache Controller Monitor Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> menable{}; 
    }
    namespace CmccMctrl{    ///<Cache Monitor Control Register
        using Addr = Register::Address<0x41006030,0xfffffffe,0x00000000,std::uint32_t>;
        ///Cache Controller Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace CmccMsr{    ///<Cache Monitor Status Register
        using Addr = Register::Address<0x41006034,0x00000000,0x00000000,std::uint32_t>;
        ///Monitor Event Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eventCnt{}; 
    }
}
