#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General-purpose-timers
    namespace Tim10Cr1{    ///<control register 1
        using Addr = Register::Address<0x40014400,0xfffffc70,0x00000000,std::uint32_t>;
        ///Clock division
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ckd{}; 
        ///Auto-reload preload enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arpe{}; 
        ///Update request source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> urs{}; 
        ///Update disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> udis{}; 
        ///Counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        ///One-pulse mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> opm{}; 
    }
    namespace Tim10Dier{    ///<DMA/Interrupt enable register
        using Addr = Register::Address<0x4001440c,0xfffffffc,0x00000000,std::uint32_t>;
        ///Capture/Compare 1 interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1ie{}; 
        ///Update interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uie{}; 
    }
    namespace Tim10Sr{    ///<status register
        using Addr = Register::Address<0x40014410,0xfffffdfc,0x00000000,std::uint32_t>;
        ///Capture/Compare 1 overcapture              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1of{}; 
        ///Capture/compare 1 interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1if{}; 
        ///Update interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uif{}; 
    }
    namespace Tim10Egr{    ///<event generation register
        using Addr = Register::Address<0x40014414,0xfffffffc,0x00000000,std::uint32_t>;
        ///Capture/compare 1              generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1g{}; 
        ///Update generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ug{}; 
    }
    namespace Tim10Ccmr1Output{    ///<capture/compare mode register 1 (output          mode)
        using Addr = Register::Address<0x40014418,0xfffeff80,0x00000000,std::uint32_t>;
        ///Output Compare 1 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc1m{}; 
        ///Output Compare 1 preload              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc1pe{}; 
        ///Output Compare 1 fast              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc1fe{}; 
        ///Capture/Compare 1              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
        ///Output Compare 1 mode - bit              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> oc1m3{}; 
    }
    namespace Tim10Ccmr1Input{    ///<capture/compare mode register 1 (input          mode)
        using Addr = Register::Address<0x40014418,0xffffff00,0x00000000,std::uint32_t>;
        ///Input capture 1 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic1f{}; 
        ///Input capture 1 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> icpcs{}; 
        ///Capture/Compare 1              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
    }
    namespace Tim10Ccer{    ///<capture/compare enable          register
        using Addr = Register::Address<0x40014420,0xfffffff4,0x00000000,std::uint32_t>;
        ///Capture/Compare 1 output              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc1np{}; 
        ///Capture/Compare 1 output              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1p{}; 
        ///Capture/Compare 1 output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cc1e{}; 
    }
    namespace Tim10Cnt{    ///<counter
        using Addr = Register::Address<0x40014424,0xffff0000,0x00000000,std::uint32_t>;
        ///counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Tim10Psc{    ///<prescaler
        using Addr = Register::Address<0x40014428,0xffff0000,0x00000000,std::uint32_t>;
        ///Prescaler value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> psc{}; 
    }
    namespace Tim10Arr{    ///<auto-reload register
        using Addr = Register::Address<0x4001442c,0xffff0000,0x00000000,std::uint32_t>;
        ///Auto-reload value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
    }
    namespace Tim10Ccr1{    ///<capture/compare register 1
        using Addr = Register::Address<0x40014434,0xffff0000,0x00000000,std::uint32_t>;
        ///Capture/Compare 1 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr1{}; 
    }
    namespace Tim10Smcr{    ///<slave mode control register
        using Addr = Register::Address<0x40014408,0x00000000,0x00000000,std::uint32_t>;
        ///Res.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> res{}; 
    }
    namespace Tim10Or{    ///<option register
        using Addr = Register::Address<0x40014450,0xfffffffc,0x00000000,std::uint32_t>;
        ///TIM11 Input 1 remapping              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ti1Rmp{}; 
    }
}
