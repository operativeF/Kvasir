#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Serial controller 1 (Direct memory      access)
    namespace Sc1DmaSc1Dmarxbegaddar{    ///<Serial controller receive DMA begin address          channel A register
        using Addr = Register::Address<0x4000c800,0xffffe000,0x00000000,std::uint32_t>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
    }
    namespace Sc1DmaSc1Dmarxendaddar{    ///<Serial controller receive DMA end address          channel A register
        using Addr = Register::Address<0x4000c804,0xffffe000,0x00000000,std::uint32_t>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
    }
    namespace Sc1DmaSc1Dmarxbegaddbr{    ///<Serial controller receive DMA begin address          channel B register
        using Addr = Register::Address<0x4000c808,0xffffe000,0x00000000,std::uint32_t>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
    }
    namespace Sc1DmaSc1Dmarxendaddbr{    ///<Serial controller receive DMA end address          channel B register
        using Addr = Register::Address<0x4000c80c,0xffffe000,0x00000000,std::uint32_t>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
    }
    namespace Sc1DmaSc1Dmatxbegaddar{    ///<Serial controller transmit DMA begin address          channel A register
        using Addr = Register::Address<0x4000c810,0xffffe000,0x00000000,std::uint32_t>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
    }
    namespace Sc1DmaSc1Dmatxendaddar{    ///<Serial controller transmit DMA end address          channel A register
        using Addr = Register::Address<0x4000c814,0xffffe000,0x00000000,std::uint32_t>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
    }
    namespace Sc1DmaSc1Dmatxbegaddbr{    ///<Serial controller transmit DMA begin address          channel B register
        using Addr = Register::Address<0x4000c818,0xffffe000,0x00000000,std::uint32_t>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
    }
    namespace Sc1DmaSc1Dmatxendaddbr{    ///<Serial controller transmit DMA end address          channel B
        using Addr = Register::Address<0x4000c81c,0xffffe000,0x00000000,std::uint32_t>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
    }
    namespace Sc1DmaSc1Dmarxcntar{    ///<Serial controller receive DMA counter          channel A register
        using Addr = Register::Address<0x4000c820,0xffffe000,0x00000000,std::uint32_t>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Sc1DmaSc1Dmarxcntbr{    ///<Serial controller receive DMA count channel          B register
        using Addr = Register::Address<0x4000c824,0xffffe000,0x00000000,std::uint32_t>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Sc1DmaSc1Dmatxcntr{    ///<Serial controller transmit DMA counter          register
        using Addr = Register::Address<0x4000c828,0xffffe000,0x00000000,std::uint32_t>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Sc1DmaSc1Dmasr{    ///<Serial controller DMA status          register
        using Addr = Register::Address<0x4000c82c,0xffffe000,0x00000000,std::uint32_t>;
        ///NSSS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> nsss{}; 
        ///FEB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> feb{}; 
        ///FEA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fea{}; 
        ///PEB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> peb{}; 
        ///PEA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pea{}; 
        ///OVRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrb{}; 
        ///OVRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovra{}; 
        ///TXBACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txback{}; 
        ///TXAACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txaack{}; 
        ///RXBACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxback{}; 
        ///RXAACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxaack{}; 
    }
    namespace Sc1DmaSc1Dmacr{    ///<Serial controller DMA control          register
        using Addr = Register::Address<0x4000c830,0xffffffc0,0x00000000,std::uint32_t>;
        ///TXRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrst{}; 
        ///RXRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrst{}; 
        ///TXLODB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txlodb{}; 
        ///TXLODA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txloda{}; 
        ///RXLODB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxlodb{}; 
        ///RXLODA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxloda{}; 
    }
    namespace Sc1DmaSc1Dmarxerrar{    ///<Serial controller receive DMA channel A          first error register
        using Addr = Register::Address<0x4000c834,0xffffe000,0x00000000,std::uint32_t>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
    }
    namespace Sc1DmaSc1Dmarxerrbr{    ///<Serial controller receive DMA channel B          first error register
        using Addr = Register::Address<0x4000c838,0xffffe000,0x00000000,std::uint32_t>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
    }
    namespace Sc1DmaSc1Dmarxcntsavedr{    ///<Serial controller receive DMA saved counter          channel B register
        using Addr = Register::Address<0x4000c870,0xffffe000,0x00000000,std::uint32_t>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
}
