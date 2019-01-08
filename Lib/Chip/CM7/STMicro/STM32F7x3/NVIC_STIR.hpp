#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Nested vectored interrupt      controller
    namespace NvicStirStir{    ///<Software trigger interrupt          register
        using Addr = Register::Address<0xe000ef00,0xfffffe00,0x00000000,std::uint32_t>;
        ///Software generated interrupt              ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> intid{}; 
    }
}
