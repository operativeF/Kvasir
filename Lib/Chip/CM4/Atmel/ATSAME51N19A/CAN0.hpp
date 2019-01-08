#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Control Area Network 0
    namespace Can0Crel{    ///<Core Release
        using Addr = Register::Address<0x42000000,0x000fffff,0x00000000,std::uint32_t>;
        ///Sub-step of Core Release
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> substep{}; 
        ///Step of Core Release
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> step{}; 
        ///Core Release
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rel{}; 
    }
    namespace Can0Endn{    ///<Endian
        using Addr = Register::Address<0x42000004,0x00000000,0x00000000,std::uint32_t>;
        ///Endianness Test Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> etv{}; 
    }
    namespace Can0Mrcfg{    ///<Message RAM Configuration
        using Addr = Register::Address<0x42000008,0xfffffffc,0x00000000,std::uint32_t>;
        ///Quality of Service
        enum class QosVal {
            disable=0x00000000,     ///<Background (no sensitive operation)
            low=0x00000001,     ///<Sensitive Bandwidth
            medium=0x00000002,     ///<Sensitive Latency
            high=0x00000003,     ///<Critical Latency
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,QosVal> qos{}; 
        namespace QosValC{
            constexpr Register::FieldValue<decltype(qos)::Type,QosVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qos)::Type,QosVal::low> low{};
            constexpr Register::FieldValue<decltype(qos)::Type,QosVal::medium> medium{};
            constexpr Register::FieldValue<decltype(qos)::Type,QosVal::high> high{};
        }
    }
    namespace Can0Dbtp{    ///<Fast Bit Timing and Prescaler
        using Addr = Register::Address<0x4200000c,0xff60e000,0x00000000,std::uint32_t>;
        ///Data (Re)Synchronization Jump Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dsjw{}; 
        ///Data time segment after sample point
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dtseg2{}; 
        ///Data time segment before sample point
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> dtseg1{}; 
        ///Data Baud Rate Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> dbrp{}; 
        ///Tranceiver Delay Compensation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tdc{}; 
    }
    namespace Can0Test{    ///<Test
        using Addr = Register::Address<0x42000010,0xffffff0f,0x00000000,std::uint32_t>;
        ///Loop Back Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lbck{}; 
        ///Control of Transmit Pin
        enum class TxVal {
            core=0x00000000,     ///<TX controlled by CAN core
            sample=0x00000001,     ///<TX monitoring sample point
            dominant=0x00000002,     ///<Dominant (0) level at pin CAN_TX
            recessive=0x00000003,     ///<Recessive (1) level at pin CAN_TX
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,TxVal> tx{}; 
        namespace TxValC{
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::core> core{};
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::sample> sample{};
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::dominant> dominant{};
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::recessive> recessive{};
        }
        ///Receive Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rx{}; 
    }
    namespace Can0Rwd{    ///<RAM Watchdog
        using Addr = Register::Address<0x42000014,0xffff0000,0x00000000,std::uint32_t>;
        ///Watchdog Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wdc{}; 
        ///Watchdog Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wdv{}; 
    }
    namespace Can0Cccr{    ///<CC Control
        using Addr = Register::Address<0x42000018,0xffff0c00,0x00000000,std::uint32_t>;
        ///Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> init{}; 
        ///Configuration Change Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cce{}; 
        ///ASM Restricted Operation Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> asm_{}; 
        ///Clock Stop Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> csa{}; 
        ///Clock Stop Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> csr{}; 
        ///Bus Monitoring Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mon{}; 
        ///Disable Automatic Retransmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dar{}; 
        ///Test Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> test{}; 
        ///FD Operation Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fdoe{}; 
        ///Bit Rate Switch Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> brse{}; 
        ///Protocol Exception Handling Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pxhd{}; 
        ///Edge Filtering during Bus Integration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> efbi{}; 
        ///Transmit Pause
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txp{}; 
        ///Non ISO Operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> niso{}; 
    }
    namespace Can0Nbtp{    ///<Nominal Bit Timing and Prescaler
        using Addr = Register::Address<0x4200001c,0x00000080,0x00000000,std::uint32_t>;
        ///Nominal Time segment after sample point
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> ntseg2{}; 
        ///Nominal Time segment before sample point
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ntseg1{}; 
        ///Nominal Baud Rate Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nbrp{}; 
        ///Nominal (Re)Synchronization Jump Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::ReadWriteAccess,unsigned> nsjw{}; 
    }
    namespace Can0Tscc{    ///<Timestamp Counter Configuration
        using Addr = Register::Address<0x42000020,0xfff0fffc,0x00000000,std::uint32_t>;
        ///Timestamp Select
        enum class TssVal {
            zero=0x00000000,     ///<Timestamp counter value always 0x0000
            inc=0x00000001,     ///<Timestamp counter value incremented by TCP
            ext=0x00000002,     ///<External timestamp counter value used
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,TssVal> tss{}; 
        namespace TssValC{
            constexpr Register::FieldValue<decltype(tss)::Type,TssVal::zero> zero{};
            constexpr Register::FieldValue<decltype(tss)::Type,TssVal::inc> inc{};
            constexpr Register::FieldValue<decltype(tss)::Type,TssVal::ext> ext{};
        }
        ///Timestamp Counter Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tcp{}; 
    }
    namespace Can0Tscv{    ///<Timestamp Counter Value
        using Addr = Register::Address<0x42000024,0xffff0000,0x00000000,std::uint32_t>;
        ///Timestamp Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tsc{}; 
    }
    namespace Can0Tocc{    ///<Timeout Counter Configuration
        using Addr = Register::Address<0x42000028,0x0000fff8,0x00000000,std::uint32_t>;
        ///Enable Timeout Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> etoc{}; 
        ///Timeout Select
        enum class TosVal {
            cont=0x00000000,     ///<Continuout operation
            txef=0x00000001,     ///<Timeout controlled by TX Event FIFO
            rxf0=0x00000002,     ///<Timeout controlled by Rx FIFO 0
            rxf1=0x00000003,     ///<Timeout controlled by Rx FIFO 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,TosVal> tos{}; 
        namespace TosValC{
            constexpr Register::FieldValue<decltype(tos)::Type,TosVal::cont> cont{};
            constexpr Register::FieldValue<decltype(tos)::Type,TosVal::txef> txef{};
            constexpr Register::FieldValue<decltype(tos)::Type,TosVal::rxf0> rxf0{};
            constexpr Register::FieldValue<decltype(tos)::Type,TosVal::rxf1> rxf1{};
        }
        ///Timeout Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> top{}; 
    }
    namespace Can0Tocv{    ///<Timeout Counter Value
        using Addr = Register::Address<0x4200002c,0xffff0000,0x00000000,std::uint32_t>;
        ///Timeout Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> toc{}; 
    }
    namespace Can0Ecr{    ///<Error Counter
        using Addr = Register::Address<0x42000040,0xff000000,0x00000000,std::uint32_t>;
        ///Transmit Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tec{}; 
        ///Receive Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rec{}; 
        ///Receive Error Passive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rp{}; 
        ///CAN Error Logging
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cel{}; 
    }
    namespace Can0Psr{    ///<Protocol Status
        using Addr = Register::Address<0x42000044,0xff808000,0x00000000,std::uint32_t>;
        ///Last Error Code
        enum class LecVal {
            none=0x00000000,     ///<No Error
            stuff=0x00000001,     ///<Stuff Error
            form=0x00000002,     ///<Form Error
            ack=0x00000003,     ///<Ack Error
            bit1=0x00000004,     ///<Bit1 Error
            bit0=0x00000005,     ///<Bit0 Error
            crc=0x00000006,     ///<CRC Error
            nc=0x00000007,     ///<No Change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,LecVal> lec{}; 
        namespace LecValC{
            constexpr Register::FieldValue<decltype(lec)::Type,LecVal::none> none{};
            constexpr Register::FieldValue<decltype(lec)::Type,LecVal::stuff> stuff{};
            constexpr Register::FieldValue<decltype(lec)::Type,LecVal::form> form{};
            constexpr Register::FieldValue<decltype(lec)::Type,LecVal::ack> ack{};
            constexpr Register::FieldValue<decltype(lec)::Type,LecVal::bit1> bit1{};
            constexpr Register::FieldValue<decltype(lec)::Type,LecVal::bit0> bit0{};
            constexpr Register::FieldValue<decltype(lec)::Type,LecVal::crc> crc{};
            constexpr Register::FieldValue<decltype(lec)::Type,LecVal::nc> nc{};
        }
        ///Activity
        enum class ActVal {
            sync=0x00000000,     ///<Node is synchronizing on CAN communication
            idle=0x00000001,     ///<Node is neither receiver nor transmitter
            rx=0x00000002,     ///<Node is operating as receiver
            tx=0x00000003,     ///<Node is operating as transmitter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ActVal> act{}; 
        namespace ActValC{
            constexpr Register::FieldValue<decltype(act)::Type,ActVal::sync> sync{};
            constexpr Register::FieldValue<decltype(act)::Type,ActVal::idle> idle{};
            constexpr Register::FieldValue<decltype(act)::Type,ActVal::rx> rx{};
            constexpr Register::FieldValue<decltype(act)::Type,ActVal::tx> tx{};
        }
        ///Error Passive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ep{}; 
        ///Warning Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ew{}; 
        ///Bus_Off Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bo{}; 
        ///Data Phase Last Error Code
        enum class DlecVal {
            none=0x00000000,     ///<No Error
            stuff=0x00000001,     ///<Stuff Error
            form=0x00000002,     ///<Form Error
            ack=0x00000003,     ///<Ack Error
            bit1=0x00000004,     ///<Bit1 Error
            bit0=0x00000005,     ///<Bit0 Error
            crc=0x00000006,     ///<CRC Error
            nc=0x00000007,     ///<No Change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DlecVal> dlec{}; 
        namespace DlecValC{
            constexpr Register::FieldValue<decltype(dlec)::Type,DlecVal::none> none{};
            constexpr Register::FieldValue<decltype(dlec)::Type,DlecVal::stuff> stuff{};
            constexpr Register::FieldValue<decltype(dlec)::Type,DlecVal::form> form{};
            constexpr Register::FieldValue<decltype(dlec)::Type,DlecVal::ack> ack{};
            constexpr Register::FieldValue<decltype(dlec)::Type,DlecVal::bit1> bit1{};
            constexpr Register::FieldValue<decltype(dlec)::Type,DlecVal::bit0> bit0{};
            constexpr Register::FieldValue<decltype(dlec)::Type,DlecVal::crc> crc{};
            constexpr Register::FieldValue<decltype(dlec)::Type,DlecVal::nc> nc{};
        }
        ///ESI flag of last received CAN FD Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> resi{}; 
        ///BRS flag of last received CAN FD Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rbrs{}; 
        ///Received a CAN FD Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rfdf{}; 
        ///Protocol Exception Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pxe{}; 
        ///Transmitter Delay Compensation Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tdcv{}; 
    }
    namespace Can0Tdcr{    ///<Extended ID Filter Configuration
        using Addr = Register::Address<0x42000048,0xffff8080,0x00000000,std::uint32_t>;
        ///Transmitter Delay Compensation Filter Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tdcf{}; 
        ///Transmitter Delay Compensation Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> tdco{}; 
    }
    namespace Can0Ir{    ///<Interrupt
        using Addr = Register::Address<0x42000050,0xc0000000,0x00000000,std::uint32_t>;
        ///Rx FIFO 0 New Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rf0n{}; 
        ///Rx FIFO 0 Watermark Reached
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rf0w{}; 
        ///Rx FIFO 0 Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rf0f{}; 
        ///Rx FIFO 0 Message Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rf0l{}; 
        ///Rx FIFO 1 New Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rf1n{}; 
        ///Rx FIFO 1 Watermark Reached
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rf1w{}; 
        ///Rx FIFO 1 FIFO Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rf1f{}; 
        ///Rx FIFO 1 Message Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rf1l{}; 
        ///High Priority Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hpm{}; 
        ///Timestamp Completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tc{}; 
        ///Transmission Cancellation Finished
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tcf{}; 
        ///Tx FIFO Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tfe{}; 
        ///Tx Event FIFO New Entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tefn{}; 
        ///Tx Event FIFO Watermark Reached
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tefw{}; 
        ///Tx Event FIFO Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teff{}; 
        ///Tx Event FIFO Element Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tefl{}; 
        ///Timestamp Wraparound
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tsw{}; 
        ///Message RAM Access Failure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mraf{}; 
        ///Timeout Occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> too{}; 
        ///Message stored to Dedicated Rx Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> drx{}; 
        ///Bit Error Corrected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> bec{}; 
        ///Bit Error Uncorrected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beu{}; 
        ///Error Logging Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> elo{}; 
        ///Error Passive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ep{}; 
        ///Warning Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ew{}; 
        ///Bus_Off Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> bo{}; 
        ///Watchdog Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> wdi{}; 
        ///Protocol Error in Arbitration Phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pea{}; 
        ///Protocol Error in Data Phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ped{}; 
        ///Access to Reserved Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ara{}; 
    }
    namespace Can0Ie{    ///<Interrupt Enable
        using Addr = Register::Address<0x42000054,0xc0000000,0x00000000,std::uint32_t>;
        ///Rx FIFO 0 New Message Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rf0ne{}; 
        ///Rx FIFO 0 Watermark Reached Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rf0we{}; 
        ///Rx FIFO 0 Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rf0fe{}; 
        ///Rx FIFO 0 Message Lost Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rf0le{}; 
        ///Rx FIFO 1 New Message Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rf1ne{}; 
        ///Rx FIFO 1 Watermark Reached Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rf1we{}; 
        ///Rx FIFO 1 FIFO Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rf1fe{}; 
        ///Rx FIFO 1 Message Lost Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rf1le{}; 
        ///High Priority Message Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hpme{}; 
        ///Timestamp Completed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tce{}; 
        ///Transmission Cancellation Finished Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tcfe{}; 
        ///Tx FIFO Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tfee{}; 
        ///Tx Event FIFO New Entry Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tefne{}; 
        ///Tx Event FIFO Watermark Reached Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tefwe{}; 
        ///Tx Event FIFO Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teffe{}; 
        ///Tx Event FIFO Element Lost Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tefle{}; 
        ///Timestamp Wraparound Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tswe{}; 
        ///Message RAM Access Failure Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mrafe{}; 
        ///Timeout Occurred Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tooe{}; 
        ///Message stored to Dedicated Rx Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> drxe{}; 
        ///Bit Error Corrected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> bece{}; 
        ///Bit Error Uncorrected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beue{}; 
        ///Error Logging Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eloe{}; 
        ///Error Passive Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epe{}; 
        ///Warning Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ewe{}; 
        ///Bus_Off Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> boe{}; 
        ///Watchdog Interrupt Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> wdie{}; 
        ///Protocol Error in Arbitration Phase Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> peae{}; 
        ///Protocol Error in Data Phase Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pede{}; 
        ///Access to Reserved Address Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> arae{}; 
    }
    namespace Can0Ils{    ///<Interrupt Line Select
        using Addr = Register::Address<0x42000058,0xc0000000,0x00000000,std::uint32_t>;
        ///Rx FIFO 0 New Message Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rf0nl{}; 
        ///Rx FIFO 0 Watermark Reached Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rf0wl{}; 
        ///Rx FIFO 0 Full Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rf0fl{}; 
        ///Rx FIFO 0 Message Lost Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rf0ll{}; 
        ///Rx FIFO 1 New Message Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rf1nl{}; 
        ///Rx FIFO 1 Watermark Reached Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rf1wl{}; 
        ///Rx FIFO 1 FIFO Full Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rf1fl{}; 
        ///Rx FIFO 1 Message Lost Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rf1ll{}; 
        ///High Priority Message Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hpml{}; 
        ///Timestamp Completed Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tcl{}; 
        ///Transmission Cancellation Finished Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tcfl{}; 
        ///Tx FIFO Empty Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tfel{}; 
        ///Tx Event FIFO New Entry Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tefnl{}; 
        ///Tx Event FIFO Watermark Reached Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tefwl{}; 
        ///Tx Event FIFO Full Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teffl{}; 
        ///Tx Event FIFO Element Lost Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tefll{}; 
        ///Timestamp Wraparound Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tswl{}; 
        ///Message RAM Access Failure Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mrafl{}; 
        ///Timeout Occurred Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tool{}; 
        ///Message stored to Dedicated Rx Buffer Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> drxl{}; 
        ///Bit Error Corrected Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> becl{}; 
        ///Bit Error Uncorrected Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beul{}; 
        ///Error Logging Overflow Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> elol{}; 
        ///Error Passive Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epl{}; 
        ///Warning Status Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ewl{}; 
        ///Bus_Off Status Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> bol{}; 
        ///Watchdog Interrupt Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> wdil{}; 
        ///Protocol Error in Arbitration Phase Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> peal{}; 
        ///Protocol Error in Data Phase Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pedl{}; 
        ///Access to Reserved Address Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> aral{}; 
    }
    namespace Can0Ile{    ///<Interrupt Line Enable
        using Addr = Register::Address<0x4200005c,0xfffffffc,0x00000000,std::uint32_t>;
        ///Enable Interrupt Line 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eint0{}; 
        ///Enable Interrupt Line 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eint1{}; 
    }
    namespace Can0Gfc{    ///<Global Filter Configuration
        using Addr = Register::Address<0x42000080,0xffffffc0,0x00000000,std::uint32_t>;
        ///Reject Remote Frames Extended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rrfe{}; 
        ///Reject Remote Frames Standard
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rrfs{}; 
        ///Accept Non-matching Frames Extended
        enum class AnfeVal {
            rxf0=0x00000000,     ///<Accept in Rx FIFO 0
            rxf1=0x00000001,     ///<Accept in Rx FIFO 1
            reject=0x00000002,     ///<Reject
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,AnfeVal> anfe{}; 
        namespace AnfeValC{
            constexpr Register::FieldValue<decltype(anfe)::Type,AnfeVal::rxf0> rxf0{};
            constexpr Register::FieldValue<decltype(anfe)::Type,AnfeVal::rxf1> rxf1{};
            constexpr Register::FieldValue<decltype(anfe)::Type,AnfeVal::reject> reject{};
        }
        ///Accept Non-matching Frames Standard
        enum class AnfsVal {
            rxf0=0x00000000,     ///<Accept in Rx FIFO 0
            rxf1=0x00000001,     ///<Accept in Rx FIFO 1
            reject=0x00000002,     ///<Reject
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,AnfsVal> anfs{}; 
        namespace AnfsValC{
            constexpr Register::FieldValue<decltype(anfs)::Type,AnfsVal::rxf0> rxf0{};
            constexpr Register::FieldValue<decltype(anfs)::Type,AnfsVal::rxf1> rxf1{};
            constexpr Register::FieldValue<decltype(anfs)::Type,AnfsVal::reject> reject{};
        }
    }
    namespace Can0Sidfc{    ///<Standard ID Filter Configuration
        using Addr = Register::Address<0x42000084,0xff000000,0x00000000,std::uint32_t>;
        ///Filter List Standard Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> flssa{}; 
        ///List Size Standard
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> lss{}; 
    }
    namespace Can0Xidfc{    ///<Extended ID Filter Configuration
        using Addr = Register::Address<0x42000088,0xff800000,0x00000000,std::uint32_t>;
        ///Filter List Extended Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> flesa{}; 
        ///List Size Extended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> lse{}; 
    }
    namespace Can0Xidam{    ///<Extended ID AND Mask
        using Addr = Register::Address<0x42000090,0xe0000000,0x00000000,std::uint32_t>;
        ///Extended ID Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> eidm{}; 
    }
    namespace Can0Hpms{    ///<High Priority Message Status
        using Addr = Register::Address<0x42000094,0xffff0000,0x00000000,std::uint32_t>;
        ///Buffer Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bidx{}; 
        ///Message Storage Indicator
        enum class MsiVal {
            none=0x00000000,     ///<No FIFO selected
            lost=0x00000001,     ///<FIFO message lost
            fifo0=0x00000002,     ///<Message stored in FIFO 0
            fifo1=0x00000003,     ///<Message stored in FIFO 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,MsiVal> msi{}; 
        namespace MsiValC{
            constexpr Register::FieldValue<decltype(msi)::Type,MsiVal::none> none{};
            constexpr Register::FieldValue<decltype(msi)::Type,MsiVal::lost> lost{};
            constexpr Register::FieldValue<decltype(msi)::Type,MsiVal::fifo0> fifo0{};
            constexpr Register::FieldValue<decltype(msi)::Type,MsiVal::fifo1> fifo1{};
        }
        ///Filter Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fidx{}; 
        ///Filter List
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> flst{}; 
    }
    namespace Can0Ndat1{    ///<New Data 1
        using Addr = Register::Address<0x42000098,0x00000000,0x00000000,std::uint32_t>;
        ///New Data 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nd0{}; 
        ///New Data 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nd1{}; 
        ///New Data 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nd2{}; 
        ///New Data 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nd3{}; 
        ///New Data 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nd4{}; 
        ///New Data 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nd5{}; 
        ///New Data 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nd6{}; 
        ///New Data 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nd7{}; 
        ///New Data 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nd8{}; 
        ///New Data 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> nd9{}; 
        ///New Data 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nd10{}; 
        ///New Data 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> nd11{}; 
        ///New Data 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nd12{}; 
        ///New Data 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nd13{}; 
        ///New Data 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nd14{}; 
        ///New Data 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nd15{}; 
        ///New Data 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nd16{}; 
        ///New Data 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nd17{}; 
        ///New Data 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> nd18{}; 
        ///New Data 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nd19{}; 
        ///New Data 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> nd20{}; 
        ///New Data 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> nd21{}; 
        ///New Data 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> nd22{}; 
        ///New Data 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nd23{}; 
        ///New Data 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> nd24{}; 
        ///New Data 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> nd25{}; 
        ///New Data 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> nd26{}; 
        ///New Data 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> nd27{}; 
        ///New Data 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> nd28{}; 
        ///New Data 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> nd29{}; 
        ///New Data 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nd30{}; 
        ///New Data 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nd31{}; 
    }
    namespace Can0Ndat2{    ///<New Data 2
        using Addr = Register::Address<0x4200009c,0x00000000,0x00000000,std::uint32_t>;
        ///New Data 32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nd32{}; 
        ///New Data 33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nd33{}; 
        ///New Data 34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nd34{}; 
        ///New Data 35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nd35{}; 
        ///New Data 36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nd36{}; 
        ///New Data 37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nd37{}; 
        ///New Data 38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nd38{}; 
        ///New Data 39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nd39{}; 
        ///New Data 40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nd40{}; 
        ///New Data 41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> nd41{}; 
        ///New Data 42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nd42{}; 
        ///New Data 43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> nd43{}; 
        ///New Data 44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nd44{}; 
        ///New Data 45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nd45{}; 
        ///New Data 46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nd46{}; 
        ///New Data 47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nd47{}; 
        ///New Data 48
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nd48{}; 
        ///New Data 49
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nd49{}; 
        ///New Data 50
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> nd50{}; 
        ///New Data 51
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nd51{}; 
        ///New Data 52
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> nd52{}; 
        ///New Data 53
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> nd53{}; 
        ///New Data 54
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> nd54{}; 
        ///New Data 55
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nd55{}; 
        ///New Data 56
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> nd56{}; 
        ///New Data 57
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> nd57{}; 
        ///New Data 58
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> nd58{}; 
        ///New Data 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> nd59{}; 
        ///New Data 60
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> nd60{}; 
        ///New Data 61
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> nd61{}; 
        ///New Data 62
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nd62{}; 
        ///New Data 63
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nd63{}; 
    }
    namespace Can0Rxf0c{    ///<Rx FIFO 0 Configuration
        using Addr = Register::Address<0x420000a0,0x00800000,0x00000000,std::uint32_t>;
        ///Rx FIFO 0 Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> f0sa{}; 
        ///Rx FIFO 0 Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> f0s{}; 
        ///Rx FIFO 0 Watermark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> f0wm{}; 
        ///FIFO 0 Operation Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> f0om{}; 
    }
    namespace Can0Rxf0s{    ///<Rx FIFO 0 Status
        using Addr = Register::Address<0x420000a4,0xfcc0c080,0x00000000,std::uint32_t>;
        ///Rx FIFO 0 Fill Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> f0fl{}; 
        ///Rx FIFO 0 Get Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> f0gi{}; 
        ///Rx FIFO 0 Put Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> f0pi{}; 
        ///Rx FIFO 0 Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> f0f{}; 
        ///Rx FIFO 0 Message Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rf0l{}; 
    }
    namespace Can0Rxf0a{    ///<Rx FIFO 0 Acknowledge
        using Addr = Register::Address<0x420000a8,0xffffffc0,0x00000000,std::uint32_t>;
        ///Rx FIFO 0 Acknowledge Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> f0ai{}; 
    }
    namespace Can0Rxbc{    ///<Rx Buffer Configuration
        using Addr = Register::Address<0x420000ac,0xffff0000,0x00000000,std::uint32_t>;
        ///Rx Buffer Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rbsa{}; 
    }
    namespace Can0Rxf1c{    ///<Rx FIFO 1 Configuration
        using Addr = Register::Address<0x420000b0,0x00800000,0x00000000,std::uint32_t>;
        ///Rx FIFO 1 Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> f1sa{}; 
        ///Rx FIFO 1 Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> f1s{}; 
        ///Rx FIFO 1 Watermark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> f1wm{}; 
        ///FIFO 1 Operation Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> f1om{}; 
    }
    namespace Can0Rxf1s{    ///<Rx FIFO 1 Status
        using Addr = Register::Address<0x420000b4,0x3cc0c080,0x00000000,std::uint32_t>;
        ///Rx FIFO 1 Fill Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> f1fl{}; 
        ///Rx FIFO 1 Get Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> f1gi{}; 
        ///Rx FIFO 1 Put Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> f1pi{}; 
        ///Rx FIFO 1 Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> f1f{}; 
        ///Rx FIFO 1 Message Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rf1l{}; 
        ///Debug Message Status
        enum class DmsVal {
            idle=0x00000000,     ///<Idle state
            dbga=0x00000001,     ///<Debug message A received
            dbgb=0x00000002,     ///<Debug message A/B received
            dbgc=0x00000003,     ///<Debug message A/B/C received, DMA request set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DmsVal> dms{}; 
        namespace DmsValC{
            constexpr Register::FieldValue<decltype(dms)::Type,DmsVal::idle> idle{};
            constexpr Register::FieldValue<decltype(dms)::Type,DmsVal::dbga> dbga{};
            constexpr Register::FieldValue<decltype(dms)::Type,DmsVal::dbgb> dbgb{};
            constexpr Register::FieldValue<decltype(dms)::Type,DmsVal::dbgc> dbgc{};
        }
    }
    namespace Can0Rxf1a{    ///<Rx FIFO 1 Acknowledge
        using Addr = Register::Address<0x420000b8,0xffffffc0,0x00000000,std::uint32_t>;
        ///Rx FIFO 1 Acknowledge Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> f1ai{}; 
    }
    namespace Can0Rxesc{    ///<Rx Buffer / FIFO Element Size Configuration
        using Addr = Register::Address<0x420000bc,0xfffff888,0x00000000,std::uint32_t>;
        ///Rx FIFO 0 Data Field Size
        enum class F0dsVal {
            data8=0x00000000,     ///<8 byte data field
            data12=0x00000001,     ///<12 byte data field
            data16=0x00000002,     ///<16 byte data field
            data20=0x00000003,     ///<20 byte data field
            data24=0x00000004,     ///<24 byte data field
            data32=0x00000005,     ///<32 byte data field
            data48=0x00000006,     ///<48 byte data field
            data64=0x00000007,     ///<64 byte data field
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,F0dsVal> f0ds{}; 
        namespace F0dsValC{
            constexpr Register::FieldValue<decltype(f0ds)::Type,F0dsVal::data8> data8{};
            constexpr Register::FieldValue<decltype(f0ds)::Type,F0dsVal::data12> data12{};
            constexpr Register::FieldValue<decltype(f0ds)::Type,F0dsVal::data16> data16{};
            constexpr Register::FieldValue<decltype(f0ds)::Type,F0dsVal::data20> data20{};
            constexpr Register::FieldValue<decltype(f0ds)::Type,F0dsVal::data24> data24{};
            constexpr Register::FieldValue<decltype(f0ds)::Type,F0dsVal::data32> data32{};
            constexpr Register::FieldValue<decltype(f0ds)::Type,F0dsVal::data48> data48{};
            constexpr Register::FieldValue<decltype(f0ds)::Type,F0dsVal::data64> data64{};
        }
        ///Rx FIFO 1 Data Field Size
        enum class F1dsVal {
            data8=0x00000000,     ///<8 byte data field
            data12=0x00000001,     ///<12 byte data field
            data16=0x00000002,     ///<16 byte data field
            data20=0x00000003,     ///<20 byte data field
            data24=0x00000004,     ///<24 byte data field
            data32=0x00000005,     ///<32 byte data field
            data48=0x00000006,     ///<48 byte data field
            data64=0x00000007,     ///<64 byte data field
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,F1dsVal> f1ds{}; 
        namespace F1dsValC{
            constexpr Register::FieldValue<decltype(f1ds)::Type,F1dsVal::data8> data8{};
            constexpr Register::FieldValue<decltype(f1ds)::Type,F1dsVal::data12> data12{};
            constexpr Register::FieldValue<decltype(f1ds)::Type,F1dsVal::data16> data16{};
            constexpr Register::FieldValue<decltype(f1ds)::Type,F1dsVal::data20> data20{};
            constexpr Register::FieldValue<decltype(f1ds)::Type,F1dsVal::data24> data24{};
            constexpr Register::FieldValue<decltype(f1ds)::Type,F1dsVal::data32> data32{};
            constexpr Register::FieldValue<decltype(f1ds)::Type,F1dsVal::data48> data48{};
            constexpr Register::FieldValue<decltype(f1ds)::Type,F1dsVal::data64> data64{};
        }
        ///Rx Buffer Data Field Size
        enum class RbdsVal {
            data8=0x00000000,     ///<8 byte data field
            data12=0x00000001,     ///<12 byte data field
            data16=0x00000002,     ///<16 byte data field
            data20=0x00000003,     ///<20 byte data field
            data24=0x00000004,     ///<24 byte data field
            data32=0x00000005,     ///<32 byte data field
            data48=0x00000006,     ///<48 byte data field
            data64=0x00000007,     ///<64 byte data field
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,RbdsVal> rbds{}; 
        namespace RbdsValC{
            constexpr Register::FieldValue<decltype(rbds)::Type,RbdsVal::data8> data8{};
            constexpr Register::FieldValue<decltype(rbds)::Type,RbdsVal::data12> data12{};
            constexpr Register::FieldValue<decltype(rbds)::Type,RbdsVal::data16> data16{};
            constexpr Register::FieldValue<decltype(rbds)::Type,RbdsVal::data20> data20{};
            constexpr Register::FieldValue<decltype(rbds)::Type,RbdsVal::data24> data24{};
            constexpr Register::FieldValue<decltype(rbds)::Type,RbdsVal::data32> data32{};
            constexpr Register::FieldValue<decltype(rbds)::Type,RbdsVal::data48> data48{};
            constexpr Register::FieldValue<decltype(rbds)::Type,RbdsVal::data64> data64{};
        }
    }
    namespace Can0Txbc{    ///<Tx Buffer Configuration
        using Addr = Register::Address<0x420000c0,0x80c00000,0x00000000,std::uint32_t>;
        ///Tx Buffers Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tbsa{}; 
        ///Number of Dedicated Transmit Buffers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> ndtb{}; 
        ///Transmit FIFO/Queue Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> tfqs{}; 
        ///Tx FIFO/Queue Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> tfqm{}; 
    }
    namespace Can0Txfqs{    ///<Tx FIFO / Queue Status
        using Addr = Register::Address<0x420000c4,0xffc0e0c0,0x00000000,std::uint32_t>;
        ///Tx FIFO Free Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tffl{}; 
        ///Tx FIFO Get Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tfgi{}; 
        ///Tx FIFO/Queue Put Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tfqpi{}; 
        ///Tx FIFO/Queue Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tfqf{}; 
    }
    namespace Can0Txesc{    ///<Tx Buffer Element Size Configuration
        using Addr = Register::Address<0x420000c8,0xfffffff8,0x00000000,std::uint32_t>;
        ///Tx Buffer Data Field Size
        enum class TbdsVal {
            data8=0x00000000,     ///<8 byte data field
            data12=0x00000001,     ///<12 byte data field
            data16=0x00000002,     ///<16 byte data field
            data20=0x00000003,     ///<20 byte data field
            data24=0x00000004,     ///<24 byte data field
            data32=0x00000005,     ///<32 byte data field
            data48=0x00000006,     ///<48 byte data field
            data64=0x00000007,     ///<64 byte data field
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,TbdsVal> tbds{}; 
        namespace TbdsValC{
            constexpr Register::FieldValue<decltype(tbds)::Type,TbdsVal::data8> data8{};
            constexpr Register::FieldValue<decltype(tbds)::Type,TbdsVal::data12> data12{};
            constexpr Register::FieldValue<decltype(tbds)::Type,TbdsVal::data16> data16{};
            constexpr Register::FieldValue<decltype(tbds)::Type,TbdsVal::data20> data20{};
            constexpr Register::FieldValue<decltype(tbds)::Type,TbdsVal::data24> data24{};
            constexpr Register::FieldValue<decltype(tbds)::Type,TbdsVal::data32> data32{};
            constexpr Register::FieldValue<decltype(tbds)::Type,TbdsVal::data48> data48{};
            constexpr Register::FieldValue<decltype(tbds)::Type,TbdsVal::data64> data64{};
        }
    }
    namespace Can0Txbrp{    ///<Tx Buffer Request Pending
        using Addr = Register::Address<0x420000cc,0x00000000,0x00000000,std::uint32_t>;
        ///Transmission Request Pending 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp0{}; 
        ///Transmission Request Pending 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp1{}; 
        ///Transmission Request Pending 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp2{}; 
        ///Transmission Request Pending 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp3{}; 
        ///Transmission Request Pending 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp4{}; 
        ///Transmission Request Pending 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp5{}; 
        ///Transmission Request Pending 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp6{}; 
        ///Transmission Request Pending 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp7{}; 
        ///Transmission Request Pending 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp8{}; 
        ///Transmission Request Pending 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp9{}; 
        ///Transmission Request Pending 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp10{}; 
        ///Transmission Request Pending 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp11{}; 
        ///Transmission Request Pending 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp12{}; 
        ///Transmission Request Pending 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp13{}; 
        ///Transmission Request Pending 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp14{}; 
        ///Transmission Request Pending 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp15{}; 
        ///Transmission Request Pending 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp16{}; 
        ///Transmission Request Pending 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp17{}; 
        ///Transmission Request Pending 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp18{}; 
        ///Transmission Request Pending 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp19{}; 
        ///Transmission Request Pending 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp20{}; 
        ///Transmission Request Pending 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp21{}; 
        ///Transmission Request Pending 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp22{}; 
        ///Transmission Request Pending 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp23{}; 
        ///Transmission Request Pending 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp24{}; 
        ///Transmission Request Pending 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp25{}; 
        ///Transmission Request Pending 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp26{}; 
        ///Transmission Request Pending 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp27{}; 
        ///Transmission Request Pending 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp28{}; 
        ///Transmission Request Pending 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp29{}; 
        ///Transmission Request Pending 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp30{}; 
        ///Transmission Request Pending 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trp31{}; 
    }
    namespace Can0Txbar{    ///<Tx Buffer Add Request
        using Addr = Register::Address<0x420000d0,0x00000000,0x00000000,std::uint32_t>;
        ///Add Request 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ar0{}; 
        ///Add Request 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ar1{}; 
        ///Add Request 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ar2{}; 
        ///Add Request 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ar3{}; 
        ///Add Request 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ar4{}; 
        ///Add Request 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ar5{}; 
        ///Add Request 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ar6{}; 
        ///Add Request 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ar7{}; 
        ///Add Request 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ar8{}; 
        ///Add Request 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ar9{}; 
        ///Add Request 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ar10{}; 
        ///Add Request 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ar11{}; 
        ///Add Request 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ar12{}; 
        ///Add Request 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ar13{}; 
        ///Add Request 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ar14{}; 
        ///Add Request 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ar15{}; 
        ///Add Request 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ar16{}; 
        ///Add Request 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ar17{}; 
        ///Add Request 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ar18{}; 
        ///Add Request 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ar19{}; 
        ///Add Request 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ar20{}; 
        ///Add Request 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ar21{}; 
        ///Add Request 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ar22{}; 
        ///Add Request 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ar23{}; 
        ///Add Request 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ar24{}; 
        ///Add Request 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ar25{}; 
        ///Add Request 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ar26{}; 
        ///Add Request 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ar27{}; 
        ///Add Request 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ar28{}; 
        ///Add Request 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ar29{}; 
        ///Add Request 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ar30{}; 
        ///Add Request 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ar31{}; 
    }
    namespace Can0Txbcr{    ///<Tx Buffer Cancellation Request
        using Addr = Register::Address<0x420000d4,0x00000000,0x00000000,std::uint32_t>;
        ///Cancellation Request 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cr0{}; 
        ///Cancellation Request 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr1{}; 
        ///Cancellation Request 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cr2{}; 
        ///Cancellation Request 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cr3{}; 
        ///Cancellation Request 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cr4{}; 
        ///Cancellation Request 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cr5{}; 
        ///Cancellation Request 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cr6{}; 
        ///Cancellation Request 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cr7{}; 
        ///Cancellation Request 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cr8{}; 
        ///Cancellation Request 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cr9{}; 
        ///Cancellation Request 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cr10{}; 
        ///Cancellation Request 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cr11{}; 
        ///Cancellation Request 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cr12{}; 
        ///Cancellation Request 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cr13{}; 
        ///Cancellation Request 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cr14{}; 
        ///Cancellation Request 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cr15{}; 
        ///Cancellation Request 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cr16{}; 
        ///Cancellation Request 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cr17{}; 
        ///Cancellation Request 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cr18{}; 
        ///Cancellation Request 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cr19{}; 
        ///Cancellation Request 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cr20{}; 
        ///Cancellation Request 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cr21{}; 
        ///Cancellation Request 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cr22{}; 
        ///Cancellation Request 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cr23{}; 
        ///Cancellation Request 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cr24{}; 
        ///Cancellation Request 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cr25{}; 
        ///Cancellation Request 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cr26{}; 
        ///Cancellation Request 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cr27{}; 
        ///Cancellation Request 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cr28{}; 
        ///Cancellation Request 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> cr29{}; 
        ///Cancellation Request 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cr30{}; 
        ///Cancellation Request 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cr31{}; 
    }
    namespace Can0Txbto{    ///<Tx Buffer Transmission Occurred
        using Addr = Register::Address<0x420000d8,0x00000000,0x00000000,std::uint32_t>;
        ///Transmission Occurred 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to0{}; 
        ///Transmission Occurred 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to1{}; 
        ///Transmission Occurred 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to2{}; 
        ///Transmission Occurred 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to3{}; 
        ///Transmission Occurred 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to4{}; 
        ///Transmission Occurred 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to5{}; 
        ///Transmission Occurred 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to6{}; 
        ///Transmission Occurred 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to7{}; 
        ///Transmission Occurred 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to8{}; 
        ///Transmission Occurred 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to9{}; 
        ///Transmission Occurred 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to10{}; 
        ///Transmission Occurred 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to11{}; 
        ///Transmission Occurred 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to12{}; 
        ///Transmission Occurred 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to13{}; 
        ///Transmission Occurred 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to14{}; 
        ///Transmission Occurred 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to15{}; 
        ///Transmission Occurred 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to16{}; 
        ///Transmission Occurred 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to17{}; 
        ///Transmission Occurred 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to18{}; 
        ///Transmission Occurred 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to19{}; 
        ///Transmission Occurred 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to20{}; 
        ///Transmission Occurred 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to21{}; 
        ///Transmission Occurred 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to22{}; 
        ///Transmission Occurred 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to23{}; 
        ///Transmission Occurred 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to24{}; 
        ///Transmission Occurred 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to25{}; 
        ///Transmission Occurred 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to26{}; 
        ///Transmission Occurred 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to27{}; 
        ///Transmission Occurred 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to28{}; 
        ///Transmission Occurred 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to29{}; 
        ///Transmission Occurred 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to30{}; 
        ///Transmission Occurred 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> to31{}; 
    }
    namespace Can0Txbcf{    ///<Tx Buffer Cancellation Finished
        using Addr = Register::Address<0x420000dc,0x00000000,0x00000000,std::uint32_t>;
        ///Tx Buffer Cancellation Finished 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf0{}; 
        ///Tx Buffer Cancellation Finished 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf1{}; 
        ///Tx Buffer Cancellation Finished 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf2{}; 
        ///Tx Buffer Cancellation Finished 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf3{}; 
        ///Tx Buffer Cancellation Finished 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf4{}; 
        ///Tx Buffer Cancellation Finished 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf5{}; 
        ///Tx Buffer Cancellation Finished 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf6{}; 
        ///Tx Buffer Cancellation Finished 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf7{}; 
        ///Tx Buffer Cancellation Finished 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf8{}; 
        ///Tx Buffer Cancellation Finished 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf9{}; 
        ///Tx Buffer Cancellation Finished 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf10{}; 
        ///Tx Buffer Cancellation Finished 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf11{}; 
        ///Tx Buffer Cancellation Finished 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf12{}; 
        ///Tx Buffer Cancellation Finished 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf13{}; 
        ///Tx Buffer Cancellation Finished 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf14{}; 
        ///Tx Buffer Cancellation Finished 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf15{}; 
        ///Tx Buffer Cancellation Finished 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf16{}; 
        ///Tx Buffer Cancellation Finished 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf17{}; 
        ///Tx Buffer Cancellation Finished 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf18{}; 
        ///Tx Buffer Cancellation Finished 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf19{}; 
        ///Tx Buffer Cancellation Finished 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf20{}; 
        ///Tx Buffer Cancellation Finished 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf21{}; 
        ///Tx Buffer Cancellation Finished 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf22{}; 
        ///Tx Buffer Cancellation Finished 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf23{}; 
        ///Tx Buffer Cancellation Finished 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf24{}; 
        ///Tx Buffer Cancellation Finished 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf25{}; 
        ///Tx Buffer Cancellation Finished 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf26{}; 
        ///Tx Buffer Cancellation Finished 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf27{}; 
        ///Tx Buffer Cancellation Finished 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf28{}; 
        ///Tx Buffer Cancellation Finished 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf29{}; 
        ///Tx Buffer Cancellation Finished 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf30{}; 
        ///Tx Buffer Cancellation Finished 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cf31{}; 
    }
    namespace Can0Txbtie{    ///<Tx Buffer Transmission Interrupt Enable
        using Addr = Register::Address<0x420000e0,0x00000000,0x00000000,std::uint32_t>;
        ///Transmission Interrupt Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tie0{}; 
        ///Transmission Interrupt Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tie1{}; 
        ///Transmission Interrupt Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tie2{}; 
        ///Transmission Interrupt Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie3{}; 
        ///Transmission Interrupt Enable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tie4{}; 
        ///Transmission Interrupt Enable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tie5{}; 
        ///Transmission Interrupt Enable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tie6{}; 
        ///Transmission Interrupt Enable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tie7{}; 
        ///Transmission Interrupt Enable 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tie8{}; 
        ///Transmission Interrupt Enable 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tie9{}; 
        ///Transmission Interrupt Enable 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tie10{}; 
        ///Transmission Interrupt Enable 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tie11{}; 
        ///Transmission Interrupt Enable 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tie12{}; 
        ///Transmission Interrupt Enable 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tie13{}; 
        ///Transmission Interrupt Enable 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tie14{}; 
        ///Transmission Interrupt Enable 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tie15{}; 
        ///Transmission Interrupt Enable 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tie16{}; 
        ///Transmission Interrupt Enable 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tie17{}; 
        ///Transmission Interrupt Enable 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tie18{}; 
        ///Transmission Interrupt Enable 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tie19{}; 
        ///Transmission Interrupt Enable 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tie20{}; 
        ///Transmission Interrupt Enable 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tie21{}; 
        ///Transmission Interrupt Enable 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tie22{}; 
        ///Transmission Interrupt Enable 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tie23{}; 
        ///Transmission Interrupt Enable 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tie24{}; 
        ///Transmission Interrupt Enable 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> tie25{}; 
        ///Transmission Interrupt Enable 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tie26{}; 
        ///Transmission Interrupt Enable 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> tie27{}; 
        ///Transmission Interrupt Enable 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> tie28{}; 
        ///Transmission Interrupt Enable 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tie29{}; 
        ///Transmission Interrupt Enable 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> tie30{}; 
        ///Transmission Interrupt Enable 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tie31{}; 
    }
    namespace Can0Txbcie{    ///<Tx Buffer Cancellation Finished Interrupt Enable
        using Addr = Register::Address<0x420000e4,0x00000000,0x00000000,std::uint32_t>;
        ///Cancellation Finished Interrupt Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cfie0{}; 
        ///Cancellation Finished Interrupt Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cfie1{}; 
        ///Cancellation Finished Interrupt Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cfie2{}; 
        ///Cancellation Finished Interrupt Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cfie3{}; 
        ///Cancellation Finished Interrupt Enable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cfie4{}; 
        ///Cancellation Finished Interrupt Enable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cfie5{}; 
        ///Cancellation Finished Interrupt Enable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cfie6{}; 
        ///Cancellation Finished Interrupt Enable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cfie7{}; 
        ///Cancellation Finished Interrupt Enable 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cfie8{}; 
        ///Cancellation Finished Interrupt Enable 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cfie9{}; 
        ///Cancellation Finished Interrupt Enable 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cfie10{}; 
        ///Cancellation Finished Interrupt Enable 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cfie11{}; 
        ///Cancellation Finished Interrupt Enable 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cfie12{}; 
        ///Cancellation Finished Interrupt Enable 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cfie13{}; 
        ///Cancellation Finished Interrupt Enable 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cfie14{}; 
        ///Cancellation Finished Interrupt Enable 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cfie15{}; 
        ///Cancellation Finished Interrupt Enable 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cfie16{}; 
        ///Cancellation Finished Interrupt Enable 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cfie17{}; 
        ///Cancellation Finished Interrupt Enable 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfie18{}; 
        ///Cancellation Finished Interrupt Enable 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cfie19{}; 
        ///Cancellation Finished Interrupt Enable 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cfie20{}; 
        ///Cancellation Finished Interrupt Enable 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cfie21{}; 
        ///Cancellation Finished Interrupt Enable 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cfie22{}; 
        ///Cancellation Finished Interrupt Enable 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cfie23{}; 
        ///Cancellation Finished Interrupt Enable 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cfie24{}; 
        ///Cancellation Finished Interrupt Enable 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cfie25{}; 
        ///Cancellation Finished Interrupt Enable 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cfie26{}; 
        ///Cancellation Finished Interrupt Enable 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cfie27{}; 
        ///Cancellation Finished Interrupt Enable 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cfie28{}; 
        ///Cancellation Finished Interrupt Enable 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> cfie29{}; 
        ///Cancellation Finished Interrupt Enable 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cfie30{}; 
        ///Cancellation Finished Interrupt Enable 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cfie31{}; 
    }
    namespace Can0Txefc{    ///<Tx Event FIFO Configuration
        using Addr = Register::Address<0x420000f0,0xc0c00000,0x00000000,std::uint32_t>;
        ///Event FIFO Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> efsa{}; 
        ///Event FIFO Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> efs{}; 
        ///Event FIFO Watermark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> efwm{}; 
    }
    namespace Can0Txefs{    ///<Tx Event FIFO Status
        using Addr = Register::Address<0x420000f4,0xfce0e0c0,0x00000000,std::uint32_t>;
        ///Event FIFO Fill Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> effl{}; 
        ///Event FIFO Get Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> efgi{}; 
        ///Event FIFO Put Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> efpi{}; 
        ///Event FIFO Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eff{}; 
        ///Tx Event FIFO Element Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tefl{}; 
    }
    namespace Can0Txefa{    ///<Tx Event FIFO Acknowledge
        using Addr = Register::Address<0x420000f8,0xffffffe0,0x00000000,std::uint32_t>;
        ///Event FIFO Acknowledge Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> efai{}; 
    }
}
