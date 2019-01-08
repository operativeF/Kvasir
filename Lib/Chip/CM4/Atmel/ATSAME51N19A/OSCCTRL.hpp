#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Oscillators Control
    namespace OscctrlEvctrl{    ///<Event Control
        using Addr = Register::Address<0x40001000,0xfffffffc,0x00000000,std::uint8_t>;
        ///Clock 0 Failure Detector Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cfdeo0{}; 
        ///Clock 1 Failure Detector Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cfdeo1{}; 
    }
    namespace OscctrlIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x40001004,0xf0f0e0f0,0x00000000,std::uint32_t>;
        ///XOSC 0 Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xoscrdy0{}; 
        ///XOSC 1 Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> xoscrdy1{}; 
        ///XOSC 0 Clock Failure Detector Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> xoscfail0{}; 
        ///XOSC 1 Clock Failure Detector Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> xoscfail1{}; 
        ///DFLL Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dfllrdy{}; 
        ///DFLL Out Of Bounds Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dflloob{}; 
        ///DFLL Lock Fine Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dflllckf{}; 
        ///DFLL Lock Coarse Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dflllckc{}; 
        ///DFLL Reference Clock Stopped Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dfllrcs{}; 
        ///DPLL0 Lock Rise Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dpll0lckr{}; 
        ///DPLL0 Lock Fall Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dpll0lckf{}; 
        ///DPLL0 Lock Timeout Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dpll0lto{}; 
        ///DPLL0 Loop Divider Ratio Update Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dpll0ldrto{}; 
        ///DPLL1 Lock Rise Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dpll1lckr{}; 
        ///DPLL1 Lock Fall Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dpll1lckf{}; 
        ///DPLL1 Lock Timeout Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dpll1lto{}; 
        ///DPLL1 Loop Divider Ratio Update Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dpll1ldrto{}; 
    }
    namespace OscctrlIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x40001008,0xf0f0e0f0,0x00000000,std::uint32_t>;
        ///XOSC 0 Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xoscrdy0{}; 
        ///XOSC 1 Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> xoscrdy1{}; 
        ///XOSC 0 Clock Failure Detector Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> xoscfail0{}; 
        ///XOSC 1 Clock Failure Detector Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> xoscfail1{}; 
        ///DFLL Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dfllrdy{}; 
        ///DFLL Out Of Bounds Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dflloob{}; 
        ///DFLL Lock Fine Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dflllckf{}; 
        ///DFLL Lock Coarse Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dflllckc{}; 
        ///DFLL Reference Clock Stopped Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dfllrcs{}; 
        ///DPLL0 Lock Rise Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dpll0lckr{}; 
        ///DPLL0 Lock Fall Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dpll0lckf{}; 
        ///DPLL0 Lock Timeout Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dpll0lto{}; 
        ///DPLL0 Loop Divider Ratio Update Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dpll0ldrto{}; 
        ///DPLL1 Lock Rise Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dpll1lckr{}; 
        ///DPLL1 Lock Fall Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dpll1lckf{}; 
        ///DPLL1 Lock Timeout Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dpll1lto{}; 
        ///DPLL1 Loop Divider Ratio Update Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dpll1ldrto{}; 
    }
    namespace OscctrlIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4000100c,0xf0f0e0f0,0x00000000,std::uint32_t>;
        ///XOSC 0 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xoscrdy0{}; 
        ///XOSC 1 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> xoscrdy1{}; 
        ///XOSC 0 Clock Failure Detector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> xoscfail0{}; 
        ///XOSC 1 Clock Failure Detector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> xoscfail1{}; 
        ///DFLL Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dfllrdy{}; 
        ///DFLL Out Of Bounds
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dflloob{}; 
        ///DFLL Lock Fine
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dflllckf{}; 
        ///DFLL Lock Coarse
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dflllckc{}; 
        ///DFLL Reference Clock Stopped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dfllrcs{}; 
        ///DPLL0 Lock Rise
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dpll0lckr{}; 
        ///DPLL0 Lock Fall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dpll0lckf{}; 
        ///DPLL0 Lock Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dpll0lto{}; 
        ///DPLL0 Loop Divider Ratio Update Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dpll0ldrto{}; 
        ///DPLL1 Lock Rise
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dpll1lckr{}; 
        ///DPLL1 Lock Fall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dpll1lckf{}; 
        ///DPLL1 Lock Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dpll1lto{}; 
        ///DPLL1 Loop Divider Ratio Update Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dpll1ldrto{}; 
    }
    namespace OscctrlStatus{    ///<Status
        using Addr = Register::Address<0x40001010,0xf0f0e0c0,0x00000000,std::uint32_t>;
        ///XOSC 0 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xoscrdy0{}; 
        ///XOSC 1 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xoscrdy1{}; 
        ///XOSC 0 Clock Failure Detector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xoscfail0{}; 
        ///XOSC 1 Clock Failure Detector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xoscfail1{}; 
        ///XOSC 0 Clock Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xosccksw0{}; 
        ///XOSC 1 Clock Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xosccksw1{}; 
        ///DFLL Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dfllrdy{}; 
        ///DFLL Out Of Bounds
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dflloob{}; 
        ///DFLL Lock Fine
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dflllckf{}; 
        ///DFLL Lock Coarse
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dflllckc{}; 
        ///DFLL Reference Clock Stopped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dfllrcs{}; 
        ///DPLL0 Lock Rise
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dpll0lckr{}; 
        ///DPLL0 Lock Fall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dpll0lckf{}; 
        ///DPLL0 Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dpll0to{}; 
        ///DPLL0 Loop Divider Ratio Update Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dpll0ldrto{}; 
        ///DPLL1 Lock Rise
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dpll1lckr{}; 
        ///DPLL1 Lock Fall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dpll1lckf{}; 
        ///DPLL1 Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dpll1to{}; 
        ///DPLL1 Loop Divider Ratio Update Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dpll1ldrto{}; 
    }
    namespace OscctrlDfllctrla{    ///<DFLL48M Control A
        using Addr = Register::Address<0x4000101c,0xffffff3d,0x00000000,std::uint8_t>;
        ///DFLL Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///On Demand Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace OscctrlDfllctrlb{    ///<DFLL48M Control B
        using Addr = Register::Address<0x40001020,0xffffff00,0x00000000,std::uint8_t>;
        ///Operating Mode Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Stable DFLL Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stable{}; 
        ///Lose Lock After Wake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> llaw{}; 
        ///USB Clock Recovery Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbcrm{}; 
        ///Chill Cycle Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccdis{}; 
        ///Quick Lock Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qldis{}; 
        ///Bypass Coarse Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bplckc{}; 
        ///Wait Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> waitlock{}; 
    }
    namespace OscctrlDfllval{    ///<DFLL48M Value
        using Addr = Register::Address<0x40001024,0x00000300,0x00000000,std::uint32_t>;
        ///Fine Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fine{}; 
        ///Coarse Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> coarse{}; 
        ///Multiplication Ratio Difference
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> diff{}; 
    }
    namespace OscctrlDfllmul{    ///<DFLL48M Multiplier
        using Addr = Register::Address<0x40001028,0x03000000,0x00000000,std::uint32_t>;
        ///DFLL Multiply Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mul{}; 
        ///Fine Maximum Step
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> fstep{}; 
        ///Coarse Maximum Step
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> cstep{}; 
    }
    namespace OscctrlDfllsync{    ///<DFLL48M Synchronization
        using Addr = Register::Address<0x4000102c,0xffffffe1,0x00000000,std::uint8_t>;
        ///ENABLE Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
        ///DFLLCTRLB Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dfllctrlb{}; 
        ///DFLLVAL Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dfllval{}; 
        ///DFLLMUL Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dfllmul{}; 
    }
    namespace OscctrlXoscctrl0{    ///<External Multipurpose Crystal Oscillator Control
        using Addr = Register::Address<0x40001014,0xf00c0039,0x00000000,std::uint32_t>;
        ///Oscillator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Crystal Oscillator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> xtalen{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///On Demand Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
        ///Low Buffer Gain Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lowbufgain{}; 
        ///Oscillator Current Reference
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> iptat{}; 
        ///Oscillator Current Multiplier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> imult{}; 
        ///Automatic Loop Control Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enalc{}; 
        ///Clock Failure Detector Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cfden{}; 
        ///Xosc Clock Switch Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> swben{}; 
        ///Start-Up Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> startup{}; 
        ///Clock Failure Detector Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> cfdpresc{}; 
    }
    namespace OscctrlXoscctrl1{    ///<External Multipurpose Crystal Oscillator Control
        using Addr = Register::Address<0x40001018,0xf00c0039,0x00000000,std::uint32_t>;
        ///Oscillator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Crystal Oscillator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> xtalen{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///On Demand Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
        ///Low Buffer Gain Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lowbufgain{}; 
        ///Oscillator Current Reference
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> iptat{}; 
        ///Oscillator Current Multiplier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> imult{}; 
        ///Automatic Loop Control Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enalc{}; 
        ///Clock Failure Detector Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cfden{}; 
        ///Xosc Clock Switch Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> swben{}; 
        ///Start-Up Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> startup{}; 
        ///Clock Failure Detector Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> cfdpresc{}; 
    }
    namespace OscctrlDpllctrla0{    ///<DPLL Control A
        using Addr = Register::Address<0x40001030,0xffffff3d,0x00000000,std::uint8_t>;
        ///DPLL Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///On Demand Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace OscctrlDpllctrla1{    ///<DPLL Control A
        using Addr = Register::Address<0x40001044,0xffffff3d,0x00000000,std::uint8_t>;
        ///DPLL Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///On Demand Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace OscctrlDpllratio0{    ///<DPLL Ratio Control
        using Addr = Register::Address<0x40001034,0xffe0e000,0x00000000,std::uint32_t>;
        ///Loop Divider Ratio
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> ldr{}; 
        ///Loop Divider Ratio Fractional Part
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> ldrfrac{}; 
    }
    namespace OscctrlDpllratio1{    ///<DPLL Ratio Control
        using Addr = Register::Address<0x40001048,0xffe0e000,0x00000000,std::uint32_t>;
        ///Loop Divider Ratio
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> ldr{}; 
        ///Loop Divider Ratio Fractional Part
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> ldrfrac{}; 
    }
    namespace OscctrlDpllctrlb0{    ///<DPLL Control B
        using Addr = Register::Address<0x40001038,0xf8000000,0x00000000,std::uint32_t>;
        ///Proportional Integral Filter Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> filter{}; 
        ///Wake Up Fast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wuf{}; 
        ///Reference Clock Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> refclk{}; 
        ///Lock Time
        enum class LtimeVal {
            default_=0x00000000,     ///<No time-out. Automatic lock
            v800us=0x00000004,     ///<Time-out if no lock within 800us
            v900us=0x00000005,     ///<Time-out if no lock within 900us
            v1ms=0x00000006,     ///<Time-out if no lock within 1ms
            v1p1ms=0x00000007,     ///<Time-out if no lock within 1.1ms
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,LtimeVal> ltime{}; 
        namespace LtimeValC{
            constexpr Register::FieldValue<decltype(ltime)::Type,LtimeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(ltime)::Type,LtimeVal::v800us> v800us{};
            constexpr Register::FieldValue<decltype(ltime)::Type,LtimeVal::v900us> v900us{};
            constexpr Register::FieldValue<decltype(ltime)::Type,LtimeVal::v1ms> v1ms{};
            constexpr Register::FieldValue<decltype(ltime)::Type,LtimeVal::v1p1ms> v1p1ms{};
        }
        ///Lock Bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lbypass{}; 
        ///Sigma-Delta DCO Filter Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> dcofilter{}; 
        ///DCO Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dcoen{}; 
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace OscctrlDpllctrlb1{    ///<DPLL Control B
        using Addr = Register::Address<0x4000104c,0xf8000000,0x00000000,std::uint32_t>;
        ///Proportional Integral Filter Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> filter{}; 
        ///Wake Up Fast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wuf{}; 
        ///Reference Clock Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> refclk{}; 
        ///Lock Time
        enum class LtimeVal {
            default_=0x00000000,     ///<No time-out. Automatic lock
            v800us=0x00000004,     ///<Time-out if no lock within 800us
            v900us=0x00000005,     ///<Time-out if no lock within 900us
            v1ms=0x00000006,     ///<Time-out if no lock within 1ms
            v1p1ms=0x00000007,     ///<Time-out if no lock within 1.1ms
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,LtimeVal> ltime{}; 
        namespace LtimeValC{
            constexpr Register::FieldValue<decltype(ltime)::Type,LtimeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(ltime)::Type,LtimeVal::v800us> v800us{};
            constexpr Register::FieldValue<decltype(ltime)::Type,LtimeVal::v900us> v900us{};
            constexpr Register::FieldValue<decltype(ltime)::Type,LtimeVal::v1ms> v1ms{};
            constexpr Register::FieldValue<decltype(ltime)::Type,LtimeVal::v1p1ms> v1p1ms{};
        }
        ///Lock Bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lbypass{}; 
        ///Sigma-Delta DCO Filter Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> dcofilter{}; 
        ///DCO Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dcoen{}; 
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace OscctrlDpllsyncbusy0{    ///<DPLL Synchronization Busy
        using Addr = Register::Address<0x4000103c,0xfffffff9,0x00000000,std::uint32_t>;
        ///DPLL Enable Synchronization Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
        ///DPLL Loop Divider Ratio Synchronization Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dpllratio{}; 
    }
    namespace OscctrlDpllsyncbusy1{    ///<DPLL Synchronization Busy
        using Addr = Register::Address<0x40001050,0xfffffff9,0x00000000,std::uint32_t>;
        ///DPLL Enable Synchronization Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
        ///DPLL Loop Divider Ratio Synchronization Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dpllratio{}; 
    }
    namespace OscctrlDpllstatus0{    ///<DPLL Status
        using Addr = Register::Address<0x40001040,0xfffffffc,0x00000000,std::uint32_t>;
        ///DPLL Lock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lock{}; 
        ///DPLL Clock Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clkrdy{}; 
    }
    namespace OscctrlDpllstatus1{    ///<DPLL Status
        using Addr = Register::Address<0x40001054,0xfffffffc,0x00000000,std::uint32_t>;
        ///DPLL Lock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lock{}; 
        ///DPLL Clock Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clkrdy{}; 
    }
}
