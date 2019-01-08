#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Mode Controller
    namespace PmcLvdsc1{    ///<Low Voltage Detect Status and Control 1 Register
        using Addr = Register::Address<0x4007d000,0xffffff0c,0x00000000,std::uint8_t>;
        ///Low-Voltage Detect Voltage Select
        enum class LvdvVal {
            v00=0x00000000,     ///<Low trip point selected (VLVD = VLVDL)
            v01=0x00000001,     ///<High trip point selected (VLVD = VLVDH)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,LvdvVal> lvdv{}; 
        namespace LvdvValC{
            constexpr Register::FieldValue<decltype(lvdv)::Type,LvdvVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lvdv)::Type,LvdvVal::v01> v01{};
        }
        ///Low-Voltage Detect Reset Enable
        enum class LvdreVal {
            v0=0x00000000,     ///<LVDF does not generate hardware resets
            v1=0x00000001,     ///<Force an MCU reset when LVDF = 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,LvdreVal> lvdre{}; 
        namespace LvdreValC{
            constexpr Register::FieldValue<decltype(lvdre)::Type,LvdreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvdre)::Type,LvdreVal::v1> v1{};
        }
        ///Low-Voltage Detect Interrupt Enable
        enum class LvdieVal {
            v0=0x00000000,     ///<Hardware interrupt disabled (use polling)
            v1=0x00000001,     ///<Request a hardware interrupt when LVDF = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,LvdieVal> lvdie{}; 
        namespace LvdieValC{
            constexpr Register::FieldValue<decltype(lvdie)::Type,LvdieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvdie)::Type,LvdieVal::v1> v1{};
        }
        ///Low-Voltage Detect Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvdack{}; 
        ///Low-Voltage Detect Flag
        enum class LvdfVal {
            v0=0x00000000,     ///<Low-voltage event not detected
            v1=0x00000001,     ///<Low-voltage event detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,LvdfVal> lvdf{}; 
        namespace LvdfValC{
            constexpr Register::FieldValue<decltype(lvdf)::Type,LvdfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvdf)::Type,LvdfVal::v1> v1{};
        }
    }
    namespace PmcLvdsc2{    ///<Low Voltage Detect Status and Control 2 Register
        using Addr = Register::Address<0x4007d001,0xffffff1c,0x00000000,std::uint8_t>;
        ///Low-Voltage Warning Voltage Select
        enum class LvwvVal {
            v00=0x00000000,     ///<Low trip point selected (VLVW = VLVW1H/L)
            v01=0x00000001,     ///<Mid 1 trip point selected (VLVW = VLVW2H/L)
            v10=0x00000002,     ///<Mid 2 trip point selected (VLVW = VLVW3H/L)
            v11=0x00000003,     ///<High trip point selected (VLVW = VLVW4H/L)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,LvwvVal> lvwv{}; 
        namespace LvwvValC{
            constexpr Register::FieldValue<decltype(lvwv)::Type,LvwvVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lvwv)::Type,LvwvVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lvwv)::Type,LvwvVal::v10> v10{};
            constexpr Register::FieldValue<decltype(lvwv)::Type,LvwvVal::v11> v11{};
        }
        ///Low-Voltage Warning Interrupt Enable
        enum class LvwieVal {
            v0=0x00000000,     ///<Hardware interrupt disabled (use polling)
            v1=0x00000001,     ///<Request a hardware interrupt when LVWF = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,LvwieVal> lvwie{}; 
        namespace LvwieValC{
            constexpr Register::FieldValue<decltype(lvwie)::Type,LvwieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvwie)::Type,LvwieVal::v1> v1{};
        }
        ///Low-Voltage Warning Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvwack{}; 
        ///Low-Voltage Warning Flag
        enum class LvwfVal {
            v0=0x00000000,     ///<Low-voltage warning event not detected
            v1=0x00000001,     ///<Low-voltage warning event detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,LvwfVal> lvwf{}; 
        namespace LvwfValC{
            constexpr Register::FieldValue<decltype(lvwf)::Type,LvwfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvwf)::Type,LvwfVal::v1> v1{};
        }
    }
    namespace PmcRegsc{    ///<Regulator Status and Control Register
        using Addr = Register::Address<0x4007d002,0xffffffe2,0x00000000,std::uint8_t>;
        ///Bandgap Buffer Enable
        enum class BgbeVal {
            v0=0x00000000,     ///<Bandgap buffer not enabled
            v1=0x00000001,     ///<Bandgap buffer enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BgbeVal> bgbe{}; 
        namespace BgbeValC{
            constexpr Register::FieldValue<decltype(bgbe)::Type,BgbeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bgbe)::Type,BgbeVal::v1> v1{};
        }
        ///Regulator in Run Regulation Status
        enum class RegonsVal {
            v0=0x00000000,     ///<Regulator is in stop regulation or in transition to/from it
            v1=0x00000001,     ///<Regulator is in run regulation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,RegonsVal> regons{}; 
        namespace RegonsValC{
            constexpr Register::FieldValue<decltype(regons)::Type,RegonsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(regons)::Type,RegonsVal::v1> v1{};
        }
        ///Very Low Power Run Status
        enum class VlprsVal {
            v0=0x00000000,     ///<MCU is not in VLPR mode
            v1=0x00000001,     ///<MCU is in VLPR mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,VlprsVal> vlprs{}; 
        namespace VlprsValC{
            constexpr Register::FieldValue<decltype(vlprs)::Type,VlprsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vlprs)::Type,VlprsVal::v1> v1{};
        }
        ///For devices with FlexNVM: Traditional RAM Power Option For devices with program flash only: Reserved
        enum class TrampoVal {
            v0=0x00000000,     ///<For devices with FlexNVM: Traditional RAM not powered in VLLS2 For devices with program flash only: No effect
            v1=0x00000001,     ///<For devices with FlexNVM: Traditional RAM powered in VLLS2 For devices with program flash only: No effect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrampoVal> trampo{}; 
        namespace TrampoValC{
            constexpr Register::FieldValue<decltype(trampo)::Type,TrampoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trampo)::Type,TrampoVal::v1> v1{};
        }
    }
}
