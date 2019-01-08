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
            v000=0x00000000,     ///<If RANGE 0 = 0 or OSCSEL=1 , Divide Factor is 1; for all other RANGE 0 values, Divide Factor is 32.
            v001=0x00000001,     ///<If RANGE 0 = 0 or OSCSEL=1 , Divide Factor is 2; for all other RANGE 0 values, Divide Factor is 64.
            v010=0x00000002,     ///<If RANGE 0 = 0 or OSCSEL=1 , Divide Factor is 4; for all other RANGE 0 values, Divide Factor is 128.
            v011=0x00000003,     ///<If RANGE 0 = 0 or OSCSEL=1 , Divide Factor is 8; for all other RANGE 0 values, Divide Factor is 256.
            v100=0x00000004,     ///<If RANGE 0 = 0 or OSCSEL=1 , Divide Factor is 16; for all other RANGE 0 values, Divide Factor is 512.
            v101=0x00000005,     ///<If RANGE 0 = 0 or OSCSEL=1 , Divide Factor is 32; for all other RANGE 0 values, Divide Factor is 1024.
            v110=0x00000006,     ///<If RANGE 0 = 0 or OSCSEL=1 , Divide Factor is 64; for all other RANGE 0 values, Divide Factor is 1280 .
            v111=0x00000007,     ///<If RANGE 0 = 0 or OSCSEL=1 , Divide Factor is 128; for all other RANGE 0 values, Divide Factor is 1536 .
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
            v00=0x00000000,     ///<Encoding 0 - Output of FLL or PLL is selected (depends on PLLS control bit).
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
        using Addr = Register::Address<0x40064001,0xffffff40,0x00000000,std::uint8_t>;
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
            v0=0x00000000,     ///<FLL or PLL is not disabled in bypass modes.
            v1=0x00000001,     ///<FLL or PLL is disabled in bypass modes (lower power)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,LpVal> lp{}; 
        namespace LpValC{
            constexpr Register::FieldValue<decltype(lp)::Type,LpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lp)::Type,LpVal::v1> v1{};
        }
        ///External Reference Select
        enum class Erefs0Val {
            v0=0x00000000,     ///<External reference clock requested.
            v1=0x00000001,     ///<Oscillator requested.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Erefs0Val> erefs0{}; 
        namespace Erefs0ValC{
            constexpr Register::FieldValue<decltype(erefs0)::Type,Erefs0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erefs0)::Type,Erefs0Val::v1> v1{};
        }
        ///High Gain Oscillator Select
        enum class Hgo0Val {
            v0=0x00000000,     ///<Configure crystal oscillator for low-power operation.
            v1=0x00000001,     ///<Configure crystal oscillator for high-gain operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Hgo0Val> hgo0{}; 
        namespace Hgo0ValC{
            constexpr Register::FieldValue<decltype(hgo0)::Type,Hgo0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hgo0)::Type,Hgo0Val::v1> v1{};
        }
        ///Frequency Range Select
        enum class Range0Val {
            v00=0x00000000,     ///<Encoding 0 - Low frequency range selected for the crystal oscillator .
            v01=0x00000001,     ///<Encoding 1 - High frequency range selected for the crystal oscillator .
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Range0Val> range0{}; 
        namespace Range0ValC{
            constexpr Register::FieldValue<decltype(range0)::Type,Range0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(range0)::Type,Range0Val::v01> v01{};
        }
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
        using Addr = Register::Address<0x40064004,0xffffff80,0x00000000,std::uint8_t>;
        ///PLL External Reference Divider
        enum class Prdiv0Val {
            v0=0x00000000,     ///<Divide Factor is 1
            v1=0x00000001,     ///<Divide Factor is 2
            v2=0x00000002,     ///<Divide Factor is 3
            v3=0x00000003,     ///<Divide Factor is 4
            v4=0x00000004,     ///<Divide Factor is 5
            v5=0x00000005,     ///<Divide Factor is 6
            v6=0x00000006,     ///<Divide Factor is 7
            v7=0x00000007,     ///<Divide Factor is 8
            v8=0x00000008,     ///<Divide Factor is 9
            v9=0x00000009,     ///<Divide Factor is 10
            v10=0x0000000a,     ///<Divide Factor is 11
            v11=0x0000000b,     ///<Divide Factor is 12
            v12=0x0000000c,     ///<Divide Factor is 13
            v13=0x0000000d,     ///<Divide Factor is 14
            v14=0x0000000e,     ///<Divide Factor is 15
            v15=0x0000000f,     ///<Divide Factor is 16
            v16=0x00000010,     ///<Divide Factor is 17
            v17=0x00000011,     ///<Divide Factor is 18
            v18=0x00000012,     ///<Divide Factor is 19
            v19=0x00000013,     ///<Divide Factor is 20
            v20=0x00000014,     ///<Divide Factor is 21
            v21=0x00000015,     ///<Divide Factor is 22
            v22=0x00000016,     ///<Divide Factor is 23
            v23=0x00000017,     ///<Divide Factor is 24
            v24=0x00000018,     ///<Divide Factor is 25
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,Prdiv0Val> prdiv0{}; 
        namespace Prdiv0ValC{
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v1> v1{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v2> v2{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v3> v3{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v4> v4{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v5> v5{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v6> v6{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v7> v7{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v8> v8{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v9> v9{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v10> v10{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v11> v11{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v12> v12{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v13> v13{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v14> v14{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v15> v15{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v16> v16{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v17> v17{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v18> v18{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v19> v19{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v20> v20{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v21> v21{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v22> v22{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v23> v23{};
            constexpr Register::FieldValue<decltype(prdiv0)::Type,Prdiv0Val::v24> v24{};
        }
        ///PLL Stop Enable
        enum class Pllsten0Val {
            v0=0x00000000,     ///<MCGPLLCLK is disabled in any of the Stop modes.
            v1=0x00000001,     ///<MCGPLLCLK is enabled if system is in Normal Stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pllsten0Val> pllsten0{}; 
        namespace Pllsten0ValC{
            constexpr Register::FieldValue<decltype(pllsten0)::Type,Pllsten0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pllsten0)::Type,Pllsten0Val::v1> v1{};
        }
        ///PLL Clock Enable
        enum class Pllclken0Val {
            v0=0x00000000,     ///<MCGPLLCLK is inactive.
            v1=0x00000001,     ///<MCGPLLCLK is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pllclken0Val> pllclken0{}; 
        namespace Pllclken0ValC{
            constexpr Register::FieldValue<decltype(pllclken0)::Type,Pllclken0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pllclken0)::Type,Pllclken0Val::v1> v1{};
        }
    }
    namespace McgC6{    ///<MCG Control 6 Register
        using Addr = Register::Address<0x40064005,0xffffff00,0x00000000,std::uint8_t>;
        ///VCO 0 Divider
        enum class Vdiv0Val {
            v0=0x00000000,     ///<Multiply Factor is 24
            v1=0x00000001,     ///<Multiply Factor is 25
            v2=0x00000002,     ///<Multiply Factor is 26
            v3=0x00000003,     ///<Multiply Factor is 27
            v4=0x00000004,     ///<Multiply Factor is 28
            v5=0x00000005,     ///<Multiply Factor is 29
            v6=0x00000006,     ///<Multiply Factor is 30
            v7=0x00000007,     ///<Multiply Factor is 31
            v8=0x00000008,     ///<Multiply Factor is 32
            v9=0x00000009,     ///<Multiply Factor is 33
            v10=0x0000000a,     ///<Multiply Factor is 34
            v11=0x0000000b,     ///<Multiply Factor is 35
            v12=0x0000000c,     ///<Multiply Factor is 36
            v13=0x0000000d,     ///<Multiply Factor is 37
            v14=0x0000000e,     ///<Multiply Factor is 38
            v15=0x0000000f,     ///<Multiply Factor is 39
            v16=0x00000010,     ///<Multiply Factor is 40
            v17=0x00000011,     ///<Multiply Factor is 41
            v18=0x00000012,     ///<Multiply Factor is 42
            v19=0x00000013,     ///<Multiply Factor is 43
            v20=0x00000014,     ///<Multiply Factor is 44
            v21=0x00000015,     ///<Multiply Factor is 45
            v22=0x00000016,     ///<Multiply Factor is 46
            v23=0x00000017,     ///<Multiply Factor is 47
            v24=0x00000018,     ///<Multiply Factor is 48
            v25=0x00000019,     ///<Multiply Factor is 49
            v26=0x0000001a,     ///<Multiply Factor is 50
            v27=0x0000001b,     ///<Multiply Factor is 51
            v28=0x0000001c,     ///<Multiply Factor is 52
            v29=0x0000001d,     ///<Multiply Factor is 53
            v30=0x0000001e,     ///<Multiply Factor is 54
            v31=0x0000001f,     ///<Multiply Factor is 55
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,Vdiv0Val> vdiv0{}; 
        namespace Vdiv0ValC{
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v1> v1{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v2> v2{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v3> v3{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v4> v4{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v5> v5{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v6> v6{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v7> v7{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v8> v8{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v9> v9{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v10> v10{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v11> v11{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v12> v12{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v13> v13{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v14> v14{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v15> v15{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v16> v16{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v17> v17{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v18> v18{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v19> v19{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v20> v20{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v21> v21{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v22> v22{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v23> v23{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v24> v24{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v25> v25{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v26> v26{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v27> v27{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v28> v28{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v29> v29{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v30> v30{};
            constexpr Register::FieldValue<decltype(vdiv0)::Type,Vdiv0Val::v31> v31{};
        }
        ///Clock Monitor Enable
        enum class Cme0Val {
            v0=0x00000000,     ///<External clock monitor is disabled for OSC0.
            v1=0x00000001,     ///<External clock monitor is enabled for OSC0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Cme0Val> cme0{}; 
        namespace Cme0ValC{
            constexpr Register::FieldValue<decltype(cme0)::Type,Cme0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(cme0)::Type,Cme0Val::v1> v1{};
        }
        ///PLL Select
        enum class PllsVal {
            v0=0x00000000,     ///<FLL is selected.
            v1=0x00000001,     ///<PLL is selected (PRDIV 0 need to be programmed to the correct divider to generate a PLL reference clock in the range of 2-4 MHz prior to setting the PLLS bit).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PllsVal> plls{}; 
        namespace PllsValC{
            constexpr Register::FieldValue<decltype(plls)::Type,PllsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(plls)::Type,PllsVal::v1> v1{};
        }
        ///Loss of Lock Interrrupt Enable
        enum class Lolie0Val {
            v0=0x00000000,     ///<No interrupt request is generated on loss of lock.
            v1=0x00000001,     ///<Generate an interrupt request on loss of lock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Lolie0Val> lolie0{}; 
        namespace Lolie0ValC{
            constexpr Register::FieldValue<decltype(lolie0)::Type,Lolie0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(lolie0)::Type,Lolie0Val::v1> v1{};
        }
    }
    namespace McgS{    ///<MCG Status Register
        using Addr = Register::Address<0x40064006,0xffffff00,0x00000000,std::uint8_t>;
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
            v11=0x00000003,     ///<Encoding 3 - Output of the PLL is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ClkstVal> clkst{}; 
        namespace ClkstValC{
            constexpr Register::FieldValue<decltype(clkst)::Type,ClkstVal::v00> v00{};
            constexpr Register::FieldValue<decltype(clkst)::Type,ClkstVal::v01> v01{};
            constexpr Register::FieldValue<decltype(clkst)::Type,ClkstVal::v10> v10{};
            constexpr Register::FieldValue<decltype(clkst)::Type,ClkstVal::v11> v11{};
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
        ///PLL Select Status
        enum class PllstVal {
            v0=0x00000000,     ///<Source of PLLS clock is FLL clock.
            v1=0x00000001,     ///<Source of PLLS clock is PLL output clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PllstVal> pllst{}; 
        namespace PllstValC{
            constexpr Register::FieldValue<decltype(pllst)::Type,PllstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pllst)::Type,PllstVal::v1> v1{};
        }
        ///Lock Status
        enum class Lock0Val {
            v0=0x00000000,     ///<PLL is currently unlocked.
            v1=0x00000001,     ///<PLL is currently locked.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Lock0Val> lock0{}; 
        namespace Lock0ValC{
            constexpr Register::FieldValue<decltype(lock0)::Type,Lock0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(lock0)::Type,Lock0Val::v1> v1{};
        }
        ///Loss of Lock Status
        enum class LolsVal {
            v0=0x00000000,     ///<PLL has not lost lock since LOLS 0 was last cleared.
            v1=0x00000001,     ///<PLL has lost lock since LOLS 0 was last cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LolsVal> lols{}; 
        namespace LolsValC{
            constexpr Register::FieldValue<decltype(lols)::Type,LolsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lols)::Type,LolsVal::v1> v1{};
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
        using Addr = Register::Address<0x4006400c,0xfffffffe,0x00000000,std::uint8_t>;
        ///MCG OSC Clock Select
        enum class OscselVal {
            v0=0x00000000,     ///<Selects System Oscillator (OSCCLK).
            v1=0x00000001,     ///<Selects 32 kHz RTC Oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OscselVal> oscsel{}; 
        namespace OscselValC{
            constexpr Register::FieldValue<decltype(oscsel)::Type,OscselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(oscsel)::Type,OscselVal::v1> v1{};
        }
    }
    namespace McgC8{    ///<MCG Control 8 Register
        using Addr = Register::Address<0x4006400d,0xffffff1e,0x00000000,std::uint8_t>;
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
        ///PLL Loss of Lock Reset Enable
        enum class LolreVal {
            v0=0x00000000,     ///<Interrupt request is generated on a PLL loss of lock indication. The PLL loss of lock interrupt enable bit must also be set to generate the interrupt request.
            v1=0x00000001,     ///<Generate a reset request on a PLL loss of lock indication.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,LolreVal> lolre{}; 
        namespace LolreValC{
            constexpr Register::FieldValue<decltype(lolre)::Type,LolreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lolre)::Type,LolreVal::v1> v1{};
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
    namespace McgC9{    ///<MCG Control 9 Register
        using Addr = Register::Address<0x4006400e,0xffffffff,0x00000000,std::uint8_t>;
    }
    namespace McgC10{    ///<MCG Control 10 Register
        using Addr = Register::Address<0x4006400f,0xffffffff,0x00000000,std::uint8_t>;
    }
}
