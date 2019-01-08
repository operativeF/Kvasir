#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Cryptographic processor
    namespace CrcDr{    ///<Data register
        using Addr = Register::Address<0x40023000,0x00000000,0x00000000,std::uint32_t>;
        ///Data Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dr{}; 
    }
    namespace CrcIdr{    ///<Independent Data register
        using Addr = Register::Address<0x40023004,0xffffff00,0x00000000,std::uint32_t>;
        ///Independent Data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> idr{}; 
    }
    namespace CrcCr{    ///<Control register
        using Addr = Register::Address<0x40023008,0xfffffffe,0x00000000,std::uint32_t>;
        ///Control regidter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cr{}; 
    }
    namespace CrcInit{    ///<Initial CRC value
        using Addr = Register::Address<0x4002300c,0x00000000,0x00000000,std::uint32_t>;
        ///Programmable initial CRC              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcInit{}; 
    }
    namespace CrcPol{    ///<CRC polynomial
        using Addr = Register::Address<0x40023010,0x00000000,0x00000000,std::uint32_t>;
        ///Programmable polynomial
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pol{}; 
    }
}
