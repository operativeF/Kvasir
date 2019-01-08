#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//External Interrupt Controller
    namespace EicCtrla{    ///<Control A
        using Addr = Register::Address<0x40002800,0xffffffec,0x00000000,std::uint8_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Clock Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cksel{}; 
    }
    namespace EicNmictrl{    ///<Non-Maskable Interrupt Control
        using Addr = Register::Address<0x40002801,0xffffffe0,0x00000000,std::uint8_t>;
        ///Non-Maskable Interrupt Sense Configuration
        enum class NmisenseVal {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising-edge detection
            fall=0x00000002,     ///<Falling-edge detection
            both=0x00000003,     ///<Both-edges detection
            high=0x00000004,     ///<High-level detection
            low=0x00000005,     ///<Low-level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,NmisenseVal> nmisense{}; 
        namespace NmisenseValC{
            constexpr Register::FieldValue<decltype(nmisense)::Type,NmisenseVal::none> none{};
            constexpr Register::FieldValue<decltype(nmisense)::Type,NmisenseVal::rise> rise{};
            constexpr Register::FieldValue<decltype(nmisense)::Type,NmisenseVal::fall> fall{};
            constexpr Register::FieldValue<decltype(nmisense)::Type,NmisenseVal::both> both{};
            constexpr Register::FieldValue<decltype(nmisense)::Type,NmisenseVal::high> high{};
            constexpr Register::FieldValue<decltype(nmisense)::Type,NmisenseVal::low> low{};
        }
        ///Non-Maskable Interrupt Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nmifilten{}; 
        ///Asynchronous Edge Detection Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nmiasynch{}; 
    }
    namespace EicNmiflag{    ///<Non-Maskable Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40002802,0xfffffffe,0x00000000,std::uint16_t>;
        ///Non-Maskable Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmi{}; 
    }
    namespace EicSyncbusy{    ///<Synchronization Busy
        using Addr = Register::Address<0x40002804,0xfffffffc,0x00000000,std::uint32_t>;
        ///Software Reset Synchronization Busy Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable Synchronization Busy Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
    }
    namespace EicEvctrl{    ///<Event Control
        using Addr = Register::Address<0x40002808,0xffff0000,0x00000000,std::uint32_t>;
        ///External Interrupt Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> extinteo{}; 
    }
    namespace EicIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x4000280c,0xffff0000,0x00000000,std::uint32_t>;
        ///External Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> extint{}; 
    }
    namespace EicIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x40002810,0xffff0000,0x00000000,std::uint32_t>;
        ///External Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> extint{}; 
    }
    namespace EicIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40002814,0xffff0000,0x00000000,std::uint32_t>;
        ///External Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> extint{}; 
    }
    namespace EicAsynch{    ///<External Interrupt Asynchronous Mode
        using Addr = Register::Address<0x40002818,0xffff0000,0x00000000,std::uint32_t>;
        ///Asynchronous Edge Detection Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> asynch{}; 
    }
    namespace EicDebouncen{    ///<Debouncer Enable
        using Addr = Register::Address<0x40002830,0xffff0000,0x00000000,std::uint32_t>;
        ///Debouncer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> debouncen{}; 
    }
    namespace EicDprescaler{    ///<Debouncer Prescaler
        using Addr = Register::Address<0x40002834,0xfffeff00,0x00000000,std::uint32_t>;
        ///Debouncer Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> prescaler0{}; 
        ///Debouncer Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> prescaler1{}; 
        ///Debouncer number of states
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> states0{}; 
        ///Debouncer number of states
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> states1{}; 
        ///Pin Sampler frequency selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tickon{}; 
    }
    namespace EicPinstate{    ///<Pin State
        using Addr = Register::Address<0x40002838,0xffff0000,0x00000000,std::uint32_t>;
        ///Pin State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pinstate{}; 
    }
    namespace EicConfig0{    ///<External Interrupt Sense Configuration
        using Addr = Register::Address<0x4000281c,0x00000000,0x00000000,std::uint32_t>;
        ///Input Sense Configuration 0
        enum class Sense0Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,Sense0Val> sense0{}; 
        namespace Sense0ValC{
            constexpr Register::FieldValue<decltype(sense0)::Type,Sense0Val::none> none{};
            constexpr Register::FieldValue<decltype(sense0)::Type,Sense0Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense0)::Type,Sense0Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense0)::Type,Sense0Val::both> both{};
            constexpr Register::FieldValue<decltype(sense0)::Type,Sense0Val::high> high{};
            constexpr Register::FieldValue<decltype(sense0)::Type,Sense0Val::low> low{};
        }
        ///Filter Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> filten0{}; 
        ///Input Sense Configuration 1
        enum class Sense1Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,Sense1Val> sense1{}; 
        namespace Sense1ValC{
            constexpr Register::FieldValue<decltype(sense1)::Type,Sense1Val::none> none{};
            constexpr Register::FieldValue<decltype(sense1)::Type,Sense1Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense1)::Type,Sense1Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense1)::Type,Sense1Val::both> both{};
            constexpr Register::FieldValue<decltype(sense1)::Type,Sense1Val::high> high{};
            constexpr Register::FieldValue<decltype(sense1)::Type,Sense1Val::low> low{};
        }
        ///Filter Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> filten1{}; 
        ///Input Sense Configuration 2
        enum class Sense2Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,Sense2Val> sense2{}; 
        namespace Sense2ValC{
            constexpr Register::FieldValue<decltype(sense2)::Type,Sense2Val::none> none{};
            constexpr Register::FieldValue<decltype(sense2)::Type,Sense2Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense2)::Type,Sense2Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense2)::Type,Sense2Val::both> both{};
            constexpr Register::FieldValue<decltype(sense2)::Type,Sense2Val::high> high{};
            constexpr Register::FieldValue<decltype(sense2)::Type,Sense2Val::low> low{};
        }
        ///Filter Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> filten2{}; 
        ///Input Sense Configuration 3
        enum class Sense3Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,Sense3Val> sense3{}; 
        namespace Sense3ValC{
            constexpr Register::FieldValue<decltype(sense3)::Type,Sense3Val::none> none{};
            constexpr Register::FieldValue<decltype(sense3)::Type,Sense3Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense3)::Type,Sense3Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense3)::Type,Sense3Val::both> both{};
            constexpr Register::FieldValue<decltype(sense3)::Type,Sense3Val::high> high{};
            constexpr Register::FieldValue<decltype(sense3)::Type,Sense3Val::low> low{};
        }
        ///Filter Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> filten3{}; 
        ///Input Sense Configuration 4
        enum class Sense4Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,Sense4Val> sense4{}; 
        namespace Sense4ValC{
            constexpr Register::FieldValue<decltype(sense4)::Type,Sense4Val::none> none{};
            constexpr Register::FieldValue<decltype(sense4)::Type,Sense4Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense4)::Type,Sense4Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense4)::Type,Sense4Val::both> both{};
            constexpr Register::FieldValue<decltype(sense4)::Type,Sense4Val::high> high{};
            constexpr Register::FieldValue<decltype(sense4)::Type,Sense4Val::low> low{};
        }
        ///Filter Enable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> filten4{}; 
        ///Input Sense Configuration 5
        enum class Sense5Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,Sense5Val> sense5{}; 
        namespace Sense5ValC{
            constexpr Register::FieldValue<decltype(sense5)::Type,Sense5Val::none> none{};
            constexpr Register::FieldValue<decltype(sense5)::Type,Sense5Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense5)::Type,Sense5Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense5)::Type,Sense5Val::both> both{};
            constexpr Register::FieldValue<decltype(sense5)::Type,Sense5Val::high> high{};
            constexpr Register::FieldValue<decltype(sense5)::Type,Sense5Val::low> low{};
        }
        ///Filter Enable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> filten5{}; 
        ///Input Sense Configuration 6
        enum class Sense6Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,Sense6Val> sense6{}; 
        namespace Sense6ValC{
            constexpr Register::FieldValue<decltype(sense6)::Type,Sense6Val::none> none{};
            constexpr Register::FieldValue<decltype(sense6)::Type,Sense6Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense6)::Type,Sense6Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense6)::Type,Sense6Val::both> both{};
            constexpr Register::FieldValue<decltype(sense6)::Type,Sense6Val::high> high{};
            constexpr Register::FieldValue<decltype(sense6)::Type,Sense6Val::low> low{};
        }
        ///Filter Enable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> filten6{}; 
        ///Input Sense Configuration 7
        enum class Sense7Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,Sense7Val> sense7{}; 
        namespace Sense7ValC{
            constexpr Register::FieldValue<decltype(sense7)::Type,Sense7Val::none> none{};
            constexpr Register::FieldValue<decltype(sense7)::Type,Sense7Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense7)::Type,Sense7Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense7)::Type,Sense7Val::both> both{};
            constexpr Register::FieldValue<decltype(sense7)::Type,Sense7Val::high> high{};
            constexpr Register::FieldValue<decltype(sense7)::Type,Sense7Val::low> low{};
        }
        ///Filter Enable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> filten7{}; 
    }
    namespace EicConfig1{    ///<External Interrupt Sense Configuration
        using Addr = Register::Address<0x40002820,0x00000000,0x00000000,std::uint32_t>;
        ///Input Sense Configuration 0
        enum class Sense0Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,Sense0Val> sense0{}; 
        namespace Sense0ValC{
            constexpr Register::FieldValue<decltype(sense0)::Type,Sense0Val::none> none{};
            constexpr Register::FieldValue<decltype(sense0)::Type,Sense0Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense0)::Type,Sense0Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense0)::Type,Sense0Val::both> both{};
            constexpr Register::FieldValue<decltype(sense0)::Type,Sense0Val::high> high{};
            constexpr Register::FieldValue<decltype(sense0)::Type,Sense0Val::low> low{};
        }
        ///Filter Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> filten0{}; 
        ///Input Sense Configuration 1
        enum class Sense1Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,Sense1Val> sense1{}; 
        namespace Sense1ValC{
            constexpr Register::FieldValue<decltype(sense1)::Type,Sense1Val::none> none{};
            constexpr Register::FieldValue<decltype(sense1)::Type,Sense1Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense1)::Type,Sense1Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense1)::Type,Sense1Val::both> both{};
            constexpr Register::FieldValue<decltype(sense1)::Type,Sense1Val::high> high{};
            constexpr Register::FieldValue<decltype(sense1)::Type,Sense1Val::low> low{};
        }
        ///Filter Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> filten1{}; 
        ///Input Sense Configuration 2
        enum class Sense2Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,Sense2Val> sense2{}; 
        namespace Sense2ValC{
            constexpr Register::FieldValue<decltype(sense2)::Type,Sense2Val::none> none{};
            constexpr Register::FieldValue<decltype(sense2)::Type,Sense2Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense2)::Type,Sense2Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense2)::Type,Sense2Val::both> both{};
            constexpr Register::FieldValue<decltype(sense2)::Type,Sense2Val::high> high{};
            constexpr Register::FieldValue<decltype(sense2)::Type,Sense2Val::low> low{};
        }
        ///Filter Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> filten2{}; 
        ///Input Sense Configuration 3
        enum class Sense3Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,Sense3Val> sense3{}; 
        namespace Sense3ValC{
            constexpr Register::FieldValue<decltype(sense3)::Type,Sense3Val::none> none{};
            constexpr Register::FieldValue<decltype(sense3)::Type,Sense3Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense3)::Type,Sense3Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense3)::Type,Sense3Val::both> both{};
            constexpr Register::FieldValue<decltype(sense3)::Type,Sense3Val::high> high{};
            constexpr Register::FieldValue<decltype(sense3)::Type,Sense3Val::low> low{};
        }
        ///Filter Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> filten3{}; 
        ///Input Sense Configuration 4
        enum class Sense4Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,Sense4Val> sense4{}; 
        namespace Sense4ValC{
            constexpr Register::FieldValue<decltype(sense4)::Type,Sense4Val::none> none{};
            constexpr Register::FieldValue<decltype(sense4)::Type,Sense4Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense4)::Type,Sense4Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense4)::Type,Sense4Val::both> both{};
            constexpr Register::FieldValue<decltype(sense4)::Type,Sense4Val::high> high{};
            constexpr Register::FieldValue<decltype(sense4)::Type,Sense4Val::low> low{};
        }
        ///Filter Enable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> filten4{}; 
        ///Input Sense Configuration 5
        enum class Sense5Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,Sense5Val> sense5{}; 
        namespace Sense5ValC{
            constexpr Register::FieldValue<decltype(sense5)::Type,Sense5Val::none> none{};
            constexpr Register::FieldValue<decltype(sense5)::Type,Sense5Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense5)::Type,Sense5Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense5)::Type,Sense5Val::both> both{};
            constexpr Register::FieldValue<decltype(sense5)::Type,Sense5Val::high> high{};
            constexpr Register::FieldValue<decltype(sense5)::Type,Sense5Val::low> low{};
        }
        ///Filter Enable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> filten5{}; 
        ///Input Sense Configuration 6
        enum class Sense6Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,Sense6Val> sense6{}; 
        namespace Sense6ValC{
            constexpr Register::FieldValue<decltype(sense6)::Type,Sense6Val::none> none{};
            constexpr Register::FieldValue<decltype(sense6)::Type,Sense6Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense6)::Type,Sense6Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense6)::Type,Sense6Val::both> both{};
            constexpr Register::FieldValue<decltype(sense6)::Type,Sense6Val::high> high{};
            constexpr Register::FieldValue<decltype(sense6)::Type,Sense6Val::low> low{};
        }
        ///Filter Enable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> filten6{}; 
        ///Input Sense Configuration 7
        enum class Sense7Val {
            none=0x00000000,     ///<No detection
            rise=0x00000001,     ///<Rising edge detection
            fall=0x00000002,     ///<Falling edge detection
            both=0x00000003,     ///<Both edges detection
            high=0x00000004,     ///<High level detection
            low=0x00000005,     ///<Low level detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,Sense7Val> sense7{}; 
        namespace Sense7ValC{
            constexpr Register::FieldValue<decltype(sense7)::Type,Sense7Val::none> none{};
            constexpr Register::FieldValue<decltype(sense7)::Type,Sense7Val::rise> rise{};
            constexpr Register::FieldValue<decltype(sense7)::Type,Sense7Val::fall> fall{};
            constexpr Register::FieldValue<decltype(sense7)::Type,Sense7Val::both> both{};
            constexpr Register::FieldValue<decltype(sense7)::Type,Sense7Val::high> high{};
            constexpr Register::FieldValue<decltype(sense7)::Type,Sense7Val::low> low{};
        }
        ///Filter Enable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> filten7{}; 
    }
}
