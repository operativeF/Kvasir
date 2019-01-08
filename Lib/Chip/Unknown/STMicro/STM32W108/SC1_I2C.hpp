#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Serial controller 1 (Serial peripheral      interface)
    namespace Sc1I2cSc1I2csr{    ///<Serial controller I2C status          register
        using Addr = Register::Address<0x4000c844,0xfffffff0,0x00000000,std::uint32_t>;
        ///CMDFIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmdfin{}; 
        ///BRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brf{}; 
        ///BTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btf{}; 
        ///NACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nack{}; 
    }
    namespace Sc1I2cSc1I2ccr1{    ///<Serial controller I2C control register          1
        using Addr = Register::Address<0x4000c84c,0xfffffff0,0x00000000,std::uint32_t>;
        ///STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stop{}; 
        ///START
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> start{}; 
        ///BTE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bte{}; 
        ///BRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bre{}; 
    }
    namespace Sc1I2cSc1I2ccr2{    ///<Serial controller I2C control register          2
        using Addr = Register::Address<0x4000c850,0xfffffffe,0x00000000,std::uint32_t>;
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ack{}; 
    }
}
