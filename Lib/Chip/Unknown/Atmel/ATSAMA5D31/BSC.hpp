#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Boot Sequence Controller
    namespace BscCr{    ///<Boot Sequence Configuration Register
        using Addr = Register::Address<0xfffffe54,0x0000ff00,0x00000000,std::uint32_t>;
        ///Boot media sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> boot{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bootkey{}; 
    }
}
