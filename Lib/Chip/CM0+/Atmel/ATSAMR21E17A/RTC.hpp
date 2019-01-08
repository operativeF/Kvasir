#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Real-Time Counter
    namespace RtcMode0Dbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4000140b,0xfffffffe,0x00000000,std::uint8_t>;
        ///Run During Debug
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace RtcMode0Freqcorr{    ///<Frequency Correction
        using Addr = Register::Address<0x4000140c,0xffffff00,0x00000000,std::uint8_t>;
        ///Correction Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> value{}; 
        ///Correction Sign
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sign{}; 
    }
    namespace RtcMode0Comps{    ///<MODE0 Compare n Value
        using Addr = Register::Address<0x40001418,0x00000000,0x00000000,std::uint32_t>;
        ///Compare Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> comp{}; 
    }
    namespace RtcMode0Count{    ///<MODE0 Counter Value
        using Addr = Register::Address<0x40001410,0x00000000,0x00000000,std::uint32_t>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace RtcMode0Ctrl{    ///<MODE0 Control
        using Addr = Register::Address<0x40001400,0xfffff070,0x00000000,std::uint16_t>;
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
            div1=0x00000000,     ///<CLK_RTC_CNT = GCLK_RTC/1
            div2=0x00000001,     ///<CLK_RTC_CNT = GCLK_RTC/2
            div4=0x00000002,     ///<CLK_RTC_CNT = GCLK_RTC/4
            div8=0x00000003,     ///<CLK_RTC_CNT = GCLK_RTC/8
            div16=0x00000004,     ///<CLK_RTC_CNT = GCLK_RTC/16
            div32=0x00000005,     ///<CLK_RTC_CNT = GCLK_RTC/32
            div64=0x00000006,     ///<CLK_RTC_CNT = GCLK_RTC/64
            div128=0x00000007,     ///<CLK_RTC_CNT = GCLK_RTC/128
            div256=0x00000008,     ///<CLK_RTC_CNT = GCLK_RTC/256
            div512=0x00000009,     ///<CLK_RTC_CNT = GCLK_RTC/512
            div1024=0x0000000a,     ///<CLK_RTC_CNT = GCLK_RTC/1024
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,PrescalerVal> prescaler{}; 
        namespace PrescalerValC{
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
    }
    namespace RtcMode0Evctrl{    ///<MODE0 Event Control
        using Addr = Register::Address<0x40001404,0xffff7e00,0x00000000,std::uint16_t>;
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
        ///Overflow Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovfeo{}; 
    }
    namespace RtcMode0Intenclr{    ///<MODE0 Interrupt Enable Clear
        using Addr = Register::Address<0x40001406,0xffffff3e,0x00000000,std::uint8_t>;
        ///Compare 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmp0{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode0Intenset{    ///<MODE0 Interrupt Enable Set
        using Addr = Register::Address<0x40001407,0xffffff3e,0x00000000,std::uint8_t>;
        ///Compare 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmp0{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode0Intflag{    ///<MODE0 Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40001408,0xffffff3e,0x00000000,std::uint8_t>;
        ///Compare 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmp0{}; 
        ///Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode0Readreq{    ///<Read Request
        using Addr = Register::Address<0x40001402,0xffff3fc0,0x00000000,std::uint16_t>;
        ///Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> addr{}; 
        ///Read Continuously
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Read Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rreq{}; 
    }
    namespace RtcMode0Status{    ///<Status
        using Addr = Register::Address<0x4000140a,0xffffff7f,0x00000000,std::uint8_t>;
        ///Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> syncbusy{}; 
    }
    namespace RtcMode1Dbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4000140b,0xfffffffe,0x00000000,std::uint8_t>;
        ///Run During Debug
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace RtcMode1Freqcorr{    ///<Frequency Correction
        using Addr = Register::Address<0x4000140c,0xffffff00,0x00000000,std::uint8_t>;
        ///Correction Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> value{}; 
        ///Correction Sign
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sign{}; 
    }
    namespace RtcMode1Comps{    ///<MODE1 Compare n Value
        using Addr = Register::Address<0x40001418,0xffff0000,0x00000000,std::uint16_t>;
        ///Compare Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> comp{}; 
    }
    namespace RtcMode1Count{    ///<MODE1 Counter Value
        using Addr = Register::Address<0x40001410,0xffff0000,0x00000000,std::uint16_t>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace RtcMode1Ctrl{    ///<MODE1 Control
        using Addr = Register::Address<0x40001400,0xfffff0f0,0x00000000,std::uint16_t>;
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
            div1=0x00000000,     ///<CLK_RTC_CNT = GCLK_RTC/1
            div2=0x00000001,     ///<CLK_RTC_CNT = GCLK_RTC/2
            div4=0x00000002,     ///<CLK_RTC_CNT = GCLK_RTC/4
            div8=0x00000003,     ///<CLK_RTC_CNT = GCLK_RTC/8
            div16=0x00000004,     ///<CLK_RTC_CNT = GCLK_RTC/16
            div32=0x00000005,     ///<CLK_RTC_CNT = GCLK_RTC/32
            div64=0x00000006,     ///<CLK_RTC_CNT = GCLK_RTC/64
            div128=0x00000007,     ///<CLK_RTC_CNT = GCLK_RTC/128
            div256=0x00000008,     ///<CLK_RTC_CNT = GCLK_RTC/256
            div512=0x00000009,     ///<CLK_RTC_CNT = GCLK_RTC/512
            div1024=0x0000000a,     ///<CLK_RTC_CNT = GCLK_RTC/1024
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,PrescalerVal> prescaler{}; 
        namespace PrescalerValC{
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
    }
    namespace RtcMode1Evctrl{    ///<MODE1 Event Control
        using Addr = Register::Address<0x40001404,0xffff7c00,0x00000000,std::uint16_t>;
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
        ///Overflow Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovfeo{}; 
    }
    namespace RtcMode1Intenclr{    ///<MODE1 Interrupt Enable Clear
        using Addr = Register::Address<0x40001406,0xffffff3c,0x00000000,std::uint8_t>;
        ///Compare 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmp0{}; 
        ///Compare 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmp1{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode1Intenset{    ///<MODE1 Interrupt Enable Set
        using Addr = Register::Address<0x40001407,0xffffff3c,0x00000000,std::uint8_t>;
        ///Compare 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmp0{}; 
        ///Compare 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmp1{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode1Intflag{    ///<MODE1 Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40001408,0xffffff3c,0x00000000,std::uint8_t>;
        ///Compare 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmp0{}; 
        ///Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmp1{}; 
        ///Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode1Per{    ///<MODE1 Counter Period
        using Addr = Register::Address<0x40001414,0xffff0000,0x00000000,std::uint16_t>;
        ///Counter Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> per{}; 
    }
    namespace RtcMode1Readreq{    ///<Read Request
        using Addr = Register::Address<0x40001402,0xffff3fc0,0x00000000,std::uint16_t>;
        ///Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> addr{}; 
        ///Read Continuously
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Read Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rreq{}; 
    }
    namespace RtcMode1Status{    ///<Status
        using Addr = Register::Address<0x4000140a,0xffffff7f,0x00000000,std::uint8_t>;
        ///Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> syncbusy{}; 
    }
    namespace RtcMode2Dbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4000140b,0xfffffffe,0x00000000,std::uint8_t>;
        ///Run During Debug
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace RtcMode2Freqcorr{    ///<Frequency Correction
        using Addr = Register::Address<0x4000140c,0xffffff00,0x00000000,std::uint8_t>;
        ///Correction Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> value{}; 
        ///Correction Sign
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sign{}; 
    }
    namespace RtcMode2Clock{    ///<MODE2 Clock Value
        using Addr = Register::Address<0x40001410,0x00000000,0x00000000,std::uint32_t>;
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
    namespace RtcMode2Ctrl{    ///<MODE2 Control
        using Addr = Register::Address<0x40001400,0xfffff030,0x00000000,std::uint16_t>;
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
            div1=0x00000000,     ///<CLK_RTC_CNT = GCLK_RTC/1
            div2=0x00000001,     ///<CLK_RTC_CNT = GCLK_RTC/2
            div4=0x00000002,     ///<CLK_RTC_CNT = GCLK_RTC/4
            div8=0x00000003,     ///<CLK_RTC_CNT = GCLK_RTC/8
            div16=0x00000004,     ///<CLK_RTC_CNT = GCLK_RTC/16
            div32=0x00000005,     ///<CLK_RTC_CNT = GCLK_RTC/32
            div64=0x00000006,     ///<CLK_RTC_CNT = GCLK_RTC/64
            div128=0x00000007,     ///<CLK_RTC_CNT = GCLK_RTC/128
            div256=0x00000008,     ///<CLK_RTC_CNT = GCLK_RTC/256
            div512=0x00000009,     ///<CLK_RTC_CNT = GCLK_RTC/512
            div1024=0x0000000a,     ///<CLK_RTC_CNT = GCLK_RTC/1024
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,PrescalerVal> prescaler{}; 
        namespace PrescalerValC{
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
    }
    namespace RtcMode2Evctrl{    ///<MODE2 Event Control
        using Addr = Register::Address<0x40001404,0xffff7e00,0x00000000,std::uint16_t>;
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
        ///Overflow Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovfeo{}; 
    }
    namespace RtcMode2Intenclr{    ///<MODE2 Interrupt Enable Clear
        using Addr = Register::Address<0x40001406,0xffffff3e,0x00000000,std::uint8_t>;
        ///Alarm 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> alarm0{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode2Intenset{    ///<MODE2 Interrupt Enable Set
        using Addr = Register::Address<0x40001407,0xffffff3e,0x00000000,std::uint8_t>;
        ///Alarm 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> alarm0{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode2Intflag{    ///<MODE2 Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40001408,0xffffff3e,0x00000000,std::uint8_t>;
        ///Alarm 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> alarm0{}; 
        ///Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> syncrdy{}; 
        ///Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace RtcMode2Alarms{    ///<MODE2 Alarm n Value
        using Addr = Register::Address<0x40001418,0x00000000,0x00000000,std::uint32_t>;
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
        using Addr = Register::Address<0x4000141c,0xfffffff8,0x00000000,std::uint8_t>;
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
    namespace RtcMode2Readreq{    ///<Read Request
        using Addr = Register::Address<0x40001402,0xffff3fc0,0x00000000,std::uint16_t>;
        ///Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> addr{}; 
        ///Read Continuously
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Read Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rreq{}; 
    }
    namespace RtcMode2Status{    ///<Status
        using Addr = Register::Address<0x4000140a,0xffffff7f,0x00000000,std::uint8_t>;
        ///Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> syncbusy{}; 
    }
}
