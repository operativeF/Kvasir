#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Memory Control registers
    namespace MemRamprotr1{    ///<Memory protection register1
        using Addr = Register::Address<0x40005000,0x00000000,0x00000000,std::uint32_t>;
        ///RAMPROT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ramprot1{}; 
    }
    namespace MemRamprotr2{    ///<Memory protection register2
        using Addr = Register::Address<0x40005004,0x00000000,0x00000000,std::uint32_t>;
        ///RAMPROT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ramprot2{}; 
    }
    namespace MemRamprotr3{    ///<Memory protection register3
        using Addr = Register::Address<0x40005008,0x00000000,0x00000000,std::uint32_t>;
        ///RAMPROT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ramprot3{}; 
    }
    namespace MemRamprotr4{    ///<Memory protection register4
        using Addr = Register::Address<0x4000500c,0x00000000,0x00000000,std::uint32_t>;
        ///RAMPROT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ramprot4{}; 
    }
    namespace MemRamprotr5{    ///<Memory protection register5
        using Addr = Register::Address<0x40005010,0x00000000,0x00000000,std::uint32_t>;
        ///RAMPROT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ramprot5{}; 
    }
    namespace MemRamprotr6{    ///<Memory protection register6
        using Addr = Register::Address<0x40005014,0x00000000,0x00000000,std::uint32_t>;
        ///RAMPROT6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ramprot6{}; 
    }
    namespace MemRamprotr7{    ///<Memory protection register7
        using Addr = Register::Address<0x40005018,0x00000000,0x00000000,std::uint32_t>;
        ///RAMPROT7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ramprot7{}; 
    }
    namespace MemRamprotr8{    ///<Memory protection register8
        using Addr = Register::Address<0x4000501c,0x00000000,0x00000000,std::uint32_t>;
        ///RAMPROT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ramprot8{}; 
    }
    namespace MemDmaprotr1{    ///<DMA protection register1
        using Addr = Register::Address<0x40005020,0x00000000,0x00000000,std::uint32_t>;
        ///DMA protection fault, faulting              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> address{}; 
        ///offset in RAM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace MemDmaprotr2{    ///<DMA protection register2
        using Addr = Register::Address<0x40005024,0xfffffff8,0x00000000,std::uint32_t>;
        ///DMA protection fault, faulting              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace MemRamcr{    ///<Memory configuration register
        using Addr = Register::Address<0x40005028,0xfffffffb,0x00000000,std::uint32_t>;
        ///Makes all RAM write access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wen{}; 
    }
}
