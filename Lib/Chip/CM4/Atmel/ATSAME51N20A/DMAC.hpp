#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Direct Memory Access Controller
    namespace DmacCtrl{    ///<Control
        using Addr = Register::Address<0x4100a000,0xfffff0fc,0x00000000,std::uint16_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///DMA Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmaenable{}; 
        ///Priority Level 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lvlen0{}; 
        ///Priority Level 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lvlen1{}; 
        ///Priority Level 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lvlen2{}; 
        ///Priority Level 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lvlen3{}; 
    }
    namespace DmacCrcctrl{    ///<CRC Control
        using Addr = Register::Address<0x4100a002,0xffff00f0,0x00000000,std::uint16_t>;
        ///CRC Beat Size
        enum class CrcbeatsizeVal {
            byte=0x00000000,     ///<8-bit bus transfer
            hword=0x00000001,     ///<16-bit bus transfer
            word=0x00000002,     ///<32-bit bus transfer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CrcbeatsizeVal> crcbeatsize{}; 
        namespace CrcbeatsizeValC{
            constexpr Register::FieldValue<decltype(crcbeatsize)::Type,CrcbeatsizeVal::byte> byte{};
            constexpr Register::FieldValue<decltype(crcbeatsize)::Type,CrcbeatsizeVal::hword> hword{};
            constexpr Register::FieldValue<decltype(crcbeatsize)::Type,CrcbeatsizeVal::word> word{};
        }
        ///CRC Polynomial Type
        enum class CrcpolyVal {
            crc16=0x00000000,     ///<CRC-16 (CRC-CCITT)
            crc32=0x00000001,     ///<CRC32 (IEEE 802.3)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,CrcpolyVal> crcpoly{}; 
        namespace CrcpolyValC{
            constexpr Register::FieldValue<decltype(crcpoly)::Type,CrcpolyVal::crc16> crc16{};
            constexpr Register::FieldValue<decltype(crcpoly)::Type,CrcpolyVal::crc32> crc32{};
        }
        ///CRC Input Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> crcsrc{}; 
        ///CRC Operating Mode
        enum class CrcmodeVal {
            default_=0x00000000,     ///<Default operating mode
            crcmon=0x00000002,     ///<Memory CRC monitor operating mode
            crcgen=0x00000003,     ///<Memory CRC generation operating mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,CrcmodeVal> crcmode{}; 
        namespace CrcmodeValC{
            constexpr Register::FieldValue<decltype(crcmode)::Type,CrcmodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(crcmode)::Type,CrcmodeVal::crcmon> crcmon{};
            constexpr Register::FieldValue<decltype(crcmode)::Type,CrcmodeVal::crcgen> crcgen{};
        }
    }
    namespace DmacCrcdatain{    ///<CRC Data Input
        using Addr = Register::Address<0x4100a004,0x00000000,0x00000000,std::uint32_t>;
        ///CRC Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcdatain{}; 
    }
    namespace DmacCrcchksum{    ///<CRC Checksum
        using Addr = Register::Address<0x4100a008,0x00000000,0x00000000,std::uint32_t>;
        ///CRC Checksum
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcchksum{}; 
    }
    namespace DmacCrcstatus{    ///<CRC Status
        using Addr = Register::Address<0x4100a00c,0xfffffff8,0x00000000,std::uint8_t>;
        ///CRC Module Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crcbusy{}; 
        ///CRC Zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crczero{}; 
        ///CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crcerr{}; 
    }
    namespace DmacDbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4100a00d,0xfffffffe,0x00000000,std::uint8_t>;
        ///Debug Run
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace DmacSwtrigctrl{    ///<Software Trigger Control
        using Addr = Register::Address<0x4100a010,0x00000000,0x00000000,std::uint32_t>;
        ///Channel 0 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swtrig0{}; 
        ///Channel 1 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig1{}; 
        ///Channel 2 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swtrig2{}; 
        ///Channel 3 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> swtrig3{}; 
        ///Channel 4 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> swtrig4{}; 
        ///Channel 5 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> swtrig5{}; 
        ///Channel 6 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> swtrig6{}; 
        ///Channel 7 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swtrig7{}; 
        ///Channel 8 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swtrig8{}; 
        ///Channel 9 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> swtrig9{}; 
        ///Channel 10 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> swtrig10{}; 
        ///Channel 11 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> swtrig11{}; 
        ///Channel 12 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> swtrig12{}; 
        ///Channel 13 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> swtrig13{}; 
        ///Channel 14 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> swtrig14{}; 
        ///Channel 15 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swtrig15{}; 
        ///Channel 16 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> swtrig16{}; 
        ///Channel 17 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> swtrig17{}; 
        ///Channel 18 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> swtrig18{}; 
        ///Channel 19 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> swtrig19{}; 
        ///Channel 20 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> swtrig20{}; 
        ///Channel 21 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> swtrig21{}; 
        ///Channel 22 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> swtrig22{}; 
        ///Channel 23 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> swtrig23{}; 
        ///Channel 24 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> swtrig24{}; 
        ///Channel 25 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> swtrig25{}; 
        ///Channel 26 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> swtrig26{}; 
        ///Channel 27 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> swtrig27{}; 
        ///Channel 28 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> swtrig28{}; 
        ///Channel 29 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> swtrig29{}; 
        ///Channel 30 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swtrig30{}; 
        ///Channel 31 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> swtrig31{}; 
    }
    namespace DmacPrictrl0{    ///<Priority Control 0
        using Addr = Register::Address<0x4100a014,0x00000000,0x00000000,std::uint32_t>;
        ///Level 0 Channel Priority Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> lvlpri0{}; 
        ///Level 0 Quality of Service
        enum class Qos0Val {
            regular=0x00000000,     ///<Regular delivery
            shortage=0x00000001,     ///<Bandwidth shortage
            sensitive=0x00000002,     ///<Latency sensitive
            critical=0x00000003,     ///<Latency critical
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,Qos0Val> qos0{}; 
        namespace Qos0ValC{
            constexpr Register::FieldValue<decltype(qos0)::Type,Qos0Val::regular> regular{};
            constexpr Register::FieldValue<decltype(qos0)::Type,Qos0Val::shortage> shortage{};
            constexpr Register::FieldValue<decltype(qos0)::Type,Qos0Val::sensitive> sensitive{};
            constexpr Register::FieldValue<decltype(qos0)::Type,Qos0Val::critical> critical{};
        }
        ///Level 0 Round-Robin Scheduling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rrlvlen0{}; 
        ///Level 1 Channel Priority Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> lvlpri1{}; 
        ///Level 1 Quality of Service
        enum class Qos1Val {
            regular=0x00000000,     ///<Regular delivery
            shortage=0x00000001,     ///<Bandwidth shortage
            sensitive=0x00000002,     ///<Latency sensitive
            critical=0x00000003,     ///<Latency critical
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,Qos1Val> qos1{}; 
        namespace Qos1ValC{
            constexpr Register::FieldValue<decltype(qos1)::Type,Qos1Val::regular> regular{};
            constexpr Register::FieldValue<decltype(qos1)::Type,Qos1Val::shortage> shortage{};
            constexpr Register::FieldValue<decltype(qos1)::Type,Qos1Val::sensitive> sensitive{};
            constexpr Register::FieldValue<decltype(qos1)::Type,Qos1Val::critical> critical{};
        }
        ///Level 1 Round-Robin Scheduling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rrlvlen1{}; 
        ///Level 2 Channel Priority Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> lvlpri2{}; 
        ///Level 2 Quality of Service
        enum class Qos2Val {
            regular=0x00000000,     ///<Regular delivery
            shortage=0x00000001,     ///<Bandwidth shortage
            sensitive=0x00000002,     ///<Latency sensitive
            critical=0x00000003,     ///<Latency critical
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,Qos2Val> qos2{}; 
        namespace Qos2ValC{
            constexpr Register::FieldValue<decltype(qos2)::Type,Qos2Val::regular> regular{};
            constexpr Register::FieldValue<decltype(qos2)::Type,Qos2Val::shortage> shortage{};
            constexpr Register::FieldValue<decltype(qos2)::Type,Qos2Val::sensitive> sensitive{};
            constexpr Register::FieldValue<decltype(qos2)::Type,Qos2Val::critical> critical{};
        }
        ///Level 2 Round-Robin Scheduling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rrlvlen2{}; 
        ///Level 3 Channel Priority Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> lvlpri3{}; 
        ///Level 3 Quality of Service
        enum class Qos3Val {
            regular=0x00000000,     ///<Regular delivery
            shortage=0x00000001,     ///<Bandwidth shortage
            sensitive=0x00000002,     ///<Latency sensitive
            critical=0x00000003,     ///<Latency critical
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,Qos3Val> qos3{}; 
        namespace Qos3ValC{
            constexpr Register::FieldValue<decltype(qos3)::Type,Qos3Val::regular> regular{};
            constexpr Register::FieldValue<decltype(qos3)::Type,Qos3Val::shortage> shortage{};
            constexpr Register::FieldValue<decltype(qos3)::Type,Qos3Val::sensitive> sensitive{};
            constexpr Register::FieldValue<decltype(qos3)::Type,Qos3Val::critical> critical{};
        }
        ///Level 3 Round-Robin Scheduling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> rrlvlen3{}; 
    }
    namespace DmacIntpend{    ///<Interrupt Pending
        using Addr = Register::Address<0x4100a020,0xffff08e0,0x00000000,std::uint16_t>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> id{}; 
        ///Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> susp{}; 
        ///CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crcerr{}; 
        ///Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
    }
    namespace DmacIntstatus{    ///<Interrupt Status
        using Addr = Register::Address<0x4100a024,0x00000000,0x00000000,std::uint32_t>;
        ///Channel 0 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint0{}; 
        ///Channel 1 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint1{}; 
        ///Channel 2 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint2{}; 
        ///Channel 3 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint3{}; 
        ///Channel 4 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint4{}; 
        ///Channel 5 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint5{}; 
        ///Channel 6 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint6{}; 
        ///Channel 7 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint7{}; 
        ///Channel 8 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint8{}; 
        ///Channel 9 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint9{}; 
        ///Channel 10 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint10{}; 
        ///Channel 11 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint11{}; 
        ///Channel 12 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint12{}; 
        ///Channel 13 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint13{}; 
        ///Channel 14 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint14{}; 
        ///Channel 15 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint15{}; 
        ///Channel 16 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint16{}; 
        ///Channel 17 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint17{}; 
        ///Channel 18 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint18{}; 
        ///Channel 19 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint19{}; 
        ///Channel 20 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint20{}; 
        ///Channel 21 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint21{}; 
        ///Channel 22 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint22{}; 
        ///Channel 23 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint23{}; 
        ///Channel 24 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint24{}; 
        ///Channel 25 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint25{}; 
        ///Channel 26 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint26{}; 
        ///Channel 27 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint27{}; 
        ///Channel 28 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint28{}; 
        ///Channel 29 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint29{}; 
        ///Channel 30 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint30{}; 
        ///Channel 31 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint31{}; 
    }
    namespace DmacBusych{    ///<Busy Channels
        using Addr = Register::Address<0x4100a028,0x00000000,0x00000000,std::uint32_t>;
        ///Busy Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych0{}; 
        ///Busy Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych1{}; 
        ///Busy Channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych2{}; 
        ///Busy Channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych3{}; 
        ///Busy Channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych4{}; 
        ///Busy Channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych5{}; 
        ///Busy Channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych6{}; 
        ///Busy Channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych7{}; 
        ///Busy Channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych8{}; 
        ///Busy Channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych9{}; 
        ///Busy Channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych10{}; 
        ///Busy Channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych11{}; 
        ///Busy Channel 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych12{}; 
        ///Busy Channel 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych13{}; 
        ///Busy Channel 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych14{}; 
        ///Busy Channel 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych15{}; 
        ///Busy Channel 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych16{}; 
        ///Busy Channel 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych17{}; 
        ///Busy Channel 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych18{}; 
        ///Busy Channel 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych19{}; 
        ///Busy Channel 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych20{}; 
        ///Busy Channel 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych21{}; 
        ///Busy Channel 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych22{}; 
        ///Busy Channel 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych23{}; 
        ///Busy Channel 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych24{}; 
        ///Busy Channel 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych25{}; 
        ///Busy Channel 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych26{}; 
        ///Busy Channel 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych27{}; 
        ///Busy Channel 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych28{}; 
        ///Busy Channel 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych29{}; 
        ///Busy Channel 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych30{}; 
        ///Busy Channel 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych31{}; 
    }
    namespace DmacPendch{    ///<Pending Channels
        using Addr = Register::Address<0x4100a02c,0x00000000,0x00000000,std::uint32_t>;
        ///Pending Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch0{}; 
        ///Pending Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch1{}; 
        ///Pending Channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch2{}; 
        ///Pending Channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch3{}; 
        ///Pending Channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch4{}; 
        ///Pending Channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch5{}; 
        ///Pending Channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch6{}; 
        ///Pending Channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch7{}; 
        ///Pending Channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch8{}; 
        ///Pending Channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch9{}; 
        ///Pending Channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch10{}; 
        ///Pending Channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch11{}; 
        ///Pending Channel 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch12{}; 
        ///Pending Channel 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch13{}; 
        ///Pending Channel 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch14{}; 
        ///Pending Channel 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch15{}; 
        ///Pending Channel 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch16{}; 
        ///Pending Channel 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch17{}; 
        ///Pending Channel 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch18{}; 
        ///Pending Channel 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch19{}; 
        ///Pending Channel 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch20{}; 
        ///Pending Channel 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch21{}; 
        ///Pending Channel 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch22{}; 
        ///Pending Channel 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch23{}; 
        ///Pending Channel 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch24{}; 
        ///Pending Channel 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch25{}; 
        ///Pending Channel 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch26{}; 
        ///Pending Channel 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch27{}; 
        ///Pending Channel 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch28{}; 
        ///Pending Channel 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch29{}; 
        ///Pending Channel 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch30{}; 
        ///Pending Channel 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch31{}; 
    }
    namespace DmacActive{    ///<Active Channel and Levels
        using Addr = Register::Address<0x4100a030,0x000060f0,0x00000000,std::uint32_t>;
        ///Level 0 Channel Trigger Request Executing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvlex0{}; 
        ///Level 1 Channel Trigger Request Executing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvlex1{}; 
        ///Level 2 Channel Trigger Request Executing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvlex2{}; 
        ///Level 3 Channel Trigger Request Executing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvlex3{}; 
        ///Active Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> id{}; 
        ///Active Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> abusy{}; 
        ///Active Channel Block Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btcnt{}; 
    }
    namespace DmacBaseaddr{    ///<Descriptor Memory Section Base Address
        using Addr = Register::Address<0x4100a034,0x00000000,0x00000000,std::uint32_t>;
        ///Descriptor Memory Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> baseaddr{}; 
    }
    namespace DmacWrbaddr{    ///<Write-Back Memory Section Base Address
        using Addr = Register::Address<0x4100a038,0x00000000,0x00000000,std::uint32_t>;
        ///Write-Back Memory Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrbaddr{}; 
    }
    namespace DmacChctrla0{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a040,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla1{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a050,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla2{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a060,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla3{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a070,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla4{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a080,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla5{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a090,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla6{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a0a0,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla7{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a0b0,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla8{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a0c0,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla9{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a0d0,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla10{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a0e0,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla11{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a0f0,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla12{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a100,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla13{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a110,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla14{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a120,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla15{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a130,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla16{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a140,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla17{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a150,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla18{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a160,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla19{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a170,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla20{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a180,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla21{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a190,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla22{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a1a0,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla23{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a1b0,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla24{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a1c0,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla25{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a1d0,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla26{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a1e0,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla27{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a1f0,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla28{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a200,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla29{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a210,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla30{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a220,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrla31{    ///<Channel n Control A
        using Addr = Register::Address<0x4100a230,0xc0cf80bc,0x00000000,std::uint32_t>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Channel Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            burst=0x00000002,     ///<One trigger required for each burst transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::burst> burst{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Burst Length
        enum class BurstlenVal {
            single=0x00000000,     ///<Single-beat burst length
            v2beat=0x00000001,     ///<2-beats burst length
            v3beat=0x00000002,     ///<3-beats burst length
            v4beat=0x00000003,     ///<4-beats burst length
            v5beat=0x00000004,     ///<5-beats burst length
            v6beat=0x00000005,     ///<6-beats burst length
            v7beat=0x00000006,     ///<7-beats burst length
            v8beat=0x00000007,     ///<8-beats burst length
            v9beat=0x00000008,     ///<9-beats burst length
            v10beat=0x00000009,     ///<10-beats burst length
            v11beat=0x0000000a,     ///<11-beats burst length
            v12beat=0x0000000b,     ///<12-beats burst length
            v13beat=0x0000000c,     ///<13-beats burst length
            v14beat=0x0000000d,     ///<14-beats burst length
            v15beat=0x0000000e,     ///<15-beats burst length
            v16beat=0x0000000f,     ///<16-beats burst length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,BurstlenVal> burstlen{}; 
        namespace BurstlenValC{
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::single> single{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v2beat> v2beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v3beat> v3beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v4beat> v4beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v5beat> v5beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v6beat> v6beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v7beat> v7beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v8beat> v8beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v9beat> v9beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v10beat> v10beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v11beat> v11beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v12beat> v12beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v13beat> v13beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v14beat> v14beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v15beat> v15beat{};
            constexpr Register::FieldValue<decltype(burstlen)::Type,BurstlenVal::v16beat> v16beat{};
        }
        ///FIFO Threshold
        enum class ThresholdVal {
            v1beat=0x00000000,     ///<Destination write starts after each beat source address read
            v2beats=0x00000001,     ///<Destination write starts after 2-beats source address read
            v4beats=0x00000002,     ///<Destination write starts after 4-beats source address read
            v8beats=0x00000003,     ///<Destination write starts after 8-beats source address read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,ThresholdVal> threshold{}; 
        namespace ThresholdValC{
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v1beat> v1beat{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v2beats> v2beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v4beats> v4beats{};
            constexpr Register::FieldValue<decltype(threshold)::Type,ThresholdVal::v8beats> v8beats{};
        }
    }
    namespace DmacChctrlb0{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a044,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb1{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a054,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb2{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a064,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb3{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a074,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb4{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a084,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb5{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a094,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb6{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a0a4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb7{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a0b4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb8{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a0c4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb9{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a0d4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb10{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a0e4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb11{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a0f4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb12{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a104,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb13{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a114,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb14{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a124,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb15{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a134,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb16{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a144,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb17{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a154,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb18{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a164,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb19{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a174,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb20{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a184,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb21{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a194,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb22{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a1a4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb23{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a1b4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb24{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a1c4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb25{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a1d4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb26{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a1e4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb27{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a1f4,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb28{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a204,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb29{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a214,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb30{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a224,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChctrlb31{    ///<Channel n Control B
        using Addr = Register::Address<0x4100a234,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChprilvl0{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a045,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl1{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a055,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl2{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a065,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl3{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a075,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl4{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a085,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl5{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a095,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl6{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a0a5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl7{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a0b5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl8{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a0c5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl9{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a0d5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl10{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a0e5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl11{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a0f5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl12{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a105,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl13{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a115,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl14{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a125,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl15{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a135,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl16{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a145,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl17{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a155,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl18{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a165,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl19{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a175,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl20{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a185,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl21{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a195,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl22{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a1a5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl23{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a1b5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl24{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a1c5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl25{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a1d5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl26{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a1e5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl27{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a1f5,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl28{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a205,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl29{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a215,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl30{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a225,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChprilvl31{    ///<Channel n Priority Level
        using Addr = Register::Address<0x4100a235,0xfffffffc,0x00000000,std::uint8_t>;
        ///Channel Priority Level
        enum class PrilvlVal {
            lvl0=0x00000000,     ///<Channel Priority Level 0 (Lowest Level)
            lvl1=0x00000001,     ///<Channel Priority Level 1
            lvl2=0x00000002,     ///<Channel Priority Level 2
            lvl3=0x00000003,     ///<Channel Priority Level 3
            lvl4=0x00000004,     ///<Channel Priority Level 4
            lvl5=0x00000005,     ///<Channel Priority Level 5
            lvl6=0x00000006,     ///<Channel Priority Level 6
            lvl7=0x00000007,     ///<Channel Priority Level 7 (Highest Level)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PrilvlVal> prilvl{}; 
        namespace PrilvlValC{
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl0> lvl0{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl1> lvl1{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl2> lvl2{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl3> lvl3{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl4> lvl4{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl5> lvl5{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl6> lvl6{};
            constexpr Register::FieldValue<decltype(prilvl)::Type,PrilvlVal::lvl7> lvl7{};
        }
    }
    namespace DmacChevctrl0{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a046,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl1{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a056,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl2{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a066,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl3{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a076,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl4{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a086,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl5{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a096,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl6{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a0a6,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl7{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a0b6,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl8{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a0c6,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl9{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a0d6,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl10{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a0e6,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl11{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a0f6,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl12{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a106,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl13{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a116,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl14{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a126,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl15{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a136,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl16{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a146,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl17{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a156,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl18{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a166,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl19{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a176,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl20{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a186,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl21{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a196,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl22{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a1a6,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl23{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a1b6,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl24{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a1c6,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl25{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a1d6,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl26{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a1e6,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl27{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a1f6,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl28{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a206,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl29{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a216,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl30{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a226,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChevctrl31{    ///<Channel n Event Control
        using Addr = Register::Address<0x4100a236,0xffffff08,0x00000000,std::uint8_t>;
        ///Channel Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
            incpri=0x00000007,     ///<Increase priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::incpri> incpri{};
        }
        ///Channel Event Output Mode
        enum class EvomodeVal {
            default_=0x00000000,     ///<Block event output selection. Refer to BTCTRL.EVOSEL for available selections.
            trigact=0x00000001,     ///<Ongoing trigger action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EvomodeVal> evomode{}; 
        namespace EvomodeValC{
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::default_> default_{};
            constexpr Register::FieldValue<decltype(evomode)::Type,EvomodeVal::trigact> trigact{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
    }
    namespace DmacChintenclr0{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a04c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr1{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a05c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr2{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a06c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr3{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a07c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr4{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a08c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr5{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a09c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr6{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a0ac,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr7{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a0bc,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr8{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a0cc,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr9{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a0dc,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr10{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a0ec,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr11{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a0fc,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr12{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a10c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr13{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a11c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr14{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a12c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr15{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a13c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr16{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a14c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr17{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a15c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr18{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a16c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr19{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a17c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr20{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a18c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr21{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a19c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr22{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a1ac,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr23{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a1bc,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr24{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a1cc,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr25{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a1dc,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr26{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a1ec,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr27{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a1fc,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr28{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a20c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr29{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a21c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr30{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a22c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenclr31{    ///<Channel n Interrupt Enable Clear
        using Addr = Register::Address<0x4100a23c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset0{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a04d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset1{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a05d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset2{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a06d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset3{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a07d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset4{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a08d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset5{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a09d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset6{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a0ad,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset7{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a0bd,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset8{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a0cd,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset9{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a0dd,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset10{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a0ed,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset11{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a0fd,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset12{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a10d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset13{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a11d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset14{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a12d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset15{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a13d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset16{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a14d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset17{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a15d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset18{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a16d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset19{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a17d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset20{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a18d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset21{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a19d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset22{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a1ad,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset23{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a1bd,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset24{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a1cd,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset25{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a1dd,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset26{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a1ed,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset27{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a1fd,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset28{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a20d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset29{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a21d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset30{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a22d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset31{    ///<Channel n Interrupt Enable Set
        using Addr = Register::Address<0x4100a23d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag0{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a04e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag1{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a05e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag2{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a06e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag3{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a07e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag4{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a08e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag5{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a09e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag6{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a0ae,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag7{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a0be,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag8{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a0ce,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag9{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a0de,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag10{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a0ee,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag11{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a0fe,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag12{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a10e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag13{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a11e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag14{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a12e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag15{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a13e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag16{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a14e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag17{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a15e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag18{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a16e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag19{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a17e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag20{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a18e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag21{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a19e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag22{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a1ae,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag23{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a1be,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag24{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a1ce,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag25{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a1de,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag26{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a1ee,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag27{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a1fe,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag28{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a20e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag29{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a21e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag30{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a22e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag31{    ///<Channel n Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100a23e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Channel Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Channel Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChstatus0{    ///<Channel n Status
        using Addr = Register::Address<0x4100a04f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus1{    ///<Channel n Status
        using Addr = Register::Address<0x4100a05f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus2{    ///<Channel n Status
        using Addr = Register::Address<0x4100a06f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus3{    ///<Channel n Status
        using Addr = Register::Address<0x4100a07f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus4{    ///<Channel n Status
        using Addr = Register::Address<0x4100a08f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus5{    ///<Channel n Status
        using Addr = Register::Address<0x4100a09f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus6{    ///<Channel n Status
        using Addr = Register::Address<0x4100a0af,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus7{    ///<Channel n Status
        using Addr = Register::Address<0x4100a0bf,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus8{    ///<Channel n Status
        using Addr = Register::Address<0x4100a0cf,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus9{    ///<Channel n Status
        using Addr = Register::Address<0x4100a0df,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus10{    ///<Channel n Status
        using Addr = Register::Address<0x4100a0ef,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus11{    ///<Channel n Status
        using Addr = Register::Address<0x4100a0ff,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus12{    ///<Channel n Status
        using Addr = Register::Address<0x4100a10f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus13{    ///<Channel n Status
        using Addr = Register::Address<0x4100a11f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus14{    ///<Channel n Status
        using Addr = Register::Address<0x4100a12f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus15{    ///<Channel n Status
        using Addr = Register::Address<0x4100a13f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus16{    ///<Channel n Status
        using Addr = Register::Address<0x4100a14f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus17{    ///<Channel n Status
        using Addr = Register::Address<0x4100a15f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus18{    ///<Channel n Status
        using Addr = Register::Address<0x4100a16f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus19{    ///<Channel n Status
        using Addr = Register::Address<0x4100a17f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus20{    ///<Channel n Status
        using Addr = Register::Address<0x4100a18f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus21{    ///<Channel n Status
        using Addr = Register::Address<0x4100a19f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus22{    ///<Channel n Status
        using Addr = Register::Address<0x4100a1af,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus23{    ///<Channel n Status
        using Addr = Register::Address<0x4100a1bf,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus24{    ///<Channel n Status
        using Addr = Register::Address<0x4100a1cf,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus25{    ///<Channel n Status
        using Addr = Register::Address<0x4100a1df,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus26{    ///<Channel n Status
        using Addr = Register::Address<0x4100a1ef,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus27{    ///<Channel n Status
        using Addr = Register::Address<0x4100a1ff,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus28{    ///<Channel n Status
        using Addr = Register::Address<0x4100a20f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus29{    ///<Channel n Status
        using Addr = Register::Address<0x4100a21f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus30{    ///<Channel n Status
        using Addr = Register::Address<0x4100a22f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
    namespace DmacChstatus31{    ///<Channel n Status
        using Addr = Register::Address<0x4100a23f,0xfffffff0,0x00000000,std::uint8_t>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Channel Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Channel CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcerr{}; 
    }
}
