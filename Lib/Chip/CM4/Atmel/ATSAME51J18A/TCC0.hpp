#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Timer Counter Control 0
    namespace Tcc0Ctrla{    ///<Control A
        using Addr = Register::Address<0x41016000,0xc07f009c,0x00000000,std::uint32_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Enhanced Resolution
        enum class ResolutionVal {
            none=0x00000000,     ///<Dithering is disabled
            dith4=0x00000001,     ///<Dithering is done every 16 PWM frames
            dith5=0x00000002,     ///<Dithering is done every 32 PWM frames
            dith6=0x00000003,     ///<Dithering is done every 64 PWM frames
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,ResolutionVal> resolution{}; 
        namespace ResolutionValC{
            constexpr Register::FieldValue<decltype(resolution)::Type,ResolutionVal::none> none{};
            constexpr Register::FieldValue<decltype(resolution)::Type,ResolutionVal::dith4> dith4{};
            constexpr Register::FieldValue<decltype(resolution)::Type,ResolutionVal::dith5> dith5{};
            constexpr Register::FieldValue<decltype(resolution)::Type,ResolutionVal::dith6> dith6{};
        }
        ///Prescaler
        enum class PrescalerVal {
            div1=0x00000000,     ///<No division
            div2=0x00000001,     ///<Divide by 2
            div4=0x00000002,     ///<Divide by 4
            div8=0x00000003,     ///<Divide by 8
            div16=0x00000004,     ///<Divide by 16
            div64=0x00000005,     ///<Divide by 64
            div256=0x00000006,     ///<Divide by 256
            div1024=0x00000007,     ///<Divide by 1024
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
        ///Prescaler and Counter Synchronization Selection
        enum class PrescsyncVal {
            gclk=0x00000000,     ///<Reload or reset counter on next GCLK
            presc=0x00000001,     ///<Reload or reset counter on next prescaler clock
            resync=0x00000002,     ///<Reload or reset counter on next GCLK and reset prescaler counter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,PrescsyncVal> prescsync{}; 
        namespace PrescsyncValC{
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::gclk> gclk{};
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::presc> presc{};
            constexpr Register::FieldValue<decltype(prescsync)::Type,PrescsyncVal::resync> resync{};
        }
        ///Auto Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> alock{}; 
        ///Master Synchronization (only for TCC Slave Instance)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msync{}; 
        ///DMA One-shot Trigger Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dmaos{}; 
        ///Capture Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cpten0{}; 
        ///Capture Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cpten1{}; 
        ///Capture Channel 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cpten2{}; 
        ///Capture Channel 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cpten3{}; 
        ///Capture Channel 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cpten4{}; 
        ///Capture Channel 5 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> cpten5{}; 
    }
    namespace Tcc0Ctrlbclr{    ///<Control B Clear
        using Addr = Register::Address<0x41016004,0xffffff00,0x00000000,std::uint8_t>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Lock Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lupd{}; 
        ///One-Shot
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Ramp Index Command
        enum class IdxcmdVal {
            disable=0x00000000,     ///<Command disabled: Index toggles between cycles A and B
            set=0x00000001,     ///<Set index: cycle B will be forced in the next cycle
            clear=0x00000002,     ///<Clear index: cycle A will be forced in the next cycle
            hold=0x00000003,     ///<Hold index: the next cycle will be the same as the current cycle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,IdxcmdVal> idxcmd{}; 
        namespace IdxcmdValC{
            constexpr Register::FieldValue<decltype(idxcmd)::Type,IdxcmdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(idxcmd)::Type,IdxcmdVal::set> set{};
            constexpr Register::FieldValue<decltype(idxcmd)::Type,IdxcmdVal::clear> clear{};
            constexpr Register::FieldValue<decltype(idxcmd)::Type,IdxcmdVal::hold> hold{};
        }
        ///TCC Command
        enum class CmdVal {
            none=0x00000000,     ///<No action
            retrigger=0x00000001,     ///<Clear start, restart or retrigger
            stop=0x00000002,     ///<Force stop
            update=0x00000003,     ///<Force update or double buffered registers
            readsync=0x00000004,     ///<Force COUNT read synchronization
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
    namespace Tcc0Ctrlbset{    ///<Control B Set
        using Addr = Register::Address<0x41016005,0xffffff00,0x00000000,std::uint8_t>;
        ///Counter Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Lock Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lupd{}; 
        ///One-Shot
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oneshot{}; 
        ///Ramp Index Command
        enum class IdxcmdVal {
            disable=0x00000000,     ///<Command disabled: Index toggles between cycles A and B
            set=0x00000001,     ///<Set index: cycle B will be forced in the next cycle
            clear=0x00000002,     ///<Clear index: cycle A will be forced in the next cycle
            hold=0x00000003,     ///<Hold index: the next cycle will be the same as the current cycle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,IdxcmdVal> idxcmd{}; 
        namespace IdxcmdValC{
            constexpr Register::FieldValue<decltype(idxcmd)::Type,IdxcmdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(idxcmd)::Type,IdxcmdVal::set> set{};
            constexpr Register::FieldValue<decltype(idxcmd)::Type,IdxcmdVal::clear> clear{};
            constexpr Register::FieldValue<decltype(idxcmd)::Type,IdxcmdVal::hold> hold{};
        }
        ///TCC Command
        enum class CmdVal {
            none=0x00000000,     ///<No action
            retrigger=0x00000001,     ///<Clear start, restart or retrigger
            stop=0x00000002,     ///<Force stop
            update=0x00000003,     ///<Force update or double buffered registers
            readsync=0x00000004,     ///<Force COUNT read synchronization
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
    namespace Tcc0Syncbusy{    ///<Synchronization Busy
        using Addr = Register::Address<0x41016008,0xffffc000,0x00000000,std::uint32_t>;
        ///Swrst Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Ctrlb Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrlb{}; 
        ///Status Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> status{}; 
        ///Count Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> count{}; 
        ///Pattern Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> patt{}; 
        ///Wave Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wave{}; 
        ///Period Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> per{}; 
        ///Compare Channel 0 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cc0{}; 
        ///Compare Channel 1 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1{}; 
        ///Compare Channel 2 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc2{}; 
        ///Compare Channel 3 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cc3{}; 
        ///Compare Channel 4 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cc4{}; 
        ///Compare Channel 5 Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cc5{}; 
    }
    namespace Tcc0Fctrla{    ///<Recoverable Fault A Configuration
        using Addr = Register::Address<0x4101600c,0xf0000004,0x00000000,std::uint32_t>;
        ///Fault A Source
        enum class SrcVal {
            disable=0x00000000,     ///<Fault input disabled
            enable=0x00000001,     ///<MCEx (x=0,1) event input
            invert=0x00000002,     ///<Inverted MCEx (x=0,1) event input
            altfault=0x00000003,     ///<Alternate fault (A or B) state at the end of the previous period
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::disable> disable{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::enable> enable{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::invert> invert{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::altfault> altfault{};
        }
        ///Fault A Keeper
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> keep{}; 
        ///Fault A Qualification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qual{}; 
        ///Fault A Blanking Mode
        enum class BlankVal {
            start=0x00000000,     ///<Blanking applied from start of the ramp
            rise=0x00000001,     ///<Blanking applied from rising edge of the output waveform
            fall=0x00000002,     ///<Blanking applied from falling edge of the output waveform
            both=0x00000003,     ///<Blanking applied from each toggle of the output waveform
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,BlankVal> blank{}; 
        namespace BlankValC{
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::start> start{};
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::rise> rise{};
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::fall> fall{};
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::both> both{};
        }
        ///Fault A Restart
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> restart{}; 
        ///Fault A Halt Mode
        enum class HaltVal {
            disable=0x00000000,     ///<Halt action disabled
            hw=0x00000001,     ///<Hardware halt action
            sw=0x00000002,     ///<Software halt action
            nr=0x00000003,     ///<Non-recoverable fault
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,HaltVal> halt{}; 
        namespace HaltValC{
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::disable> disable{};
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::hw> hw{};
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::sw> sw{};
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::nr> nr{};
        }
        ///Fault A Capture Channel
        enum class ChselVal {
            cc0=0x00000000,     ///<Capture value stored in channel 0
            cc1=0x00000001,     ///<Capture value stored in channel 1
            cc2=0x00000002,     ///<Capture value stored in channel 2
            cc3=0x00000003,     ///<Capture value stored in channel 3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,ChselVal> chsel{}; 
        namespace ChselValC{
            constexpr Register::FieldValue<decltype(chsel)::Type,ChselVal::cc0> cc0{};
            constexpr Register::FieldValue<decltype(chsel)::Type,ChselVal::cc1> cc1{};
            constexpr Register::FieldValue<decltype(chsel)::Type,ChselVal::cc2> cc2{};
            constexpr Register::FieldValue<decltype(chsel)::Type,ChselVal::cc3> cc3{};
        }
        ///Fault A Capture Action
        enum class CaptureVal {
            disable=0x00000000,     ///<No capture
            capt=0x00000001,     ///<Capture on fault
            captmin=0x00000002,     ///<Minimum capture
            captmax=0x00000003,     ///<Maximum capture
            locmin=0x00000004,     ///<Minimum local detection
            locmax=0x00000005,     ///<Maximum local detection
            deriv0=0x00000006,     ///<Minimum and maximum local detection
            captmark=0x00000007,     ///<Capture with ramp index as MSB value
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,CaptureVal> capture{}; 
        namespace CaptureValC{
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::disable> disable{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::capt> capt{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::captmin> captmin{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::captmax> captmax{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::locmin> locmin{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::locmax> locmax{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::deriv0> deriv0{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::captmark> captmark{};
        }
        ///Fault A Blanking Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> blankpresc{}; 
        ///Fault A Blanking Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> blankval{}; 
        ///Fault A Filter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> filterval{}; 
    }
    namespace Tcc0Fctrlb{    ///<Recoverable Fault B Configuration
        using Addr = Register::Address<0x41016010,0xf0000004,0x00000000,std::uint32_t>;
        ///Fault B Source
        enum class SrcVal {
            disable=0x00000000,     ///<Fault input disabled
            enable=0x00000001,     ///<MCEx (x=0,1) event input
            invert=0x00000002,     ///<Inverted MCEx (x=0,1) event input
            altfault=0x00000003,     ///<Alternate fault (A or B) state at the end of the previous period
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::disable> disable{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::enable> enable{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::invert> invert{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::altfault> altfault{};
        }
        ///Fault B Keeper
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> keep{}; 
        ///Fault B Qualification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qual{}; 
        ///Fault B Blanking Mode
        enum class BlankVal {
            start=0x00000000,     ///<Blanking applied from start of the ramp
            rise=0x00000001,     ///<Blanking applied from rising edge of the output waveform
            fall=0x00000002,     ///<Blanking applied from falling edge of the output waveform
            both=0x00000003,     ///<Blanking applied from each toggle of the output waveform
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,BlankVal> blank{}; 
        namespace BlankValC{
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::start> start{};
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::rise> rise{};
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::fall> fall{};
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::both> both{};
        }
        ///Fault B Restart
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> restart{}; 
        ///Fault B Halt Mode
        enum class HaltVal {
            disable=0x00000000,     ///<Halt action disabled
            hw=0x00000001,     ///<Hardware halt action
            sw=0x00000002,     ///<Software halt action
            nr=0x00000003,     ///<Non-recoverable fault
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,HaltVal> halt{}; 
        namespace HaltValC{
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::disable> disable{};
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::hw> hw{};
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::sw> sw{};
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::nr> nr{};
        }
        ///Fault B Capture Channel
        enum class ChselVal {
            cc0=0x00000000,     ///<Capture value stored in channel 0
            cc1=0x00000001,     ///<Capture value stored in channel 1
            cc2=0x00000002,     ///<Capture value stored in channel 2
            cc3=0x00000003,     ///<Capture value stored in channel 3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,ChselVal> chsel{}; 
        namespace ChselValC{
            constexpr Register::FieldValue<decltype(chsel)::Type,ChselVal::cc0> cc0{};
            constexpr Register::FieldValue<decltype(chsel)::Type,ChselVal::cc1> cc1{};
            constexpr Register::FieldValue<decltype(chsel)::Type,ChselVal::cc2> cc2{};
            constexpr Register::FieldValue<decltype(chsel)::Type,ChselVal::cc3> cc3{};
        }
        ///Fault B Capture Action
        enum class CaptureVal {
            disable=0x00000000,     ///<No capture
            capt=0x00000001,     ///<Capture on fault
            captmin=0x00000002,     ///<Minimum capture
            captmax=0x00000003,     ///<Maximum capture
            locmin=0x00000004,     ///<Minimum local detection
            locmax=0x00000005,     ///<Maximum local detection
            deriv0=0x00000006,     ///<Minimum and maximum local detection
            captmark=0x00000007,     ///<Capture with ramp index as MSB value
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,CaptureVal> capture{}; 
        namespace CaptureValC{
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::disable> disable{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::capt> capt{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::captmin> captmin{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::captmax> captmax{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::locmin> locmin{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::locmax> locmax{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::deriv0> deriv0{};
            constexpr Register::FieldValue<decltype(capture)::Type,CaptureVal::captmark> captmark{};
        }
        ///Fault B Blanking Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> blankpresc{}; 
        ///Fault B Blanking Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> blankval{}; 
        ///Fault B Filter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> filterval{}; 
    }
    namespace Tcc0Wexctrl{    ///<Waveform Extension Configuration
        using Addr = Register::Address<0x41016014,0x0000f0fc,0x00000000,std::uint32_t>;
        ///Output Matrix
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> otmx{}; 
        ///Dead-time Insertion Generator 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dtien0{}; 
        ///Dead-time Insertion Generator 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dtien1{}; 
        ///Dead-time Insertion Generator 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dtien2{}; 
        ///Dead-time Insertion Generator 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dtien3{}; 
        ///Dead-time Low Side Outputs Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dtls{}; 
        ///Dead-time High Side Outputs Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dths{}; 
    }
    namespace Tcc0Drvctrl{    ///<Driver Control
        using Addr = Register::Address<0x41016018,0x00000000,0x00000000,std::uint32_t>;
        ///Non-Recoverable State 0 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nre0{}; 
        ///Non-Recoverable State 1 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nre1{}; 
        ///Non-Recoverable State 2 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nre2{}; 
        ///Non-Recoverable State 3 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nre3{}; 
        ///Non-Recoverable State 4 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nre4{}; 
        ///Non-Recoverable State 5 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nre5{}; 
        ///Non-Recoverable State 6 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nre6{}; 
        ///Non-Recoverable State 7 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nre7{}; 
        ///Non-Recoverable State 0 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nrv0{}; 
        ///Non-Recoverable State 1 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> nrv1{}; 
        ///Non-Recoverable State 2 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nrv2{}; 
        ///Non-Recoverable State 3 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> nrv3{}; 
        ///Non-Recoverable State 4 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nrv4{}; 
        ///Non-Recoverable State 5 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nrv5{}; 
        ///Non-Recoverable State 6 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nrv6{}; 
        ///Non-Recoverable State 7 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nrv7{}; 
        ///Output Waveform 0 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> inven0{}; 
        ///Output Waveform 1 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> inven1{}; 
        ///Output Waveform 2 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> inven2{}; 
        ///Output Waveform 3 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> inven3{}; 
        ///Output Waveform 4 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> inven4{}; 
        ///Output Waveform 5 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> inven5{}; 
        ///Output Waveform 6 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> inven6{}; 
        ///Output Waveform 7 Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> inven7{}; 
        ///Non-Recoverable Fault Input 0 Filter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> filterval0{}; 
        ///Non-Recoverable Fault Input 1 Filter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> filterval1{}; 
    }
    namespace Tcc0Dbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4101601e,0xfffffffa,0x00000000,std::uint8_t>;
        ///Debug Running Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
        ///Fault Detection on Debug Break Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fddbd{}; 
    }
    namespace Tcc0Evctrl{    ///<Event Control
        using Addr = Register::Address<0x41016020,0xc0c00800,0x00000000,std::uint32_t>;
        ///Timer/counter Input Event0 Action
        enum class Evact0Val {
            off=0x00000000,     ///<Event action disabled
            retrigger=0x00000001,     ///<Start, restart or re-trigger counter on event
            countev=0x00000002,     ///<Count on event
            start=0x00000003,     ///<Start counter on event
            inc=0x00000004,     ///<Increment counter on event
            count=0x00000005,     ///<Count on active state of asynchronous event
            stamp=0x00000006,     ///<Stamp capture
            fault=0x00000007,     ///<Non-recoverable fault
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,Evact0Val> evact0{}; 
        namespace Evact0ValC{
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::off> off{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::countev> countev{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::start> start{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::inc> inc{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::count> count{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::stamp> stamp{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::fault> fault{};
        }
        ///Timer/counter Input Event1 Action
        enum class Evact1Val {
            off=0x00000000,     ///<Event action disabled
            retrigger=0x00000001,     ///<Re-trigger counter on event
            dir=0x00000002,     ///<Direction control
            stop=0x00000003,     ///<Stop counter on event
            dec=0x00000004,     ///<Decrement counter on event
            ppw=0x00000005,     ///<Period capture value in CC0 register, pulse width capture value in CC1 register
            pwp=0x00000006,     ///<Period capture value in CC1 register, pulse width capture value in CC0 register
            fault=0x00000007,     ///<Non-recoverable fault
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,Evact1Val> evact1{}; 
        namespace Evact1ValC{
            constexpr Register::FieldValue<decltype(evact1)::Type,Evact1Val::off> off{};
            constexpr Register::FieldValue<decltype(evact1)::Type,Evact1Val::retrigger> retrigger{};
            constexpr Register::FieldValue<decltype(evact1)::Type,Evact1Val::dir> dir{};
            constexpr Register::FieldValue<decltype(evact1)::Type,Evact1Val::stop> stop{};
            constexpr Register::FieldValue<decltype(evact1)::Type,Evact1Val::dec> dec{};
            constexpr Register::FieldValue<decltype(evact1)::Type,Evact1Val::ppw> ppw{};
            constexpr Register::FieldValue<decltype(evact1)::Type,Evact1Val::pwp> pwp{};
            constexpr Register::FieldValue<decltype(evact1)::Type,Evact1Val::fault> fault{};
        }
        ///Timer/counter Output Event Mode
        enum class CntselVal {
            start=0x00000000,     ///<An interrupt/event is generated when a new counter cycle starts
            end=0x00000001,     ///<An interrupt/event is generated when a counter cycle ends
            between=0x00000002,     ///<An interrupt/event is generated when a counter cycle ends, except for the first and last cycles
            boundary=0x00000003,     ///<An interrupt/event is generated when a new counter cycle starts or a counter cycle ends
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CntselVal> cntsel{}; 
        namespace CntselValC{
            constexpr Register::FieldValue<decltype(cntsel)::Type,CntselVal::start> start{};
            constexpr Register::FieldValue<decltype(cntsel)::Type,CntselVal::end> end{};
            constexpr Register::FieldValue<decltype(cntsel)::Type,CntselVal::between> between{};
            constexpr Register::FieldValue<decltype(cntsel)::Type,CntselVal::boundary> boundary{};
        }
        ///Overflow/Underflow Output Event Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovfeo{}; 
        ///Retrigger Output Event Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> trgeo{}; 
        ///Timer/counter Output Event Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cnteo{}; 
        ///Inverted Event 0 Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tcinv0{}; 
        ///Inverted Event 1 Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tcinv1{}; 
        ///Timer/counter Event 0 Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tcei0{}; 
        ///Timer/counter Event 1 Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tcei1{}; 
        ///Match or Capture Channel 0 Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mcei0{}; 
        ///Match or Capture Channel 1 Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mcei1{}; 
        ///Match or Capture Channel 2 Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mcei2{}; 
        ///Match or Capture Channel 3 Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mcei3{}; 
        ///Match or Capture Channel 4 Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mcei4{}; 
        ///Match or Capture Channel 5 Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mcei5{}; 
        ///Match or Capture Channel 0 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mceo0{}; 
        ///Match or Capture Channel 1 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mceo1{}; 
        ///Match or Capture Channel 2 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mceo2{}; 
        ///Match or Capture Channel 3 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mceo3{}; 
        ///Match or Capture Channel 4 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mceo4{}; 
        ///Match or Capture Channel 5 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mceo5{}; 
    }
    namespace Tcc0Intenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x41016024,0xffc003f0,0x00000000,std::uint32_t>;
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Retrigger Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trg{}; 
        ///Counter Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cnt{}; 
        ///Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> err{}; 
        ///Non-Recoverable Update Fault Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ufs{}; 
        ///Non-Recoverable Debug Fault Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dfs{}; 
        ///Recoverable Fault A Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> faulta{}; 
        ///Recoverable Fault B Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> faultb{}; 
        ///Non-Recoverable Fault 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fault0{}; 
        ///Non-Recoverable Fault 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fault1{}; 
        ///Match or Capture Channel 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mc1{}; 
        ///Match or Capture Channel 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mc2{}; 
        ///Match or Capture Channel 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mc3{}; 
        ///Match or Capture Channel 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mc4{}; 
        ///Match or Capture Channel 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mc5{}; 
    }
    namespace Tcc0Intenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x41016028,0xffc003f0,0x00000000,std::uint32_t>;
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Retrigger Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trg{}; 
        ///Counter Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cnt{}; 
        ///Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> err{}; 
        ///Non-Recoverable Update Fault Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ufs{}; 
        ///Non-Recoverable Debug Fault Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dfs{}; 
        ///Recoverable Fault A Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> faulta{}; 
        ///Recoverable Fault B Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> faultb{}; 
        ///Non-Recoverable Fault 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fault0{}; 
        ///Non-Recoverable Fault 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fault1{}; 
        ///Match or Capture Channel 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mc1{}; 
        ///Match or Capture Channel 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mc2{}; 
        ///Match or Capture Channel 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mc3{}; 
        ///Match or Capture Channel 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mc4{}; 
        ///Match or Capture Channel 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mc5{}; 
    }
    namespace Tcc0Intflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4101602c,0xffc003f0,0x00000000,std::uint32_t>;
        ///Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        ///Retrigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trg{}; 
        ///Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cnt{}; 
        ///Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> err{}; 
        ///Non-Recoverable Update Fault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ufs{}; 
        ///Non-Recoverable Debug Fault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dfs{}; 
        ///Recoverable Fault A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> faulta{}; 
        ///Recoverable Fault B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> faultb{}; 
        ///Non-Recoverable Fault 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fault0{}; 
        ///Non-Recoverable Fault 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fault1{}; 
        ///Match or Capture 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mc0{}; 
        ///Match or Capture 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mc1{}; 
        ///Match or Capture 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mc2{}; 
        ///Match or Capture 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mc3{}; 
        ///Match or Capture 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mc4{}; 
        ///Match or Capture 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mc5{}; 
    }
    namespace Tcc0Status{    ///<Status
        using Addr = Register::Address<0x41016030,0xc0c00040,0x00000000,std::uint32_t>;
        ///Stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stop{}; 
        ///Ramp
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idx{}; 
        ///Non-recoverable Update Fault State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ufs{}; 
        ///Non-Recoverable Debug Fault State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dfs{}; 
        ///Slave
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> slave{}; 
        ///Pattern Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pattbufv{}; 
        ///Period Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> perbufv{}; 
        ///Recoverable Fault A Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> faultain{}; 
        ///Recoverable Fault B Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> faultbin{}; 
        ///Non-Recoverable Fault0 Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fault0in{}; 
        ///Non-Recoverable Fault1 Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fault1in{}; 
        ///Recoverable Fault A State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> faulta{}; 
        ///Recoverable Fault B State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> faultb{}; 
        ///Non-Recoverable Fault 0 State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fault0{}; 
        ///Non-Recoverable Fault 1 State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fault1{}; 
        ///Compare Channel 0 Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ccbufv0{}; 
        ///Compare Channel 1 Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ccbufv1{}; 
        ///Compare Channel 2 Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ccbufv2{}; 
        ///Compare Channel 3 Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ccbufv3{}; 
        ///Compare Channel 4 Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ccbufv4{}; 
        ///Compare Channel 5 Buffer Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ccbufv5{}; 
        ///Compare Channel 0 Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmp0{}; 
        ///Compare Channel 1 Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmp1{}; 
        ///Compare Channel 2 Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmp2{}; 
        ///Compare Channel 3 Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmp3{}; 
        ///Compare Channel 4 Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmp4{}; 
        ///Compare Channel 5 Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmp5{}; 
    }
    namespace Tcc0Count{    ///<Count
        using Addr = Register::Address<0x41016034,0xff000000,0x00000000,std::uint32_t>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Tcc0CountDith4{    ///<Count
        using Addr = Register::Address<0x41016034,0xff00000f,0x00000000,std::uint32_t>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,4),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Tcc0CountDith5{    ///<Count
        using Addr = Register::Address<0x41016034,0xff00001f,0x00000000,std::uint32_t>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,5),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Tcc0CountDith6{    ///<Count
        using Addr = Register::Address<0x41016034,0xff00003f,0x00000000,std::uint32_t>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,6),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Tcc0Patt{    ///<Pattern
        using Addr = Register::Address<0x41016038,0xffff0000,0x00000000,std::uint16_t>;
        ///Pattern Generator 0 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pge0{}; 
        ///Pattern Generator 1 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pge1{}; 
        ///Pattern Generator 2 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pge2{}; 
        ///Pattern Generator 3 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pge3{}; 
        ///Pattern Generator 4 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pge4{}; 
        ///Pattern Generator 5 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pge5{}; 
        ///Pattern Generator 6 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pge6{}; 
        ///Pattern Generator 7 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pge7{}; 
        ///Pattern Generator 0 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pgv0{}; 
        ///Pattern Generator 1 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pgv1{}; 
        ///Pattern Generator 2 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pgv2{}; 
        ///Pattern Generator 3 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pgv3{}; 
        ///Pattern Generator 4 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pgv4{}; 
        ///Pattern Generator 5 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pgv5{}; 
        ///Pattern Generator 6 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pgv6{}; 
        ///Pattern Generator 7 Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pgv7{}; 
    }
    namespace Tcc0Wave{    ///<Waveform Control
        using Addr = Register::Address<0x4101603c,0xf0c0f048,0x00000000,std::uint32_t>;
        ///Waveform Generation
        enum class WavegenVal {
            nfrq=0x00000000,     ///<Normal frequency
            mfrq=0x00000001,     ///<Match frequency
            npwm=0x00000002,     ///<Normal PWM
            dscritical=0x00000004,     ///<Dual-slope critical
            dsbottom=0x00000005,     ///<Dual-slope with interrupt/event condition when COUNT reaches ZERO
            dsboth=0x00000006,     ///<Dual-slope with interrupt/event condition when COUNT reaches ZERO or TOP
            dstop=0x00000007,     ///<Dual-slope with interrupt/event condition when COUNT reaches TOP
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,WavegenVal> wavegen{}; 
        namespace WavegenValC{
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::nfrq> nfrq{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::mfrq> mfrq{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::npwm> npwm{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::dscritical> dscritical{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::dsbottom> dsbottom{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::dsboth> dsboth{};
            constexpr Register::FieldValue<decltype(wavegen)::Type,WavegenVal::dstop> dstop{};
        }
        ///Ramp Mode
        enum class RampVal {
            ramp1=0x00000000,     ///<RAMP1 operation
            ramp2a=0x00000001,     ///<Alternative RAMP2 operation
            ramp2=0x00000002,     ///<RAMP2 operation
            ramp2c=0x00000003,     ///<Critical RAMP2 operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,RampVal> ramp{}; 
        namespace RampValC{
            constexpr Register::FieldValue<decltype(ramp)::Type,RampVal::ramp1> ramp1{};
            constexpr Register::FieldValue<decltype(ramp)::Type,RampVal::ramp2a> ramp2a{};
            constexpr Register::FieldValue<decltype(ramp)::Type,RampVal::ramp2> ramp2{};
            constexpr Register::FieldValue<decltype(ramp)::Type,RampVal::ramp2c> ramp2c{};
        }
        ///Circular period Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ciperen{}; 
        ///Circular Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ciccen0{}; 
        ///Circular Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ciccen1{}; 
        ///Circular Channel 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ciccen2{}; 
        ///Circular Channel 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ciccen3{}; 
        ///Channel 0 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pol0{}; 
        ///Channel 1 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pol1{}; 
        ///Channel 2 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pol2{}; 
        ///Channel 3 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pol3{}; 
        ///Channel 4 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pol4{}; 
        ///Channel 5 Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pol5{}; 
        ///Swap DTI Output Pair 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> swap0{}; 
        ///Swap DTI Output Pair 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> swap1{}; 
        ///Swap DTI Output Pair 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> swap2{}; 
        ///Swap DTI Output Pair 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> swap3{}; 
    }
    namespace Tcc0Per{    ///<Period
        using Addr = Register::Address<0x41016040,0xff000000,0x00000000,std::uint32_t>;
        ///Period Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> per{}; 
    }
    namespace Tcc0PerDith4{    ///<Period
        using Addr = Register::Address<0x41016040,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Period Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,4),Register::ReadWriteAccess,unsigned> per{}; 
    }
    namespace Tcc0PerDith5{    ///<Period
        using Addr = Register::Address<0x41016040,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Period Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,5),Register::ReadWriteAccess,unsigned> per{}; 
    }
    namespace Tcc0PerDith6{    ///<Period
        using Addr = Register::Address<0x41016040,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Period Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,6),Register::ReadWriteAccess,unsigned> per{}; 
    }
    namespace Tcc0Pattbuf{    ///<Pattern Buffer
        using Addr = Register::Address<0x41016064,0xffff0000,0x00000000,std::uint16_t>;
        ///Pattern Generator 0 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pgeb0{}; 
        ///Pattern Generator 1 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pgeb1{}; 
        ///Pattern Generator 2 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pgeb2{}; 
        ///Pattern Generator 3 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pgeb3{}; 
        ///Pattern Generator 4 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pgeb4{}; 
        ///Pattern Generator 5 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pgeb5{}; 
        ///Pattern Generator 6 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pgeb6{}; 
        ///Pattern Generator 7 Output Enable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pgeb7{}; 
        ///Pattern Generator 0 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pgvb0{}; 
        ///Pattern Generator 1 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pgvb1{}; 
        ///Pattern Generator 2 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pgvb2{}; 
        ///Pattern Generator 3 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pgvb3{}; 
        ///Pattern Generator 4 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pgvb4{}; 
        ///Pattern Generator 5 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pgvb5{}; 
        ///Pattern Generator 6 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pgvb6{}; 
        ///Pattern Generator 7 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pgvb7{}; 
    }
    namespace Tcc0Perbuf{    ///<Period Buffer
        using Addr = Register::Address<0x4101606c,0xff000000,0x00000000,std::uint32_t>;
        ///Period Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> perbuf{}; 
    }
    namespace Tcc0PerbufDith4{    ///<Period Buffer
        using Addr = Register::Address<0x4101606c,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
        ///Period Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,4),Register::ReadWriteAccess,unsigned> perbuf{}; 
    }
    namespace Tcc0PerbufDith5{    ///<Period Buffer
        using Addr = Register::Address<0x4101606c,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
        ///Period Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,5),Register::ReadWriteAccess,unsigned> perbuf{}; 
    }
    namespace Tcc0PerbufDith6{    ///<Period Buffer
        using Addr = Register::Address<0x4101606c,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
        ///Period Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,6),Register::ReadWriteAccess,unsigned> perbuf{}; 
    }
    namespace Tcc0Cc0{    ///<Compare and Capture
        using Addr = Register::Address<0x41016044,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc1{    ///<Compare and Capture
        using Addr = Register::Address<0x41016048,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc2{    ///<Compare and Capture
        using Addr = Register::Address<0x4101604c,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc3{    ///<Compare and Capture
        using Addr = Register::Address<0x41016050,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc4{    ///<Compare and Capture
        using Addr = Register::Address<0x41016054,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc5{    ///<Compare and Capture
        using Addr = Register::Address<0x41016058,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc0Dith4{    ///<Compare and Capture
        using Addr = Register::Address<0x41016044,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,4),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc1Dith4{    ///<Compare and Capture
        using Addr = Register::Address<0x41016048,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,4),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc2Dith4{    ///<Compare and Capture
        using Addr = Register::Address<0x4101604c,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,4),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc3Dith4{    ///<Compare and Capture
        using Addr = Register::Address<0x41016050,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,4),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc4Dith4{    ///<Compare and Capture
        using Addr = Register::Address<0x41016054,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,4),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc5Dith4{    ///<Compare and Capture
        using Addr = Register::Address<0x41016058,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,4),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc0Dith5{    ///<Compare and Capture
        using Addr = Register::Address<0x41016044,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,5),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc1Dith5{    ///<Compare and Capture
        using Addr = Register::Address<0x41016048,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,5),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc2Dith5{    ///<Compare and Capture
        using Addr = Register::Address<0x4101604c,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,5),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc3Dith5{    ///<Compare and Capture
        using Addr = Register::Address<0x41016050,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,5),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc4Dith5{    ///<Compare and Capture
        using Addr = Register::Address<0x41016054,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,5),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc5Dith5{    ///<Compare and Capture
        using Addr = Register::Address<0x41016058,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,5),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc0Dith6{    ///<Compare and Capture
        using Addr = Register::Address<0x41016044,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,6),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc1Dith6{    ///<Compare and Capture
        using Addr = Register::Address<0x41016048,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,6),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc2Dith6{    ///<Compare and Capture
        using Addr = Register::Address<0x4101604c,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,6),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc3Dith6{    ///<Compare and Capture
        using Addr = Register::Address<0x41016050,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,6),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc4Dith6{    ///<Compare and Capture
        using Addr = Register::Address<0x41016054,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,6),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Cc5Dith6{    ///<Compare and Capture
        using Addr = Register::Address<0x41016058,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Channel Compare/Capture Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,6),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Tcc0Ccbuf0{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016070,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tcc0Ccbuf1{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016074,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tcc0Ccbuf2{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016078,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tcc0Ccbuf3{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x4101607c,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tcc0Ccbuf4{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016080,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tcc0Ccbuf5{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016084,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tcc0Ccbuf0Dith4{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016070,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ccbuf{}; 
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,4),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
    }
    namespace Tcc0Ccbuf1Dith4{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016074,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ccbuf{}; 
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,4),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
    }
    namespace Tcc0Ccbuf2Dith4{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016078,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ccbuf{}; 
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,4),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
    }
    namespace Tcc0Ccbuf3Dith4{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x4101607c,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ccbuf{}; 
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,4),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
    }
    namespace Tcc0Ccbuf4Dith4{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016080,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ccbuf{}; 
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,4),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
    }
    namespace Tcc0Ccbuf5Dith4{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016084,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ccbuf{}; 
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,4),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
    }
    namespace Tcc0Ccbuf0Dith5{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016070,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,5),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tcc0Ccbuf1Dith5{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016074,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,5),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tcc0Ccbuf2Dith5{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016078,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,5),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tcc0Ccbuf3Dith5{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x4101607c,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,5),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tcc0Ccbuf4Dith5{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016080,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,5),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tcc0Ccbuf5Dith5{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016084,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,5),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tcc0Ccbuf0Dith6{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016070,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,6),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tcc0Ccbuf1Dith6{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016074,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,6),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tcc0Ccbuf2Dith6{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016078,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,6),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tcc0Ccbuf3Dith6{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x4101607c,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,6),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tcc0Ccbuf4Dith6{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016080,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,6),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
    namespace Tcc0Ccbuf5Dith6{    ///<Compare and Capture Buffer
        using Addr = Register::Address<0x41016084,0xff000000,0x00000000,std::uint32_t>;
        ///Dithering Buffer Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> ditherbuf{}; 
        ///Channel Compare/Capture Buffer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,6),Register::ReadWriteAccess,unsigned> ccbuf{}; 
    }
}
