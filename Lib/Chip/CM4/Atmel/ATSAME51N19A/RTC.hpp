#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Real-Time Counter
    namespace RtcMode0Ctrla{    ///<MODE0 Control A
        using Addr = Register::Address<0x40002400,0xffff1070,0x00000000,std::uint16_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Operating Mode
        enum class ModeVal {
            count32=0x00000000,     ///<Mode 0: 32-bit Counter
            count16=0x00000001,     ///<Mode 1: 16-bit Counter
            clock=0x00000002,     ///<Mode 2: Clock/Calendar
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::count32> count32{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::count16> count16{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::clock> clock{};
        }
        ///Clear on Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> matchclr{}; 
        ///Prescaler
        enum class PrescalerVal {
            off=0x00000000,     ///<CLK_RTC_CNT = GCLK_RTC/1
            div1=0x00000001,     ///<CLK_RTC_CNT = GCLK_RTC/1
            div2=0x00000002,     ///<CLK_RTC_CNT = GCLK_RTC/2
            div4=0x00000003,     ///<CLK_RTC_CNT = GCLK_RTC/4
            div8=0x00000004,     ///<CLK_RTC_CNT = GCLK_RTC/8
            div16=0x00000005,     ///<CLK_RTC_CNT = GCLK_RTC/16
            div32=0x00000006,     ///<CLK_RTC_CNT = GCLK_RTC/32
            div64=0x00000007,     ///<CLK_RTC_CNT = GCLK_RTC/64
            div128=0x00000008,     ///<CLK_RTC_CNT = GCLK_RTC/128
            div256=0x00000009,     ///<CLK_RTC_CNT = GCLK_RTC/256
            div512=0x0000000a,     ///<CLK_RTC_CNT = GCLK_RTC/512
            div1024=0x0000000b,     ///<CLK_RTC_CNT = GCLK_RTC/1024
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,PrescalerVal> prescaler{}; 
        namespace PrescalerValC{
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::off> off{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div1> div1{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div2> div2{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div4> div4{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div8> div8{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div16> div16{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div32> div32{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div64> div64{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div128> div128{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div256> div256{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div512> div512{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div1024> div1024{};
        }
        ///BKUP Registers Reset On Tamper Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bktrst{}; 
        ///GP Registers Reset On Tamper Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> gptrst{}; 
        ///Count Read Synchronization Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> countsync{}; 
    }
    namespace RtcMode0Ctrlb{    ///<MODE0 Control B
        using Addr = Register::Address<0x40002402,0xffff880c,0x00000000,std::uint16_t>;
        ///General Purpose 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gp0en{}; 
        ///General Purpose 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gp2en{}; 
        ///Debouncer Majority Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> debmaj{}; 
        ///Debouncer Asynchronous Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> debasync{}; 
        ///RTC Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rtcout{}; 
        ///DMA Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///Debounce Freqnuency
        enum class DebfVal {
            div2=0x00000000,     ///<CLK_RTC_DEB = CLK_RTC/2
            div4=0x00000001,     ///<CLK_RTC_DEB = CLK_RTC/4
            div8=0x00000002,     ///<CLK_RTC_DEB = CLK_RTC/8
            div16=0x00000003,     ///<CLK_RTC_DEB = CLK_RTC/16
            div32=0x00000004,     ///<CLK_RTC_DEB = CLK_RTC/32
            div64=0x00000005,     ///<CLK_RTC_DEB = CLK_RTC/64
            div128=0x00000006,     ///<CLK_RTC_DEB = CLK_RTC/128
            div256=0x00000007,     ///<CLK_RTC_DEB = CLK_RTC/256
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DebfVal> debf{}; 
        namespace DebfValC{
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div2> div2{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div4> div4{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div8> div8{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div16> div16{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div32> div32{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div64> div64{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div128> div128{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div256> div256{};
        }
        ///Active Layer Freqnuency
        enum class ActfVal {
            div2=0x00000000,     ///<CLK_RTC_OUT = CLK_RTC/2
            div4=0x00000001,     ///<CLK_RTC_OUT = CLK_RTC/4
            div8=0x00000002,     ///<CLK_RTC_OUT = CLK_RTC/8
            div16=0x00000003,     ///<CLK_RTC_OUT = CLK_RTC/16
            div32=0x00000004,     ///<CLK_RTC_OUT = CLK_RTC/32
            div64=0x00000005,     ///<CLK_RTC_OUT = CLK_RTC/64
            div128=0x00000006,     ///<CLK_RTC_OUT = CLK_RTC/128
            div256=0x00000007,     ///<CLK_RTC_OUT = CLK_RTC/256
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,ActfVal> actf{}; 
        namespace ActfValC{
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div2> div2{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div4> div4{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div8> div8{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div16> div16{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div32> div32{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div64> div64{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div128> div128{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div256> div256{};
        }
    }
    namespace RtcMode0Evctrl{    ///<MODE0 Event Control
        using Addr = Register::Address<0x40002404,0xfffe3c00,0x00000000,std::uint32_t>;
        ///Periodic Interval 0 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pereo0{}; 
        ///Periodic Interval 1 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pereo1{}; 
        ///Periodic Interval 2 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pereo2{}; 
        ///Periodic Interval 3 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pereo3{}; 
        ///Periodic Interval 4 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pereo4{}; 
        ///Periodic Interval 5 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pereo5{}; 
        ///Periodic Interval 6 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pereo6{}; 
        ///Periodic Interval 7 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pereo7{}; 
        ///Compare 0 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmpeo0{}; 
        ///Compare 1 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmpeo1{}; 
        ///Tamper Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tampereo{}; 
        ///Overflow Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovfeo{}; 
        ///Tamper Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tampevei{}; 
    }
    namespace RtcMode0Intenclr{    ///<MODE0 Interrupt Enable Clear
        using Addr = Register::Address<0x40002408,0xffff3c00,0x00000000,std::uint16_t>;
        ///Periodic Interval 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> per0{}; 
        ///Periodic Interval 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> per1{}; 
        ///Periodic Interval 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> per2{}; 
        ///Periodic Interval 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> per3{}; 
        ///Periodic Interval 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> per4{}; 
        ///Periodic Interval 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> per5{}; 
        ///Periodic Interval 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> per6{}; 
        ///Periodic Interval 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> per7{}; 
        ///Compare 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmp0{}; 
        ///Compare 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmp1{}; 
        ///Tamper Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tamper{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode0Intenset{    ///<MODE0 Interrupt Enable Set
        using Addr = Register::Address<0x4000240a,0xffff3c00,0x00000000,std::uint16_t>;
        ///Periodic Interval 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> per0{}; 
        ///Periodic Interval 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per1{}; 
        ///Periodic Interval 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> per2{}; 
        ///Periodic Interval 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> per3{}; 
        ///Periodic Interval 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> per4{}; 
        ///Periodic Interval 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> per5{}; 
        ///Periodic Interval 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> per6{}; 
        ///Periodic Interval 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> per7{}; 
        ///Compare 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmp0{}; 
        ///Compare 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmp1{}; 
        ///Tamper Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tamper{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode0Intflag{    ///<MODE0 Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4000240c,0xffff3c00,0x00000000,std::uint16_t>;
        ///Periodic Interval 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> per0{}; 
        ///Periodic Interval 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per1{}; 
        ///Periodic Interval 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> per2{}; 
        ///Periodic Interval 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> per3{}; 
        ///Periodic Interval 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> per4{}; 
        ///Periodic Interval 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> per5{}; 
        ///Periodic Interval 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> per6{}; 
        ///Periodic Interval 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> per7{}; 
        ///Compare 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmp0{}; 
        ///Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmp1{}; 
        ///Tamper
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tamper{}; 
        ///Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode0Dbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4000240e,0xfffffffe,0x00000000,std::uint8_t>;
        ///Run During Debug
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace RtcMode0Syncbusy{    ///<MODE0 Synchronization Busy Status
        using Addr = Register::Address<0x40002410,0xfff07f90,0x00000000,std::uint32_t>;
        ///Software Reset Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable Bit Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
        ///FREQCORR Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> freqcorr{}; 
        ///COUNT Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> count{}; 
        ///COMP 0 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp0{}; 
        ///COMP 1 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp1{}; 
        ///Count Synchronization Enable Bit Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> countsync{}; 
        ///General Purpose 0 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gp0{}; 
        ///General Purpose 1 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gp1{}; 
        ///General Purpose 2 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gp2{}; 
        ///General Purpose 3 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gp3{}; 
    }
    namespace RtcMode0Freqcorr{    ///<Frequency Correction
        using Addr = Register::Address<0x40002414,0xffffff00,0x00000000,std::uint8_t>;
        ///Correction Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> value{}; 
        ///Correction Sign
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sign{}; 
    }
    namespace RtcMode0Count{    ///<MODE0 Counter Value
        using Addr = Register::Address<0x40002418,0x00000000,0x00000000,std::uint32_t>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace RtcMode0Comps{    ///<MODE0 Compare n Value
        using Addr = Register::Address<0x40002420,0x00000000,0x00000000,std::uint32_t>;
        ///Compare Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> comp{}; 
    }
    namespace RtcMode0Gps{    ///<General Purpose
        using Addr = Register::Address<0x40002440,0x00000000,0x00000000,std::uint32_t>;
        ///General Purpose
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
    }
    namespace RtcMode0Tampctrl{    ///<Tamper Control
        using Addr = Register::Address<0x40002460,0xe0e0fc00,0x00000000,std::uint32_t>;
        ///Tamper Input 0 Action
        enum class In0actVal {
            off=0x00000000,     ///<Off (Disabled)
            wake=0x00000001,     ///<Wake without timestamp
            capture=0x00000002,     ///<Capture timestamp
            actl=0x00000003,     ///<Compare IN0 to OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,In0actVal> in0act{}; 
        namespace In0actValC{
            constexpr Register::FieldValue<decltype(in0act)::Type,In0actVal::off> off{};
            constexpr Register::FieldValue<decltype(in0act)::Type,In0actVal::wake> wake{};
            constexpr Register::FieldValue<decltype(in0act)::Type,In0actVal::capture> capture{};
            constexpr Register::FieldValue<decltype(in0act)::Type,In0actVal::actl> actl{};
        }
        ///Tamper Input 1 Action
        enum class In1actVal {
            off=0x00000000,     ///<Off (Disabled)
            wake=0x00000001,     ///<Wake without timestamp
            capture=0x00000002,     ///<Capture timestamp
            actl=0x00000003,     ///<Compare IN1 to OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,In1actVal> in1act{}; 
        namespace In1actValC{
            constexpr Register::FieldValue<decltype(in1act)::Type,In1actVal::off> off{};
            constexpr Register::FieldValue<decltype(in1act)::Type,In1actVal::wake> wake{};
            constexpr Register::FieldValue<decltype(in1act)::Type,In1actVal::capture> capture{};
            constexpr Register::FieldValue<decltype(in1act)::Type,In1actVal::actl> actl{};
        }
        ///Tamper Input 2 Action
        enum class In2actVal {
            off=0x00000000,     ///<Off (Disabled)
            wake=0x00000001,     ///<Wake without timestamp
            capture=0x00000002,     ///<Capture timestamp
            actl=0x00000003,     ///<Compare IN2 to OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,In2actVal> in2act{}; 
        namespace In2actValC{
            constexpr Register::FieldValue<decltype(in2act)::Type,In2actVal::off> off{};
            constexpr Register::FieldValue<decltype(in2act)::Type,In2actVal::wake> wake{};
            constexpr Register::FieldValue<decltype(in2act)::Type,In2actVal::capture> capture{};
            constexpr Register::FieldValue<decltype(in2act)::Type,In2actVal::actl> actl{};
        }
        ///Tamper Input 3 Action
        enum class In3actVal {
            off=0x00000000,     ///<Off (Disabled)
            wake=0x00000001,     ///<Wake without timestamp
            capture=0x00000002,     ///<Capture timestamp
            actl=0x00000003,     ///<Compare IN3 to OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,In3actVal> in3act{}; 
        namespace In3actValC{
            constexpr Register::FieldValue<decltype(in3act)::Type,In3actVal::off> off{};
            constexpr Register::FieldValue<decltype(in3act)::Type,In3actVal::wake> wake{};
            constexpr Register::FieldValue<decltype(in3act)::Type,In3actVal::capture> capture{};
            constexpr Register::FieldValue<decltype(in3act)::Type,In3actVal::actl> actl{};
        }
        ///Tamper Input 4 Action
        enum class In4actVal {
            off=0x00000000,     ///<Off (Disabled)
            wake=0x00000001,     ///<Wake without timestamp
            capture=0x00000002,     ///<Capture timestamp
            actl=0x00000003,     ///<Compare IN4 to OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,In4actVal> in4act{}; 
        namespace In4actValC{
            constexpr Register::FieldValue<decltype(in4act)::Type,In4actVal::off> off{};
            constexpr Register::FieldValue<decltype(in4act)::Type,In4actVal::wake> wake{};
            constexpr Register::FieldValue<decltype(in4act)::Type,In4actVal::capture> capture{};
            constexpr Register::FieldValue<decltype(in4act)::Type,In4actVal::actl> actl{};
        }
        ///Tamper Level Select 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tamlvl0{}; 
        ///Tamper Level Select 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tamlvl1{}; 
        ///Tamper Level Select 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tamlvl2{}; 
        ///Tamper Level Select 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tamlvl3{}; 
        ///Tamper Level Select 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tamlvl4{}; 
        ///Debouncer Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> debnc0{}; 
        ///Debouncer Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> debnc1{}; 
        ///Debouncer Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> debnc2{}; 
        ///Debouncer Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> debnc3{}; 
        ///Debouncer Enable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> debnc4{}; 
    }
    namespace RtcMode0Timestamp{    ///<MODE0 Timestamp
        using Addr = Register::Address<0x40002464,0x00000000,0x00000000,std::uint32_t>;
        ///Count Timestamp Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> count{}; 
    }
    namespace RtcMode0Tampid{    ///<Tamper ID
        using Addr = Register::Address<0x40002468,0x7fffffe0,0x00000000,std::uint32_t>;
        ///Tamper Input 0 Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tampid0{}; 
        ///Tamper Input 1 Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tampid1{}; 
        ///Tamper Input 2 Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tampid2{}; 
        ///Tamper Input 3 Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tampid3{}; 
        ///Tamper Input 4 Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tampid4{}; 
        ///Tamper Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tampevt{}; 
    }
    namespace RtcMode0Bkups{    ///<Backup
        using Addr = Register::Address<0x40002480,0x00000000,0x00000000,std::uint32_t>;
        ///Backup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkup{}; 
    }
    namespace RtcMode1Ctrla{    ///<MODE1 Control A
        using Addr = Register::Address<0x40002400,0xffff10f0,0x00000000,std::uint16_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Operating Mode
        enum class ModeVal {
            count32=0x00000000,     ///<Mode 0: 32-bit Counter
            count16=0x00000001,     ///<Mode 1: 16-bit Counter
            clock=0x00000002,     ///<Mode 2: Clock/Calendar
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::count32> count32{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::count16> count16{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::clock> clock{};
        }
        ///Prescaler
        enum class PrescalerVal {
            off=0x00000000,     ///<CLK_RTC_CNT = GCLK_RTC/1
            div1=0x00000001,     ///<CLK_RTC_CNT = GCLK_RTC/1
            div2=0x00000002,     ///<CLK_RTC_CNT = GCLK_RTC/2
            div4=0x00000003,     ///<CLK_RTC_CNT = GCLK_RTC/4
            div8=0x00000004,     ///<CLK_RTC_CNT = GCLK_RTC/8
            div16=0x00000005,     ///<CLK_RTC_CNT = GCLK_RTC/16
            div32=0x00000006,     ///<CLK_RTC_CNT = GCLK_RTC/32
            div64=0x00000007,     ///<CLK_RTC_CNT = GCLK_RTC/64
            div128=0x00000008,     ///<CLK_RTC_CNT = GCLK_RTC/128
            div256=0x00000009,     ///<CLK_RTC_CNT = GCLK_RTC/256
            div512=0x0000000a,     ///<CLK_RTC_CNT = GCLK_RTC/512
            div1024=0x0000000b,     ///<CLK_RTC_CNT = GCLK_RTC/1024
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,PrescalerVal> prescaler{}; 
        namespace PrescalerValC{
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::off> off{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div1> div1{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div2> div2{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div4> div4{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div8> div8{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div16> div16{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div32> div32{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div64> div64{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div128> div128{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div256> div256{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div512> div512{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div1024> div1024{};
        }
        ///BKUP Registers Reset On Tamper Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bktrst{}; 
        ///GP Registers Reset On Tamper Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> gptrst{}; 
        ///Count Read Synchronization Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> countsync{}; 
    }
    namespace RtcMode1Ctrlb{    ///<MODE1 Control B
        using Addr = Register::Address<0x40002402,0xffff880c,0x00000000,std::uint16_t>;
        ///General Purpose 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gp0en{}; 
        ///General Purpose 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gp2en{}; 
        ///Debouncer Majority Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> debmaj{}; 
        ///Debouncer Asynchronous Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> debasync{}; 
        ///RTC Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rtcout{}; 
        ///DMA Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///Debounce Freqnuency
        enum class DebfVal {
            div2=0x00000000,     ///<CLK_RTC_DEB = CLK_RTC/2
            div4=0x00000001,     ///<CLK_RTC_DEB = CLK_RTC/4
            div8=0x00000002,     ///<CLK_RTC_DEB = CLK_RTC/8
            div16=0x00000003,     ///<CLK_RTC_DEB = CLK_RTC/16
            div32=0x00000004,     ///<CLK_RTC_DEB = CLK_RTC/32
            div64=0x00000005,     ///<CLK_RTC_DEB = CLK_RTC/64
            div128=0x00000006,     ///<CLK_RTC_DEB = CLK_RTC/128
            div256=0x00000007,     ///<CLK_RTC_DEB = CLK_RTC/256
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DebfVal> debf{}; 
        namespace DebfValC{
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div2> div2{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div4> div4{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div8> div8{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div16> div16{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div32> div32{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div64> div64{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div128> div128{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div256> div256{};
        }
        ///Active Layer Freqnuency
        enum class ActfVal {
            div2=0x00000000,     ///<CLK_RTC_OUT = CLK_RTC/2
            div4=0x00000001,     ///<CLK_RTC_OUT = CLK_RTC/4
            div8=0x00000002,     ///<CLK_RTC_OUT = CLK_RTC/8
            div16=0x00000003,     ///<CLK_RTC_OUT = CLK_RTC/16
            div32=0x00000004,     ///<CLK_RTC_OUT = CLK_RTC/32
            div64=0x00000005,     ///<CLK_RTC_OUT = CLK_RTC/64
            div128=0x00000006,     ///<CLK_RTC_OUT = CLK_RTC/128
            div256=0x00000007,     ///<CLK_RTC_OUT = CLK_RTC/256
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,ActfVal> actf{}; 
        namespace ActfValC{
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div2> div2{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div4> div4{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div8> div8{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div16> div16{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div32> div32{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div64> div64{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div128> div128{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div256> div256{};
        }
    }
    namespace RtcMode1Evctrl{    ///<MODE1 Event Control
        using Addr = Register::Address<0x40002404,0xfffe3000,0x00000000,std::uint32_t>;
        ///Periodic Interval 0 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pereo0{}; 
        ///Periodic Interval 1 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pereo1{}; 
        ///Periodic Interval 2 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pereo2{}; 
        ///Periodic Interval 3 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pereo3{}; 
        ///Periodic Interval 4 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pereo4{}; 
        ///Periodic Interval 5 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pereo5{}; 
        ///Periodic Interval 6 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pereo6{}; 
        ///Periodic Interval 7 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pereo7{}; 
        ///Compare 0 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmpeo0{}; 
        ///Compare 1 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmpeo1{}; 
        ///Compare 2 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cmpeo2{}; 
        ///Compare 3 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cmpeo3{}; 
        ///Tamper Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tampereo{}; 
        ///Overflow Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovfeo{}; 
        ///Tamper Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tampevei{}; 
    }
    namespace RtcMode1Intenclr{    ///<MODE1 Interrupt Enable Clear
        using Addr = Register::Address<0x40002408,0xffff3000,0x00000000,std::uint16_t>;
        ///Periodic Interval 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> per0{}; 
        ///Periodic Interval 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per1{}; 
        ///Periodic Interval 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> per2{}; 
        ///Periodic Interval 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> per3{}; 
        ///Periodic Interval 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> per4{}; 
        ///Periodic Interval 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> per5{}; 
        ///Periodic Interval 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> per6{}; 
        ///Periodic Interval 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> per7{}; 
        ///Compare 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmp0{}; 
        ///Compare 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmp1{}; 
        ///Compare 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cmp2{}; 
        ///Compare 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cmp3{}; 
        ///Tamper Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tamper{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode1Intenset{    ///<MODE1 Interrupt Enable Set
        using Addr = Register::Address<0x4000240a,0xffff3000,0x00000000,std::uint16_t>;
        ///Periodic Interval 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> per0{}; 
        ///Periodic Interval 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per1{}; 
        ///Periodic Interval 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> per2{}; 
        ///Periodic Interval 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> per3{}; 
        ///Periodic Interval 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> per4{}; 
        ///Periodic Interval 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> per5{}; 
        ///Periodic Interval 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> per6{}; 
        ///Periodic Interval 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> per7{}; 
        ///Compare 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmp0{}; 
        ///Compare 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmp1{}; 
        ///Compare 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cmp2{}; 
        ///Compare 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cmp3{}; 
        ///Tamper Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tamper{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode1Intflag{    ///<MODE1 Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4000240c,0xffff3000,0x00000000,std::uint16_t>;
        ///Periodic Interval 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> per0{}; 
        ///Periodic Interval 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per1{}; 
        ///Periodic Interval 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> per2{}; 
        ///Periodic Interval 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> per3{}; 
        ///Periodic Interval 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> per4{}; 
        ///Periodic Interval 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> per5{}; 
        ///Periodic Interval 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> per6{}; 
        ///Periodic Interval 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> per7{}; 
        ///Compare 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmp0{}; 
        ///Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmp1{}; 
        ///Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cmp2{}; 
        ///Compare 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cmp3{}; 
        ///Tamper
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tamper{}; 
        ///Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode1Dbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4000240e,0xfffffffe,0x00000000,std::uint8_t>;
        ///Run During Debug
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace RtcMode1Syncbusy{    ///<MODE1 Synchronization Busy Status
        using Addr = Register::Address<0x40002410,0xfff07e00,0x00000000,std::uint32_t>;
        ///Software Reset Bit Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable Bit Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
        ///FREQCORR Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> freqcorr{}; 
        ///COUNT Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> count{}; 
        ///PER Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> per{}; 
        ///COMP 0 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp0{}; 
        ///COMP 1 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp1{}; 
        ///COMP 2 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp2{}; 
        ///COMP 3 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp3{}; 
        ///Count Synchronization Enable Bit Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> countsync{}; 
        ///General Purpose 0 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gp0{}; 
        ///General Purpose 1 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gp1{}; 
        ///General Purpose 2 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gp2{}; 
        ///General Purpose 3 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gp3{}; 
    }
    namespace RtcMode1Freqcorr{    ///<Frequency Correction
        using Addr = Register::Address<0x40002414,0xffffff00,0x00000000,std::uint8_t>;
        ///Correction Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> value{}; 
        ///Correction Sign
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sign{}; 
    }
    namespace RtcMode1Count{    ///<MODE1 Counter Value
        using Addr = Register::Address<0x40002418,0xffff0000,0x00000000,std::uint16_t>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace RtcMode1Per{    ///<MODE1 Counter Period
        using Addr = Register::Address<0x4000241c,0xffff0000,0x00000000,std::uint16_t>;
        ///Counter Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> per{}; 
    }
    namespace RtcMode1Comps{    ///<MODE1 Compare n Value
        using Addr = Register::Address<0x40002420,0xffff0000,0x00000000,std::uint16_t>;
        ///Compare Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> comp{}; 
    }
    namespace RtcMode1Gps{    ///<General Purpose
        using Addr = Register::Address<0x40002440,0x00000000,0x00000000,std::uint32_t>;
        ///General Purpose
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
    }
    namespace RtcMode1Tampctrl{    ///<Tamper Control
        using Addr = Register::Address<0x40002460,0xe0e0fc00,0x00000000,std::uint32_t>;
        ///Tamper Input 0 Action
        enum class In0actVal {
            off=0x00000000,     ///<Off (Disabled)
            wake=0x00000001,     ///<Wake without timestamp
            capture=0x00000002,     ///<Capture timestamp
            actl=0x00000003,     ///<Compare IN0 to OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,In0actVal> in0act{}; 
        namespace In0actValC{
            constexpr Register::FieldValue<decltype(in0act)::Type,In0actVal::off> off{};
            constexpr Register::FieldValue<decltype(in0act)::Type,In0actVal::wake> wake{};
            constexpr Register::FieldValue<decltype(in0act)::Type,In0actVal::capture> capture{};
            constexpr Register::FieldValue<decltype(in0act)::Type,In0actVal::actl> actl{};
        }
        ///Tamper Input 1 Action
        enum class In1actVal {
            off=0x00000000,     ///<Off (Disabled)
            wake=0x00000001,     ///<Wake without timestamp
            capture=0x00000002,     ///<Capture timestamp
            actl=0x00000003,     ///<Compare IN1 to OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,In1actVal> in1act{}; 
        namespace In1actValC{
            constexpr Register::FieldValue<decltype(in1act)::Type,In1actVal::off> off{};
            constexpr Register::FieldValue<decltype(in1act)::Type,In1actVal::wake> wake{};
            constexpr Register::FieldValue<decltype(in1act)::Type,In1actVal::capture> capture{};
            constexpr Register::FieldValue<decltype(in1act)::Type,In1actVal::actl> actl{};
        }
        ///Tamper Input 2 Action
        enum class In2actVal {
            off=0x00000000,     ///<Off (Disabled)
            wake=0x00000001,     ///<Wake without timestamp
            capture=0x00000002,     ///<Capture timestamp
            actl=0x00000003,     ///<Compare IN2 to OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,In2actVal> in2act{}; 
        namespace In2actValC{
            constexpr Register::FieldValue<decltype(in2act)::Type,In2actVal::off> off{};
            constexpr Register::FieldValue<decltype(in2act)::Type,In2actVal::wake> wake{};
            constexpr Register::FieldValue<decltype(in2act)::Type,In2actVal::capture> capture{};
            constexpr Register::FieldValue<decltype(in2act)::Type,In2actVal::actl> actl{};
        }
        ///Tamper Input 3 Action
        enum class In3actVal {
            off=0x00000000,     ///<Off (Disabled)
            wake=0x00000001,     ///<Wake without timestamp
            capture=0x00000002,     ///<Capture timestamp
            actl=0x00000003,     ///<Compare IN3 to OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,In3actVal> in3act{}; 
        namespace In3actValC{
            constexpr Register::FieldValue<decltype(in3act)::Type,In3actVal::off> off{};
            constexpr Register::FieldValue<decltype(in3act)::Type,In3actVal::wake> wake{};
            constexpr Register::FieldValue<decltype(in3act)::Type,In3actVal::capture> capture{};
            constexpr Register::FieldValue<decltype(in3act)::Type,In3actVal::actl> actl{};
        }
        ///Tamper Input 4 Action
        enum class In4actVal {
            off=0x00000000,     ///<Off (Disabled)
            wake=0x00000001,     ///<Wake without timestamp
            capture=0x00000002,     ///<Capture timestamp
            actl=0x00000003,     ///<Compare IN4 to OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,In4actVal> in4act{}; 
        namespace In4actValC{
            constexpr Register::FieldValue<decltype(in4act)::Type,In4actVal::off> off{};
            constexpr Register::FieldValue<decltype(in4act)::Type,In4actVal::wake> wake{};
            constexpr Register::FieldValue<decltype(in4act)::Type,In4actVal::capture> capture{};
            constexpr Register::FieldValue<decltype(in4act)::Type,In4actVal::actl> actl{};
        }
        ///Tamper Level Select 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tamlvl0{}; 
        ///Tamper Level Select 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tamlvl1{}; 
        ///Tamper Level Select 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tamlvl2{}; 
        ///Tamper Level Select 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tamlvl3{}; 
        ///Tamper Level Select 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tamlvl4{}; 
        ///Debouncer Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> debnc0{}; 
        ///Debouncer Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> debnc1{}; 
        ///Debouncer Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> debnc2{}; 
        ///Debouncer Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> debnc3{}; 
        ///Debouncer Enable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> debnc4{}; 
    }
    namespace RtcMode1Timestamp{    ///<MODE1 Timestamp
        using Addr = Register::Address<0x40002464,0xffff0000,0x00000000,std::uint32_t>;
        ///Count Timestamp Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> count{}; 
    }
    namespace RtcMode1Tampid{    ///<Tamper ID
        using Addr = Register::Address<0x40002468,0x7fffffe0,0x00000000,std::uint32_t>;
        ///Tamper Input 0 Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tampid0{}; 
        ///Tamper Input 1 Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tampid1{}; 
        ///Tamper Input 2 Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tampid2{}; 
        ///Tamper Input 3 Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tampid3{}; 
        ///Tamper Input 4 Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tampid4{}; 
        ///Tamper Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tampevt{}; 
    }
    namespace RtcMode1Bkups{    ///<Backup
        using Addr = Register::Address<0x40002480,0x00000000,0x00000000,std::uint32_t>;
        ///Backup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkup{}; 
    }
    namespace RtcMode2Ctrla{    ///<MODE2 Control A
        using Addr = Register::Address<0x40002400,0xffff1030,0x00000000,std::uint16_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Operating Mode
        enum class ModeVal {
            count32=0x00000000,     ///<Mode 0: 32-bit Counter
            count16=0x00000001,     ///<Mode 1: 16-bit Counter
            clock=0x00000002,     ///<Mode 2: Clock/Calendar
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::count32> count32{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::count16> count16{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::clock> clock{};
        }
        ///Clock Representation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clkrep{}; 
        ///Clear on Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> matchclr{}; 
        ///Prescaler
        enum class PrescalerVal {
            off=0x00000000,     ///<CLK_RTC_CNT = GCLK_RTC/1
            div1=0x00000001,     ///<CLK_RTC_CNT = GCLK_RTC/1
            div2=0x00000002,     ///<CLK_RTC_CNT = GCLK_RTC/2
            div4=0x00000003,     ///<CLK_RTC_CNT = GCLK_RTC/4
            div8=0x00000004,     ///<CLK_RTC_CNT = GCLK_RTC/8
            div16=0x00000005,     ///<CLK_RTC_CNT = GCLK_RTC/16
            div32=0x00000006,     ///<CLK_RTC_CNT = GCLK_RTC/32
            div64=0x00000007,     ///<CLK_RTC_CNT = GCLK_RTC/64
            div128=0x00000008,     ///<CLK_RTC_CNT = GCLK_RTC/128
            div256=0x00000009,     ///<CLK_RTC_CNT = GCLK_RTC/256
            div512=0x0000000a,     ///<CLK_RTC_CNT = GCLK_RTC/512
            div1024=0x0000000b,     ///<CLK_RTC_CNT = GCLK_RTC/1024
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,PrescalerVal> prescaler{}; 
        namespace PrescalerValC{
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::off> off{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div1> div1{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div2> div2{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div4> div4{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div8> div8{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div16> div16{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div32> div32{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div64> div64{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div128> div128{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div256> div256{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div512> div512{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div1024> div1024{};
        }
        ///BKUP Registers Reset On Tamper Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bktrst{}; 
        ///GP Registers Reset On Tamper Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> gptrst{}; 
        ///Clock Read Synchronization Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clocksync{}; 
    }
    namespace RtcMode2Ctrlb{    ///<MODE2 Control B
        using Addr = Register::Address<0x40002402,0xffff880c,0x00000000,std::uint16_t>;
        ///General Purpose 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gp0en{}; 
        ///General Purpose 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gp2en{}; 
        ///Debouncer Majority Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> debmaj{}; 
        ///Debouncer Asynchronous Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> debasync{}; 
        ///RTC Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rtcout{}; 
        ///DMA Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///Debounce Freqnuency
        enum class DebfVal {
            div2=0x00000000,     ///<CLK_RTC_DEB = CLK_RTC/2
            div4=0x00000001,     ///<CLK_RTC_DEB = CLK_RTC/4
            div8=0x00000002,     ///<CLK_RTC_DEB = CLK_RTC/8
            div16=0x00000003,     ///<CLK_RTC_DEB = CLK_RTC/16
            div32=0x00000004,     ///<CLK_RTC_DEB = CLK_RTC/32
            div64=0x00000005,     ///<CLK_RTC_DEB = CLK_RTC/64
            div128=0x00000006,     ///<CLK_RTC_DEB = CLK_RTC/128
            div256=0x00000007,     ///<CLK_RTC_DEB = CLK_RTC/256
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DebfVal> debf{}; 
        namespace DebfValC{
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div2> div2{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div4> div4{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div8> div8{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div16> div16{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div32> div32{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div64> div64{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div128> div128{};
            constexpr Register::FieldValue<decltype(debf)::Type,DebfVal::div256> div256{};
        }
        ///Active Layer Freqnuency
        enum class ActfVal {
            div2=0x00000000,     ///<CLK_RTC_OUT = CLK_RTC/2
            div4=0x00000001,     ///<CLK_RTC_OUT = CLK_RTC/4
            div8=0x00000002,     ///<CLK_RTC_OUT = CLK_RTC/8
            div16=0x00000003,     ///<CLK_RTC_OUT = CLK_RTC/16
            div32=0x00000004,     ///<CLK_RTC_OUT = CLK_RTC/32
            div64=0x00000005,     ///<CLK_RTC_OUT = CLK_RTC/64
            div128=0x00000006,     ///<CLK_RTC_OUT = CLK_RTC/128
            div256=0x00000007,     ///<CLK_RTC_OUT = CLK_RTC/256
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,ActfVal> actf{}; 
        namespace ActfValC{
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div2> div2{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div4> div4{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div8> div8{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div16> div16{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div32> div32{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div64> div64{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div128> div128{};
            constexpr Register::FieldValue<decltype(actf)::Type,ActfVal::div256> div256{};
        }
    }
    namespace RtcMode2Evctrl{    ///<MODE2 Event Control
        using Addr = Register::Address<0x40002404,0xfffe3c00,0x00000000,std::uint32_t>;
        ///Periodic Interval 0 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pereo0{}; 
        ///Periodic Interval 1 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pereo1{}; 
        ///Periodic Interval 2 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pereo2{}; 
        ///Periodic Interval 3 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pereo3{}; 
        ///Periodic Interval 4 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pereo4{}; 
        ///Periodic Interval 5 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pereo5{}; 
        ///Periodic Interval 6 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pereo6{}; 
        ///Periodic Interval 7 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pereo7{}; 
        ///Alarm 0 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> alarmeo0{}; 
        ///Alarm 1 Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> alarmeo1{}; 
        ///Tamper Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tampereo{}; 
        ///Overflow Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovfeo{}; 
        ///Tamper Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tampevei{}; 
    }
    namespace RtcMode2Intenclr{    ///<MODE2 Interrupt Enable Clear
        using Addr = Register::Address<0x40002408,0xffff3c00,0x00000000,std::uint16_t>;
        ///Periodic Interval 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> per0{}; 
        ///Periodic Interval 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per1{}; 
        ///Periodic Interval 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> per2{}; 
        ///Periodic Interval 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> per3{}; 
        ///Periodic Interval 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> per4{}; 
        ///Periodic Interval 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> per5{}; 
        ///Periodic Interval 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> per6{}; 
        ///Periodic Interval 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> per7{}; 
        ///Alarm 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> alarm0{}; 
        ///Alarm 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> alarm1{}; 
        ///Tamper Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tamper{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode2Intenset{    ///<MODE2 Interrupt Enable Set
        using Addr = Register::Address<0x4000240a,0xffff3c00,0x00000000,std::uint16_t>;
        ///Periodic Interval 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> per0{}; 
        ///Periodic Interval 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per1{}; 
        ///Periodic Interval 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> per2{}; 
        ///Periodic Interval 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> per3{}; 
        ///Periodic Interval 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> per4{}; 
        ///Periodic Interval 5 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> per5{}; 
        ///Periodic Interval 6 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> per6{}; 
        ///Periodic Interval 7 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> per7{}; 
        ///Alarm 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> alarm0{}; 
        ///Alarm 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> alarm1{}; 
        ///Tamper Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tamper{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode2Intflag{    ///<MODE2 Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4000240c,0xffff3c00,0x00000000,std::uint16_t>;
        ///Periodic Interval 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> per0{}; 
        ///Periodic Interval 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per1{}; 
        ///Periodic Interval 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> per2{}; 
        ///Periodic Interval 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> per3{}; 
        ///Periodic Interval 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> per4{}; 
        ///Periodic Interval 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> per5{}; 
        ///Periodic Interval 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> per6{}; 
        ///Periodic Interval 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> per7{}; 
        ///Alarm 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> alarm0{}; 
        ///Alarm 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> alarm1{}; 
        ///Tamper
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tamper{}; 
        ///Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode2Dbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4000240e,0xfffffffe,0x00000000,std::uint8_t>;
        ///Run During Debug
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace RtcMode2Syncbusy{    ///<MODE2 Synchronization Busy Status
        using Addr = Register::Address<0x40002410,0xfff06790,0x00000000,std::uint32_t>;
        ///Software Reset Bit Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable Bit Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
        ///FREQCORR Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> freqcorr{}; 
        ///CLOCK Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clock{}; 
        ///ALARM 0 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> alarm0{}; 
        ///ALARM 1 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> alarm1{}; 
        ///MASK 0 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mask0{}; 
        ///MASK 1 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mask1{}; 
        ///Clock Synchronization Enable Bit Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clocksync{}; 
        ///General Purpose 0 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gp0{}; 
        ///General Purpose 1 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gp1{}; 
        ///General Purpose 2 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gp2{}; 
        ///General Purpose 3 Register Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gp3{}; 
    }
    namespace RtcMode2Freqcorr{    ///<Frequency Correction
        using Addr = Register::Address<0x40002414,0xffffff00,0x00000000,std::uint8_t>;
        ///Correction Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> value{}; 
        ///Correction Sign
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sign{}; 
    }
    namespace RtcMode2Clock{    ///<MODE2 Clock Value
        using Addr = Register::Address<0x40002418,0x00000000,0x00000000,std::uint32_t>;
        ///Second
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> second{}; 
        ///Minute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> minute{}; 
        ///Hour
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        ///Day
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,17),Register::ReadWriteAccess,unsigned> day{}; 
        ///Month
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> month{}; 
        ///Year
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> year{}; 
    }
    namespace RtcMode2Alarms{    ///<MODE2 Alarm n Value
        using Addr = Register::Address<0x40002420,0x00000000,0x00000000,std::uint32_t>;
        ///Second
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> second{}; 
        ///Minute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> minute{}; 
        ///Hour
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> hour{}; 
        ///Day
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,17),Register::ReadWriteAccess,unsigned> day{}; 
        ///Month
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> month{}; 
        ///Year
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> year{}; 
    }
    namespace RtcMode2Masks{    ///<MODE2 Alarm n Mask
        using Addr = Register::Address<0x40002424,0xfffffff8,0x00000000,std::uint8_t>;
        ///Alarm Mask Selection
        enum class SelVal {
            off=0x00000000,     ///<Alarm Disabled
            ss=0x00000001,     ///<Match seconds only
            mmss=0x00000002,     ///<Match seconds and minutes only
            hhmmss=0x00000003,     ///<Match seconds, minutes, and hours only
            ddhhmmss=0x00000004,     ///<Match seconds, minutes, hours, and days only
            mmddhhmmss=0x00000005,     ///<Match seconds, minutes, hours, days, and months only
            yymmddhhmmss=0x00000006,     ///<Match seconds, minutes, hours, days, months, and years
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::off> off{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ss> ss{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::mmss> mmss{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::hhmmss> hhmmss{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ddhhmmss> ddhhmmss{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::mmddhhmmss> mmddhhmmss{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::yymmddhhmmss> yymmddhhmmss{};
        }
    }
    namespace RtcMode2Gps{    ///<General Purpose
        using Addr = Register::Address<0x40002440,0x00000000,0x00000000,std::uint32_t>;
        ///General Purpose
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gp{}; 
    }
    namespace RtcMode2Tampctrl{    ///<Tamper Control
        using Addr = Register::Address<0x40002460,0xe0e0fc00,0x00000000,std::uint32_t>;
        ///Tamper Input 0 Action
        enum class In0actVal {
            off=0x00000000,     ///<Off (Disabled)
            wake=0x00000001,     ///<Wake without timestamp
            capture=0x00000002,     ///<Capture timestamp
            actl=0x00000003,     ///<Compare IN0 to OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,In0actVal> in0act{}; 
        namespace In0actValC{
            constexpr Register::FieldValue<decltype(in0act)::Type,In0actVal::off> off{};
            constexpr Register::FieldValue<decltype(in0act)::Type,In0actVal::wake> wake{};
            constexpr Register::FieldValue<decltype(in0act)::Type,In0actVal::capture> capture{};
            constexpr Register::FieldValue<decltype(in0act)::Type,In0actVal::actl> actl{};
        }
        ///Tamper Input 1 Action
        enum class In1actVal {
            off=0x00000000,     ///<Off (Disabled)
            wake=0x00000001,     ///<Wake without timestamp
            capture=0x00000002,     ///<Capture timestamp
            actl=0x00000003,     ///<Compare IN1 to OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,In1actVal> in1act{}; 
        namespace In1actValC{
            constexpr Register::FieldValue<decltype(in1act)::Type,In1actVal::off> off{};
            constexpr Register::FieldValue<decltype(in1act)::Type,In1actVal::wake> wake{};
            constexpr Register::FieldValue<decltype(in1act)::Type,In1actVal::capture> capture{};
            constexpr Register::FieldValue<decltype(in1act)::Type,In1actVal::actl> actl{};
        }
        ///Tamper Input 2 Action
        enum class In2actVal {
            off=0x00000000,     ///<Off (Disabled)
            wake=0x00000001,     ///<Wake without timestamp
            capture=0x00000002,     ///<Capture timestamp
            actl=0x00000003,     ///<Compare IN2 to OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,In2actVal> in2act{}; 
        namespace In2actValC{
            constexpr Register::FieldValue<decltype(in2act)::Type,In2actVal::off> off{};
            constexpr Register::FieldValue<decltype(in2act)::Type,In2actVal::wake> wake{};
            constexpr Register::FieldValue<decltype(in2act)::Type,In2actVal::capture> capture{};
            constexpr Register::FieldValue<decltype(in2act)::Type,In2actVal::actl> actl{};
        }
        ///Tamper Input 3 Action
        enum class In3actVal {
            off=0x00000000,     ///<Off (Disabled)
            wake=0x00000001,     ///<Wake without timestamp
            capture=0x00000002,     ///<Capture timestamp
            actl=0x00000003,     ///<Compare IN3 to OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,In3actVal> in3act{}; 
        namespace In3actValC{
            constexpr Register::FieldValue<decltype(in3act)::Type,In3actVal::off> off{};
            constexpr Register::FieldValue<decltype(in3act)::Type,In3actVal::wake> wake{};
            constexpr Register::FieldValue<decltype(in3act)::Type,In3actVal::capture> capture{};
            constexpr Register::FieldValue<decltype(in3act)::Type,In3actVal::actl> actl{};
        }
        ///Tamper Input 4 Action
        enum class In4actVal {
            off=0x00000000,     ///<Off (Disabled)
            wake=0x00000001,     ///<Wake without timestamp
            capture=0x00000002,     ///<Capture timestamp
            actl=0x00000003,     ///<Compare IN4 to OUT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,In4actVal> in4act{}; 
        namespace In4actValC{
            constexpr Register::FieldValue<decltype(in4act)::Type,In4actVal::off> off{};
            constexpr Register::FieldValue<decltype(in4act)::Type,In4actVal::wake> wake{};
            constexpr Register::FieldValue<decltype(in4act)::Type,In4actVal::capture> capture{};
            constexpr Register::FieldValue<decltype(in4act)::Type,In4actVal::actl> actl{};
        }
        ///Tamper Level Select 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tamlvl0{}; 
        ///Tamper Level Select 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tamlvl1{}; 
        ///Tamper Level Select 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tamlvl2{}; 
        ///Tamper Level Select 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tamlvl3{}; 
        ///Tamper Level Select 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tamlvl4{}; 
        ///Debouncer Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> debnc0{}; 
        ///Debouncer Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> debnc1{}; 
        ///Debouncer Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> debnc2{}; 
        ///Debouncer Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> debnc3{}; 
        ///Debouncer Enable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> debnc4{}; 
    }
    namespace RtcMode2Timestamp{    ///<MODE2 Timestamp
        using Addr = Register::Address<0x40002464,0x00000000,0x00000000,std::uint32_t>;
        ///Second Timestamp Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> second{}; 
        ///Minute Timestamp Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> minute{}; 
        ///Hour Timestamp Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hour{}; 
        ///Day Timestamp Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> day{}; 
        ///Month Timestamp Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> month{}; 
        ///Year Timestamp Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> year{}; 
    }
    namespace RtcMode2Tampid{    ///<Tamper ID
        using Addr = Register::Address<0x40002468,0x7fffffe0,0x00000000,std::uint32_t>;
        ///Tamper Input 0 Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tampid0{}; 
        ///Tamper Input 1 Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tampid1{}; 
        ///Tamper Input 2 Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tampid2{}; 
        ///Tamper Input 3 Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tampid3{}; 
        ///Tamper Input 4 Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tampid4{}; 
        ///Tamper Event Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tampevt{}; 
    }
    namespace RtcMode2Bkups{    ///<Backup
        using Addr = Register::Address<0x40002480,0x00000000,0x00000000,std::uint32_t>;
        ///Backup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkup{}; 
    }
}
