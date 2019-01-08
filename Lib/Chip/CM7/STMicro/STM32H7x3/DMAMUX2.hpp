#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DMAMUX
    namespace Dmamux2Dmamux2C0cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x58025800,0xe000fc00,0x00000000,std::uint32_t>;
        ///Input DMA request line              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dmareqId{}; 
        ///Interrupt enable at synchronization              event overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> soie{}; 
        ///Event generation              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ege{}; 
        ///Synchronous operating mode              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> se{}; 
        ///Synchronization event type selector              Defines the synchronization event on the selected              synchronization input:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> spol{}; 
        ///Number of DMA requests to forward              Defines the number of DMA requests forwarded before              output event is generated. In synchronous mode, it              also defines the number of DMA requests to forward              after a synchronization event, then stop forwarding.              The actual number of DMA requests forwarded is              NBREQ+1. Note: This field can only be written when              both SE and EGE bits are reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> nbreq{}; 
        ///Synchronization input              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> syncId{}; 
    }
    namespace Dmamux2Dmamux2C1cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x58025804,0xe000fc00,0x00000000,std::uint32_t>;
        ///Input DMA request line              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dmareqId{}; 
        ///Interrupt enable at synchronization              event overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> soie{}; 
        ///Event generation              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ege{}; 
        ///Synchronous operating mode              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> se{}; 
        ///Synchronization event type selector              Defines the synchronization event on the selected              synchronization input:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> spol{}; 
        ///Number of DMA requests to forward              Defines the number of DMA requests forwarded before              output event is generated. In synchronous mode, it              also defines the number of DMA requests to forward              after a synchronization event, then stop forwarding.              The actual number of DMA requests forwarded is              NBREQ+1. Note: This field can only be written when              both SE and EGE bits are reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> nbreq{}; 
        ///Synchronization input              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> syncId{}; 
    }
    namespace Dmamux2Dmamux2C2cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x58025808,0xe000fc00,0x00000000,std::uint32_t>;
        ///Input DMA request line              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dmareqId{}; 
        ///Interrupt enable at synchronization              event overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> soie{}; 
        ///Event generation              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ege{}; 
        ///Synchronous operating mode              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> se{}; 
        ///Synchronization event type selector              Defines the synchronization event on the selected              synchronization input:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> spol{}; 
        ///Number of DMA requests to forward              Defines the number of DMA requests forwarded before              output event is generated. In synchronous mode, it              also defines the number of DMA requests to forward              after a synchronization event, then stop forwarding.              The actual number of DMA requests forwarded is              NBREQ+1. Note: This field can only be written when              both SE and EGE bits are reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> nbreq{}; 
        ///Synchronization input              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> syncId{}; 
    }
    namespace Dmamux2Dmamux2C3cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x5802580c,0xe000fc00,0x00000000,std::uint32_t>;
        ///Input DMA request line              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dmareqId{}; 
        ///Interrupt enable at synchronization              event overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> soie{}; 
        ///Event generation              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ege{}; 
        ///Synchronous operating mode              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> se{}; 
        ///Synchronization event type selector              Defines the synchronization event on the selected              synchronization input:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> spol{}; 
        ///Number of DMA requests to forward              Defines the number of DMA requests forwarded before              output event is generated. In synchronous mode, it              also defines the number of DMA requests to forward              after a synchronization event, then stop forwarding.              The actual number of DMA requests forwarded is              NBREQ+1. Note: This field can only be written when              both SE and EGE bits are reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> nbreq{}; 
        ///Synchronization input              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> syncId{}; 
    }
    namespace Dmamux2Dmamux2C4cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x58025810,0xe000fc00,0x00000000,std::uint32_t>;
        ///Input DMA request line              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dmareqId{}; 
        ///Interrupt enable at synchronization              event overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> soie{}; 
        ///Event generation              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ege{}; 
        ///Synchronous operating mode              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> se{}; 
        ///Synchronization event type selector              Defines the synchronization event on the selected              synchronization input:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> spol{}; 
        ///Number of DMA requests to forward              Defines the number of DMA requests forwarded before              output event is generated. In synchronous mode, it              also defines the number of DMA requests to forward              after a synchronization event, then stop forwarding.              The actual number of DMA requests forwarded is              NBREQ+1. Note: This field can only be written when              both SE and EGE bits are reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> nbreq{}; 
        ///Synchronization input              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> syncId{}; 
    }
    namespace Dmamux2Dmamux2C5cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x58025814,0xe000fc00,0x00000000,std::uint32_t>;
        ///Input DMA request line              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dmareqId{}; 
        ///Interrupt enable at synchronization              event overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> soie{}; 
        ///Event generation              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ege{}; 
        ///Synchronous operating mode              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> se{}; 
        ///Synchronization event type selector              Defines the synchronization event on the selected              synchronization input:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> spol{}; 
        ///Number of DMA requests to forward              Defines the number of DMA requests forwarded before              output event is generated. In synchronous mode, it              also defines the number of DMA requests to forward              after a synchronization event, then stop forwarding.              The actual number of DMA requests forwarded is              NBREQ+1. Note: This field can only be written when              both SE and EGE bits are reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> nbreq{}; 
        ///Synchronization input              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> syncId{}; 
    }
    namespace Dmamux2Dmamux2C6cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x58025818,0xe000fc00,0x00000000,std::uint32_t>;
        ///Input DMA request line              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dmareqId{}; 
        ///Interrupt enable at synchronization              event overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> soie{}; 
        ///Event generation              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ege{}; 
        ///Synchronous operating mode              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> se{}; 
        ///Synchronization event type selector              Defines the synchronization event on the selected              synchronization input:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> spol{}; 
        ///Number of DMA requests to forward              Defines the number of DMA requests forwarded before              output event is generated. In synchronous mode, it              also defines the number of DMA requests to forward              after a synchronization event, then stop forwarding.              The actual number of DMA requests forwarded is              NBREQ+1. Note: This field can only be written when              both SE and EGE bits are reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> nbreq{}; 
        ///Synchronization input              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> syncId{}; 
    }
    namespace Dmamux2Dmamux2C7cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x5802581c,0xe000fc00,0x00000000,std::uint32_t>;
        ///Input DMA request line              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dmareqId{}; 
        ///Interrupt enable at synchronization              event overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> soie{}; 
        ///Event generation              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ege{}; 
        ///Synchronous operating mode              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> se{}; 
        ///Synchronization event type selector              Defines the synchronization event on the selected              synchronization input:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> spol{}; 
        ///Number of DMA requests to forward              Defines the number of DMA requests forwarded before              output event is generated. In synchronous mode, it              also defines the number of DMA requests to forward              after a synchronization event, then stop forwarding.              The actual number of DMA requests forwarded is              NBREQ+1. Note: This field can only be written when              both SE and EGE bits are reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> nbreq{}; 
        ///Synchronization input              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> syncId{}; 
    }
    namespace Dmamux2Dmamux2Rg0cr{    ///<DMAMux - DMA request generator channel x          control register
        using Addr = Register::Address<0x58025900,0xff00fee0,0x00000000,std::uint32_t>;
        ///DMA request trigger input              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sigId{}; 
        ///Interrupt enable at trigger event              overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> oie{}; 
        ///DMA request generator channel              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ge{}; 
        ///DMA request generator trigger event type              selection Defines the trigger event on the selected              DMA request trigger input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> gpol{}; 
        ///Number of DMA requests to generate              Defines the number of DMA requests generated after a              trigger event, then stop generating. The actual              number of generated DMA requests is GNBREQ+1. Note:              This field can only be written when GE bit is              reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> gnbreq{}; 
    }
    namespace Dmamux2Dmamux2Rg1cr{    ///<DMAMux - DMA request generator channel x          control register
        using Addr = Register::Address<0x58025904,0xff00fee0,0x00000000,std::uint32_t>;
        ///DMA request trigger input              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sigId{}; 
        ///Interrupt enable at trigger event              overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> oie{}; 
        ///DMA request generator channel              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ge{}; 
        ///DMA request generator trigger event type              selection Defines the trigger event on the selected              DMA request trigger input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> gpol{}; 
        ///Number of DMA requests to generate              Defines the number of DMA requests generated after a              trigger event, then stop generating. The actual              number of generated DMA requests is GNBREQ+1. Note:              This field can only be written when GE bit is              reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> gnbreq{}; 
    }
    namespace Dmamux2Dmamux2Rg2cr{    ///<DMAMux - DMA request generator channel x          control register
        using Addr = Register::Address<0x58025908,0xff00fee0,0x00000000,std::uint32_t>;
        ///DMA request trigger input              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sigId{}; 
        ///Interrupt enable at trigger event              overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> oie{}; 
        ///DMA request generator channel              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ge{}; 
        ///DMA request generator trigger event type              selection Defines the trigger event on the selected              DMA request trigger input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> gpol{}; 
        ///Number of DMA requests to generate              Defines the number of DMA requests generated after a              trigger event, then stop generating. The actual              number of generated DMA requests is GNBREQ+1. Note:              This field can only be written when GE bit is              reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> gnbreq{}; 
    }
    namespace Dmamux2Dmamux2Rg3cr{    ///<DMAMux - DMA request generator channel x          control register
        using Addr = Register::Address<0x5802590c,0xff00fee0,0x00000000,std::uint32_t>;
        ///DMA request trigger input              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sigId{}; 
        ///Interrupt enable at trigger event              overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> oie{}; 
        ///DMA request generator channel              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ge{}; 
        ///DMA request generator trigger event type              selection Defines the trigger event on the selected              DMA request trigger input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> gpol{}; 
        ///Number of DMA requests to generate              Defines the number of DMA requests generated after a              trigger event, then stop generating. The actual              number of generated DMA requests is GNBREQ+1. Note:              This field can only be written when GE bit is              reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> gnbreq{}; 
    }
    namespace Dmamux2Dmamux2Rg4cr{    ///<DMAMux - DMA request generator channel x          control register
        using Addr = Register::Address<0x58025910,0xff00fee0,0x00000000,std::uint32_t>;
        ///DMA request trigger input              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sigId{}; 
        ///Interrupt enable at trigger event              overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> oie{}; 
        ///DMA request generator channel              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ge{}; 
        ///DMA request generator trigger event type              selection Defines the trigger event on the selected              DMA request trigger input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> gpol{}; 
        ///Number of DMA requests to generate              Defines the number of DMA requests generated after a              trigger event, then stop generating. The actual              number of generated DMA requests is GNBREQ+1. Note:              This field can only be written when GE bit is              reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> gnbreq{}; 
    }
    namespace Dmamux2Dmamux2Rg5cr{    ///<DMAMux - DMA request generator channel x          control register
        using Addr = Register::Address<0x58025914,0xff00fee0,0x00000000,std::uint32_t>;
        ///DMA request trigger input              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sigId{}; 
        ///Interrupt enable at trigger event              overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> oie{}; 
        ///DMA request generator channel              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ge{}; 
        ///DMA request generator trigger event type              selection Defines the trigger event on the selected              DMA request trigger input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> gpol{}; 
        ///Number of DMA requests to generate              Defines the number of DMA requests generated after a              trigger event, then stop generating. The actual              number of generated DMA requests is GNBREQ+1. Note:              This field can only be written when GE bit is              reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> gnbreq{}; 
    }
    namespace Dmamux2Dmamux2Rg6cr{    ///<DMAMux - DMA request generator channel x          control register
        using Addr = Register::Address<0x58025918,0xff00fee0,0x00000000,std::uint32_t>;
        ///DMA request trigger input              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sigId{}; 
        ///Interrupt enable at trigger event              overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> oie{}; 
        ///DMA request generator channel              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ge{}; 
        ///DMA request generator trigger event type              selection Defines the trigger event on the selected              DMA request trigger input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> gpol{}; 
        ///Number of DMA requests to generate              Defines the number of DMA requests generated after a              trigger event, then stop generating. The actual              number of generated DMA requests is GNBREQ+1. Note:              This field can only be written when GE bit is              reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> gnbreq{}; 
    }
    namespace Dmamux2Dmamux2Rg7cr{    ///<DMAMux - DMA request generator channel x          control register
        using Addr = Register::Address<0x5802591c,0xff00fee0,0x00000000,std::uint32_t>;
        ///DMA request trigger input              selected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sigId{}; 
        ///Interrupt enable at trigger event              overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> oie{}; 
        ///DMA request generator channel              enable/disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ge{}; 
        ///DMA request generator trigger event type              selection Defines the trigger event on the selected              DMA request trigger input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> gpol{}; 
        ///Number of DMA requests to generate              Defines the number of DMA requests generated after a              trigger event, then stop generating. The actual              number of generated DMA requests is GNBREQ+1. Note:              This field can only be written when GE bit is              reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> gnbreq{}; 
    }
    namespace Dmamux2Dmamux2Rgsr{    ///<DMAMux - DMA request generator status          register
        using Addr = Register::Address<0x58025940,0xffffff00,0x00000000,std::uint32_t>;
        ///Trigger event overrun flag The flag is              set when a trigger event occurs on DMA request              generator channel x, while the DMA request generator              counter value is lower than GNBREQ. The flag is              cleared by writing 1 to the corresponding COFx bit in              DMAMUX_RGCFR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> of{}; 
    }
    namespace Dmamux2Dmamux2Rgcfr{    ///<DMAMux - DMA request generator clear flag          register
        using Addr = Register::Address<0x58025944,0xffffff00,0x00000000,std::uint32_t>;
        ///Clear trigger event overrun flag Upon              setting, this bit clears the corresponding overrun              flag OFx in the DMAMUX_RGCSR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cof{}; 
    }
    namespace Dmamux2Dmamux2Csr{    ///<DMAMUX request line multiplexer interrupt          channel status register
        using Addr = Register::Address<0x58025880,0xffff0000,0x00000000,std::uint32_t>;
        ///Synchronization overrun event              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> sof{}; 
    }
    namespace Dmamux2Dmamux2Cfr{    ///<DMAMUX request line multiplexer interrupt          clear flag register
        using Addr = Register::Address<0x58025884,0xffff0000,0x00000000,std::uint32_t>;
        ///Clear synchronization overrun event              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> csof{}; 
    }
}
