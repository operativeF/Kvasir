#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Quadrature Decodeur
    namespace PdecCtrla{    ///<Control A
        using Addr = Register::Address<0x42001c00,0x088830b0,0x00000000,std::uint32_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Operation Mode
        enum class ModeVal {
            qdec=0x00000000,     ///<QDEC operating mode
            hall=0x00000001,     ///<HALL operating mode
            counter=0x00000002,     ///<COUNTER operating mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::qdec> qdec{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::hall> hall{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::counter> counter{};
        }
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///PDEC Configuration
        enum class ConfVal {
            x4=0x00000000,     ///<Quadrature decoder direction
            x4s=0x00000001,     ///<Secure Quadrature decoder direction
            x2=0x00000002,     ///<Decoder direction
            x2s=0x00000003,     ///<Secure decoder direction
            autoc=0x00000004,     ///<Auto correction mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ConfVal> conf{}; 
        namespace ConfValC{
            constexpr Register::FieldValue<decltype(conf)::Type,ConfVal::x4> x4{};
            constexpr Register::FieldValue<decltype(conf)::Type,ConfVal::x4s> x4s{};
            constexpr Register::FieldValue<decltype(conf)::Type,ConfVal::x2> x2{};
            constexpr Register::FieldValue<decltype(conf)::Type,ConfVal::x2s> x2s{};
            constexpr Register::FieldValue<decltype(conf)::Type,ConfVal::autoc> autoc{};
        }
        ///Auto Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> alock{}; 
        ///PDEC Phase A and B Swap
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> swap{}; 
        ///Period Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> peren{}; 
        ///PDEC Input From Pin 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinen0{}; 
        ///PDEC Input From Pin 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pinen1{}; 
        ///PDEC Input From Pin 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pinen2{}; 
        ///IO Pin 0 Invert Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pinven0{}; 
        ///IO Pin 1 Invert Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pinven1{}; 
        ///IO Pin 2 Invert Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pinven2{}; 
        ///Angular Counter Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> angular{}; 
        ///Maximum Consecutive Missing Pulses
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> maxcmp{}; 
    }
    namespace PdecCtrlbclr{    ///<Control B Clear
        using Addr = Register::Address<0x42001c04,0xffffff1d,0x00000000,std::uint8_t>;
        ///Lock Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lupd{}; 
        ///Command
        enum class CmdVal {
            none=0x00000000,     ///<No action
            retrigger=0x00000001,     ///<Force a counter restart or retrigger
            update=0x00000002,     ///<Force update of double buffered registers
            readsync=0x00000003,     ///<Force a read synchronization of COUNT
            start=0x00000004,     ///<Start QDEC/HALL
            stop=0x00000005,     ///<Stop QDEC/HALL
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::update> update{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::readsync> readsync{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::start> start{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::stop> stop{};
        }
    }
    namespace PdecCtrlbset{    ///<Control B Set
        using Addr = Register::Address<0x42001c05,0xffffff1d,0x00000000,std::uint8_t>;
        ///Lock Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lupd{}; 
        ///Command
        enum class CmdVal {
            none=0x00000000,     ///<No action
            retrigger=0x00000001,     ///<Force a counter restart or retrigger
            update=0x00000002,     ///<Force update of double buffered registers
            readsync=0x00000003,     ///<Force a read synchronization of COUNT
            start=0x00000004,     ///<Start QDEC/HALL
            stop=0x00000005,     ///<Stop QDEC/HALL
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::update> update{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::readsync> readsync{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::start> start{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::stop> stop{};
        }
    }
    namespace PdecEvctrl{    ///<Event Control
        using Addr = Register::Address<0x42001c06,0xffffc000,0x00000000,std::uint16_t>;
        ///Event Action
        enum class EvactVal {
            off=0x00000000,     ///<Event action disabled
            retrigger=0x00000001,     ///<Start, restart or retrigger on event
            count=0x00000002,     ///<Count on event
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::off> off{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::count> count{};
        }
        ///Inverted Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> evinv{}; 
        ///Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> evei{}; 
        ///Overflow/Underflow Output Event Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovfeo{}; 
        ///Error  Output Event Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> erreo{}; 
        ///Direction Output Event Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> direo{}; 
        ///Velocity Output Event Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> vlceo{}; 
        ///Match Channel 0 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mceo0{}; 
        ///Match Channel 1 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mceo1{}; 
    }
    namespace PdecIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x42001c08,0xffffffc0,0x00000000,std::uint8_t>;
        ///Overflow/Underflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///Direction Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Velocity Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vlc{}; 
        ///Channel 0 Compare Match Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Channel 1 Compare Match Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace PdecIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x42001c09,0xffffffc0,0x00000000,std::uint8_t>;
        ///Overflow/Underflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///Direction Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Velocity Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vlc{}; 
        ///Channel 0 Compare Match Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Channel 1 Compare Match Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace PdecIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x42001c0a,0xffffffc0,0x00000000,std::uint8_t>;
        ///Overflow/Underflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///Direction Change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Velocity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vlc{}; 
        ///Channel 0 Compare Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Channel 1 Compare Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace PdecStatus{    ///<Status
        using Addr = Register::Address<0x42001c0c,0xffffcc08,0x00000000,std::uint16_t>;
        ///Quadrature Error Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> qerr{}; 
        ///Index Error Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> idxerr{}; 
        ///Missing Pulse Error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mperr{}; 
        ///Window Error Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> winerr{}; 
        ///Hall Error Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> herr{}; 
        ///Stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stop{}; 
        ///Direction Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dir{}; 
        ///Prescaler Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> prescbufv{}; 
        ///Filter Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> filterbufv{}; 
        ///Compare Channel 0 Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ccbufv0{}; 
        ///Compare Channel 1 Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ccbufv1{}; 
    }
    namespace PdecDbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x42001c0f,0xfffffffe,0x00000000,std::uint8_t>;
        ///Debug Run Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace PdecSyncbusy{    ///<Synchronization Status
        using Addr = Register::Address<0x42001c10,0xfffffe00,0x00000000,std::uint32_t>;
        ///Software Reset Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Control B Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrlb{}; 
        ///Status Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> status{}; 
        ///Prescaler Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> presc{}; 
        ///Filter Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> filter{}; 
        ///Count Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> count{}; 
        ///Compare Channel 0 Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cc0{}; 
        ///Compare Channel 1 Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cc1{}; 
    }
    namespace PdecPresc{    ///<Prescaler Value
        using Addr = Register::Address<0x42001c14,0xfffffff0,0x00000000,std::uint8_t>;
        ///Prescaler Value
        enum class PrescVal {
            div1=0x00000000,     ///<No division
            div2=0x00000001,     ///<Divide by 2
            div4=0x00000002,     ///<Divide by 4
            div8=0x00000003,     ///<Divide by 8
            div16=0x00000004,     ///<Divide by 16
            div32=0x00000005,     ///<Divide by 32
            div64=0x00000006,     ///<Divide by 64
            div128=0x00000007,     ///<Divide by 128
            div256=0x00000008,     ///<Divide by 256
            div512=0x00000009,     ///<Divide by 512
            div1024=0x0000000a,     ///<Divide by 1024
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PrescVal> presc{}; 
        namespace PrescValC{
            constexpr Register::FieldValue<decltype(presc)::Type,PrescVal::div1> div1{};
            constexpr Register::FieldValue<decltype(presc)::Type,PrescVal::div2> div2{};
            constexpr Register::FieldValue<decltype(presc)::Type,PrescVal::div4> div4{};
            constexpr Register::FieldValue<decltype(presc)::Type,PrescVal::div8> div8{};
            constexpr Register::FieldValue<decltype(presc)::Type,PrescVal::div16> div16{};
            constexpr Register::FieldValue<decltype(presc)::Type,PrescVal::div32> div32{};
            constexpr Register::FieldValue<decltype(presc)::Type,PrescVal::div64> div64{};
            constexpr Register::FieldValue<decltype(presc)::Type,PrescVal::div128> div128{};
            constexpr Register::FieldValue<decltype(presc)::Type,PrescVal::div256> div256{};
            constexpr Register::FieldValue<decltype(presc)::Type,PrescVal::div512> div512{};
            constexpr Register::FieldValue<decltype(presc)::Type,PrescVal::div1024> div1024{};
        }
    }
    namespace PdecFilter{    ///<Filter Value
        using Addr = Register::Address<0x42001c15,0xffffff00,0x00000000,std::uint8_t>;
        ///Filter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> filter{}; 
    }
    namespace PdecPrescbuf{    ///<Prescaler Buffer Value
        using Addr = Register::Address<0x42001c18,0xfffffff0,0x00000000,std::uint8_t>;
        ///Prescaler Buffer Value
        enum class PrescbufVal {
            div1=0x00000000,     ///<No division
            div2=0x00000001,     ///<Divide by 2
            div4=0x00000002,     ///<Divide by 4
            div8=0x00000003,     ///<Divide by 8
            div16=0x00000004,     ///<Divide by 16
            div32=0x00000005,     ///<Divide by 32
            div64=0x00000006,     ///<Divide by 64
            div128=0x00000007,     ///<Divide by 128
            div256=0x00000008,     ///<Divide by 256
            div512=0x00000009,     ///<Divide by 512
            div1024=0x0000000a,     ///<Divide by 1024
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PrescbufVal> prescbuf{}; 
        namespace PrescbufValC{
            constexpr Register::FieldValue<decltype(prescbuf)::Type,PrescbufVal::div1> div1{};
            constexpr Register::FieldValue<decltype(prescbuf)::Type,PrescbufVal::div2> div2{};
            constexpr Register::FieldValue<decltype(prescbuf)::Type,PrescbufVal::div4> div4{};
            constexpr Register::FieldValue<decltype(prescbuf)::Type,PrescbufVal::div8> div8{};
            constexpr Register::FieldValue<decltype(prescbuf)::Type,PrescbufVal::div16> div16{};
            constexpr Register::FieldValue<decltype(prescbuf)::Type,PrescbufVal::div32> div32{};
            constexpr Register::FieldValue<decltype(prescbuf)::Type,PrescbufVal::div64> div64{};
            constexpr Register::FieldValue<decltype(prescbuf)::Type,PrescbufVal::div128> div128{};
            constexpr Register::FieldValue<decltype(prescbuf)::Type,PrescbufVal::div256> div256{};
            constexpr Register::FieldValue<decltype(prescbuf)::Type,PrescbufVal::div512> div512{};
            constexpr Register::FieldValue<decltype(prescbuf)::Type,PrescbufVal::div1024> div1024{};
        }
    }
    namespace PdecFilterbuf{    ///<Filter Buffer Value
        using Addr = Register::Address<0x42001c19,0xffffff00,0x00000000,std::uint8_t>;
        ///Filter Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> filterbuf{}; 
    }
    namespace PdecCount{    ///<Counter Value
        using Addr = Register::Address<0x42001c1c,0xffff0000,0x00000000,std::uint32_t>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace PdecCc0{    ///<Channel n Compare Value
        using Addr = Register::Address<0x42001c20,0xffff0000,0x00000000,std::uint32_t>;
        ///Channel Compare Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace PdecCc1{    ///<Channel n Compare Value
        using Addr = Register::Address<0x42001c24,0xffff0000,0x00000000,std::uint32_t>;
        ///Channel Compare Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace PdecCcbuf0{    ///<Channel Compare Buffer Value
        using Addr = Register::Address<0x42001c30,0xffff0000,0x00000000,std::uint32_t>;
        ///Channel Compare Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace PdecCcbuf1{    ///<Channel Compare Buffer Value
        using Addr = Register::Address<0x42001c34,0xffff0000,0x00000000,std::uint32_t>;
        ///Channel Compare Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
}
