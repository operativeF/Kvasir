#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Cryptographic processor
    namespace CrypCr{    ///<control register
        using Addr = Register::Address<0x50060000,0xfffb8000,0x00000000,std::uint32_t>;
        ///Key size selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> keysize{}; 
        ///Used only for GCM, GMAC and CMAC              algorithms and has no effect when other
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> gcmph{}; 
        ///Enable DMA management of data output              phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dmaouten{}; 
        ///Enable DMA management of data input              phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dmainen{}; 
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> errie{}; 
        ///CCF flag interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ccfie{}; 
        ///Error clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errc{}; 
        ///Computation complete flag              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ccfc{}; 
        ///AES chaining mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> chmod{}; 
        ///AES operating mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Data type selection (for data in and              data out to/from the cryptographic              block)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> datatype{}; 
        ///AES enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace CrypSr{    ///<status register
        using Addr = Register::Address<0x50060004,0xfffffff0,0x00000000,std::uint32_t>;
        ///Busy flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> busy{}; 
        ///Write error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wrerr{}; 
        ///Read error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rderr{}; 
        ///Computation complete flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccf{}; 
    }
    namespace CrypDinr{    ///<data input register
        using Addr = Register::Address<0x50060008,0x00000000,0x00000000,std::uint32_t>;
        ///Data input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dinr{}; 
    }
    namespace CrypDoutr{    ///<data output register
        using Addr = Register::Address<0x5006000c,0x00000000,0x00000000,std::uint32_t>;
        ///Data output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> doutr{}; 
    }
    namespace CrypKeyr0{    ///<key register
        using Addr = Register::Address<0x50060010,0x80000000,0x00000000,std::uint32_t>;
        ///Data output register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> keyr0{}; 
    }
    namespace CrypKeyr1{    ///<key register
        using Addr = Register::Address<0x50060014,0x00000000,0x00000000,std::uint32_t>;
        ///Data output register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr1{}; 
    }
    namespace CrypKeyr2{    ///<key register
        using Addr = Register::Address<0x50060018,0x80000000,0x00000000,std::uint32_t>;
        ///Data output register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> keyr2{}; 
    }
    namespace CrypKeyr3{    ///<key register
        using Addr = Register::Address<0x5006001c,0x00000000,0x00000000,std::uint32_t>;
        ///Data output register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr3{}; 
    }
    namespace CrypIvr0{    ///<initialization vector register
        using Addr = Register::Address<0x50060020,0x00000000,0x00000000,std::uint32_t>;
        ///initialization vector              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ivr0{}; 
    }
    namespace CrypIvr1{    ///<initialization vector register
        using Addr = Register::Address<0x50060024,0x00000000,0x00000000,std::uint32_t>;
        ///Initialization vector              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ivr1{}; 
    }
    namespace CrypIvr2{    ///<initialization vector register
        using Addr = Register::Address<0x50060028,0x00000000,0x00000000,std::uint32_t>;
        ///Initialization vector              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ivr2{}; 
    }
    namespace CrypIvr3{    ///<initialization vector register
        using Addr = Register::Address<0x5006002c,0x00000000,0x00000000,std::uint32_t>;
        ///Initialization vector              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ivr3{}; 
    }
    namespace CrypKeyr4{    ///<key registers
        using Addr = Register::Address<0x50060030,0x00000000,0x00000000,std::uint32_t>;
        ///Data output register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr4{}; 
    }
    namespace CrypKeyr5{    ///<key registers
        using Addr = Register::Address<0x50060034,0x00000000,0x00000000,std::uint32_t>;
        ///Data output register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr5{}; 
    }
    namespace CrypKeyr6{    ///<key registers
        using Addr = Register::Address<0x50060038,0x00000000,0x00000000,std::uint32_t>;
        ///Data output register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr6{}; 
    }
    namespace CrypKeyr7{    ///<key registers
        using Addr = Register::Address<0x5006003c,0x00000000,0x00000000,std::uint32_t>;
        ///Data output register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr7{}; 
    }
    namespace CrypSusp0r{    ///<Suspend registers
        using Addr = Register::Address<0x50060040,0x00000000,0x00000000,std::uint32_t>;
        ///AES Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> susp0r{}; 
    }
    namespace CrypSusp1r{    ///<Suspend registers
        using Addr = Register::Address<0x50060044,0x00000000,0x00000000,std::uint32_t>;
        ///AES Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> susp1r{}; 
    }
    namespace CrypSusp2r{    ///<Suspend registers
        using Addr = Register::Address<0x50060048,0x00000000,0x00000000,std::uint32_t>;
        ///AES Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> susp2r{}; 
    }
    namespace CrypSusp3r{    ///<Suspend registers
        using Addr = Register::Address<0x5006004c,0x00000000,0x00000000,std::uint32_t>;
        ///IV127
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> susp3r{}; 
    }
    namespace CrypSusp4r{    ///<Suspend registers
        using Addr = Register::Address<0x50060050,0x00000000,0x00000000,std::uint32_t>;
        ///AES Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> susp4r{}; 
    }
    namespace CrypSusp5r{    ///<Suspend registers
        using Addr = Register::Address<0x50060054,0x00000000,0x00000000,std::uint32_t>;
        ///AES Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> susp5r{}; 
    }
    namespace CrypSusp6r{    ///<Suspend registers
        using Addr = Register::Address<0x50060058,0x00000000,0x00000000,std::uint32_t>;
        ///AES Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> susp6r{}; 
    }
    namespace CrypSusp7r{    ///<Suspend registers
        using Addr = Register::Address<0x5006005c,0x00000000,0x00000000,std::uint32_t>;
        ///AES Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> susp7r{}; 
    }
}
