#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Frequency Meter
    namespace FreqmCtrla{    ///<Control A Register
        using Addr = Register::Address<0x40002c00,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace FreqmCtrlb{    ///<Control B Register
        using Addr = Register::Address<0x40002c01,0xfffffffe,0x00000000,std::uint8_t>;
        ///Start Measurement
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> start{}; 
    }
    namespace FreqmCfga{    ///<Config A register
        using Addr = Register::Address<0x40002c02,0xffffff00,0x00000000,std::uint16_t>;
        ///Number of Reference Clock Cycles
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> refnum{}; 
    }
    namespace FreqmIntenclr{    ///<Interrupt Enable Clear Register
        using Addr = Register::Address<0x40002c08,0xfffffffe,0x00000000,std::uint8_t>;
        ///Measurement Done Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace FreqmIntenset{    ///<Interrupt Enable Set Register
        using Addr = Register::Address<0x40002c09,0xfffffffe,0x00000000,std::uint8_t>;
        ///Measurement Done Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace FreqmIntflag{    ///<Interrupt Flag Register
        using Addr = Register::Address<0x40002c0a,0xfffffffe,0x00000000,std::uint8_t>;
        ///Measurement Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace FreqmStatus{    ///<Status Register
        using Addr = Register::Address<0x40002c0b,0xfffffffc,0x00000000,std::uint8_t>;
        ///FREQM Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Sticky Count Value Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace FreqmSyncbusy{    ///<Synchronization Busy Register
        using Addr = Register::Address<0x40002c0c,0xfffffffc,0x00000000,std::uint32_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
    }
    namespace FreqmValue{    ///<Count Value Register
        using Addr = Register::Address<0x40002c10,0xff000000,0x00000000,std::uint32_t>;
        ///Measurement Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> value{}; 
    }
}
