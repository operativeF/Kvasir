#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Serial audio interface
    namespace Sai1Bcr1{    ///<BConfiguration register 1
        using Addr = Register::Address<0x40015824,0xff04c010,0x00000000,std::uint32_t>;
        ///Master clock divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> mcjdiv{}; 
        ///No divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nodiv{}; 
        ///DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///Audio block B enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> saiben{}; 
        ///Output drive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> outdri{}; 
        ///Mono mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mono{}; 
        ///Synchronization enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> syncen{}; 
        ///Clock strobing edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ckstr{}; 
        ///Least significant bit              first
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lsbfirst{}; 
        ///Data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> ds{}; 
        ///Protocol configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> prtcfg{}; 
        ///Audio block mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode{}; 
    }
    namespace Sai1Bcr2{    ///<BConfiguration register 2
        using Addr = Register::Address<0x40015828,0xffff0000,0x00000000,std::uint32_t>;
        ///Companding mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> comp{}; 
        ///Complement bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cpl{}; 
        ///Mute counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> mutecn{}; 
        ///Mute value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> muteval{}; 
        ///Mute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mute{}; 
        ///Tristate management on data              line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tris{}; 
        ///FIFO flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fflus{}; 
        ///FIFO threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Sai1Bfrcr{    ///<BFRCR
        using Addr = Register::Address<0x4001582c,0xfff88000,0x00000000,std::uint32_t>;
        ///Frame synchronization              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fsoff{}; 
        ///Frame synchronization              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fspol{}; 
        ///Frame synchronization              definition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fsdef{}; 
        ///Frame synchronization active level              length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fsall{}; 
        ///Frame length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frl{}; 
    }
    namespace Sai1Bslotr{    ///<BSlot register
        using Addr = Register::Address<0x40015830,0x0000f020,0x00000000,std::uint32_t>;
        ///Slot enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> sloten{}; 
        ///Number of slots in an audio              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nbslot{}; 
        ///Slot size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> slotsz{}; 
        ///First bit offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> fboff{}; 
    }
    namespace Sai1Bim{    ///<BInterrupt mask register2
        using Addr = Register::Address<0x40015834,0xffffff80,0x00000000,std::uint32_t>;
        ///Late frame synchronization detection              interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdetie{}; 
        ///Anticipated frame synchronization              detection interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdetie{}; 
        ///Codec not ready interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdyie{}; 
        ///FIFO request interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freqie{}; 
        ///Wrong clock configuration interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        ///Mute detection interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        ///Overrun/underrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudrie{}; 
    }
    namespace Sai1Bsr{    ///<BStatus register
        using Addr = Register::Address<0x40015838,0xfff8ff80,0x00000000,std::uint32_t>;
        ///FIFO level threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> flvl{}; 
        ///Late frame synchronization              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        ///Anticipated frame synchronization              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdet{}; 
        ///Codec not ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdy{}; 
        ///FIFO request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freq{}; 
        ///Wrong clock configuration              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        ///Mute detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        ///Overrun / underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudr{}; 
    }
    namespace Sai1Bclrfr{    ///<BClear flag register
        using Addr = Register::Address<0x4001583c,0xffffff88,0x00000000,std::uint32_t>;
        ///Clear late frame synchronization              detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        ///Clear anticipated frame synchronization              detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cafsdet{}; 
        ///Clear codec not ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdy{}; 
        ///Clear wrong clock configuration              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        ///Mute detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        ///Clear overrun / underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudr{}; 
    }
    namespace Sai1Bdr{    ///<BData register
        using Addr = Register::Address<0x40015840,0x00000000,0x00000000,std::uint32_t>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Sai1Acr1{    ///<AConfiguration register 1
        using Addr = Register::Address<0x40015804,0xff04c010,0x00000000,std::uint32_t>;
        ///Master clock divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> mcjdiv{}; 
        ///No divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nodiv{}; 
        ///DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///Audio block A enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> saiaen{}; 
        ///Output drive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> outdri{}; 
        ///Mono mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mono{}; 
        ///Synchronization enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> syncen{}; 
        ///Clock strobing edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ckstr{}; 
        ///Least significant bit              first
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lsbfirst{}; 
        ///Data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> ds{}; 
        ///Protocol configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> prtcfg{}; 
        ///Audio block mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode{}; 
    }
    namespace Sai1Acr2{    ///<AConfiguration register 2
        using Addr = Register::Address<0x40015808,0xffff0000,0x00000000,std::uint32_t>;
        ///Companding mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> comp{}; 
        ///Complement bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cpl{}; 
        ///Mute counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> mutecn{}; 
        ///Mute value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> muteval{}; 
        ///Mute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mute{}; 
        ///Tristate management on data              line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tris{}; 
        ///FIFO flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fflus{}; 
        ///FIFO threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Sai1Afrcr{    ///<AFRCR
        using Addr = Register::Address<0x4001580c,0xfff88000,0x00000000,std::uint32_t>;
        ///Frame synchronization              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fsoff{}; 
        ///Frame synchronization              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fspol{}; 
        ///Frame synchronization              definition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fsdef{}; 
        ///Frame synchronization active level              length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fsall{}; 
        ///Frame length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frl{}; 
    }
    namespace Sai1Aslotr{    ///<ASlot register
        using Addr = Register::Address<0x40015810,0x0000f020,0x00000000,std::uint32_t>;
        ///Slot enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> sloten{}; 
        ///Number of slots in an audio              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nbslot{}; 
        ///Slot size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> slotsz{}; 
        ///First bit offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> fboff{}; 
    }
    namespace Sai1Aim{    ///<AInterrupt mask register2
        using Addr = Register::Address<0x40015814,0xffffff80,0x00000000,std::uint32_t>;
        ///Late frame synchronization detection              interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        ///Anticipated frame synchronization              detection interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdetie{}; 
        ///Codec not ready interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdyie{}; 
        ///FIFO request interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freqie{}; 
        ///Wrong clock configuration interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        ///Mute detection interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        ///Overrun/underrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudrie{}; 
    }
    namespace Sai1Asr{    ///<AStatus register
        using Addr = Register::Address<0x40015818,0xfff8ff80,0x00000000,std::uint32_t>;
        ///FIFO level threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> flvl{}; 
        ///Late frame synchronization              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        ///Anticipated frame synchronization              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdet{}; 
        ///Codec not ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdy{}; 
        ///FIFO request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freq{}; 
        ///Wrong clock configuration flag. This bit              is read only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        ///Mute detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        ///Overrun / underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudr{}; 
    }
    namespace Sai1Aclrfr{    ///<AClear flag register
        using Addr = Register::Address<0x4001581c,0xffffff88,0x00000000,std::uint32_t>;
        ///Clear late frame synchronization              detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        ///Clear anticipated frame synchronization              detection flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cafsdet{}; 
        ///Clear codec not ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdy{}; 
        ///Clear wrong clock configuration              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        ///Mute detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        ///Clear overrun / underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudr{}; 
    }
    namespace Sai1Adr{    ///<AData register
        using Addr = Register::Address<0x40015820,0x00000000,0x00000000,std::uint32_t>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Sai1Gcr{    ///<Global configuration register
        using Addr = Register::Address<0x40015800,0xffffffcc,0x00000000,std::uint32_t>;
        ///Synchronization inputs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> syncin{}; 
        ///Synchronization outputs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> syncout{}; 
    }
}
