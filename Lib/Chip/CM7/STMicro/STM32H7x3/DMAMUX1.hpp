#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DMAMUX
    namespace Dmamux1Dmamux1C0cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x40020800,0xe000fc00,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1C1cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x40020804,0xe000fc00,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1C2cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x40020808,0xe000fc00,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1C3cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x4002080c,0xe000fc00,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1C4cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x40020810,0xe000fc00,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1C5cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x40020814,0xe000fc00,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1C6cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x40020818,0xe000fc00,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1C7cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x4002081c,0xe000fc00,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1C8cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x40020820,0xe000fc00,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1C9cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x40020824,0xe000fc00,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1C10cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x40020828,0xe000fc00,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1C11cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x4002082c,0xe000fc00,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1C12cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x40020830,0xe000fc00,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1C13cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x40020834,0xe000fc00,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1C14cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x40020838,0xe000fc00,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1C15cr{    ///<DMAMux - DMA request line multiplexer          channel x control register
        using Addr = Register::Address<0x4002083c,0xe000fc00,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1Rg0cr{    ///<DMAMux - DMA request generator channel x          control register
        using Addr = Register::Address<0x40020900,0xff00fee0,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1Rg1cr{    ///<DMAMux - DMA request generator channel x          control register
        using Addr = Register::Address<0x40020904,0xff00fee0,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1Rg2cr{    ///<DMAMux - DMA request generator channel x          control register
        using Addr = Register::Address<0x40020908,0xff00fee0,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1Rg3cr{    ///<DMAMux - DMA request generator channel x          control register
        using Addr = Register::Address<0x4002090c,0xff00fee0,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1Rg4cr{    ///<DMAMux - DMA request generator channel x          control register
        using Addr = Register::Address<0x40020910,0xff00fee0,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1Rg5cr{    ///<DMAMux - DMA request generator channel x          control register
        using Addr = Register::Address<0x40020914,0xff00fee0,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1Rg6cr{    ///<DMAMux - DMA request generator channel x          control register
        using Addr = Register::Address<0x40020918,0xff00fee0,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1Rg7cr{    ///<DMAMux - DMA request generator channel x          control register
        using Addr = Register::Address<0x4002091c,0xff00fee0,0x00000000,std::uint32_t>;
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
    namespace Dmamux1Dmamux1Rgsr{    ///<DMAMux - DMA request generator status          register
        using Addr = Register::Address<0x40020940,0xffffff00,0x00000000,std::uint32_t>;
        ///Trigger event overrun flag The flag is              set when a trigger event occurs on DMA request              generator channel x, while the DMA request generator              counter value is lower than GNBREQ. The flag is              cleared by writing 1 to the corresponding COFx bit in              DMAMUX_RGCFR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> of{}; 
    }
    namespace Dmamux1Dmamux1Rgcfr{    ///<DMAMux - DMA request generator clear flag          register
        using Addr = Register::Address<0x40020944,0xffffff00,0x00000000,std::uint32_t>;
        ///Clear trigger event overrun flag Upon              setting, this bit clears the corresponding overrun              flag OFx in the DMAMUX_RGCSR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cof{}; 
    }
    namespace Dmamux1Dmamux1Csr{    ///<DMAMUX request line multiplexer interrupt          channel status register
        using Addr = Register::Address<0x40020880,0xffff0000,0x00000000,std::uint32_t>;
        ///Synchronization overrun event              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> sof{}; 
    }
    namespace Dmamux1Dmamux1Cfr{    ///<DMAMUX request line multiplexer interrupt          clear flag register
        using Addr = Register::Address<0x40020884,0xffff0000,0x00000000,std::uint32_t>;
        ///Clear synchronization overrun event              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> csof{}; 
    }
}
