#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Multipurpose Clock Generator module
    namespace McgC1{    ///<MCG Control 1 Register
        using Addr = Register::Address<0x40064000,0xffffff00,0x00000000,std::uint8_t>;
        ///Internal Reference Stop Enable
        enum class IrefstenVal {
            v0=0x00000000,     ///<Internal reference clock is disabled in Stop mode.
            v1=0x00000001,     ///<Internal reference clock is enabled in Stop mode if IRCLKEN is set or if MCG is in FEI, FBI, or BLPI modes before entering Stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrefstenVal> irefsten{}; 
        namespace IrefstenValC{
            constexpr Register::FieldValue<decltype(irefsten)::Type,IrefstenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irefsten)::Type,IrefstenVal::v1> v1{};
        }
        ///Internal Reference Clock Enable
        enum class IrclkenVal {
            v0=0x00000000,     ///<MCGIRCLK inactive.
            v1=0x00000001,     ///<MCGIRCLK active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrclkenVal> irclken{}; 
        namespace IrclkenValC{
            constexpr Register::FieldValue<decltype(irclken)::Type,IrclkenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irclken)::Type,IrclkenVal::v1> v1{};
        }
        ///Internal Reference Select
        enum class IrefsVal {
            v0=0x00000000,     ///<External reference clock is selected.
            v1=0x00000001,     ///<The slow internal reference clock is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,IrefsVal> irefs{}; 
        namespace IrefsValC{
            constexpr Register::FieldValue<decltype(irefs)::Type,IrefsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irefs)::Type,IrefsVal::v1> v1{};
        }
        ///FLL External Reference Divider
        enum class FrdivVal {
            v000=0x00000000,     ///<If RANGE = 0 or OSCSEL=1 , Divide Factor is 1; for all other RANGE values, Divide Factor is 32.
            v001=0x00000001,     ///<If RANGE = 0 or OSCSEL=1 , Divide Factor is 2; for all other RANGE values, Divide Factor is 64.
            v010=0x00000002,     ///<If RANGE = 0 or OSCSEL=1 , Divide Factor is 4; for all other RANGE values, Divide Factor is 128.
            v011=0x00000003,     ///<If RANGE = 0 or OSCSEL=1 , Divide Factor is 8; for all other RANGE values, Divide Factor is 256.
            v100=0x00000004,     ///<If RANGE = 0 or OSCSEL=1 , Divide Factor is 16; for all other RANGE values, Divide Factor is 512.
            v101=0x00000005,     ///<If RANGE = 0 or OSCSEL=1 , Divide Factor is 32; for all other RANGE values, Divide Factor is 1024.
            v110=0x00000006,     ///<If RANGE = 0 or OSCSEL=1 , Divide Factor is 64; for all other RANGE values, Divide Factor is 1280 .
            v111=0x00000007,     ///<If RANGE = 0 or OSCSEL=1 , Divide Factor is 128; for all other RANGE values, Divide Factor is 1536 .
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,FrdivVal> frdiv{}; 
        namespace FrdivValC{
            constexpr Register::FieldValue<decltype(frdiv)::Type,FrdivVal::v000> v000{};
            constexpr Register::FieldValue<decltype(frdiv)::Type,FrdivVal::v001> v001{};
            constexpr Register::FieldValue<decltype(frdiv)::Type,FrdivVal::v010> v010{};
            constexpr Register::FieldValue<decltype(frdiv)::Type,FrdivVal::v011> v011{};
            constexpr Register::FieldValue<decltype(frdiv)::Type,FrdivVal::v100> v100{};
            constexpr Register::FieldValue<decltype(frdiv)::Type,FrdivVal::v101> v101{};
            constexpr Register::FieldValue<decltype(frdiv)::Type,FrdivVal::v110> v110{};
            constexpr Register::FieldValue<decltype(frdiv)::Type,FrdivVal::v111> v111{};
        }
        ///Clock Source Select
        enum class ClksVal {
            v00=0x00000000,     ///<Encoding 0 - Output of FLL is selected.
            v01=0x00000001,     ///<Encoding 1 - Internal reference clock is selected.
            v10=0x00000002,     ///<Encoding 2 - External reference clock is selected.
            v11=0x00000003,     ///<Encoding 3 - Reserved.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ClksVal> clks{}; 
        namespace ClksValC{
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v00> v00{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v01> v01{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v10> v10{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v11> v11{};
        }
    }
    namespace McgC2{    ///<MCG Control 2 Register
        using Addr = Register::Address<0x40064001,0xffffff00,0x00000000,std::uint8_t>;
        ///Internal Reference Clock Select
        enum class IrcsVal {
            v0=0x00000000,     ///<Slow internal reference clock selected.
            v1=0x00000001,     ///<Fast internal reference clock selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrcsVal> ircs{}; 
        namespace IrcsValC{
            constexpr Register::FieldValue<decltype(ircs)::Type,IrcsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ircs)::Type,IrcsVal::v1> v1{};
        }
        ///Low Power Select
        enum class LpVal {
            v0=0x00000000,     ///<FLL is not disabled in bypass modes.
            v1=0x00000001,     ///<FLL is disabled in bypass modes (lower power)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,LpVal> lp{}; 
        namespace LpValC{
            constexpr Register::FieldValue<decltype(lp)::Type,LpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lp)::Type,LpVal::v1> v1{};
        }
        ///External Reference Select
        enum class ErefsVal {
            v0=0x00000000,     ///<External reference clock requested.
            v1=0x00000001,     ///<Oscillator requested.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ErefsVal> erefs{}; 
        namespace ErefsValC{
            constexpr Register::FieldValue<decltype(erefs)::Type,ErefsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erefs)::Type,ErefsVal::v1> v1{};
        }
        ///High Gain Oscillator Select
        enum class HgoVal {
            v0=0x00000000,     ///<Configure crystal oscillator for low-power operation.
            v1=0x00000001,     ///<Configure crystal oscillator for high-gain operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,HgoVal> hgo{}; 
        namespace HgoValC{
            constexpr Register::FieldValue<decltype(hgo)::Type,HgoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hgo)::Type,HgoVal::v1> v1{};
        }
        ///Frequency Range Select
        enum class RangeVal {
            v00=0x00000000,     ///<Encoding 0 - Low frequency range selected for the crystal oscillator .
            v01=0x00000001,     ///<Encoding 1 - High frequency range selected for the crystal oscillator .
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,RangeVal> range{}; 
        namespace RangeValC{
            constexpr Register::FieldValue<decltype(range)::Type,RangeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(range)::Type,RangeVal::v01> v01{};
        }
        ///Fast Internal Reference Clock Fine Trim
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fcftrim{}; 
        ///Loss of Clock Reset Enable
        enum class Locre0Val {
            v0=0x00000000,     ///<Interrupt request is generated on a loss of OSC0 external reference clock.
            v1=0x00000001,     ///<Generate a reset request on a loss of OSC0 external reference clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Locre0Val> locre0{}; 
        namespace Locre0ValC{
            constexpr Register::FieldValue<decltype(locre0)::Type,Locre0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(locre0)::Type,Locre0Val::v1> v1{};
        }
    }
    namespace McgC3{    ///<MCG Control 3 Register
        using Addr = Register::Address<0x40064002,0xffffff00,0x00000000,std::uint8_t>;
        ///Slow Internal Reference Clock Trim Setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sctrim{}; 
    }
    namespace McgC4{    ///<MCG Control 4 Register
        using Addr = Register::Address<0x40064003,0xffffff00,0x00000000,std::uint8_t>;
        ///Slow Internal Reference Clock Fine Trim
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> scftrim{}; 
        ///Fast Internal Reference Clock Trim Setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> fctrim{}; 
        ///DCO Range Select
        enum class DrstdrsVal {
            v00=0x00000000,     ///<Encoding 0 - Low range (reset default).
            v01=0x00000001,     ///<Encoding 1 - Mid range.
            v10=0x00000002,     ///<Encoding 2 - Mid-high range.
            v11=0x00000003,     ///<Encoding 3 - High range.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,DrstdrsVal> drstDrs{}; 
        namespace DrstdrsValC{
            constexpr Register::FieldValue<decltype(drstDrs)::Type,DrstdrsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(drstDrs)::Type,DrstdrsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(drstDrs)::Type,DrstdrsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(drstDrs)::Type,DrstdrsVal::v11> v11{};
        }
        ///DCO Maximum Frequency with 32.768 kHz Reference
        enum class Dmx32Val {
            v0=0x00000000,     ///<DCO has a default range of 25%.
            v1=0x00000001,     ///<DCO is fine-tuned for maximum frequency with 32.768 kHz reference.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Dmx32Val> dmx32{}; 
        namespace Dmx32ValC{
            constexpr Register::FieldValue<decltype(dmx32)::Type,Dmx32Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dmx32)::Type,Dmx32Val::v1> v1{};
        }
    }
    namespace McgC5{    ///<MCG Control 5 Register
        using Addr = Register::Address<0x40064004,0xffffffff,0x00000000,std::uint8_t>;
    }
    namespace McgC6{    ///<MCG Control 6 Register
        using Addr = Register::Address<0x40064005,0xffffffdf,0x00000000,std::uint8_t>;
        ///Clock Monitor Enable
        enum class CmeVal {
            v0=0x00000000,     ///<External clock monitor is disabled.
            v1=0x00000001,     ///<Generate a reset request on loss of external clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,CmeVal> cme{}; 
        namespace CmeValC{
            constexpr Register::FieldValue<decltype(cme)::Type,CmeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cme)::Type,CmeVal::v1> v1{};
        }
    }
    namespace McgS{    ///<MCG Status Register
        using Addr = Register::Address<0x40064006,0xffffffe0,0x00000000,std::uint8_t>;
        ///Internal Reference Clock Status
        enum class IrcstVal {
            v0=0x00000000,     ///<Source of internal reference clock is the slow clock (32 kHz IRC).
            v1=0x00000001,     ///<Source of internal reference clock is the fast clock (4 MHz IRC).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IrcstVal> ircst{}; 
        namespace IrcstValC{
            constexpr Register::FieldValue<decltype(ircst)::Type,IrcstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ircst)::Type,IrcstVal::v1> v1{};
        }
        ///OSC Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oscinit0{}; 
        ///Clock Mode Status
        enum class ClkstVal {
            v00=0x00000000,     ///<Encoding 0 - Output of the FLL is selected (reset default).
            v01=0x00000001,     ///<Encoding 1 - Internal reference clock is selected.
            v10=0x00000002,     ///<Encoding 2 - External reference clock is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ClkstVal> clkst{}; 
        namespace ClkstValC{
            constexpr Register::FieldValue<decltype(clkst)::Type,ClkstVal::v00> v00{};
            constexpr Register::FieldValue<decltype(clkst)::Type,ClkstVal::v01> v01{};
            constexpr Register::FieldValue<decltype(clkst)::Type,ClkstVal::v10> v10{};
        }
        ///Internal Reference Status
        enum class IrefstVal {
            v0=0x00000000,     ///<Source of FLL reference clock is the external reference clock.
            v1=0x00000001,     ///<Source of FLL reference clock is the internal reference clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IrefstVal> irefst{}; 
        namespace IrefstValC{
            constexpr Register::FieldValue<decltype(irefst)::Type,IrefstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irefst)::Type,IrefstVal::v1> v1{};
        }
    }
    namespace McgSc{    ///<MCG Status and Control Register
        using Addr = Register::Address<0x40064008,0xffffff00,0x00000000,std::uint8_t>;
        ///OSC0 Loss of Clock Status
        enum class Locs0Val {
            v0=0x00000000,     ///<Loss of OSC0 has not occurred.
            v1=0x00000001,     ///<Loss of OSC0 has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Locs0Val> locs0{}; 
        namespace Locs0ValC{
            constexpr Register::FieldValue<decltype(locs0)::Type,Locs0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(locs0)::Type,Locs0Val::v1> v1{};
        }
        ///Fast Clock Internal Reference Divider
        enum class FcrdivVal {
            v000=0x00000000,     ///<Divide Factor is 1
            v001=0x00000001,     ///<Divide Factor is 2.
            v010=0x00000002,     ///<Divide Factor is 4.
            v011=0x00000003,     ///<Divide Factor is 8.
            v100=0x00000004,     ///<Divide Factor is 16
            v101=0x00000005,     ///<Divide Factor is 32
            v110=0x00000006,     ///<Divide Factor is 64
            v111=0x00000007,     ///<Divide Factor is 128.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,FcrdivVal> fcrdiv{}; 
        namespace FcrdivValC{
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v000> v000{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v001> v001{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v010> v010{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v011> v011{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v100> v100{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v101> v101{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v110> v110{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v111> v111{};
        }
        ///FLL Filter Preserve Enable
        enum class FltprsrvVal {
            v0=0x00000000,     ///<FLL filter and FLL frequency will reset on changes to currect clock mode.
            v1=0x00000001,     ///<Fll filter and FLL frequency retain their previous values during new clock mode change.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,FltprsrvVal> fltprsrv{}; 
        namespace FltprsrvValC{
            constexpr Register::FieldValue<decltype(fltprsrv)::Type,FltprsrvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fltprsrv)::Type,FltprsrvVal::v1> v1{};
        }
        ///Automatic Trim Machine Fail Flag
        enum class AtmfVal {
            v0=0x00000000,     ///<Automatic Trim Machine completed normally.
            v1=0x00000001,     ///<Automatic Trim Machine failed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AtmfVal> atmf{}; 
        namespace AtmfValC{
            constexpr Register::FieldValue<decltype(atmf)::Type,AtmfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(atmf)::Type,AtmfVal::v1> v1{};
        }
        ///Automatic Trim Machine Select
        enum class AtmsVal {
            v0=0x00000000,     ///<32 kHz Internal Reference Clock selected.
            v1=0x00000001,     ///<4 MHz Internal Reference Clock selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AtmsVal> atms{}; 
        namespace AtmsValC{
            constexpr Register::FieldValue<decltype(atms)::Type,AtmsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(atms)::Type,AtmsVal::v1> v1{};
        }
        ///Automatic Trim Machine Enable
        enum class AtmeVal {
            v0=0x00000000,     ///<Auto Trim Machine disabled.
            v1=0x00000001,     ///<Auto Trim Machine enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AtmeVal> atme{}; 
        namespace AtmeValC{
            constexpr Register::FieldValue<decltype(atme)::Type,AtmeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(atme)::Type,AtmeVal::v1> v1{};
        }
    }
    namespace McgAtcvh{    ///<MCG Auto Trim Compare Value High Register
        using Addr = Register::Address<0x4006400a,0xffffff00,0x00000000,std::uint8_t>;
        ///ATM Compare Value High
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> atcvh{}; 
    }
    namespace McgAtcvl{    ///<MCG Auto Trim Compare Value Low Register
        using Addr = Register::Address<0x4006400b,0xffffff00,0x00000000,std::uint8_t>;
        ///ATM Compare Value Low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> atcvl{}; 
    }
    namespace McgC7{    ///<MCG Control 7 Register
        using Addr = Register::Address<0x4006400c,0xfffffffc,0x00000000,std::uint8_t>;
        ///MCG OSC Clock Select
        enum class OscselVal {
            v00=0x00000000,     ///<Selects Oscillator (OSCCLK0).
            v01=0x00000001,     ///<Selects 32 kHz RTC Oscillator.
            v10=0x00000002,     ///<Selects Oscillator (OSCCLK1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,OscselVal> oscsel{}; 
        namespace OscselValC{
            constexpr Register::FieldValue<decltype(oscsel)::Type,OscselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(oscsel)::Type,OscselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(oscsel)::Type,OscselVal::v10> v10{};
        }
    }
    namespace McgC8{    ///<MCG Control 8 Register
        using Addr = Register::Address<0x4006400d,0xffffff5e,0x00000000,std::uint8_t>;
        ///RTC Loss of Clock Status
        enum class Locs1Val {
            v0=0x00000000,     ///<Loss of RTC has not occur.
            v1=0x00000001,     ///<Loss of RTC has occur
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Locs1Val> locs1{}; 
        namespace Locs1ValC{
            constexpr Register::FieldValue<decltype(locs1)::Type,Locs1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(locs1)::Type,Locs1Val::v1> v1{};
        }
        ///Clock Monitor Enable1
        enum class Cme1Val {
            v0=0x00000000,     ///<External clock monitor is disabled for RTC clock.
            v1=0x00000001,     ///<External clock monitor is enabled for RTC clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Cme1Val> cme1{}; 
        namespace Cme1ValC{
            constexpr Register::FieldValue<decltype(cme1)::Type,Cme1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(cme1)::Type,Cme1Val::v1> v1{};
        }
        ///Loss of Clock Reset Enable
        enum class Locre1Val {
            v0=0x00000000,     ///<Interrupt request is generated on a loss of RTC external reference clock.
            v1=0x00000001,     ///<Generate a reset request on a loss of RTC external reference clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Locre1Val> locre1{}; 
        namespace Locre1ValC{
            constexpr Register::FieldValue<decltype(locre1)::Type,Locre1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(locre1)::Type,Locre1Val::v1> v1{};
        }
    }
}
