#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//FLASH
    namespace FlashAcr{    ///<Flash access control register
        using Addr = Register::Address<0x40023c00,0xfffff4f8,0x00000000,std::uint32_t>;
        ///Latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> latency{}; 
        ///Prefetch enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> prften{}; 
        ///ART Accelerator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arten{}; 
        ///ART Accelerator reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> artrst{}; 
    }
    namespace FlashKeyr{    ///<Flash key register
        using Addr = Register::Address<0x40023c04,0x00000000,0x00000000,std::uint32_t>;
        ///FPEC key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace FlashOptkeyr{    ///<Flash option key register
        using Addr = Register::Address<0x40023c08,0x00000000,0x00000000,std::uint32_t>;
        ///Option byte key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkeyr{}; 
    }
    namespace FlashSr{    ///<Status register
        using Addr = Register::Address<0x40023c0c,0xfffeff0c,0x00000000,std::uint32_t>;
        ///End of operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eop{}; 
        ///Operation error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> operr{}; 
        ///Write protection error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wrperr{}; 
        ///Programming alignment              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pgaerr{}; 
        ///Programming parallelism              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pgperr{}; 
        ///Erase Sequence Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> erserr{}; 
        ///Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bsy{}; 
    }
    namespace FlashCr{    ///<Control register
        using Addr = Register::Address<0x40023c10,0x78fefc00,0x00000000,std::uint32_t>;
        ///Programming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg{}; 
        ///Sector Erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ser{}; 
        ///Mass Erase of sectors 0 to              11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mer{}; 
        ///Sector number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> snb{}; 
        ///Program size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> strt{}; 
        ///End of operation interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eopie{}; 
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> errie{}; 
        ///Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
        ///PCROP error interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rderrie{}; 
    }
    namespace FlashOptcr{    ///<Flash option control register
        using Addr = Register::Address<0x40023c14,0x30000000,0x00000000,std::uint32_t>;
        ///Option lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> optlock{}; 
        ///Option start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> optstrt{}; 
        ///BOR reset Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> borLev{}; 
        ///WDG_SW User option bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iwdgSw{}; 
        ///nRST_STOP User option              bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nrstStop{}; 
        ///nRST_STDBY User option              bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nrstStdby{}; 
        ///Read protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rdp{}; 
        ///Not write protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> nwrp{}; 
        ///User option bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wwdgSw{}; 
        ///Independent watchdog counter freeze in              Stop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> iwdgStop{}; 
        ///Independent watchdog counter freeze in              standby mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> iwdgStdby{}; 
    }
    namespace FlashOptcr1{    ///<Flash option control register          1
        using Addr = Register::Address<0x40023c18,0x00000000,0x00000000,std::uint32_t>;
        ///Boot base address when Boot pin              =1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bootAdd1{}; 
        ///Boot base address when Boot pin              =0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bootAdd0{}; 
    }
    namespace FlashOptcr2{    ///<Flash option control register
        using Addr = Register::Address<0x40023c1c,0x7fffff00,0x00000000,std::uint32_t>;
        ///PCROP zone preserved when RDP level              decreased
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pcropRdp{}; 
        ///PCROP option byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pcrop{}; 
    }
}
