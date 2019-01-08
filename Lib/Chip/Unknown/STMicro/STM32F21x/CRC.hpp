#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//cyclic redundancy check calculation      unit
    namespace CrcDr{    ///<Data register
        using Addr = Register::Address<0x40023000,0x00000000,0x00000000,std::uint32_t>;
        ///Data register bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dr{}; 
    }
    namespace CrcIdr{    ///<Independent data register
        using Addr = Register::Address<0x40023004,0xffffff00,0x00000000,std::uint32_t>;
        ///General-purpose 8-bit data register              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> idr{}; 
    }
    namespace CrcCr{    ///<Control register
        using Addr = Register::Address<0x40023008,0xfffffffe,0x00000000,std::uint32_t>;
        ///reset bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reset{}; 
    }
}
