#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//32kHz Oscillators Control
    namespace Osc32kctrlIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x40001400,0xfffffffa,0x00000000,std::uint32_t>;
        ///XOSC32K Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xosc32krdy{}; 
        ///XOSC32K Clock Failure Detector Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> xosc32kfail{}; 
    }
    namespace Osc32kctrlIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x40001404,0xfffffffa,0x00000000,std::uint32_t>;
        ///XOSC32K Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xosc32krdy{}; 
        ///XOSC32K Clock Failure Detector Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> xosc32kfail{}; 
    }
    namespace Osc32kctrlIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40001408,0xfffffffa,0x00000000,std::uint32_t>;
        ///XOSC32K Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xosc32krdy{}; 
        ///XOSC32K Clock Failure Detector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> xosc32kfail{}; 
    }
    namespace Osc32kctrlStatus{    ///<Power and Clocks Status
        using Addr = Register::Address<0x4000140c,0xfffffff2,0x00000000,std::uint32_t>;
        ///XOSC32K Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xosc32krdy{}; 
        ///XOSC32K Clock Failure Detector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xosc32kfail{}; 
        ///XOSC32K Clock switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xosc32ksw{}; 
    }
    namespace Osc32kctrlRtcctrl{    ///<RTC Clock Selection
        using Addr = Register::Address<0x40001410,0xfffffff8,0x00000000,std::uint8_t>;
        ///RTC Clock Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rtcsel{}; 
    }
    namespace Osc32kctrlXosc32k{    ///<32kHz External Crystal Oscillator (XOSC32K) Control
        using Addr = Register::Address<0x40001414,0xffff8821,0x00000000,std::uint16_t>;
        ///Oscillator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Crystal Oscillator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> xtalen{}; 
        ///32kHz Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> en32k{}; 
        ///1kHz Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> en1k{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///On Demand Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
        ///Oscillator Start-Up Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> startup{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wrtlock{}; 
        ///Control Gain Mode
        enum class CgmVal {
            xt=0x00000001,     ///<Standard mode
            hs=0x00000002,     ///<High Speed mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,CgmVal> cgm{}; 
        namespace CgmValC{
            constexpr Register::FieldValue<decltype(cgm)::Type,CgmVal::xt> xt{};
            constexpr Register::FieldValue<decltype(cgm)::Type,CgmVal::hs> hs{};
        }
    }
    namespace Osc32kctrlCfdctrl{    ///<Clock Failure Detector Control
        using Addr = Register::Address<0x40001416,0xfffffff8,0x00000000,std::uint8_t>;
        ///Clock Failure Detector Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cfden{}; 
        ///Clock Switch Back
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swback{}; 
        ///Clock Failure Detector Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cfdpresc{}; 
    }
    namespace Osc32kctrlEvctrl{    ///<Event Control
        using Addr = Register::Address<0x40001417,0xfffffffe,0x00000000,std::uint8_t>;
        ///Clock Failure Detector Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cfdeo{}; 
    }
    namespace Osc32kctrlOsculp32k{    ///<32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control
        using Addr = Register::Address<0x4000141c,0xffff40f9,0x00000000,std::uint32_t>;
        ///Enable Out 32k
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> en32k{}; 
        ///Enable Out 1k
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> en1k{}; 
        ///Oscillator Calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> calib{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
}
