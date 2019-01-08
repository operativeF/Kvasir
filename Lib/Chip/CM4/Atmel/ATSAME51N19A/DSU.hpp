#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Device Service Unit
    namespace DsuCtrl{    ///<Control
        using Addr = Register::Address<0x41002000,0xffffff22,0x00000000,std::uint8_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///32-bit Cyclic Redundancy Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crc{}; 
        ///Memory built-in self-test
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mbist{}; 
        ///Chip-Erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ce{}; 
        ///Auxiliary Row Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> arr{}; 
        ///Start Memory Stream Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> smsa{}; 
    }
    namespace DsuStatusa{    ///<Status A
        using Addr = Register::Address<0x41002001,0xffffffe0,0x00000000,std::uint8_t>;
        ///Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> done{}; 
        ///CPU Reset Phase Extension
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crstext{}; 
        ///Bus Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> berr{}; 
        ///Failure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fail{}; 
        ///Protection Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> perr{}; 
    }
    namespace DsuStatusb{    ///<Status B
        using Addr = Register::Address<0x41002002,0xffffff00,0x00000000,std::uint8_t>;
        ///Protected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> prot{}; 
        ///Debugger Present
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dbgpres{}; 
        ///Debug Communication Channel 0 Dirty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dccd0{}; 
        ///Debug Communication Channel 1 Dirty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dccd1{}; 
        ///Hot-Plugging Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hpe{}; 
        ///Chip Erase Locked
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> celck{}; 
        ///Test Debug Communication Channel 0 Dirty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tdccd0{}; 
        ///Test Debug Communication Channel 1 Dirty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tdccd1{}; 
    }
    namespace DsuAddr{    ///<Address
        using Addr = Register::Address<0x41002004,0x00000000,0x00000000,std::uint32_t>;
        ///Access Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> amod{}; 
        ///Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace DsuLength{    ///<Length
        using Addr = Register::Address<0x41002008,0x00000003,0x00000000,std::uint32_t>;
        ///Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> length{}; 
    }
    namespace DsuData{    ///<Data
        using Addr = Register::Address<0x4100200c,0x00000000,0x00000000,std::uint32_t>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace DsuDid{    ///<Device Identification
        using Addr = Register::Address<0x41002018,0x00400000,0x00000000,std::uint32_t>;
        ///Device Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> devsel{}; 
        ///Revision Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> revision{}; 
        ///Die Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> die{}; 
        ///Series
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> series{}; 
        ///Family
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> family{}; 
        ///Processor
        enum class ProcessorVal {
            cm0p=0x00000001,     ///<Cortex-M0+
            cm23=0x00000002,     ///<Cortex-M23
            cm3=0x00000003,     ///<Cortex-M3
            cm4=0x00000005,     ///<Cortex-M4
            cm4f=0x00000006,     ///<Cortex-M4 with FPU
            cm33=0x00000007,     ///<Cortex-M33
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ProcessorVal> processor{}; 
        namespace ProcessorValC{
            constexpr Register::FieldValue<decltype(processor)::Type,ProcessorVal::cm0p> cm0p{};
            constexpr Register::FieldValue<decltype(processor)::Type,ProcessorVal::cm23> cm23{};
            constexpr Register::FieldValue<decltype(processor)::Type,ProcessorVal::cm3> cm3{};
            constexpr Register::FieldValue<decltype(processor)::Type,ProcessorVal::cm4> cm4{};
            constexpr Register::FieldValue<decltype(processor)::Type,ProcessorVal::cm4f> cm4f{};
            constexpr Register::FieldValue<decltype(processor)::Type,ProcessorVal::cm33> cm33{};
        }
    }
    namespace DsuCfg{    ///<Configuration
        using Addr = Register::Address<0x4100201c,0xffffffe0,0x00000000,std::uint32_t>;
        ///Latency Quality Of Service
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> lqos{}; 
        ///DMA Trigger Level
        enum class DccdmalevelVal {
            empty=0x00000000,     ///<Trigger rises when DCC is empty
            full=0x00000001,     ///<Trigger rises when DCC is full
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,DccdmalevelVal> dccdmalevel{}; 
        namespace DccdmalevelValC{
            constexpr Register::FieldValue<decltype(dccdmalevel)::Type,DccdmalevelVal::empty> empty{};
            constexpr Register::FieldValue<decltype(dccdmalevel)::Type,DccdmalevelVal::full> full{};
        }
        ///Trace Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> etbramen{}; 
    }
    namespace DsuEntry0{    ///<CoreSight ROM Table Entry 0
        using Addr = Register::Address<0x41003000,0x00000ffc,0x00000000,std::uint32_t>;
        ///Entry Present
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epres{}; 
        ///Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fmt{}; 
        ///Address Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> addoff{}; 
    }
    namespace DsuEntry1{    ///<CoreSight ROM Table Entry 1
        using Addr = Register::Address<0x41003004,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace DsuEnd{    ///<CoreSight ROM Table End
        using Addr = Register::Address<0x41003008,0x00000000,0x00000000,std::uint32_t>;
        ///End Marker
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> end{}; 
    }
    namespace DsuMemtype{    ///<CoreSight ROM Table Memory Type
        using Addr = Register::Address<0x41003fcc,0xfffffffe,0x00000000,std::uint32_t>;
        ///System Memory Present
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> smemp{}; 
    }
    namespace DsuPid4{    ///<Peripheral Identification 4
        using Addr = Register::Address<0x41003fd0,0xffffff00,0x00000000,std::uint32_t>;
        ///JEP-106 Continuation Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> jepcc{}; 
        ///4KB count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fkbc{}; 
    }
    namespace DsuPid5{    ///<Peripheral Identification 5
        using Addr = Register::Address<0x41003fd4,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace DsuPid6{    ///<Peripheral Identification 6
        using Addr = Register::Address<0x41003fd8,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace DsuPid7{    ///<Peripheral Identification 7
        using Addr = Register::Address<0x41003fdc,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace DsuPid0{    ///<Peripheral Identification 0
        using Addr = Register::Address<0x41003fe0,0xffffff00,0x00000000,std::uint32_t>;
        ///Part Number Low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> partnbl{}; 
    }
    namespace DsuPid1{    ///<Peripheral Identification 1
        using Addr = Register::Address<0x41003fe4,0xffffff00,0x00000000,std::uint32_t>;
        ///Part Number High
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> partnbh{}; 
        ///Low part of the JEP-106 Identity Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> jepidcl{}; 
    }
    namespace DsuPid2{    ///<Peripheral Identification 2
        using Addr = Register::Address<0x41003fe8,0xffffff00,0x00000000,std::uint32_t>;
        ///JEP-106 Identity Code High
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jepidch{}; 
        ///JEP-106 Identity Code is used
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> jepu{}; 
        ///Revision Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> revision{}; 
    }
    namespace DsuPid3{    ///<Peripheral Identification 3
        using Addr = Register::Address<0x41003fec,0xffffff00,0x00000000,std::uint32_t>;
        ///ARM CUSMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cusmod{}; 
        ///Revision Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> revand{}; 
    }
    namespace DsuCid0{    ///<Component Identification 0
        using Addr = Register::Address<0x41003ff0,0xffffff00,0x00000000,std::uint32_t>;
        ///Preamble Byte 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> preambleb0{}; 
    }
    namespace DsuCid1{    ///<Component Identification 1
        using Addr = Register::Address<0x41003ff4,0xffffff00,0x00000000,std::uint32_t>;
        ///Preamble
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> preamble{}; 
        ///Component Class
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cclass{}; 
    }
    namespace DsuCid2{    ///<Component Identification 2
        using Addr = Register::Address<0x41003ff8,0xffffff00,0x00000000,std::uint32_t>;
        ///Preamble Byte 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> preambleb2{}; 
    }
    namespace DsuCid3{    ///<Component Identification 3
        using Addr = Register::Address<0x41003ffc,0xffffff00,0x00000000,std::uint32_t>;
        ///Preamble Byte 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> preambleb3{}; 
    }
    namespace DsuDcc0{    ///<Debug Communication Channel n
        using Addr = Register::Address<0x41002010,0x00000000,0x00000000,std::uint32_t>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace DsuDcc1{    ///<Debug Communication Channel n
        using Addr = Register::Address<0x41002014,0x00000000,0x00000000,std::uint32_t>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace DsuDcfg0{    ///<Device Configuration
        using Addr = Register::Address<0x410020f0,0x00000000,0x00000000,std::uint32_t>;
        ///Device Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dcfg{}; 
    }
    namespace DsuDcfg1{    ///<Device Configuration
        using Addr = Register::Address<0x410020f4,0x00000000,0x00000000,std::uint32_t>;
        ///Device Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dcfg{}; 
    }
}
