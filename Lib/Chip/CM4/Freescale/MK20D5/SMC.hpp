#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System Mode Controller
    namespace SmcPmprot{    ///<Power Mode Protection Register
        using Addr = Register::Address<0x4007e000,0xffffffd5,0x00000000,std::uint8_t>;
        ///Allow very low leakage stop mode
        enum class AvllsVal {
            v0=0x00000000,     ///<Any VLLSx mode is not allowed
            v1=0x00000001,     ///<Any VLLSx mode is allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AvllsVal> avlls{}; 
        namespace AvllsValC{
            constexpr Register::FieldValue<decltype(avlls)::Type,AvllsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avlls)::Type,AvllsVal::v1> v1{};
        }
        ///Allow low leakage stop mode
        enum class AllsVal {
            v0=0x00000000,     ///<LLS is not allowed
            v1=0x00000001,     ///<LLS is allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AllsVal> alls{}; 
        namespace AllsValC{
            constexpr Register::FieldValue<decltype(alls)::Type,AllsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(alls)::Type,AllsVal::v1> v1{};
        }
        ///Allow very low power modes
        enum class AvlpVal {
            v0=0x00000000,     ///<VLPR, VLPW and VLPS are not allowed
            v1=0x00000001,     ///<VLPR, VLPW and VLPS are allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AvlpVal> avlp{}; 
        namespace AvlpValC{
            constexpr Register::FieldValue<decltype(avlp)::Type,AvlpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avlp)::Type,AvlpVal::v1> v1{};
        }
    }
    namespace SmcPmctrl{    ///<Power Mode Control Register
        using Addr = Register::Address<0x4007e001,0xffffff10,0x00000000,std::uint8_t>;
        ///Stop Mode Control
        enum class StopmVal {
            v000=0x00000000,     ///<Normal stop (STOP)
            v010=0x00000002,     ///<Very low power stop (VLPS)
            v011=0x00000003,     ///<Low leakage stop (LLS)
            v100=0x00000004,     ///<Very low leakage stop (VLLSx)
            v110=0x00000006,     ///<Reseved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,StopmVal> stopm{}; 
        namespace StopmValC{
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v000> v000{};
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v010> v010{};
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v011> v011{};
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v100> v100{};
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v110> v110{};
        }
        ///Stop Aborted
        enum class StopaVal {
            v0=0x00000000,     ///<The previous stop mode entry was successsful.
            v1=0x00000001,     ///<The previous stop mode entry was aborted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,StopaVal> stopa{}; 
        namespace StopaValC{
            constexpr Register::FieldValue<decltype(stopa)::Type,StopaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stopa)::Type,StopaVal::v1> v1{};
        }
        ///Run Mode Control
        enum class RunmVal {
            v00=0x00000000,     ///<Normal run mode (RUN)
            v10=0x00000002,     ///<Very low power run mode (VLPR)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,RunmVal> runm{}; 
        namespace RunmValC{
            constexpr Register::FieldValue<decltype(runm)::Type,RunmVal::v00> v00{};
            constexpr Register::FieldValue<decltype(runm)::Type,RunmVal::v10> v10{};
        }
        ///Low Power Wake Up on Interrupt
        enum class LpwuiVal {
            v0=0x00000000,     ///<The system remains in a VLP mode on an interrupt
            v1=0x00000001,     ///<The system exits to normal RUN mode on an interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LpwuiVal> lpwui{}; 
        namespace LpwuiValC{
            constexpr Register::FieldValue<decltype(lpwui)::Type,LpwuiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpwui)::Type,LpwuiVal::v1> v1{};
        }
    }
    namespace SmcVllsctrl{    ///<VLLS Control Register
        using Addr = Register::Address<0x4007e002,0xffffffd8,0x00000000,std::uint8_t>;
        ///VLLS Mode Control.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> vllsm{}; 
        ///POR Power Option
        enum class PorpoVal {
            v0=0x00000000,     ///<POR detect circuit is enabled in VLLS0
            v1=0x00000001,     ///<POR detect circuit is disabled in VLLS0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,PorpoVal> porpo{}; 
        namespace PorpoValC{
            constexpr Register::FieldValue<decltype(porpo)::Type,PorpoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porpo)::Type,PorpoVal::v1> v1{};
        }
    }
    namespace SmcPmstat{    ///<Power Mode Status Register
        using Addr = Register::Address<0x4007e003,0xffffff80,0x00000000,std::uint8_t>;
        ///When debug is enabled, the PMSTAT will not update to STOP or VLPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pmstat{}; 
    }
}
