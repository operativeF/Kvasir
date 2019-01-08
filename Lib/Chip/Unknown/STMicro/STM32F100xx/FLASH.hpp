#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//FLASH
    namespace FlashAcr{    ///<Flash access control register
        using Addr = Register::Address<0x40022000,0xfffffff7,0x00000000,std::uint32_t>;
        ///Flash half cycle access              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hlfcya{}; 
    }
    namespace FlashKeyr{    ///<Flash key register
        using Addr = Register::Address<0x40022004,0x00000000,0x00000000,std::uint32_t>;
        ///FPEC key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace FlashOptkeyr{    ///<Flash option key register
        using Addr = Register::Address<0x40022008,0x00000000,0x00000000,std::uint32_t>;
        ///Option byte key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkey{}; 
    }
    namespace FlashSr{    ///<Status register
        using Addr = Register::Address<0x4002200c,0xffffffca,0x00000000,std::uint32_t>;
        ///End of operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eop{}; 
        ///Write protection error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wrprterr{}; 
        ///Programming error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pgerr{}; 
        ///Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bsy{}; 
    }
    namespace FlashCr{    ///<Control register
        using Addr = Register::Address<0x40022010,0xffffe908,0x00000000,std::uint32_t>;
        ///Programming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg{}; 
        ///Page Erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per{}; 
        ///Mass Erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mer{}; 
        ///Option byte programming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> optpg{}; 
        ///Option byte erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> opter{}; 
        ///Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> strt{}; 
        ///Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lock{}; 
        ///Option bytes write enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> optwre{}; 
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> errie{}; 
        ///End of operation interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eopie{}; 
    }
    namespace FlashAr{    ///<Flash address register
        using Addr = Register::Address<0x40022014,0x00000000,0x00000000,std::uint32_t>;
        ///Flash Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> far{}; 
    }
    namespace FlashObr{    ///<Option byte register
        using Addr = Register::Address<0x4002201c,0xfc0003e0,0x00000000,std::uint32_t>;
        ///Option byte error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opterr{}; 
        ///Read protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rdprt{}; 
        ///WDG_SW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wdgSw{}; 
        ///nRST_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nrstStop{}; 
        ///nRST_STDBY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nrstStdby{}; 
        ///Data0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,10),Register::ReadWriteAccess,unsigned> data0{}; 
        ///Data1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,18),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace FlashWrpr{    ///<Write protection register
        using Addr = Register::Address<0x40022020,0x00000000,0x00000000,std::uint32_t>;
        ///Write protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrp{}; 
    }
}
