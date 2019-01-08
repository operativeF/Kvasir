#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Configurable Custom Logic
    namespace CclCtrl{    ///<Control
        using Addr = Register::Address<0x42003800,0xffffffbc,0x00000000,std::uint8_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
    }
    namespace CclSeqctrl0{    ///<SEQ Control x
        using Addr = Register::Address<0x42003804,0xfffffff0,0x00000000,std::uint8_t>;
        ///Sequential Selection
        enum class SeqselVal {
            disable=0x00000000,     ///<Sequential logic is disabled
            dff=0x00000001,     ///<D flip flop
            jk=0x00000002,     ///<JK flip flop
            latch=0x00000003,     ///<D latch
            rs=0x00000004,     ///<RS latch
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SeqselVal> seqsel{}; 
        namespace SeqselValC{
            constexpr Register::FieldValue<decltype(seqsel)::Type,SeqselVal::disable> disable{};
            constexpr Register::FieldValue<decltype(seqsel)::Type,SeqselVal::dff> dff{};
            constexpr Register::FieldValue<decltype(seqsel)::Type,SeqselVal::jk> jk{};
            constexpr Register::FieldValue<decltype(seqsel)::Type,SeqselVal::latch> latch{};
            constexpr Register::FieldValue<decltype(seqsel)::Type,SeqselVal::rs> rs{};
        }
    }
    namespace CclSeqctrl1{    ///<SEQ Control x
        using Addr = Register::Address<0x42003805,0xfffffff0,0x00000000,std::uint8_t>;
        ///Sequential Selection
        enum class SeqselVal {
            disable=0x00000000,     ///<Sequential logic is disabled
            dff=0x00000001,     ///<D flip flop
            jk=0x00000002,     ///<JK flip flop
            latch=0x00000003,     ///<D latch
            rs=0x00000004,     ///<RS latch
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SeqselVal> seqsel{}; 
        namespace SeqselValC{
            constexpr Register::FieldValue<decltype(seqsel)::Type,SeqselVal::disable> disable{};
            constexpr Register::FieldValue<decltype(seqsel)::Type,SeqselVal::dff> dff{};
            constexpr Register::FieldValue<decltype(seqsel)::Type,SeqselVal::jk> jk{};
            constexpr Register::FieldValue<decltype(seqsel)::Type,SeqselVal::latch> latch{};
            constexpr Register::FieldValue<decltype(seqsel)::Type,SeqselVal::rs> rs{};
        }
    }
    namespace CclLutctrl0{    ///<LUT Control x
        using Addr = Register::Address<0x42003808,0x0080004d,0x00000000,std::uint32_t>;
        ///LUT Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Filter Selection
        enum class FiltselVal {
            disable=0x00000000,     ///<Filter disabled
            synch=0x00000001,     ///<Synchronizer enabled
            filter=0x00000002,     ///<Filter enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,FiltselVal> filtsel{}; 
        namespace FiltselValC{
            constexpr Register::FieldValue<decltype(filtsel)::Type,FiltselVal::disable> disable{};
            constexpr Register::FieldValue<decltype(filtsel)::Type,FiltselVal::synch> synch{};
            constexpr Register::FieldValue<decltype(filtsel)::Type,FiltselVal::filter> filter{};
        }
        ///Edge Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> edgesel{}; 
        ///Input Selection 0
        enum class Insel0Val {
            mask=0x00000000,     ///<Masked input
            feedback=0x00000001,     ///<Feedback input source
            link=0x00000002,     ///<Linked LUT input source
            event=0x00000003,     ///<Event input source
            io=0x00000004,     ///<I/O pin input source
            ac=0x00000005,     ///<AC input source
            tc=0x00000006,     ///<TC input source
            alttc=0x00000007,     ///<Alternate TC input source
            tcc=0x00000008,     ///<TCC input source
            sercom=0x00000009,     ///<SERCOM input source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Insel0Val> insel0{}; 
        namespace Insel0ValC{
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::mask> mask{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::feedback> feedback{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::link> link{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::event> event{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::io> io{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::ac> ac{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::tc> tc{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::alttc> alttc{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::tcc> tcc{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::sercom> sercom{};
        }
        ///Input Selection 1
        enum class Insel1Val {
            mask=0x00000000,     ///<Masked input
            feedback=0x00000001,     ///<Feedback input source
            link=0x00000002,     ///<Linked LUT input source
            event=0x00000003,     ///<Event input source
            io=0x00000004,     ///<I/O pin input source
            ac=0x00000005,     ///<AC input source
            tc=0x00000006,     ///<TC input source
            alttc=0x00000007,     ///<Alternate TC input source
            tcc=0x00000008,     ///<TCC input source
            sercom=0x00000009,     ///<SERCOM input source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,Insel1Val> insel1{}; 
        namespace Insel1ValC{
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::mask> mask{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::feedback> feedback{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::link> link{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::event> event{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::io> io{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::ac> ac{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::tc> tc{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::alttc> alttc{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::tcc> tcc{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::sercom> sercom{};
        }
        ///Input Selection 2
        enum class Insel2Val {
            mask=0x00000000,     ///<Masked input
            feedback=0x00000001,     ///<Feedback input source
            link=0x00000002,     ///<Linked LUT input source
            event=0x00000003,     ///<Event input source
            io=0x00000004,     ///<I/O pin input source
            ac=0x00000005,     ///<AC input source
            tc=0x00000006,     ///<TC input source
            alttc=0x00000007,     ///<Alternate TC input source
            tcc=0x00000008,     ///<TCC input source
            sercom=0x00000009,     ///<SERCOM input source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,Insel2Val> insel2{}; 
        namespace Insel2ValC{
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::mask> mask{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::feedback> feedback{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::link> link{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::event> event{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::io> io{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::ac> ac{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::tc> tc{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::alttc> alttc{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::tcc> tcc{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::sercom> sercom{};
        }
        ///Inverted Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> invei{}; 
        ///LUT Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lutei{}; 
        ///LUT Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> luteo{}; 
        ///Truth Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> truth{}; 
    }
    namespace CclLutctrl1{    ///<LUT Control x
        using Addr = Register::Address<0x4200380c,0x0080004d,0x00000000,std::uint32_t>;
        ///LUT Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Filter Selection
        enum class FiltselVal {
            disable=0x00000000,     ///<Filter disabled
            synch=0x00000001,     ///<Synchronizer enabled
            filter=0x00000002,     ///<Filter enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,FiltselVal> filtsel{}; 
        namespace FiltselValC{
            constexpr Register::FieldValue<decltype(filtsel)::Type,FiltselVal::disable> disable{};
            constexpr Register::FieldValue<decltype(filtsel)::Type,FiltselVal::synch> synch{};
            constexpr Register::FieldValue<decltype(filtsel)::Type,FiltselVal::filter> filter{};
        }
        ///Edge Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> edgesel{}; 
        ///Input Selection 0
        enum class Insel0Val {
            mask=0x00000000,     ///<Masked input
            feedback=0x00000001,     ///<Feedback input source
            link=0x00000002,     ///<Linked LUT input source
            event=0x00000003,     ///<Event input source
            io=0x00000004,     ///<I/O pin input source
            ac=0x00000005,     ///<AC input source
            tc=0x00000006,     ///<TC input source
            alttc=0x00000007,     ///<Alternate TC input source
            tcc=0x00000008,     ///<TCC input source
            sercom=0x00000009,     ///<SERCOM input source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Insel0Val> insel0{}; 
        namespace Insel0ValC{
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::mask> mask{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::feedback> feedback{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::link> link{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::event> event{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::io> io{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::ac> ac{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::tc> tc{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::alttc> alttc{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::tcc> tcc{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::sercom> sercom{};
        }
        ///Input Selection 1
        enum class Insel1Val {
            mask=0x00000000,     ///<Masked input
            feedback=0x00000001,     ///<Feedback input source
            link=0x00000002,     ///<Linked LUT input source
            event=0x00000003,     ///<Event input source
            io=0x00000004,     ///<I/O pin input source
            ac=0x00000005,     ///<AC input source
            tc=0x00000006,     ///<TC input source
            alttc=0x00000007,     ///<Alternate TC input source
            tcc=0x00000008,     ///<TCC input source
            sercom=0x00000009,     ///<SERCOM input source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,Insel1Val> insel1{}; 
        namespace Insel1ValC{
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::mask> mask{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::feedback> feedback{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::link> link{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::event> event{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::io> io{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::ac> ac{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::tc> tc{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::alttc> alttc{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::tcc> tcc{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::sercom> sercom{};
        }
        ///Input Selection 2
        enum class Insel2Val {
            mask=0x00000000,     ///<Masked input
            feedback=0x00000001,     ///<Feedback input source
            link=0x00000002,     ///<Linked LUT input source
            event=0x00000003,     ///<Event input source
            io=0x00000004,     ///<I/O pin input source
            ac=0x00000005,     ///<AC input source
            tc=0x00000006,     ///<TC input source
            alttc=0x00000007,     ///<Alternate TC input source
            tcc=0x00000008,     ///<TCC input source
            sercom=0x00000009,     ///<SERCOM input source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,Insel2Val> insel2{}; 
        namespace Insel2ValC{
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::mask> mask{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::feedback> feedback{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::link> link{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::event> event{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::io> io{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::ac> ac{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::tc> tc{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::alttc> alttc{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::tcc> tcc{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::sercom> sercom{};
        }
        ///Inverted Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> invei{}; 
        ///LUT Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lutei{}; 
        ///LUT Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> luteo{}; 
        ///Truth Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> truth{}; 
    }
    namespace CclLutctrl2{    ///<LUT Control x
        using Addr = Register::Address<0x42003810,0x0080004d,0x00000000,std::uint32_t>;
        ///LUT Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Filter Selection
        enum class FiltselVal {
            disable=0x00000000,     ///<Filter disabled
            synch=0x00000001,     ///<Synchronizer enabled
            filter=0x00000002,     ///<Filter enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,FiltselVal> filtsel{}; 
        namespace FiltselValC{
            constexpr Register::FieldValue<decltype(filtsel)::Type,FiltselVal::disable> disable{};
            constexpr Register::FieldValue<decltype(filtsel)::Type,FiltselVal::synch> synch{};
            constexpr Register::FieldValue<decltype(filtsel)::Type,FiltselVal::filter> filter{};
        }
        ///Edge Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> edgesel{}; 
        ///Input Selection 0
        enum class Insel0Val {
            mask=0x00000000,     ///<Masked input
            feedback=0x00000001,     ///<Feedback input source
            link=0x00000002,     ///<Linked LUT input source
            event=0x00000003,     ///<Event input source
            io=0x00000004,     ///<I/O pin input source
            ac=0x00000005,     ///<AC input source
            tc=0x00000006,     ///<TC input source
            alttc=0x00000007,     ///<Alternate TC input source
            tcc=0x00000008,     ///<TCC input source
            sercom=0x00000009,     ///<SERCOM input source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Insel0Val> insel0{}; 
        namespace Insel0ValC{
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::mask> mask{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::feedback> feedback{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::link> link{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::event> event{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::io> io{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::ac> ac{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::tc> tc{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::alttc> alttc{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::tcc> tcc{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::sercom> sercom{};
        }
        ///Input Selection 1
        enum class Insel1Val {
            mask=0x00000000,     ///<Masked input
            feedback=0x00000001,     ///<Feedback input source
            link=0x00000002,     ///<Linked LUT input source
            event=0x00000003,     ///<Event input source
            io=0x00000004,     ///<I/O pin input source
            ac=0x00000005,     ///<AC input source
            tc=0x00000006,     ///<TC input source
            alttc=0x00000007,     ///<Alternate TC input source
            tcc=0x00000008,     ///<TCC input source
            sercom=0x00000009,     ///<SERCOM input source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,Insel1Val> insel1{}; 
        namespace Insel1ValC{
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::mask> mask{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::feedback> feedback{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::link> link{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::event> event{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::io> io{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::ac> ac{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::tc> tc{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::alttc> alttc{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::tcc> tcc{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::sercom> sercom{};
        }
        ///Input Selection 2
        enum class Insel2Val {
            mask=0x00000000,     ///<Masked input
            feedback=0x00000001,     ///<Feedback input source
            link=0x00000002,     ///<Linked LUT input source
            event=0x00000003,     ///<Event input source
            io=0x00000004,     ///<I/O pin input source
            ac=0x00000005,     ///<AC input source
            tc=0x00000006,     ///<TC input source
            alttc=0x00000007,     ///<Alternate TC input source
            tcc=0x00000008,     ///<TCC input source
            sercom=0x00000009,     ///<SERCOM input source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,Insel2Val> insel2{}; 
        namespace Insel2ValC{
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::mask> mask{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::feedback> feedback{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::link> link{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::event> event{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::io> io{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::ac> ac{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::tc> tc{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::alttc> alttc{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::tcc> tcc{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::sercom> sercom{};
        }
        ///Inverted Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> invei{}; 
        ///LUT Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lutei{}; 
        ///LUT Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> luteo{}; 
        ///Truth Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> truth{}; 
    }
    namespace CclLutctrl3{    ///<LUT Control x
        using Addr = Register::Address<0x42003814,0x0080004d,0x00000000,std::uint32_t>;
        ///LUT Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Filter Selection
        enum class FiltselVal {
            disable=0x00000000,     ///<Filter disabled
            synch=0x00000001,     ///<Synchronizer enabled
            filter=0x00000002,     ///<Filter enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,FiltselVal> filtsel{}; 
        namespace FiltselValC{
            constexpr Register::FieldValue<decltype(filtsel)::Type,FiltselVal::disable> disable{};
            constexpr Register::FieldValue<decltype(filtsel)::Type,FiltselVal::synch> synch{};
            constexpr Register::FieldValue<decltype(filtsel)::Type,FiltselVal::filter> filter{};
        }
        ///Edge Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> edgesel{}; 
        ///Input Selection 0
        enum class Insel0Val {
            mask=0x00000000,     ///<Masked input
            feedback=0x00000001,     ///<Feedback input source
            link=0x00000002,     ///<Linked LUT input source
            event=0x00000003,     ///<Event input source
            io=0x00000004,     ///<I/O pin input source
            ac=0x00000005,     ///<AC input source
            tc=0x00000006,     ///<TC input source
            alttc=0x00000007,     ///<Alternate TC input source
            tcc=0x00000008,     ///<TCC input source
            sercom=0x00000009,     ///<SERCOM input source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Insel0Val> insel0{}; 
        namespace Insel0ValC{
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::mask> mask{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::feedback> feedback{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::link> link{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::event> event{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::io> io{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::ac> ac{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::tc> tc{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::alttc> alttc{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::tcc> tcc{};
            constexpr Register::FieldValue<decltype(insel0)::Type,Insel0Val::sercom> sercom{};
        }
        ///Input Selection 1
        enum class Insel1Val {
            mask=0x00000000,     ///<Masked input
            feedback=0x00000001,     ///<Feedback input source
            link=0x00000002,     ///<Linked LUT input source
            event=0x00000003,     ///<Event input source
            io=0x00000004,     ///<I/O pin input source
            ac=0x00000005,     ///<AC input source
            tc=0x00000006,     ///<TC input source
            alttc=0x00000007,     ///<Alternate TC input source
            tcc=0x00000008,     ///<TCC input source
            sercom=0x00000009,     ///<SERCOM input source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,Insel1Val> insel1{}; 
        namespace Insel1ValC{
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::mask> mask{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::feedback> feedback{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::link> link{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::event> event{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::io> io{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::ac> ac{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::tc> tc{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::alttc> alttc{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::tcc> tcc{};
            constexpr Register::FieldValue<decltype(insel1)::Type,Insel1Val::sercom> sercom{};
        }
        ///Input Selection 2
        enum class Insel2Val {
            mask=0x00000000,     ///<Masked input
            feedback=0x00000001,     ///<Feedback input source
            link=0x00000002,     ///<Linked LUT input source
            event=0x00000003,     ///<Event input source
            io=0x00000004,     ///<I/O pin input source
            ac=0x00000005,     ///<AC input source
            tc=0x00000006,     ///<TC input source
            alttc=0x00000007,     ///<Alternate TC input source
            tcc=0x00000008,     ///<TCC input source
            sercom=0x00000009,     ///<SERCOM input source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,Insel2Val> insel2{}; 
        namespace Insel2ValC{
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::mask> mask{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::feedback> feedback{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::link> link{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::event> event{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::io> io{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::ac> ac{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::tc> tc{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::alttc> alttc{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::tcc> tcc{};
            constexpr Register::FieldValue<decltype(insel2)::Type,Insel2Val::sercom> sercom{};
        }
        ///Inverted Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> invei{}; 
        ///LUT Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lutei{}; 
        ///LUT Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> luteo{}; 
        ///Truth Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> truth{}; 
    }
}
