#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Digital Analog Converter
    namespace DacCtrla{    ///<Control A
        using Addr = Register::Address<0x42004800,0xfffffff8,0x00000000,std::uint8_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> runstdby{}; 
    }
    namespace DacCtrlb{    ///<Control B
        using Addr = Register::Address<0x42004801,0xffffff20,0x00000000,std::uint8_t>;
        ///External Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoen{}; 
        ///Internal Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ioen{}; 
        ///Left Adjusted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> leftadj{}; 
        ///Voltage Pump Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vpd{}; 
        ///Bypass DATABUF Write Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bdwp{}; 
        ///Reference Selection
        enum class RefselVal {
            int1v=0x00000000,     ///<Internal 1.0V reference
            avcc=0x00000001,     ///<AVCC
            vrefp=0x00000002,     ///<External reference
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,RefselVal> refsel{}; 
        namespace RefselValC{
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::int1v> int1v{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::avcc> avcc{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::vrefp> vrefp{};
        }
    }
    namespace DacData{    ///<Data
        using Addr = Register::Address<0x42004808,0xffff0000,0x00000000,std::uint16_t>;
        ///Data value to be converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace DacDatabuf{    ///<Data Buffer
        using Addr = Register::Address<0x4200480c,0xffff0000,0x00000000,std::uint16_t>;
        ///Data Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> databuf{}; 
    }
    namespace DacEvctrl{    ///<Event Control
        using Addr = Register::Address<0x42004802,0xfffffffc,0x00000000,std::uint8_t>;
        ///Start Conversion Event Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> startei{}; 
        ///Data Buffer Empty Event Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> emptyeo{}; 
    }
    namespace DacIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x42004804,0xfffffff8,0x00000000,std::uint8_t>;
        ///Underrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> underrun{}; 
        ///Data Buffer Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> empty{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> syncrdy{}; 
    }
    namespace DacIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x42004805,0xfffffff8,0x00000000,std::uint8_t>;
        ///Underrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> underrun{}; 
        ///Data Buffer Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> empty{}; 
        ///Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> syncrdy{}; 
    }
    namespace DacIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x42004806,0xfffffff8,0x00000000,std::uint8_t>;
        ///Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> underrun{}; 
        ///Data Buffer Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> empty{}; 
        ///Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> syncrdy{}; 
    }
    namespace DacStatus{    ///<Status
        using Addr = Register::Address<0x42004807,0xffffff7f,0x00000000,std::uint8_t>;
        ///Synchronization Busy Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> syncbusy{}; 
    }
}
