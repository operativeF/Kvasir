#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Serial audio interface
    namespace Sai1SaiAcr1{    ///<SAI AConfiguration register 1
        using Addr = Register::Address<0x40015804,0xff04c010,0x00000000,std::uint32_t>;
        ///Master clock divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> mckdiv{}; 
        ///Audio block mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Protocol configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> prtcfg{}; 
        ///Data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> ds{}; 
        ///Least significant bit              first
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lsbfirst{}; 
        ///Clock strobing edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ckstr{}; 
        ///Synchronization enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> syncen{}; 
        ///Mono mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mono{}; 
        ///Output drive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> outdriv{}; 
        ///Audio block enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> saiaen{}; 
        ///DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///No divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nodiv{}; 
    }
    namespace Sai1SaiBcr1{    ///<SAI BConfiguration register 1
        using Addr = Register::Address<0x40015824,0xff04c010,0x00000000,std::uint32_t>;
        ///Audio block mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Protocol configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> prtcfg{}; 
        ///Data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> ds{}; 
        ///Least significant bit              first
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lsbfirst{}; 
        ///Clock strobing edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ckstr{}; 
        ///Synchronization enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> syncen{}; 
        ///Mono mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mono{}; 
        ///Output drive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> outdriv{}; 
        ///Audio block enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> saiben{}; 
        ///DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///No divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nodiv{}; 
        ///Master clock divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> mckdiv{}; 
    }
    namespace Sai1SaiAcr2{    ///<SAI AConfiguration register 2
        using Addr = Register::Address<0x40015808,0xffff0000,0x00000000,std::uint32_t>;
        ///FIFO threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> fth{}; 
        ///FIFO flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fflush{}; 
        ///Tristate management on data              line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tris{}; 
        ///Mute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mute{}; 
        ///Mute value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> muteval{}; 
        ///Mute counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> mutecnt{}; 
        ///Complement bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cpl{}; 
        ///Companding mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> comp{}; 
    }
    namespace Sai1SaiBcr2{    ///<SAI BConfiguration register 2
        using Addr = Register::Address<0x40015828,0xffff0000,0x00000000,std::uint32_t>;
        ///FIFO threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> fth{}; 
        ///FIFO flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fflush{}; 
        ///Tristate management on data              line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tris{}; 
        ///Mute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mute{}; 
        ///Mute value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> muteval{}; 
        ///Mute counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> mutecnt{}; 
        ///Complement bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cpl{}; 
        ///Companding mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> comp{}; 
    }
    namespace Sai1SaiAfrcr{    ///<SAI AFrame configuration          register
        using Addr = Register::Address<0x4001580c,0xfff88000,0x00000000,std::uint32_t>;
        ///Frame length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frl{}; 
        ///Frame synchronization active level              length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fsall{}; 
        ///Frame synchronization              definition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fsdef{}; 
        ///Frame synchronization              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fspol{}; 
        ///Frame synchronization              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fsoff{}; 
    }
    namespace Sai1SaiBfrcr{    ///<SAI BFrame configuration          register
        using Addr = Register::Address<0x4001582c,0xfff88000,0x00000000,std::uint32_t>;
        ///Frame length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frl{}; 
        ///Frame synchronization active level              length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fsall{}; 
        ///Frame synchronization              definition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fsdef{}; 
        ///Frame synchronization              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fspol{}; 
        ///Frame synchronization              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fsoff{}; 
    }
    namespace Sai1SaiAslotr{    ///<SAI ASlot register
        using Addr = Register::Address<0x40015810,0x0000f020,0x00000000,std::uint32_t>;
        ///First bit offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> fboff{}; 
        ///Slot size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> slotsz{}; 
        ///Number of slots in an audio              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nbslot{}; 
        ///Slot enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> sloten{}; 
    }
    namespace Sai1SaiBslotr{    ///<SAI BSlot register
        using Addr = Register::Address<0x40015830,0x0000f020,0x00000000,std::uint32_t>;
        ///First bit offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> fboff{}; 
        ///Slot size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> slotsz{}; 
        ///Number of slots in an audio              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nbslot{}; 
        ///Slot enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> sloten{}; 
    }
    namespace Sai1SaiAim{    ///<SAI AInterrupt mask register2
        using Addr = Register::Address<0x40015814,0xffffff80,0x00000000,std::uint32_t>;
        ///Overrun/underrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudrie{}; 
        ///Mute detection interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedetie{}; 
        ///Wrong clock configuration interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfgie{}; 
        ///FIFO request interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freqie{}; 
        ///Codec not ready interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdyie{}; 
        ///Anticipated frame synchronization              detection interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdetie{}; 
        ///Late frame synchronization detection              interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdetie{}; 
    }
    namespace Sai1SaiBim{    ///<SAI BInterrupt mask register2
        using Addr = Register::Address<0x40015834,0xffffff80,0x00000000,std::uint32_t>;
        ///Overrun/underrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudrie{}; 
        ///Mute detection interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedetie{}; 
        ///Wrong clock configuration interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfgie{}; 
        ///FIFO request interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freqie{}; 
        ///Codec not ready interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdyie{}; 
        ///Anticipated frame synchronization              detection interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdetie{}; 
        ///Late frame synchronization detection              interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdetie{}; 
    }
    namespace Sai1SaiAsr{    ///<SAI AStatus register
        using Addr = Register::Address<0x40015818,0xfff8ff80,0x00000000,std::uint32_t>;
        ///Overrun / underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudr{}; 
        ///Mute detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        ///Wrong clock configuration              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        ///FIFO request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freq{}; 
        ///Codec not ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdy{}; 
        ///Anticipated frame synchronization              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdet{}; 
        ///Late frame synchronization              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        ///FIFO level threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> flth{}; 
    }
    namespace Sai1SaiBsr{    ///<SAI BStatus register
        using Addr = Register::Address<0x40015838,0xfff8ff80,0x00000000,std::uint32_t>;
        ///Overrun / underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudr{}; 
        ///Mute detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        ///Wrong clock configuration              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        ///FIFO request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freq{}; 
        ///Codec not ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdy{}; 
        ///Anticipated frame synchronization              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdet{}; 
        ///Late frame synchronization              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        ///FIFO level threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> flth{}; 
    }
    namespace Sai1SaiAclrfr{    ///<SAI AClear flag register
        using Addr = Register::Address<0x4001581c,0xffffff88,0x00000000,std::uint32_t>;
        ///Clear overrun / underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covrudr{}; 
        ///Mute detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmutedet{}; 
        ///Clear wrong clock configuration              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cwckcfg{}; 
        ///Clear codec not ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccnrdy{}; 
        ///Clear anticipated frame synchronization              detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cafsdet{}; 
        ///Clear late frame synchronization              detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clfsdet{}; 
    }
    namespace Sai1SaiBclrfr{    ///<SAI BClear flag register
        using Addr = Register::Address<0x4001583c,0xffffff88,0x00000000,std::uint32_t>;
        ///Clear overrun / underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covrudr{}; 
        ///Mute detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmutedet{}; 
        ///Clear wrong clock configuration              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cwckcfg{}; 
        ///Clear codec not ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccnrdy{}; 
        ///Clear anticipated frame synchronization              detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cafsdet{}; 
        ///Clear late frame synchronization              detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clfsdet{}; 
    }
    namespace Sai1SaiAdr{    ///<SAI AData register
        using Addr = Register::Address<0x40015820,0x00000000,0x00000000,std::uint32_t>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Sai1SaiBdr{    ///<SAI BData register
        using Addr = Register::Address<0x40015840,0x00000000,0x00000000,std::uint32_t>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
}
