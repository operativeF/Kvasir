#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//WWDG
    namespace WwdgWwdgCr{    ///<Control register
        using Addr = Register::Address<0x50003000,0xffffff00,0x00000000,std::uint32_t>;
        ///7-bit counter (MSB to LSB) These bits              contain the value of the watchdog counter. It is              decremented every (4096 x 2WDGTB[1:0]) PCLK cycles. A              reset is produced when it is decremented from 0x40 to              0x3F (T6 becomes cleared).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> t{}; 
        ///Activation bit This bit is set by              software and only cleared by hardware after a reset.              When WDGA=1, the watchdog can generate a              reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wdga{}; 
    }
    namespace WwdgWwdgCfr{    ///<Configuration register
        using Addr = Register::Address<0x50003004,0xffffe580,0x00000000,std::uint32_t>;
        ///7-bit window value These bits contain              the window value to be compared to the              downcounter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> w{}; 
        ///Timer base The time base of the              prescaler can be modified as follows:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> wdgtb{}; 
        ///Early wakeup interrupt When set, an              interrupt occurs whenever the counter reaches the              value 0x40. This interrupt is only cleared by              hardware after a reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ewi{}; 
    }
    namespace WwdgWwdgSr{    ///<Status register
        using Addr = Register::Address<0x50003008,0xfffffffe,0x00000000,std::uint32_t>;
        ///Early wakeup interrupt flag This bit is              set by hardware when the counter has reached the              value 0x40. It must be cleared by software by writing              0. A write of 1 has no effect. This bit is also set              if the interrupt is not enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ewif{}; 
    }
}
