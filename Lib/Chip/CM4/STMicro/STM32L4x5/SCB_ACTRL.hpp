#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System control block ACTLR
    namespace ScbActrlActrl{    ///<Auxiliary control register
        using Addr = Register::Address<0xe000e008,0xfffffcf8,0x00000000,std::uint32_t>;
        ///DISMCYCINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dismcycint{}; 
        ///DISDEFWBUF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disdefwbuf{}; 
        ///DISFOLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> disfold{}; 
        ///DISFPCA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> disfpca{}; 
        ///DISOOFP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> disoofp{}; 
    }
}
