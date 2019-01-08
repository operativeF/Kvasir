#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Event System Interface
    namespace EvsysCtrla{    ///<Control
        using Addr = Register::Address<0x4100e000,0xfffffffe,0x00000000,std::uint8_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
    }
    namespace EvsysSwevt{    ///<Software Event
        using Addr = Register::Address<0x4100e004,0x00000000,0x00000000,std::uint32_t>;
        ///Channel 0 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel0{}; 
        ///Channel 1 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel1{}; 
        ///Channel 2 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel2{}; 
        ///Channel 3 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel3{}; 
        ///Channel 4 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel4{}; 
        ///Channel 5 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel5{}; 
        ///Channel 6 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel6{}; 
        ///Channel 7 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel7{}; 
        ///Channel 8 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel8{}; 
        ///Channel 9 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel9{}; 
        ///Channel 10 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel10{}; 
        ///Channel 11 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel11{}; 
        ///Channel 12 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel12{}; 
        ///Channel 13 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel13{}; 
        ///Channel 14 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel14{}; 
        ///Channel 15 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel15{}; 
        ///Channel 16 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel16{}; 
        ///Channel 17 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel17{}; 
        ///Channel 18 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel18{}; 
        ///Channel 19 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel19{}; 
        ///Channel 20 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel20{}; 
        ///Channel 21 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel21{}; 
        ///Channel 22 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel22{}; 
        ///Channel 23 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel23{}; 
        ///Channel 24 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel24{}; 
        ///Channel 25 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel25{}; 
        ///Channel 26 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel26{}; 
        ///Channel 27 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel27{}; 
        ///Channel 28 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel28{}; 
        ///Channel 29 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel29{}; 
        ///Channel 30 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel30{}; 
        ///Channel 31 Software Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel31{}; 
    }
    namespace EvsysPrictrl{    ///<Priority Control
        using Addr = Register::Address<0x4100e008,0xffffff70,0x00000000,std::uint8_t>;
        ///Channel Priority Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pri{}; 
        ///Round-Robin Scheduling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rren{}; 
    }
    namespace EvsysIntpend{    ///<Channel Pending Interrupt
        using Addr = Register::Address<0x4100e010,0xffff3cf0,0x00000000,std::uint16_t>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> id{}; 
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> evd{}; 
        ///Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ready{}; 
        ///Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
    }
    namespace EvsysIntstatus{    ///<Interrupt Status
        using Addr = Register::Address<0x4100e014,0xfffff000,0x00000000,std::uint32_t>;
        ///Channel 0 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint0{}; 
        ///Channel 1 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint1{}; 
        ///Channel 2 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint2{}; 
        ///Channel 3 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint3{}; 
        ///Channel 4 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint4{}; 
        ///Channel 5 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint5{}; 
        ///Channel 6 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint6{}; 
        ///Channel 7 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint7{}; 
        ///Channel 8 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint8{}; 
        ///Channel 9 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint9{}; 
        ///Channel 10 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint10{}; 
        ///Channel 11 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint11{}; 
    }
    namespace EvsysBusych{    ///<Busy Channels
        using Addr = Register::Address<0x4100e018,0xfffff000,0x00000000,std::uint32_t>;
        ///Busy Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> busych0{}; 
        ///Busy Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> busych1{}; 
        ///Busy Channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> busych2{}; 
        ///Busy Channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> busych3{}; 
        ///Busy Channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> busych4{}; 
        ///Busy Channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> busych5{}; 
        ///Busy Channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> busych6{}; 
        ///Busy Channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> busych7{}; 
        ///Busy Channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> busych8{}; 
        ///Busy Channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> busych9{}; 
        ///Busy Channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> busych10{}; 
        ///Busy Channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> busych11{}; 
    }
    namespace EvsysReadyusr{    ///<Ready Users
        using Addr = Register::Address<0x4100e01c,0xfffff000,0x00000000,std::uint32_t>;
        ///Ready User for Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> readyusr0{}; 
        ///Ready User for Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> readyusr1{}; 
        ///Ready User for Channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> readyusr2{}; 
        ///Ready User for Channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> readyusr3{}; 
        ///Ready User for Channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> readyusr4{}; 
        ///Ready User for Channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> readyusr5{}; 
        ///Ready User for Channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> readyusr6{}; 
        ///Ready User for Channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> readyusr7{}; 
        ///Ready User for Channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> readyusr8{}; 
        ///Ready User for Channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> readyusr9{}; 
        ///Ready User for Channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> readyusr10{}; 
        ///Ready User for Channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> readyusr11{}; 
    }
    namespace EvsysChannel0{    ///<Channel n Control
        using Addr = Register::Address<0x4100e020,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel1{    ///<Channel n Control
        using Addr = Register::Address<0x4100e028,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel2{    ///<Channel n Control
        using Addr = Register::Address<0x4100e030,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel3{    ///<Channel n Control
        using Addr = Register::Address<0x4100e038,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel4{    ///<Channel n Control
        using Addr = Register::Address<0x4100e040,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel5{    ///<Channel n Control
        using Addr = Register::Address<0x4100e048,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel6{    ///<Channel n Control
        using Addr = Register::Address<0x4100e050,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel7{    ///<Channel n Control
        using Addr = Register::Address<0x4100e058,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel8{    ///<Channel n Control
        using Addr = Register::Address<0x4100e060,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel9{    ///<Channel n Control
        using Addr = Register::Address<0x4100e068,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel10{    ///<Channel n Control
        using Addr = Register::Address<0x4100e070,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel11{    ///<Channel n Control
        using Addr = Register::Address<0x4100e078,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel12{    ///<Channel n Control
        using Addr = Register::Address<0x4100e080,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel13{    ///<Channel n Control
        using Addr = Register::Address<0x4100e088,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel14{    ///<Channel n Control
        using Addr = Register::Address<0x4100e090,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel15{    ///<Channel n Control
        using Addr = Register::Address<0x4100e098,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel16{    ///<Channel n Control
        using Addr = Register::Address<0x4100e0a0,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel17{    ///<Channel n Control
        using Addr = Register::Address<0x4100e0a8,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel18{    ///<Channel n Control
        using Addr = Register::Address<0x4100e0b0,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel19{    ///<Channel n Control
        using Addr = Register::Address<0x4100e0b8,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel20{    ///<Channel n Control
        using Addr = Register::Address<0x4100e0c0,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel21{    ///<Channel n Control
        using Addr = Register::Address<0x4100e0c8,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel22{    ///<Channel n Control
        using Addr = Register::Address<0x4100e0d0,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel23{    ///<Channel n Control
        using Addr = Register::Address<0x4100e0d8,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel24{    ///<Channel n Control
        using Addr = Register::Address<0x4100e0e0,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel25{    ///<Channel n Control
        using Addr = Register::Address<0x4100e0e8,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel26{    ///<Channel n Control
        using Addr = Register::Address<0x4100e0f0,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel27{    ///<Channel n Control
        using Addr = Register::Address<0x4100e0f8,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel28{    ///<Channel n Control
        using Addr = Register::Address<0x4100e100,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel29{    ///<Channel n Control
        using Addr = Register::Address<0x4100e108,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel30{    ///<Channel n Control
        using Addr = Register::Address<0x4100e110,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChannel31{    ///<Channel n Control
        using Addr = Register::Address<0x4100e118,0xffff3080,0x00000000,std::uint32_t>;
        ///Event Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> evgen{}; 
        ///Path Selection
        enum class PathVal {
            synchronous=0x00000000,     ///<Synchronous path
            resynchronized=0x00000001,     ///<Resynchronized path
            asynchronous=0x00000002,     ///<Asynchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PathVal> path{}; 
        namespace PathValC{
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::synchronous> synchronous{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::resynchronized> resynchronized{};
            constexpr Register::FieldValue<decltype(path)::Type,PathVal::asynchronous> asynchronous{};
        }
        ///Edge Detection Selection
        enum class EdgselVal {
            noEvtOutput=0x00000000,     ///<No event output when using the resynchronized or synchronous path
            risingEdge=0x00000001,     ///<Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
            fallingEdge=0x00000002,     ///<Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
            bothEdges=0x00000003,     ///<Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EdgselVal> edgsel{}; 
        namespace EdgselValC{
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::noEvtOutput> noEvtOutput{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::risingEdge> risingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(edgsel)::Type,EdgselVal::bothEdges> bothEdges{};
        }
        ///Run in standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Generic Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace EvsysChintenclr0{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e024,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr1{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e02c,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr2{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e034,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr3{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e03c,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr4{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e044,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr5{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e04c,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr6{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e054,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr7{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e05c,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr8{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e064,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr9{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e06c,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr10{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e074,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr11{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e07c,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr12{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e084,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr13{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e08c,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr14{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e094,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr15{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e09c,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr16{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e0a4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr17{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e0ac,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr18{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e0b4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr19{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e0bc,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr20{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e0c4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr21{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e0cc,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr22{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e0d4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr23{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e0dc,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr24{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e0e4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr25{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e0ec,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr26{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e0f4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr27{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e0fc,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr28{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e104,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr29{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e10c,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr30{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e114,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenclr31{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100e11c,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset0{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e025,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset1{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e02d,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset2{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e035,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset3{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e03d,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset4{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e045,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset5{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e04d,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset6{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e055,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset7{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e05d,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset8{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e065,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset9{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e06d,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset10{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e075,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset11{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e07d,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset12{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e085,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset13{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e08d,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset14{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e095,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset15{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e09d,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset16{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e0a5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset17{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e0ad,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset18{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e0b5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset19{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e0bd,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset20{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e0c5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset21{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e0cd,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset22{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e0d5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset23{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e0dd,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset24{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e0e5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset25{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e0ed,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset26{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e0f5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset27{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e0fd,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset28{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e105,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset29{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e10d,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset30{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e115,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintenset31{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100e11d,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag0{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e026,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag1{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e02e,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag2{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e036,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag3{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e03e,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag4{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e046,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag5{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e04e,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag6{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e056,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag7{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e05e,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag8{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e066,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag9{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e06e,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag10{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e076,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag11{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e07e,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag12{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e086,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag13{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e08e,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag14{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e096,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag15{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e09e,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag16{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e0a6,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag17{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e0ae,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag18{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e0b6,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag19{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e0be,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag20{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e0c6,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag21{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e0ce,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag22{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e0d6,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag23{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e0de,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag24{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e0e6,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag25{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e0ee,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag26{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e0f6,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag27{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e0fe,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag28{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e106,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag29{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e10e,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag30{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e116,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChintflag31{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100e11e,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Channel Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> evd{}; 
    }
    namespace EvsysChstatus0{    ///<Channel n Status
        using Addr = Register::Address<0x4100e027,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus1{    ///<Channel n Status
        using Addr = Register::Address<0x4100e02f,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus2{    ///<Channel n Status
        using Addr = Register::Address<0x4100e037,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus3{    ///<Channel n Status
        using Addr = Register::Address<0x4100e03f,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus4{    ///<Channel n Status
        using Addr = Register::Address<0x4100e047,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus5{    ///<Channel n Status
        using Addr = Register::Address<0x4100e04f,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus6{    ///<Channel n Status
        using Addr = Register::Address<0x4100e057,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus7{    ///<Channel n Status
        using Addr = Register::Address<0x4100e05f,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus8{    ///<Channel n Status
        using Addr = Register::Address<0x4100e067,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus9{    ///<Channel n Status
        using Addr = Register::Address<0x4100e06f,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus10{    ///<Channel n Status
        using Addr = Register::Address<0x4100e077,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus11{    ///<Channel n Status
        using Addr = Register::Address<0x4100e07f,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus12{    ///<Channel n Status
        using Addr = Register::Address<0x4100e087,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus13{    ///<Channel n Status
        using Addr = Register::Address<0x4100e08f,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus14{    ///<Channel n Status
        using Addr = Register::Address<0x4100e097,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus15{    ///<Channel n Status
        using Addr = Register::Address<0x4100e09f,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus16{    ///<Channel n Status
        using Addr = Register::Address<0x4100e0a7,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus17{    ///<Channel n Status
        using Addr = Register::Address<0x4100e0af,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus18{    ///<Channel n Status
        using Addr = Register::Address<0x4100e0b7,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus19{    ///<Channel n Status
        using Addr = Register::Address<0x4100e0bf,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus20{    ///<Channel n Status
        using Addr = Register::Address<0x4100e0c7,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus21{    ///<Channel n Status
        using Addr = Register::Address<0x4100e0cf,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus22{    ///<Channel n Status
        using Addr = Register::Address<0x4100e0d7,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus23{    ///<Channel n Status
        using Addr = Register::Address<0x4100e0df,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus24{    ///<Channel n Status
        using Addr = Register::Address<0x4100e0e7,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus25{    ///<Channel n Status
        using Addr = Register::Address<0x4100e0ef,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus26{    ///<Channel n Status
        using Addr = Register::Address<0x4100e0f7,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus27{    ///<Channel n Status
        using Addr = Register::Address<0x4100e0ff,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus28{    ///<Channel n Status
        using Addr = Register::Address<0x4100e107,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus29{    ///<Channel n Status
        using Addr = Register::Address<0x4100e10f,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus30{    ///<Channel n Status
        using Addr = Register::Address<0x4100e117,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysChstatus31{    ///<Channel n Status
        using Addr = Register::Address<0x4100e11f,0xfffffffc,0x00000000,std::uint8_t>;
        ///Ready User
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdyusr{}; 
        ///Busy Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych{}; 
    }
    namespace EvsysUser0{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e120,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser1{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e124,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser2{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e128,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser3{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e12c,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser4{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e130,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser5{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e134,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser6{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e138,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser7{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e13c,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser8{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e140,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser9{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e144,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser10{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e148,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser11{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e14c,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser12{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e150,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser13{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e154,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser14{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e158,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser15{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e15c,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser16{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e160,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser17{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e164,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser18{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e168,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser19{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e16c,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser20{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e170,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser21{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e174,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser22{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e178,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser23{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e17c,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser24{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e180,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser25{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e184,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser26{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e188,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser27{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e18c,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser28{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e190,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser29{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e194,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser30{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e198,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser31{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e19c,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser32{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1a0,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser33{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1a4,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser34{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1a8,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser35{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1ac,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser36{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1b0,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser37{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1b4,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser38{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1b8,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser39{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1bc,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser40{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1c0,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser41{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1c4,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser42{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1c8,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser43{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1cc,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser44{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1d0,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser45{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1d4,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser46{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1d8,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser47{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1dc,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser48{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1e0,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser49{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1e4,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser50{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1e8,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser51{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1ec,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser52{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1f0,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser53{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1f4,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser54{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1f8,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser55{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e1fc,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser56{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e200,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser57{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e204,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser58{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e208,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser59{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e20c,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser60{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e210,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser61{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e214,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser62{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e218,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser63{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e21c,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser64{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e220,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser65{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e224,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace EvsysUser66{    ///<User Multiplexer n
        using Addr = Register::Address<0x4100e228,0xffffffc0,0x00000000,std::uint32_t>;
        ///Channel Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
}
