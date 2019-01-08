#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Supply Controller
    namespace SupcIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x40001800,0xfffffac0,0x00000000,std::uint32_t>;
        ///BOD33 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bod33rdy{}; 
        ///BOD33 Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bod33det{}; 
        ///BOD33 Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> b33srdy{}; 
        ///BOD12 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bod12rdy{}; 
        ///BOD12 Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bod12det{}; 
        ///BOD12 Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> b12srdy{}; 
        ///Voltage Regulator Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vregrdy{}; 
        ///VDDCORE Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vcorerdy{}; 
    }
    namespace SupcIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x40001804,0xfffffac0,0x00000000,std::uint32_t>;
        ///BOD33 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bod33rdy{}; 
        ///BOD33 Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bod33det{}; 
        ///BOD33 Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> b33srdy{}; 
        ///BOD12 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bod12rdy{}; 
        ///BOD12 Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bod12det{}; 
        ///BOD12 Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> b12srdy{}; 
        ///Voltage Regulator Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vregrdy{}; 
        ///VDDCORE Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vcorerdy{}; 
    }
    namespace SupcIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40001808,0xfffffac0,0x00000000,std::uint32_t>;
        ///BOD33 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bod33rdy{}; 
        ///BOD33 Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bod33det{}; 
        ///BOD33 Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> b33srdy{}; 
        ///BOD12 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bod12rdy{}; 
        ///BOD12 Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bod12det{}; 
        ///BOD12 Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> b12srdy{}; 
        ///Voltage Regulator Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vregrdy{}; 
        ///VDDCORE Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vcorerdy{}; 
    }
    namespace SupcStatus{    ///<Power and Clocks Status
        using Addr = Register::Address<0x4000180c,0xfffffac0,0x00000000,std::uint32_t>;
        ///BOD33 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bod33rdy{}; 
        ///BOD33 Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bod33det{}; 
        ///BOD33 Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> b33srdy{}; 
        ///BOD12 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bod12rdy{}; 
        ///BOD12 Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bod12det{}; 
        ///BOD12 Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> b12srdy{}; 
        ///Voltage Regulator Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vregrdy{}; 
        ///VDDCORE Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vcorerdy{}; 
    }
    namespace SupcBod33{    ///<BOD33 Control
        using Addr = Register::Address<0x40001810,0x00008001,0x00000000,std::uint32_t>;
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Action when Threshold Crossed
        enum class ActionVal {
            none=0x00000000,     ///<No action
            reset=0x00000001,     ///<The BOD33 generates a reset
            int_=0x00000002,     ///<The BOD33 generates an interrupt
            bkup=0x00000003,     ///<The BOD33 puts the device in backup sleep mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,ActionVal> action{}; 
        namespace ActionValC{
            constexpr Register::FieldValue<decltype(action)::Type,ActionVal::none> none{};
            constexpr Register::FieldValue<decltype(action)::Type,ActionVal::reset> reset{};
            constexpr Register::FieldValue<decltype(action)::Type,ActionVal::int_> int_{};
            constexpr Register::FieldValue<decltype(action)::Type,ActionVal::bkup> bkup{};
        }
        ///Configuration in Standby mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> stdbycfg{}; 
        ///Run in Standby mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Run in Hibernate mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runhib{}; 
        ///Run in Backup mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> runbkup{}; 
        ///Hysteresis value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> hyst{}; 
        ///Prescaler Select
        enum class PselVal {
            nodiv=0x00000000,     ///<Not divided
            div4=0x00000001,     ///<Divide clock by 4
            div8=0x00000002,     ///<Divide clock by 8
            div16=0x00000003,     ///<Divide clock by 16
            div32=0x00000004,     ///<Divide clock by 32
            div64=0x00000005,     ///<Divide clock by 64
            div128=0x00000006,     ///<Divide clock by 128
            div256=0x00000007,     ///<Divide clock by 256
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,PselVal> psel{}; 
        namespace PselValC{
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::nodiv> nodiv{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div4> div4{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div8> div8{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div16> div16{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div32> div32{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div64> div64{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div128> div128{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div256> div256{};
        }
        ///Threshold Level for VDD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> level{}; 
        ///Threshold Level in battery backup sleep mode for VBAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> vbatlevel{}; 
    }
    namespace SupcBod12{    ///<BOD12 Control
        using Addr = Register::Address<0x40001814,0xffc00e81,0x00000000,std::uint32_t>;
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Hysteresis Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hyst{}; 
        ///Action when Threshold Crossed
        enum class ActionVal {
            none=0x00000000,     ///<No action
            reset=0x00000001,     ///<The BOD12 generates a reset
            int_=0x00000002,     ///<The BOD12 generates an interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ActionVal> action{}; 
        namespace ActionValC{
            constexpr Register::FieldValue<decltype(action)::Type,ActionVal::none> none{};
            constexpr Register::FieldValue<decltype(action)::Type,ActionVal::reset> reset{};
            constexpr Register::FieldValue<decltype(action)::Type,ActionVal::int_> int_{};
        }
        ///Configuration in Standby mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stdbycfg{}; 
        ///Run during Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Configuration in Active mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> actcfg{}; 
        ///Prescaler Select
        enum class PselVal {
            div2=0x00000000,     ///<Divide clock by 2
            div4=0x00000001,     ///<Divide clock by 4
            div8=0x00000002,     ///<Divide clock by 8
            div16=0x00000003,     ///<Divide clock by 16
            div32=0x00000004,     ///<Divide clock by 32
            div64=0x00000005,     ///<Divide clock by 64
            div128=0x00000006,     ///<Divide clock by 128
            div256=0x00000007,     ///<Divide clock by 256
            div512=0x00000008,     ///<Divide clock by 512
            div1024=0x00000009,     ///<Divide clock by 1024
            div2048=0x0000000a,     ///<Divide clock by 2048
            div4096=0x0000000b,     ///<Divide clock by 4096
            div8192=0x0000000c,     ///<Divide clock by 8192
            div16384=0x0000000d,     ///<Divide clock by 16384
            div32768=0x0000000e,     ///<Divide clock by 32768
            div65536=0x0000000f,     ///<Divide clock by 65536
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,PselVal> psel{}; 
        namespace PselValC{
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div2> div2{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div4> div4{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div8> div8{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div16> div16{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div32> div32{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div64> div64{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div128> div128{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div256> div256{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div512> div512{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div1024> div1024{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div2048> div2048{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div4096> div4096{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div8192> div8192{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div16384> div16384{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div32768> div32768{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::div65536> div65536{};
        }
        ///Threshold Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> level{}; 
    }
    namespace SupcVreg{    ///<VREG Control
        using Addr = Register::Address<0x40001818,0xf8feff79,0x00000000,std::uint32_t>;
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Voltage Regulator Selection
        enum class SelVal {
            ldo=0x00000000,     ///<LDO selection
            buck=0x00000001,     ///<Buck selection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ldo> ldo{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::buck> buck{};
        }
        ///Run in Backup mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> runbkup{}; 
        ///Voltage Scaling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> vsen{}; 
        ///Voltage Scaling Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> vsper{}; 
    }
    namespace SupcVref{    ///<VREF Control
        using Addr = Register::Address<0x4000181c,0xfff0ff31,0x00000000,std::uint32_t>;
        ///Temperature Sensor Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tsen{}; 
        ///Voltage Reference Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vrefoe{}; 
        ///Temperature Sensor Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tssel{}; 
        ///Run during Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///On Demand Contrl
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
        ///Voltage Reference Selection
        enum class SelVal {
            v1v0=0x00000000,     ///<1.0V voltage reference typical value
            v1v1=0x00000001,     ///<1.1V voltage reference typical value
            v1v2=0x00000002,     ///<1.2V voltage reference typical value
            v1v25=0x00000003,     ///<1.25V voltage reference typical value
            v2v0=0x00000004,     ///<2.0V voltage reference typical value
            v2v2=0x00000005,     ///<2.2V voltage reference typical value
            v2v4=0x00000006,     ///<2.4V voltage reference typical value
            v2v5=0x00000007,     ///<2.5V voltage reference typical value
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::v1v0> v1v0{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::v1v1> v1v1{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::v1v2> v1v2{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::v1v25> v1v25{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::v2v0> v2v0{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::v2v2> v2v2{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::v2v4> v2v4{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::v2v5> v2v5{};
        }
    }
    namespace SupcBbps{    ///<Battery Backup Power Switch
        using Addr = Register::Address<0x40001820,0xfffffffa,0x00000000,std::uint32_t>;
        ///Battery Backup Configuration
        enum class ConfVal {
            bod33=0x00000000,     ///<The power switch is handled by the BOD33
            forced=0x00000001,     ///<In Backup Domain, the backup domain is always supplied by battery backup power
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ConfVal> conf{}; 
        namespace ConfValC{
            constexpr Register::FieldValue<decltype(conf)::Type,ConfVal::bod33> bod33{};
            constexpr Register::FieldValue<decltype(conf)::Type,ConfVal::forced> forced{};
        }
        ///Wake Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeen{}; 
    }
    namespace SupcBkout{    ///<Backup Output Control
        using Addr = Register::Address<0x40001824,0xfcfcfcfc,0x00000000,std::uint32_t>;
        ///Enable Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Clear Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clr{}; 
        ///Set Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> set{}; 
        ///RTC Toggle Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> rtctgl{}; 
    }
    namespace SupcBkin{    ///<Backup Input Control
        using Addr = Register::Address<0x40001828,0xffffff00,0x00000000,std::uint32_t>;
        ///Backup Input Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bkin{}; 
    }
}
