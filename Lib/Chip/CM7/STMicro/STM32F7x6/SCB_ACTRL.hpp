#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System control block ACTLR
    namespace ScbActrlActrl{    ///<Auxiliary control register
        using Addr = Register::Address<0xe000e008,0xffffe3fb,0x00000000,std::uint32_t>;
        ///DISFOLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> disfold{}; 
        ///FPEXCODIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fpexcodis{}; 
        ///DISRAMODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> disramode{}; 
        ///DISITMATBFLUSH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> disitmatbflush{}; 
    }
}
