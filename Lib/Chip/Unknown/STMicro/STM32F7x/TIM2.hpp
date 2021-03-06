#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General purpose timers
    namespace Tim2Cr1{    ///<control register 1
        using Addr = Register::Address<0x40000000,0xfffffc00,0x00000000,std::uint32_t>;
        ///Clock division
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ckd{}; 
        ///Auto-reload preload enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arpe{}; 
        ///Center-aligned mode              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> cms{}; 
        ///Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///One-pulse mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> opm{}; 
        ///Update request source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> urs{}; 
        ///Update disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> udis{}; 
        ///Counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
    }
    namespace Tim2Cr2{    ///<control register 2
        using Addr = Register::Address<0x40000004,0xffffff07,0x00000000,std::uint32_t>;
        ///TI1 selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ti1s{}; 
        ///Master mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> mms{}; 
        ///Capture/compare DMA              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ccds{}; 
    }
    namespace Tim2Smcr{    ///<slave mode control register
        using Addr = Register::Address<0x40000008,0xfffe0008,0x00000000,std::uint32_t>;
        ///Slave mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sms{}; 
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ts{}; 
        ///Master/Slave mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msm{}; 
        ///External trigger filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> etf{}; 
        ///External trigger prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> etps{}; 
        ///External clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ece{}; 
        ///External trigger polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> etp{}; 
        ///Slave model selection -              bit[3]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sms3{}; 
    }
    namespace Tim2Dier{    ///<DMA/Interrupt enable register
        using Addr = Register::Address<0x4000000c,0xffffa0a0,0x00000000,std::uint32_t>;
        ///Trigger DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tde{}; 
        ///Capture/Compare 4 DMA request              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cc4de{}; 
        ///Capture/Compare 3 DMA request              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cc3de{}; 
        ///Capture/Compare 2 DMA request              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc2de{}; 
        ///Capture/Compare 1 DMA request              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1de{}; 
        ///Update DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ude{}; 
        ///Trigger interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tie{}; 
        ///Capture/Compare 4 interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4ie{}; 
        ///Capture/Compare 3 interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3ie{}; 
        ///Capture/Compare 2 interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2ie{}; 
        ///Capture/Compare 1 interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1ie{}; 
        ///Update interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uie{}; 
    }
    namespace Tim2Sr{    ///<status register
        using Addr = Register::Address<0x40000010,0xffffe1a0,0x00000000,std::uint32_t>;
        ///Capture/Compare 4 overcapture              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cc4of{}; 
        ///Capture/Compare 3 overcapture              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cc3of{}; 
        ///Capture/compare 2 overcapture              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc2of{}; 
        ///Capture/Compare 1 overcapture              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1of{}; 
        ///Trigger interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tif{}; 
        ///Capture/Compare 4 interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4if{}; 
        ///Capture/Compare 3 interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3if{}; 
        ///Capture/Compare 2 interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2if{}; 
        ///Capture/compare 1 interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1if{}; 
        ///Update interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uif{}; 
    }
    namespace Tim2Egr{    ///<event generation register
        using Addr = Register::Address<0x40000014,0xffffffa0,0x00000000,std::uint32_t>;
        ///Trigger generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tg{}; 
        ///Capture/compare 4              generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4g{}; 
        ///Capture/compare 3              generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3g{}; 
        ///Capture/compare 2              generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2g{}; 
        ///Capture/compare 1              generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1g{}; 
        ///Update generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ug{}; 
    }
    namespace Tim2Ccmr1Output{    ///<capture/compare mode register 1 (output          mode)
        using Addr = Register::Address<0x40000018,0xffff0000,0x00000000,std::uint32_t>;
        ///OC2CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> oc2ce{}; 
        ///OC2M
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> oc2m{}; 
        ///OC2PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oc2pe{}; 
        ///OC2FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oc2fe{}; 
        ///CC2S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc2s{}; 
        ///OC1CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> oc1ce{}; 
        ///OC1M
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc1m{}; 
        ///OC1PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc1pe{}; 
        ///OC1FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc1fe{}; 
        ///CC1S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
    }
    namespace Tim2Ccmr1Input{    ///<capture/compare mode register 1 (input          mode)
        using Addr = Register::Address<0x40000018,0xffff0000,0x00000000,std::uint32_t>;
        ///Input capture 2 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ic2f{}; 
        ///Input capture 2 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ic2pcs{}; 
        ///Capture/Compare 2              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc2s{}; 
        ///Input capture 1 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic1f{}; 
        ///Input capture 1 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> icpcs{}; 
        ///Capture/Compare 1              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
    }
    namespace Tim2Ccmr2Output{    ///<capture/compare mode register 2 (output          mode)
        using Addr = Register::Address<0x4000001c,0xffff0000,0x00000000,std::uint32_t>;
        ///O24CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> o24ce{}; 
        ///OC4M
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> oc4m{}; 
        ///OC4PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oc4pe{}; 
        ///OC4FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oc4fe{}; 
        ///CC4S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc4s{}; 
        ///OC3CE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> oc3ce{}; 
        ///OC3M
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc3m{}; 
        ///OC3PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc3pe{}; 
        ///OC3FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc3fe{}; 
        ///CC3S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc3s{}; 
    }
    namespace Tim2Ccmr2Input{    ///<capture/compare mode register 2 (input          mode)
        using Addr = Register::Address<0x4000001c,0xffff0000,0x00000000,std::uint32_t>;
        ///Input capture 4 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ic4f{}; 
        ///Input capture 4 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ic4psc{}; 
        ///Capture/Compare 4              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc4s{}; 
        ///Input capture 3 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic3f{}; 
        ///Input capture 3 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ic3psc{}; 
        ///Capture/compare 3              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc3s{}; 
    }
    namespace Tim2Ccer{    ///<capture/compare enable          register
        using Addr = Register::Address<0x40000020,0xffff4444,0x00000000,std::uint32_t>;
        ///Capture/Compare 4 output              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cc4np{}; 
        ///Capture/Compare 3 output              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cc4p{}; 
        ///Capture/Compare 4 output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cc4e{}; 
        ///Capture/Compare 3 output              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cc3np{}; 
        ///Capture/Compare 3 output              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc3p{}; 
        ///Capture/Compare 3 output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cc3e{}; 
        ///Capture/Compare 2 output              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cc2np{}; 
        ///Capture/Compare 2 output              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cc2p{}; 
        ///Capture/Compare 2 output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc2e{}; 
        ///Capture/Compare 1 output              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc1np{}; 
        ///Capture/Compare 1 output              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1p{}; 
        ///Capture/Compare 1 output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cc1e{}; 
    }
    namespace Tim2Cnt{    ///<counter
        using Addr = Register::Address<0x40000024,0x00000000,0x00000000,std::uint32_t>;
        ///High counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cntH{}; 
        ///Low counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntL{}; 
    }
    namespace Tim2Psc{    ///<prescaler
        using Addr = Register::Address<0x40000028,0xffff0000,0x00000000,std::uint32_t>;
        ///Prescaler value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> psc{}; 
    }
    namespace Tim2Arr{    ///<auto-reload register
        using Addr = Register::Address<0x4000002c,0x00000000,0x00000000,std::uint32_t>;
        ///High Auto-reload value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> arrH{}; 
        ///Low Auto-reload value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arrL{}; 
    }
    namespace Tim2Ccr1{    ///<capture/compare register 1
        using Addr = Register::Address<0x40000034,0x00000000,0x00000000,std::uint32_t>;
        ///High Capture/Compare 1              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ccr1H{}; 
        ///Low Capture/Compare 1              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr1L{}; 
    }
    namespace Tim2Ccr2{    ///<capture/compare register 2
        using Addr = Register::Address<0x40000038,0x00000000,0x00000000,std::uint32_t>;
        ///High Capture/Compare 2              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ccr2H{}; 
        ///Low Capture/Compare 2              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr2L{}; 
    }
    namespace Tim2Ccr3{    ///<capture/compare register 3
        using Addr = Register::Address<0x4000003c,0x00000000,0x00000000,std::uint32_t>;
        ///High Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ccr3H{}; 
        ///Low Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr3L{}; 
    }
    namespace Tim2Ccr4{    ///<capture/compare register 4
        using Addr = Register::Address<0x40000040,0x00000000,0x00000000,std::uint32_t>;
        ///High Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ccr4H{}; 
        ///Low Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr4L{}; 
    }
    namespace Tim2Dcr{    ///<DMA control register
        using Addr = Register::Address<0x40000048,0xffffe0e0,0x00000000,std::uint32_t>;
        ///DMA burst length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> dbl{}; 
        ///DMA base address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dba{}; 
    }
    namespace Tim2Dmar{    ///<DMA address for full transfer
        using Addr = Register::Address<0x4000004c,0xffff0000,0x00000000,std::uint32_t>;
        ///DMA register for burst              accesses
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dmab{}; 
    }
    namespace Tim2Or1{    ///<TIM2 option register 1
        using Addr = Register::Address<0x40000050,0xfffffff0,0x00000000,std::uint32_t>;
        ///Input Capture 4 remap
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ti4Rmp{}; 
        ///External trigger remap
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> etr1Rmp{}; 
        ///Internal trigger 1 remap
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> itr1Rmp{}; 
    }
    namespace Tim2Or2{    ///<TIM2 option register 2
        using Addr = Register::Address<0x40000060,0xfffe3fff,0x00000000,std::uint32_t>;
        ///ETR source selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,unsigned> etrsel{}; 
    }
}
