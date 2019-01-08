#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Basic Timer Counter 0
    namespace Tc0Count8Ctrla{    ///<Control A
        using Addr = Register::Address<0x40003800,0xe4ccf000,0x00000000,std::uint32_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Timer Counter Mode
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
        ///Prescaler and Counter Synchronization
        enum class PrescsyncVal {
            gclk=0x00000000,     ///<Reload or reset the counter on next generic clock
            presc=0x00000001,     ///<Reload or reset the counter on next prescaler clock
            resync=0x00000002,     ///<Reload or reset the counter on next generic clock and reset the prescaler counter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,PrescsyncVal> prescsync{}; 
        namespace PrescsyncValC{
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::gclk> gclk{};
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::presc> presc{};
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::resync> resync{};
        }
        ///Run during Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
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
        ///Auto Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> alock{}; 
        ///Capture Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> capten0{}; 
        ///Capture Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> capten1{}; 
        ///Capture On Pin 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> copen0{}; 
        ///Capture On Pin 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> copen1{}; 
        ///Capture Mode Channel 0
        enum class Captmode0Val {
            default_=0x00000000,     ///<Default capture
            captmin=0x00000001,     ///<Minimum capture
            captmax=0x00000002,     ///<Maximum capture
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Captmode0Val> captmode0{}; 
        namespace Captmode0ValC{
            constexpr Register::FieldValue<decltype(captmode0)::Type,Captmode0Val::default_> default_{};
            constexpr Register::FieldValue<decltype(captmode0)::Type,Captmode0Val::captmin> captmin{};
            constexpr Register::FieldValue<decltype(captmode0)::Type,Captmode0Val::captmax> captmax{};
        }
        ///Capture mode Channel 1
        enum class Captmode1Val {
            default_=0x00000000,     ///<Default capture
            captmin=0x00000001,     ///<Minimum capture
            captmax=0x00000002,     ///<Maximum capture
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,27),Register::ReadWriteAccess,Captmode1Val> captmode1{}; 
        namespace Captmode1ValC{
            constexpr Register::FieldValue<decltype(captmode1)::Type,Captmode1Val::default_> default_{};
            constexpr Register::FieldValue<decltype(captmode1)::Type,Captmode1Val::captmin> captmin{};
            constexpr Register::FieldValue<decltype(captmode1)::Type,Captmode1Val::captmax> captmax{};
        }
    }
    namespace Tc0Count8Ctrlbclr{    ///<Control B Clear
        using Addr = Register::Address<0x40003804,0xffffff18,0x00000000,std::uint8_t>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Lock Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lupd{}; 
        ///One-Shot on Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Command
        enum class CmdVal {
            none=0x00000000,     ///<No action
            retrigger=0x00000001,     ///<Force a start, restart or retrigger
            stop=0x00000002,     ///<Force a stop
            update=0x00000003,     ///<Force update of double-buffered register
            readsync=0x00000004,     ///<Force a read synchronization of COUNT
            dmaos=0x00000005,     ///<One-shot DMA trigger
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::stop> stop{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::update> update{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::readsync> readsync{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::dmaos> dmaos{};
        }
    }
    namespace Tc0Count8Ctrlbset{    ///<Control B Set
        using Addr = Register::Address<0x40003805,0xffffff18,0x00000000,std::uint8_t>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Lock Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lupd{}; 
        ///One-Shot on Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Command
        enum class CmdVal {
            none=0x00000000,     ///<No action
            retrigger=0x00000001,     ///<Force a start, restart or retrigger
            stop=0x00000002,     ///<Force a stop
            update=0x00000003,     ///<Force update of double-buffered register
            readsync=0x00000004,     ///<Force a read synchronization of COUNT
            dmaos=0x00000005,     ///<One-shot DMA trigger
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::stop> stop{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::update> update{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::readsync> readsync{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::dmaos> dmaos{};
        }
    }
    namespace Tc0Count8Evctrl{    ///<Event Control
        using Addr = Register::Address<0x40003806,0xffffcec8,0x00000000,std::uint16_t>;
        ///Event Action
        enum class EvactVal {
            off=0x00000000,     ///<Event action disabled
            retrigger=0x00000001,     ///<Start, restart or retrigger TC on event
            count=0x00000002,     ///<Count on event
            start=0x00000003,     ///<Start TC on event
            stamp=0x00000004,     ///<Time stamp capture
            ppw=0x00000005,     ///<Period catured in CC0, pulse width in CC1
            pwp=0x00000006,     ///<Period catured in CC1, pulse width in CC0
            pw=0x00000007,     ///<Pulse width capture
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::off> off{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::count> count{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::start> start{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::stamp> stamp{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ppw> ppw{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::pwp> pwp{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::pw> pw{};
        }
        ///TC Event Input Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcinv{}; 
        ///TC Event Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcei{}; 
        ///Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovfeo{}; 
        ///MC Event Output Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mceo0{}; 
        ///MC Event Output Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mceo1{}; 
    }
    namespace Tc0Count8Intenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x40003808,0xffffffcc,0x00000000,std::uint8_t>;
        ///OVF Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///ERR Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///MC Interrupt Disable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///MC Interrupt Disable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc0Count8Intenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x40003809,0xffffffcc,0x00000000,std::uint8_t>;
        ///OVF Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///ERR Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///MC Interrupt Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///MC Interrupt Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc0Count8Intflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4000380a,0xffffffcc,0x00000000,std::uint8_t>;
        ///OVF Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///ERR Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///MC Interrupt Flag 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///MC Interrupt Flag 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc0Count8Status{    ///<Status
        using Addr = Register::Address<0x4000380b,0xffffffc4,0x00000000,std::uint8_t>;
        ///Stop Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stop{}; 
        ///Slave Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> slave{}; 
        ///Synchronization Busy Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perbufv{}; 
        ///Compare channel buffer 0 valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccbufv0{}; 
        ///Compare channel buffer 1 valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ccbufv1{}; 
    }
    namespace Tc0Count8Wave{    ///<Waveform Generation Control
        using Addr = Register::Address<0x4000380c,0xfffffffc,0x00000000,std::uint8_t>;
        ///Waveform Generation Mode
        enum class WavegenVal {
            nfrq=0x00000000,     ///<Normal frequency
            mfrq=0x00000001,     ///<Match frequency
            npwm=0x00000002,     ///<Normal PWM
            mpwm=0x00000003,     ///<Match PWM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,WavegenVal> wavegen{}; 
        namespace WavegenValC{
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::nfrq> nfrq{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::mfrq> mfrq{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::npwm> npwm{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::mpwm> mpwm{};
        }
    }
    namespace Tc0Count8Drvctrl{    ///<Control C
        using Addr = Register::Address<0x4000380d,0xfffffffc,0x00000000,std::uint8_t>;
        ///Output Waveform Invert Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inven0{}; 
        ///Output Waveform Invert Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inven1{}; 
    }
    namespace Tc0Count8Dbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4000380f,0xfffffffe,0x00000000,std::uint8_t>;
        ///Run During Debug
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace Tc0Count8Syncbusy{    ///<Synchronization Status
        using Addr = Register::Address<0x40003810,0xffffff00,0x00000000,std::uint32_t>;
        ///swrst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///CTRLB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrlb{}; 
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> status{}; 
        ///Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> count{}; 
        ///Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> per{}; 
        ///Compare Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cc0{}; 
        ///Compare Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cc1{}; 
    }
    namespace Tc0Count8Count{    ///<COUNT8 Count
        using Addr = Register::Address<0x40003814,0xffffff00,0x00000000,std::uint8_t>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Tc0Count8Per{    ///<COUNT8 Period
        using Addr = Register::Address<0x4000381b,0xffffff00,0x00000000,std::uint8_t>;
        ///Period Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> per{}; 
    }
    namespace Tc0Count8Ccs{    ///<COUNT8 Compare and Capture
        using Addr = Register::Address<0x4000381c,0xffffff00,0x00000000,std::uint8_t>;
        ///Counter/Compare Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tc0Count8Perbuf{    ///<COUNT8 Period Buffer
        using Addr = Register::Address<0x4000382f,0xffffff00,0x00000000,std::uint8_t>;
        ///Period Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> perbuf{}; 
    }
    namespace Tc0Count8Ccbufs{    ///<COUNT8 Compare and Capture Buffer
        using Addr = Register::Address<0x40003830,0xffffff00,0x00000000,std::uint8_t>;
        ///Counter/Compare Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tc0Count16Ctrla{    ///<Control A
        using Addr = Register::Address<0x40003800,0xe4ccf000,0x00000000,std::uint32_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Timer Counter Mode
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
        ///Prescaler and Counter Synchronization
        enum class PrescsyncVal {
            gclk=0x00000000,     ///<Reload or reset the counter on next generic clock
            presc=0x00000001,     ///<Reload or reset the counter on next prescaler clock
            resync=0x00000002,     ///<Reload or reset the counter on next generic clock and reset the prescaler counter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,PrescsyncVal> prescsync{}; 
        namespace PrescsyncValC{
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::gclk> gclk{};
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::presc> presc{};
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::resync> resync{};
        }
        ///Run during Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
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
        ///Auto Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> alock{}; 
        ///Capture Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> capten0{}; 
        ///Capture Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> capten1{}; 
        ///Capture On Pin 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> copen0{}; 
        ///Capture On Pin 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> copen1{}; 
        ///Capture Mode Channel 0
        enum class Captmode0Val {
            default_=0x00000000,     ///<Default capture
            captmin=0x00000001,     ///<Minimum capture
            captmax=0x00000002,     ///<Maximum capture
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Captmode0Val> captmode0{}; 
        namespace Captmode0ValC{
            constexpr Register::FieldValue<decltype(captmode0)::Type,Captmode0Val::default_> default_{};
            constexpr Register::FieldValue<decltype(captmode0)::Type,Captmode0Val::captmin> captmin{};
            constexpr Register::FieldValue<decltype(captmode0)::Type,Captmode0Val::captmax> captmax{};
        }
        ///Capture mode Channel 1
        enum class Captmode1Val {
            default_=0x00000000,     ///<Default capture
            captmin=0x00000001,     ///<Minimum capture
            captmax=0x00000002,     ///<Maximum capture
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,27),Register::ReadWriteAccess,Captmode1Val> captmode1{}; 
        namespace Captmode1ValC{
            constexpr Register::FieldValue<decltype(captmode1)::Type,Captmode1Val::default_> default_{};
            constexpr Register::FieldValue<decltype(captmode1)::Type,Captmode1Val::captmin> captmin{};
            constexpr Register::FieldValue<decltype(captmode1)::Type,Captmode1Val::captmax> captmax{};
        }
    }
    namespace Tc0Count16Ctrlbclr{    ///<Control B Clear
        using Addr = Register::Address<0x40003804,0xffffff18,0x00000000,std::uint8_t>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Lock Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lupd{}; 
        ///One-Shot on Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Command
        enum class CmdVal {
            none=0x00000000,     ///<No action
            retrigger=0x00000001,     ///<Force a start, restart or retrigger
            stop=0x00000002,     ///<Force a stop
            update=0x00000003,     ///<Force update of double-buffered register
            readsync=0x00000004,     ///<Force a read synchronization of COUNT
            dmaos=0x00000005,     ///<One-shot DMA trigger
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::stop> stop{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::update> update{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::readsync> readsync{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::dmaos> dmaos{};
        }
    }
    namespace Tc0Count16Ctrlbset{    ///<Control B Set
        using Addr = Register::Address<0x40003805,0xffffff18,0x00000000,std::uint8_t>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Lock Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lupd{}; 
        ///One-Shot on Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Command
        enum class CmdVal {
            none=0x00000000,     ///<No action
            retrigger=0x00000001,     ///<Force a start, restart or retrigger
            stop=0x00000002,     ///<Force a stop
            update=0x00000003,     ///<Force update of double-buffered register
            readsync=0x00000004,     ///<Force a read synchronization of COUNT
            dmaos=0x00000005,     ///<One-shot DMA trigger
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::stop> stop{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::update> update{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::readsync> readsync{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::dmaos> dmaos{};
        }
    }
    namespace Tc0Count16Evctrl{    ///<Event Control
        using Addr = Register::Address<0x40003806,0xffffcec8,0x00000000,std::uint16_t>;
        ///Event Action
        enum class EvactVal {
            off=0x00000000,     ///<Event action disabled
            retrigger=0x00000001,     ///<Start, restart or retrigger TC on event
            count=0x00000002,     ///<Count on event
            start=0x00000003,     ///<Start TC on event
            stamp=0x00000004,     ///<Time stamp capture
            ppw=0x00000005,     ///<Period catured in CC0, pulse width in CC1
            pwp=0x00000006,     ///<Period catured in CC1, pulse width in CC0
            pw=0x00000007,     ///<Pulse width capture
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::off> off{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::count> count{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::start> start{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::stamp> stamp{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ppw> ppw{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::pwp> pwp{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::pw> pw{};
        }
        ///TC Event Input Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcinv{}; 
        ///TC Event Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcei{}; 
        ///Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovfeo{}; 
        ///MC Event Output Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mceo0{}; 
        ///MC Event Output Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mceo1{}; 
    }
    namespace Tc0Count16Intenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x40003808,0xffffffcc,0x00000000,std::uint8_t>;
        ///OVF Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///ERR Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///MC Interrupt Disable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///MC Interrupt Disable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc0Count16Intenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x40003809,0xffffffcc,0x00000000,std::uint8_t>;
        ///OVF Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///ERR Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///MC Interrupt Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///MC Interrupt Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc0Count16Intflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4000380a,0xffffffcc,0x00000000,std::uint8_t>;
        ///OVF Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///ERR Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///MC Interrupt Flag 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///MC Interrupt Flag 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc0Count16Status{    ///<Status
        using Addr = Register::Address<0x4000380b,0xffffffc4,0x00000000,std::uint8_t>;
        ///Stop Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stop{}; 
        ///Slave Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> slave{}; 
        ///Synchronization Busy Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perbufv{}; 
        ///Compare channel buffer 0 valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccbufv0{}; 
        ///Compare channel buffer 1 valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ccbufv1{}; 
    }
    namespace Tc0Count16Wave{    ///<Waveform Generation Control
        using Addr = Register::Address<0x4000380c,0xfffffffc,0x00000000,std::uint8_t>;
        ///Waveform Generation Mode
        enum class WavegenVal {
            nfrq=0x00000000,     ///<Normal frequency
            mfrq=0x00000001,     ///<Match frequency
            npwm=0x00000002,     ///<Normal PWM
            mpwm=0x00000003,     ///<Match PWM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,WavegenVal> wavegen{}; 
        namespace WavegenValC{
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::nfrq> nfrq{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::mfrq> mfrq{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::npwm> npwm{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::mpwm> mpwm{};
        }
    }
    namespace Tc0Count16Drvctrl{    ///<Control C
        using Addr = Register::Address<0x4000380d,0xfffffffc,0x00000000,std::uint8_t>;
        ///Output Waveform Invert Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inven0{}; 
        ///Output Waveform Invert Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inven1{}; 
    }
    namespace Tc0Count16Dbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4000380f,0xfffffffe,0x00000000,std::uint8_t>;
        ///Run During Debug
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace Tc0Count16Syncbusy{    ///<Synchronization Status
        using Addr = Register::Address<0x40003810,0xffffff00,0x00000000,std::uint32_t>;
        ///swrst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///CTRLB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrlb{}; 
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> status{}; 
        ///Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> count{}; 
        ///Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> per{}; 
        ///Compare Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cc0{}; 
        ///Compare Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cc1{}; 
    }
    namespace Tc0Count16Count{    ///<COUNT16 Count
        using Addr = Register::Address<0x40003814,0xffff0000,0x00000000,std::uint16_t>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Tc0Count16Ccs{    ///<COUNT16 Compare and Capture
        using Addr = Register::Address<0x4000381c,0xffff0000,0x00000000,std::uint16_t>;
        ///Counter/Compare Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tc0Count16Ccbufs{    ///<COUNT16 Compare and Capture Buffer
        using Addr = Register::Address<0x40003830,0xffff0000,0x00000000,std::uint16_t>;
        ///Counter/Compare Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tc0Count32Ctrla{    ///<Control A
        using Addr = Register::Address<0x40003800,0xe4ccf000,0x00000000,std::uint32_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Timer Counter Mode
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
        ///Prescaler and Counter Synchronization
        enum class PrescsyncVal {
            gclk=0x00000000,     ///<Reload or reset the counter on next generic clock
            presc=0x00000001,     ///<Reload or reset the counter on next prescaler clock
            resync=0x00000002,     ///<Reload or reset the counter on next generic clock and reset the prescaler counter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,PrescsyncVal> prescsync{}; 
        namespace PrescsyncValC{
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::gclk> gclk{};
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::presc> presc{};
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::resync> resync{};
        }
        ///Run during Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Clock On Demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
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
        ///Auto Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> alock{}; 
        ///Capture Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> capten0{}; 
        ///Capture Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> capten1{}; 
        ///Capture On Pin 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> copen0{}; 
        ///Capture On Pin 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> copen1{}; 
        ///Capture Mode Channel 0
        enum class Captmode0Val {
            default_=0x00000000,     ///<Default capture
            captmin=0x00000001,     ///<Minimum capture
            captmax=0x00000002,     ///<Maximum capture
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Captmode0Val> captmode0{}; 
        namespace Captmode0ValC{
            constexpr Register::FieldValue<decltype(captmode0)::Type,Captmode0Val::default_> default_{};
            constexpr Register::FieldValue<decltype(captmode0)::Type,Captmode0Val::captmin> captmin{};
            constexpr Register::FieldValue<decltype(captmode0)::Type,Captmode0Val::captmax> captmax{};
        }
        ///Capture mode Channel 1
        enum class Captmode1Val {
            default_=0x00000000,     ///<Default capture
            captmin=0x00000001,     ///<Minimum capture
            captmax=0x00000002,     ///<Maximum capture
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,27),Register::ReadWriteAccess,Captmode1Val> captmode1{}; 
        namespace Captmode1ValC{
            constexpr Register::FieldValue<decltype(captmode1)::Type,Captmode1Val::default_> default_{};
            constexpr Register::FieldValue<decltype(captmode1)::Type,Captmode1Val::captmin> captmin{};
            constexpr Register::FieldValue<decltype(captmode1)::Type,Captmode1Val::captmax> captmax{};
        }
    }
    namespace Tc0Count32Ctrlbclr{    ///<Control B Clear
        using Addr = Register::Address<0x40003804,0xffffff18,0x00000000,std::uint8_t>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Lock Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lupd{}; 
        ///One-Shot on Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Command
        enum class CmdVal {
            none=0x00000000,     ///<No action
            retrigger=0x00000001,     ///<Force a start, restart or retrigger
            stop=0x00000002,     ///<Force a stop
            update=0x00000003,     ///<Force update of double-buffered register
            readsync=0x00000004,     ///<Force a read synchronization of COUNT
            dmaos=0x00000005,     ///<One-shot DMA trigger
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::stop> stop{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::update> update{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::readsync> readsync{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::dmaos> dmaos{};
        }
    }
    namespace Tc0Count32Ctrlbset{    ///<Control B Set
        using Addr = Register::Address<0x40003805,0xffffff18,0x00000000,std::uint8_t>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Lock Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lupd{}; 
        ///One-Shot on Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Command
        enum class CmdVal {
            none=0x00000000,     ///<No action
            retrigger=0x00000001,     ///<Force a start, restart or retrigger
            stop=0x00000002,     ///<Force a stop
            update=0x00000003,     ///<Force update of double-buffered register
            readsync=0x00000004,     ///<Force a read synchronization of COUNT
            dmaos=0x00000005,     ///<One-shot DMA trigger
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::none> none{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::stop> stop{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::update> update{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::readsync> readsync{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::dmaos> dmaos{};
        }
    }
    namespace Tc0Count32Evctrl{    ///<Event Control
        using Addr = Register::Address<0x40003806,0xffffcec8,0x00000000,std::uint16_t>;
        ///Event Action
        enum class EvactVal {
            off=0x00000000,     ///<Event action disabled
            retrigger=0x00000001,     ///<Start, restart or retrigger TC on event
            count=0x00000002,     ///<Count on event
            start=0x00000003,     ///<Start TC on event
            stamp=0x00000004,     ///<Time stamp capture
            ppw=0x00000005,     ///<Period catured in CC0, pulse width in CC1
            pwp=0x00000006,     ///<Period catured in CC1, pulse width in CC0
            pw=0x00000007,     ///<Pulse width capture
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::off> off{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::count> count{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::start> start{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::stamp> stamp{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ppw> ppw{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::pwp> pwp{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::pw> pw{};
        }
        ///TC Event Input Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcinv{}; 
        ///TC Event Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcei{}; 
        ///Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovfeo{}; 
        ///MC Event Output Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mceo0{}; 
        ///MC Event Output Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mceo1{}; 
    }
    namespace Tc0Count32Intenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x40003808,0xffffffcc,0x00000000,std::uint8_t>;
        ///OVF Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///ERR Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///MC Interrupt Disable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///MC Interrupt Disable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc0Count32Intenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x40003809,0xffffffcc,0x00000000,std::uint8_t>;
        ///OVF Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///ERR Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///MC Interrupt Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///MC Interrupt Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc0Count32Intflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4000380a,0xffffffcc,0x00000000,std::uint8_t>;
        ///OVF Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///ERR Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> err{}; 
        ///MC Interrupt Flag 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///MC Interrupt Flag 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mc1{}; 
    }
    namespace Tc0Count32Status{    ///<Status
        using Addr = Register::Address<0x4000380b,0xffffffc4,0x00000000,std::uint8_t>;
        ///Stop Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stop{}; 
        ///Slave Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> slave{}; 
        ///Synchronization Busy Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perbufv{}; 
        ///Compare channel buffer 0 valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccbufv0{}; 
        ///Compare channel buffer 1 valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ccbufv1{}; 
    }
    namespace Tc0Count32Wave{    ///<Waveform Generation Control
        using Addr = Register::Address<0x4000380c,0xfffffffc,0x00000000,std::uint8_t>;
        ///Waveform Generation Mode
        enum class WavegenVal {
            nfrq=0x00000000,     ///<Normal frequency
            mfrq=0x00000001,     ///<Match frequency
            npwm=0x00000002,     ///<Normal PWM
            mpwm=0x00000003,     ///<Match PWM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,WavegenVal> wavegen{}; 
        namespace WavegenValC{
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::nfrq> nfrq{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::mfrq> mfrq{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::npwm> npwm{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::mpwm> mpwm{};
        }
    }
    namespace Tc0Count32Drvctrl{    ///<Control C
        using Addr = Register::Address<0x4000380d,0xfffffffc,0x00000000,std::uint8_t>;
        ///Output Waveform Invert Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inven0{}; 
        ///Output Waveform Invert Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inven1{}; 
    }
    namespace Tc0Count32Dbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4000380f,0xfffffffe,0x00000000,std::uint8_t>;
        ///Run During Debug
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace Tc0Count32Syncbusy{    ///<Synchronization Status
        using Addr = Register::Address<0x40003810,0xffffff00,0x00000000,std::uint32_t>;
        ///swrst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///CTRLB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrlb{}; 
        ///STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> status{}; 
        ///Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> count{}; 
        ///Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> per{}; 
        ///Compare Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cc0{}; 
        ///Compare Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cc1{}; 
    }
    namespace Tc0Count32Count{    ///<COUNT32 Count
        using Addr = Register::Address<0x40003814,0x00000000,0x00000000,std::uint32_t>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Tc0Count32Ccs{    ///<COUNT32 Compare and Capture
        using Addr = Register::Address<0x4000381c,0x00000000,0x00000000,std::uint32_t>;
        ///Counter/Compare Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tc0Count32Ccbufs{    ///<COUNT32 Compare and Capture Buffer
        using Addr = Register::Address<0x40003830,0x00000000,0x00000000,std::uint32_t>;
        ///Counter/Compare Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
}
