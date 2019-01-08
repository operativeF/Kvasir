#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//USB 1 on the go high speed
    namespace Otg1HsPwrclkOtgHsPcgcr{    ///<Power and clock gating control          register
        using Addr = Register::Address<0x40040e00,0xffffffec,0x00000000,std::uint32_t>;
        ///Stop PHY clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> stppclk{}; 
        ///Gate HCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gatehclk{}; 
        ///PHY suspended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> physusp{}; 
    }
}
