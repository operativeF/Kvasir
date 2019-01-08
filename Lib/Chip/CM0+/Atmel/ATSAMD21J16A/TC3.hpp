#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Basic Timer Counter 3
    namespace Tc3Count8Ccs{    ///<COUNT8 Compare/Capture
        using Addr = Register::Address<0x42002c18,0xffffff00,0x00000000,std::uint8_t>;
        ///Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tc3Count8Count{    ///<COUNT8 Counter Value
        using Addr = Register::Address<0x42002c10,0xffffff00,0x00000000,std::uint8_t>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Tc3Count8Per{    ///<COUNT8 Period Value
        using Addr = Register::Address<0x42002c14,0xffffff00,0x00000000,std::uint8_t>;
        ///Period Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> per{}; 
    }
    namespace Tc3Count8Ctrla{    ///<Control A
        using Addr = Register::Address<0x42002c00,0xffffc090,0x00000000,std::uint16_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///TC Mode
        enum class ModeVal {
            count16=0x00000000,     ///<Counter in 16-bit mode
            count8=0x00000001,     ///<Counter in 8-bit mode
            count32=0x00000002,     ///<Counter in 32-bit mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::count16> count16{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::count8> count8{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::count32> count32{};
        }
        ///Waveform Generation Operation
        enum class WavegenVal {
            nfrq=0x00000000,     ///<
            mfrq=0x00000001,     ///<
            npwm=0x00000002,     ///<
            mpwm=0x00000003,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,WavegenVal> wavegen{}; 
        namespace WavegenValC{
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::nfrq> nfrq{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::mfrq> mfrq{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::npwm> npwm{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::mpwm> mpwm{};
        }
        ///Prescaler
        enum class PrescalerVal {
            div1=0x00000000,     ///<Prescaler: GCLK_TC
            div2=0x00000001,     ///<Prescaler: GCLK_TC/2
            div4=0x00000002,     ///<Prescaler: GCLK_TC/4
            div8=0x00000003,     ///<Prescaler: GCLK_TC/8
            div16=0x00000004,     ///<Prescaler: GCLK_TC/16
            div64=0x00000005,     ///<Prescaler: GCLK_TC/64
            div256=0x00000006,     ///<Prescaler: GCLK_TC/256
            div1024=0x00000007,     ///<Prescaler: GCLK_TC/1024
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,PrescalerVal> prescaler{}; 
        namespace PrescalerValC{
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div1> div1{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div2> div2{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div4> div4{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div8> div8{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div16> div16{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div64> div64{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div256> div256{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div1024> div1024{};
        }
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Prescaler and Counter Synchronization
        enum class PrescsyncVal {
            gclk=0x00000000,     ///<Reload or reset the counter on next generic clock
            presc=0x00000001,     ///<Reload or reset the counter on next prescaler clock
            resync=0x00000002,     ///<Reload or reset the counter on next generic clock. Reset the prescaler counter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PrescsyncVal> prescsync{}; 
        namespace PrescsyncValC{
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::gclk> gclk{};
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::presc> presc{};
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::resync> resync{};
        }
    }
    namespace Tc3Count8Ctrlbclr{    ///<Control B Clear
        using Addr = Register::Address<0x42002c04,0xffffff3a,0x00000000,std::uint8_t>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///One-Shot
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Command
        enum class CmdVal {
            none=0x00000000,     ///<No action
            retrigger=0x00000001,     ///<Force a start, restart or retrigger
            stop=0x00000002,     ///<Force a stop
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::stop> stop{};
        }
    }
    namespace Tc3Count8Ctrlbset{    ///<Control B Set
        using Addr = Register::Address<0x42002c05,0xffffff3a,0x00000000,std::uint8_t>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///One-Shot
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Command
        enum class CmdVal {
            none=0x00000000,     ///<No action
            retrigger=0x00000001,     ///<Force a start, restart or retrigger
            stop=0x00000002,     ///<Force a stop
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::stop> stop{};
        }
    }
    namespace Tc3Count8Ctrlc{    ///<Control C
        using Addr = Register::Address<0x42002c06,0xffffffcc,0x00000000,std::uint8_t>;
        ///Output Waveform 0 Invert Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inven0{}; 
        ///Output Waveform 1 Invert Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inven1{}; 
        ///Capture Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpten0{}; 
        ///Capture Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cpten1{}; 
    }
    namespace Tc3Count8Dbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x42002c08,0xfffffffe,0x00000000,std::uint8_t>;
        ///Debug Run Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace Tc3Count8Evctrl{    ///<Event Control
        using Addr = Register::Address<0x42002c0a,0xffffcec8,0x00000000,std::uint16_t>;
        ///Event Action
        enum class EvactVal {
            off=0x00000000,     ///<Event action disabled
            retrigger=0x00000001,     ///<Start, restart or retrigger TC on event
            count=0x00000002,     ///<Count on event
            start=0x00000003,     ///<Start TC on event
            ppw=0x00000005,     ///<Period captured in CC0, pulse width in CC1
            pwp=0x00000006,     ///<Period captured in CC1, pulse width in CC0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::off> off{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::count> count{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::start> start{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ppw> ppw{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::pwp> pwp{};
        }
        ///TC Inverted Event Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcinv{}; 
        ///TC Event Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcei{}; 
        ///Overflow/Underflow Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovfeo{}; 
        ///Match or Capture Channel 0 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mceo0{}; 
        ///Match or Capture Channel 1 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mceo1{}; 
    }
    namespace Tc3Count8Intenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x42002c0c,0xffffffc4,0x00000000,std::uint8_t>;
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Match or Capture Channel 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc3Count8Intenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x42002c0d,0xffffffc4,0x00000000,std::uint8_t>;
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Match or Capture Channel 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc3Count8Intflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x42002c0e,0xffffffc4,0x00000000,std::uint8_t>;
        ///Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Match or Capture Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc3Count8Readreq{    ///<Read Request
        using Addr = Register::Address<0x42002c02,0xffff3fe0,0x00000000,std::uint16_t>;
        ///Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> addr{}; 
        ///Read Continuously
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Read Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rreq{}; 
    }
    namespace Tc3Count8Status{    ///<Status
        using Addr = Register::Address<0x42002c0f,0xffffff67,0x00000000,std::uint8_t>;
        ///Stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stop{}; 
        ///Slave
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> slave{}; 
        ///Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> syncbusy{}; 
    }
    namespace Tc3Count16Ccs{    ///<COUNT16 Compare/Capture
        using Addr = Register::Address<0x42002c18,0xffff0000,0x00000000,std::uint16_t>;
        ///Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tc3Count16Count{    ///<COUNT16 Counter Value
        using Addr = Register::Address<0x42002c10,0xffff0000,0x00000000,std::uint16_t>;
        ///Count Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Tc3Count16Ctrla{    ///<Control A
        using Addr = Register::Address<0x42002c00,0xffffc090,0x00000000,std::uint16_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///TC Mode
        enum class ModeVal {
            count16=0x00000000,     ///<Counter in 16-bit mode
            count8=0x00000001,     ///<Counter in 8-bit mode
            count32=0x00000002,     ///<Counter in 32-bit mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::count16> count16{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::count8> count8{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::count32> count32{};
        }
        ///Waveform Generation Operation
        enum class WavegenVal {
            nfrq=0x00000000,     ///<
            mfrq=0x00000001,     ///<
            npwm=0x00000002,     ///<
            mpwm=0x00000003,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,WavegenVal> wavegen{}; 
        namespace WavegenValC{
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::nfrq> nfrq{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::mfrq> mfrq{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::npwm> npwm{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::mpwm> mpwm{};
        }
        ///Prescaler
        enum class PrescalerVal {
            div1=0x00000000,     ///<Prescaler: GCLK_TC
            div2=0x00000001,     ///<Prescaler: GCLK_TC/2
            div4=0x00000002,     ///<Prescaler: GCLK_TC/4
            div8=0x00000003,     ///<Prescaler: GCLK_TC/8
            div16=0x00000004,     ///<Prescaler: GCLK_TC/16
            div64=0x00000005,     ///<Prescaler: GCLK_TC/64
            div256=0x00000006,     ///<Prescaler: GCLK_TC/256
            div1024=0x00000007,     ///<Prescaler: GCLK_TC/1024
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,PrescalerVal> prescaler{}; 
        namespace PrescalerValC{
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div1> div1{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div2> div2{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div4> div4{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div8> div8{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div16> div16{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div64> div64{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div256> div256{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div1024> div1024{};
        }
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Prescaler and Counter Synchronization
        enum class PrescsyncVal {
            gclk=0x00000000,     ///<Reload or reset the counter on next generic clock
            presc=0x00000001,     ///<Reload or reset the counter on next prescaler clock
            resync=0x00000002,     ///<Reload or reset the counter on next generic clock. Reset the prescaler counter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PrescsyncVal> prescsync{}; 
        namespace PrescsyncValC{
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::gclk> gclk{};
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::presc> presc{};
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::resync> resync{};
        }
    }
    namespace Tc3Count16Ctrlbclr{    ///<Control B Clear
        using Addr = Register::Address<0x42002c04,0xffffff3a,0x00000000,std::uint8_t>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///One-Shot
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Command
        enum class CmdVal {
            none=0x00000000,     ///<No action
            retrigger=0x00000001,     ///<Force a start, restart or retrigger
            stop=0x00000002,     ///<Force a stop
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::stop> stop{};
        }
    }
    namespace Tc3Count16Ctrlbset{    ///<Control B Set
        using Addr = Register::Address<0x42002c05,0xffffff3a,0x00000000,std::uint8_t>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///One-Shot
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Command
        enum class CmdVal {
            none=0x00000000,     ///<No action
            retrigger=0x00000001,     ///<Force a start, restart or retrigger
            stop=0x00000002,     ///<Force a stop
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::stop> stop{};
        }
    }
    namespace Tc3Count16Ctrlc{    ///<Control C
        using Addr = Register::Address<0x42002c06,0xffffffcc,0x00000000,std::uint8_t>;
        ///Output Waveform 0 Invert Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inven0{}; 
        ///Output Waveform 1 Invert Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inven1{}; 
        ///Capture Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpten0{}; 
        ///Capture Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cpten1{}; 
    }
    namespace Tc3Count16Dbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x42002c08,0xfffffffe,0x00000000,std::uint8_t>;
        ///Debug Run Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace Tc3Count16Evctrl{    ///<Event Control
        using Addr = Register::Address<0x42002c0a,0xffffcec8,0x00000000,std::uint16_t>;
        ///Event Action
        enum class EvactVal {
            off=0x00000000,     ///<Event action disabled
            retrigger=0x00000001,     ///<Start, restart or retrigger TC on event
            count=0x00000002,     ///<Count on event
            start=0x00000003,     ///<Start TC on event
            ppw=0x00000005,     ///<Period captured in CC0, pulse width in CC1
            pwp=0x00000006,     ///<Period captured in CC1, pulse width in CC0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::off> off{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::count> count{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::start> start{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ppw> ppw{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::pwp> pwp{};
        }
        ///TC Inverted Event Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcinv{}; 
        ///TC Event Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcei{}; 
        ///Overflow/Underflow Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovfeo{}; 
        ///Match or Capture Channel 0 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mceo0{}; 
        ///Match or Capture Channel 1 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mceo1{}; 
    }
    namespace Tc3Count16Intenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x42002c0c,0xffffffc4,0x00000000,std::uint8_t>;
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Match or Capture Channel 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc3Count16Intenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x42002c0d,0xffffffc4,0x00000000,std::uint8_t>;
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Match or Capture Channel 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc3Count16Intflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x42002c0e,0xffffffc4,0x00000000,std::uint8_t>;
        ///Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Match or Capture Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc3Count16Readreq{    ///<Read Request
        using Addr = Register::Address<0x42002c02,0xffff3fe0,0x00000000,std::uint16_t>;
        ///Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> addr{}; 
        ///Read Continuously
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Read Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rreq{}; 
    }
    namespace Tc3Count16Status{    ///<Status
        using Addr = Register::Address<0x42002c0f,0xffffff67,0x00000000,std::uint8_t>;
        ///Stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stop{}; 
        ///Slave
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> slave{}; 
        ///Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> syncbusy{}; 
    }
    namespace Tc3Count32Ccs{    ///<COUNT32 Compare/Capture
        using Addr = Register::Address<0x42002c18,0x00000000,0x00000000,std::uint32_t>;
        ///Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tc3Count32Count{    ///<COUNT32 Counter Value
        using Addr = Register::Address<0x42002c10,0x00000000,0x00000000,std::uint32_t>;
        ///Count Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Tc3Count32Ctrla{    ///<Control A
        using Addr = Register::Address<0x42002c00,0xffffc090,0x00000000,std::uint16_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///TC Mode
        enum class ModeVal {
            count16=0x00000000,     ///<Counter in 16-bit mode
            count8=0x00000001,     ///<Counter in 8-bit mode
            count32=0x00000002,     ///<Counter in 32-bit mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::count16> count16{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::count8> count8{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::count32> count32{};
        }
        ///Waveform Generation Operation
        enum class WavegenVal {
            nfrq=0x00000000,     ///<
            mfrq=0x00000001,     ///<
            npwm=0x00000002,     ///<
            mpwm=0x00000003,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,WavegenVal> wavegen{}; 
        namespace WavegenValC{
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::nfrq> nfrq{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::mfrq> mfrq{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::npwm> npwm{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::mpwm> mpwm{};
        }
        ///Prescaler
        enum class PrescalerVal {
            div1=0x00000000,     ///<Prescaler: GCLK_TC
            div2=0x00000001,     ///<Prescaler: GCLK_TC/2
            div4=0x00000002,     ///<Prescaler: GCLK_TC/4
            div8=0x00000003,     ///<Prescaler: GCLK_TC/8
            div16=0x00000004,     ///<Prescaler: GCLK_TC/16
            div64=0x00000005,     ///<Prescaler: GCLK_TC/64
            div256=0x00000006,     ///<Prescaler: GCLK_TC/256
            div1024=0x00000007,     ///<Prescaler: GCLK_TC/1024
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,PrescalerVal> prescaler{}; 
        namespace PrescalerValC{
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div1> div1{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div2> div2{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div4> div4{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div8> div8{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div16> div16{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div64> div64{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div256> div256{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div1024> div1024{};
        }
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Prescaler and Counter Synchronization
        enum class PrescsyncVal {
            gclk=0x00000000,     ///<Reload or reset the counter on next generic clock
            presc=0x00000001,     ///<Reload or reset the counter on next prescaler clock
            resync=0x00000002,     ///<Reload or reset the counter on next generic clock. Reset the prescaler counter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PrescsyncVal> prescsync{}; 
        namespace PrescsyncValC{
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::gclk> gclk{};
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::presc> presc{};
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::resync> resync{};
        }
    }
    namespace Tc3Count32Ctrlbclr{    ///<Control B Clear
        using Addr = Register::Address<0x42002c04,0xffffff3a,0x00000000,std::uint8_t>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///One-Shot
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Command
        enum class CmdVal {
            none=0x00000000,     ///<No action
            retrigger=0x00000001,     ///<Force a start, restart or retrigger
            stop=0x00000002,     ///<Force a stop
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::stop> stop{};
        }
    }
    namespace Tc3Count32Ctrlbset{    ///<Control B Set
        using Addr = Register::Address<0x42002c05,0xffffff3a,0x00000000,std::uint8_t>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///One-Shot
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Command
        enum class CmdVal {
            none=0x00000000,     ///<No action
            retrigger=0x00000001,     ///<Force a start, restart or retrigger
            stop=0x00000002,     ///<Force a stop
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::stop> stop{};
        }
    }
    namespace Tc3Count32Ctrlc{    ///<Control C
        using Addr = Register::Address<0x42002c06,0xffffffcc,0x00000000,std::uint8_t>;
        ///Output Waveform 0 Invert Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inven0{}; 
        ///Output Waveform 1 Invert Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inven1{}; 
        ///Capture Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpten0{}; 
        ///Capture Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cpten1{}; 
    }
    namespace Tc3Count32Dbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x42002c08,0xfffffffe,0x00000000,std::uint8_t>;
        ///Debug Run Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace Tc3Count32Evctrl{    ///<Event Control
        using Addr = Register::Address<0x42002c0a,0xffffcec8,0x00000000,std::uint16_t>;
        ///Event Action
        enum class EvactVal {
            off=0x00000000,     ///<Event action disabled
            retrigger=0x00000001,     ///<Start, restart or retrigger TC on event
            count=0x00000002,     ///<Count on event
            start=0x00000003,     ///<Start TC on event
            ppw=0x00000005,     ///<Period captured in CC0, pulse width in CC1
            pwp=0x00000006,     ///<Period captured in CC1, pulse width in CC0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::off> off{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::count> count{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::start> start{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ppw> ppw{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::pwp> pwp{};
        }
        ///TC Inverted Event Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcinv{}; 
        ///TC Event Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcei{}; 
        ///Overflow/Underflow Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovfeo{}; 
        ///Match or Capture Channel 0 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mceo0{}; 
        ///Match or Capture Channel 1 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mceo1{}; 
    }
    namespace Tc3Count32Intenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x42002c0c,0xffffffc4,0x00000000,std::uint8_t>;
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Match or Capture Channel 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc3Count32Intenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x42002c0d,0xffffffc4,0x00000000,std::uint8_t>;
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Match or Capture Channel 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc3Count32Intflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x42002c0e,0xffffffc4,0x00000000,std::uint8_t>;
        ///Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Match or Capture Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc3Count32Readreq{    ///<Read Request
        using Addr = Register::Address<0x42002c02,0xffff3fe0,0x00000000,std::uint16_t>;
        ///Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> addr{}; 
        ///Read Continuously
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Read Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rreq{}; 
    }
    namespace Tc3Count32Status{    ///<Status
        using Addr = Register::Address<0x42002c0f,0xffffff67,0x00000000,std::uint8_t>;
        ///Stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stop{}; 
        ///Slave
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> slave{}; 
        ///Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> syncbusy{}; 
    }
}
