#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Controller Area Network 0
    namespace Can0Mr{    ///<Mode Register
        using Addr = Register::Address<0xf8000000,0xffffff00,0x00000000,std::uint32_t>;
        ///CAN Controller Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> canen{}; 
        ///Disable/Enable Low Power Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lpm{}; 
        ///Disable/Enable Autobaud/Listen mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> abm{}; 
        ///Disable/Enable Overload Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovl{}; 
        ///Timestamp messages at each end of Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> teof{}; 
        ///Disable/Enable Time Triggered Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ttm{}; 
        ///Enable Timer Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> timfrz{}; 
        ///Disable Repeat
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> drpt{}; 
    }
    namespace Can0Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf8000004,0xe000ff00,0x00000000,std::uint32_t>;
        ///Mailbox 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb0{}; 
        ///Mailbox 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb1{}; 
        ///Mailbox 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb2{}; 
        ///Mailbox 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb3{}; 
        ///Mailbox 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb4{}; 
        ///Mailbox 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb5{}; 
        ///Mailbox 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb6{}; 
        ///Mailbox 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb7{}; 
        ///Error Active Mode Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> erra{}; 
        ///Warning Limit Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> warn{}; 
        ///Error Passive Mode Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errp{}; 
        ///Bus Off Mode Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> boff{}; 
        ///Sleep Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sleep{}; 
        ///Wakeup Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeup{}; 
        ///Timer Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tovf{}; 
        ///TimeStamp Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tstp{}; 
        ///CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cerr{}; 
        ///Stuffing Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> serr{}; 
        ///Acknowledgment Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> aerr{}; 
        ///Form Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Bit Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> berr{}; 
    }
    namespace Can0Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf8000008,0xe000ff00,0x00000000,std::uint32_t>;
        ///Mailbox 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb0{}; 
        ///Mailbox 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb1{}; 
        ///Mailbox 2 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb2{}; 
        ///Mailbox 3 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb3{}; 
        ///Mailbox 4 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb4{}; 
        ///Mailbox 5 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb5{}; 
        ///Mailbox 6 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb6{}; 
        ///Mailbox 7 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb7{}; 
        ///Error Active Mode Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> erra{}; 
        ///Warning Limit Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> warn{}; 
        ///Error Passive Mode Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errp{}; 
        ///Bus Off Mode Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> boff{}; 
        ///Sleep Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sleep{}; 
        ///Wakeup Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeup{}; 
        ///Timer Overflow Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tovf{}; 
        ///TimeStamp Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tstp{}; 
        ///CRC Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cerr{}; 
        ///Stuffing Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> serr{}; 
        ///Acknowledgment Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> aerr{}; 
        ///Form Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Bit Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> berr{}; 
    }
    namespace Can0Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf800000c,0xe000ff00,0x00000000,std::uint32_t>;
        ///Mailbox 0 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb0{}; 
        ///Mailbox 1 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb1{}; 
        ///Mailbox 2 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb2{}; 
        ///Mailbox 3 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb3{}; 
        ///Mailbox 4 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb4{}; 
        ///Mailbox 5 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb5{}; 
        ///Mailbox 6 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb6{}; 
        ///Mailbox 7 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb7{}; 
        ///Error Active Mode Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> erra{}; 
        ///Warning Limit Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> warn{}; 
        ///Error Passive Mode Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errp{}; 
        ///Bus Off Mode Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> boff{}; 
        ///Sleep Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sleep{}; 
        ///Wakeup Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeup{}; 
        ///Timer Overflow Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tovf{}; 
        ///Timestamp Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tstp{}; 
        ///CRC Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cerr{}; 
        ///Stuffing Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> serr{}; 
        ///Acknowledgment Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> aerr{}; 
        ///Form Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Bit Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> berr{}; 
    }
    namespace Can0Sr{    ///<Status Register
        using Addr = Register::Address<0xf8000010,0x0000ff00,0x00000000,std::uint32_t>;
        ///Mailbox 0 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb0{}; 
        ///Mailbox 1 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb1{}; 
        ///Mailbox 2 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb2{}; 
        ///Mailbox 3 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb3{}; 
        ///Mailbox 4 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb4{}; 
        ///Mailbox 5 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb5{}; 
        ///Mailbox 6 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb6{}; 
        ///Mailbox 7 Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb7{}; 
        ///Error Active Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> erra{}; 
        ///Warning Limit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> warn{}; 
        ///Error Passive Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errp{}; 
        ///Bus Off Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> boff{}; 
        ///CAN controller in Low power Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sleep{}; 
        ///CAN controller is not in Low power Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeup{}; 
        ///Timer Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tovf{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tstp{}; 
        ///Mailbox CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cerr{}; 
        ///Mailbox Stuffing Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> serr{}; 
        ///Acknowledgment Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> aerr{}; 
        ///Form Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> berr{}; 
        ///Receiver busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rbsy{}; 
        ///Transmitter busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tbsy{}; 
        ///Overload busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovlsy{}; 
    }
    namespace Can0Br{    ///<Baudrate Register
        using Addr = Register::Address<0xf8000014,0xfe80c888,0x00000000,std::uint32_t>;
        ///Phase 2 segment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> phase2{}; 
        ///Phase 1 segment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> phase1{}; 
        ///Programming time segment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> propag{}; 
        ///Re-synchronization jump width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sjw{}; 
        ///Baudrate Prescaler.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> brp{}; 
        ///Sampling Mode
        enum class SmpVal {
            once=0x00000000,     ///<The incoming bit stream is sampled once at sample point.
            three=0x00000001,     ///<The incoming bit stream is sampled three times with a period of a MCK clock period, centered on sample point.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,SmpVal> smp{}; 
        namespace SmpValC{
            constexpr Register::FieldValue<decltype(smp)::Type,SmpVal::once> once{};
            constexpr Register::FieldValue<decltype(smp)::Type,SmpVal::three> three{};
        }
    }
    namespace Can0Tim{    ///<Timer Register
        using Addr = Register::Address<0xf8000018,0xffff0000,0x00000000,std::uint32_t>;
        ///Timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timer{}; 
    }
    namespace Can0Timestp{    ///<Timestamp Register
        using Addr = Register::Address<0xf800001c,0xffff0000,0x00000000,std::uint32_t>;
        ///Timestamp
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtimestamp{}; 
    }
    namespace Can0Ecr{    ///<Error Counter Register
        using Addr = Register::Address<0xf8000020,0xfe00ff00,0x00000000,std::uint32_t>;
        ///Receive Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rec{}; 
        ///Transmit Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tec{}; 
    }
    namespace Can0Tcr{    ///<Transfer Command Register
        using Addr = Register::Address<0xf8000024,0x7fffff00,0x00000000,std::uint32_t>;
        ///Transfer Request for Mailbox 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb0{}; 
        ///Transfer Request for Mailbox 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb1{}; 
        ///Transfer Request for Mailbox 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb2{}; 
        ///Transfer Request for Mailbox 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb3{}; 
        ///Transfer Request for Mailbox 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb4{}; 
        ///Transfer Request for Mailbox 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb5{}; 
        ///Transfer Request for Mailbox 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb6{}; 
        ///Transfer Request for Mailbox 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb7{}; 
        ///Timer Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timrst{}; 
    }
    namespace Can0Acr{    ///<Abort Command Register
        using Addr = Register::Address<0xf8000028,0xffffff00,0x00000000,std::uint32_t>;
        ///Abort Request for Mailbox 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb0{}; 
        ///Abort Request for Mailbox 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb1{}; 
        ///Abort Request for Mailbox 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb2{}; 
        ///Abort Request for Mailbox 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb3{}; 
        ///Abort Request for Mailbox 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb4{}; 
        ///Abort Request for Mailbox 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb5{}; 
        ///Abort Request for Mailbox 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb6{}; 
        ///Abort Request for Mailbox 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mb7{}; 
    }
    namespace Can0Wpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0xf80000e4,0x000000fe,0x00000000,std::uint32_t>;
        ///Write Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///SPI Write Protection Key Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace Can0Wpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0xf80000e8,0xffff00fe,0x00000000,std::uint32_t>;
        ///Write Protection Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvs{}; 
        ///Write Protection Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvsrc{}; 
    }
    namespace Can0Mmr0{    ///<Mailbox Mode Register (MB = 0)
        using Addr = Register::Address<0xf8000200,0xf8f00000,0x00000000,std::uint32_t>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
        ///Mailbox Object Type
        enum class MotVal {
            mbDisabled=0x00000000,     ///<Mailbox is disabled. This prevents receiving or transmitting any messages with this mailbox.
            mbRx=0x00000001,     ///<Reception Mailbox. Mailbox is configured for reception. If a message is received while the mailbox data register is full, it is discarded.
            mbRxOverwrite=0x00000002,     ///<Reception mailbox with overwrite. Mailbox is configured for reception. If a message is received while the mailbox is full, it overwrites the previous message.
            mbTx=0x00000003,     ///<Transmit mailbox. Mailbox is configured for transmission.
            mbConsumer=0x00000004,     ///<Consumer Mailbox. Mailbox is configured in reception but behaves as a Transmit Mailbox, i.e., it sends a remote frame and waits for an answer.
            mbProducer=0x00000005,     ///<Producer Mailbox. Mailbox is configured in transmission but also behaves like a reception mailbox, i.e., it waits to receive a Remote Frame before sending its contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,MotVal> mot{}; 
        namespace MotValC{
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbProducer> mbProducer{};
        }
    }
    namespace Can0Mam0{    ///<Mailbox Acceptance Mask Register (MB = 0)
        using Addr = Register::Address<0xf8000204,0xc0000000,0x00000000,std::uint32_t>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can0Mid0{    ///<Mailbox ID Register (MB = 0)
        using Addr = Register::Address<0xf8000208,0xc0000000,0x00000000,std::uint32_t>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can0Mfid0{    ///<Mailbox Family ID Register (MB = 0)
        using Addr = Register::Address<0xf800020c,0xe0000000,0x00000000,std::uint32_t>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfid{}; 
    }
    namespace Can0Msr0{    ///<Mailbox Status Register (MB = 0)
        using Addr = Register::Address<0xf8000210,0xfe200000,0x00000000,std::uint32_t>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtimestamp{}; 
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrtr{}; 
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mabt{}; 
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrdy{}; 
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mmi{}; 
    }
    namespace Can0Mdl0{    ///<Mailbox Data Low Register (MB = 0)
        using Addr = Register::Address<0xf8000214,0x00000000,0x00000000,std::uint32_t>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
    }
    namespace Can0Mdh0{    ///<Mailbox Data High Register (MB = 0)
        using Addr = Register::Address<0xf8000218,0x00000000,0x00000000,std::uint32_t>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
    }
    namespace Can0Mcr0{    ///<Mailbox Control Register (MB = 0)
        using Addr = Register::Address<0xf800021c,0xff20ffff,0x00000000,std::uint32_t>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrtr{}; 
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> macr{}; 
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtcr{}; 
    }
    namespace Can0Mmr1{    ///<Mailbox Mode Register (MB = 1)
        using Addr = Register::Address<0xf8000220,0xf8f00000,0x00000000,std::uint32_t>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
        ///Mailbox Object Type
        enum class MotVal {
            mbDisabled=0x00000000,     ///<Mailbox is disabled. This prevents receiving or transmitting any messages with this mailbox.
            mbRx=0x00000001,     ///<Reception Mailbox. Mailbox is configured for reception. If a message is received while the mailbox data register is full, it is discarded.
            mbRxOverwrite=0x00000002,     ///<Reception mailbox with overwrite. Mailbox is configured for reception. If a message is received while the mailbox is full, it overwrites the previous message.
            mbTx=0x00000003,     ///<Transmit mailbox. Mailbox is configured for transmission.
            mbConsumer=0x00000004,     ///<Consumer Mailbox. Mailbox is configured in reception but behaves as a Transmit Mailbox, i.e., it sends a remote frame and waits for an answer.
            mbProducer=0x00000005,     ///<Producer Mailbox. Mailbox is configured in transmission but also behaves like a reception mailbox, i.e., it waits to receive a Remote Frame before sending its contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,MotVal> mot{}; 
        namespace MotValC{
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbProducer> mbProducer{};
        }
    }
    namespace Can0Mam1{    ///<Mailbox Acceptance Mask Register (MB = 1)
        using Addr = Register::Address<0xf8000224,0xc0000000,0x00000000,std::uint32_t>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can0Mid1{    ///<Mailbox ID Register (MB = 1)
        using Addr = Register::Address<0xf8000228,0xc0000000,0x00000000,std::uint32_t>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can0Mfid1{    ///<Mailbox Family ID Register (MB = 1)
        using Addr = Register::Address<0xf800022c,0xe0000000,0x00000000,std::uint32_t>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfid{}; 
    }
    namespace Can0Msr1{    ///<Mailbox Status Register (MB = 1)
        using Addr = Register::Address<0xf8000230,0xfe200000,0x00000000,std::uint32_t>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtimestamp{}; 
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrtr{}; 
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mabt{}; 
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrdy{}; 
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mmi{}; 
    }
    namespace Can0Mdl1{    ///<Mailbox Data Low Register (MB = 1)
        using Addr = Register::Address<0xf8000234,0x00000000,0x00000000,std::uint32_t>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
    }
    namespace Can0Mdh1{    ///<Mailbox Data High Register (MB = 1)
        using Addr = Register::Address<0xf8000238,0x00000000,0x00000000,std::uint32_t>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
    }
    namespace Can0Mcr1{    ///<Mailbox Control Register (MB = 1)
        using Addr = Register::Address<0xf800023c,0xff20ffff,0x00000000,std::uint32_t>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrtr{}; 
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> macr{}; 
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtcr{}; 
    }
    namespace Can0Mmr2{    ///<Mailbox Mode Register (MB = 2)
        using Addr = Register::Address<0xf8000240,0xf8f00000,0x00000000,std::uint32_t>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
        ///Mailbox Object Type
        enum class MotVal {
            mbDisabled=0x00000000,     ///<Mailbox is disabled. This prevents receiving or transmitting any messages with this mailbox.
            mbRx=0x00000001,     ///<Reception Mailbox. Mailbox is configured for reception. If a message is received while the mailbox data register is full, it is discarded.
            mbRxOverwrite=0x00000002,     ///<Reception mailbox with overwrite. Mailbox is configured for reception. If a message is received while the mailbox is full, it overwrites the previous message.
            mbTx=0x00000003,     ///<Transmit mailbox. Mailbox is configured for transmission.
            mbConsumer=0x00000004,     ///<Consumer Mailbox. Mailbox is configured in reception but behaves as a Transmit Mailbox, i.e., it sends a remote frame and waits for an answer.
            mbProducer=0x00000005,     ///<Producer Mailbox. Mailbox is configured in transmission but also behaves like a reception mailbox, i.e., it waits to receive a Remote Frame before sending its contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,MotVal> mot{}; 
        namespace MotValC{
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbProducer> mbProducer{};
        }
    }
    namespace Can0Mam2{    ///<Mailbox Acceptance Mask Register (MB = 2)
        using Addr = Register::Address<0xf8000244,0xc0000000,0x00000000,std::uint32_t>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can0Mid2{    ///<Mailbox ID Register (MB = 2)
        using Addr = Register::Address<0xf8000248,0xc0000000,0x00000000,std::uint32_t>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can0Mfid2{    ///<Mailbox Family ID Register (MB = 2)
        using Addr = Register::Address<0xf800024c,0xe0000000,0x00000000,std::uint32_t>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfid{}; 
    }
    namespace Can0Msr2{    ///<Mailbox Status Register (MB = 2)
        using Addr = Register::Address<0xf8000250,0xfe200000,0x00000000,std::uint32_t>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtimestamp{}; 
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrtr{}; 
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mabt{}; 
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrdy{}; 
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mmi{}; 
    }
    namespace Can0Mdl2{    ///<Mailbox Data Low Register (MB = 2)
        using Addr = Register::Address<0xf8000254,0x00000000,0x00000000,std::uint32_t>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
    }
    namespace Can0Mdh2{    ///<Mailbox Data High Register (MB = 2)
        using Addr = Register::Address<0xf8000258,0x00000000,0x00000000,std::uint32_t>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
    }
    namespace Can0Mcr2{    ///<Mailbox Control Register (MB = 2)
        using Addr = Register::Address<0xf800025c,0xff20ffff,0x00000000,std::uint32_t>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrtr{}; 
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> macr{}; 
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtcr{}; 
    }
    namespace Can0Mmr3{    ///<Mailbox Mode Register (MB = 3)
        using Addr = Register::Address<0xf8000260,0xf8f00000,0x00000000,std::uint32_t>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
        ///Mailbox Object Type
        enum class MotVal {
            mbDisabled=0x00000000,     ///<Mailbox is disabled. This prevents receiving or transmitting any messages with this mailbox.
            mbRx=0x00000001,     ///<Reception Mailbox. Mailbox is configured for reception. If a message is received while the mailbox data register is full, it is discarded.
            mbRxOverwrite=0x00000002,     ///<Reception mailbox with overwrite. Mailbox is configured for reception. If a message is received while the mailbox is full, it overwrites the previous message.
            mbTx=0x00000003,     ///<Transmit mailbox. Mailbox is configured for transmission.
            mbConsumer=0x00000004,     ///<Consumer Mailbox. Mailbox is configured in reception but behaves as a Transmit Mailbox, i.e., it sends a remote frame and waits for an answer.
            mbProducer=0x00000005,     ///<Producer Mailbox. Mailbox is configured in transmission but also behaves like a reception mailbox, i.e., it waits to receive a Remote Frame before sending its contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,MotVal> mot{}; 
        namespace MotValC{
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbProducer> mbProducer{};
        }
    }
    namespace Can0Mam3{    ///<Mailbox Acceptance Mask Register (MB = 3)
        using Addr = Register::Address<0xf8000264,0xc0000000,0x00000000,std::uint32_t>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can0Mid3{    ///<Mailbox ID Register (MB = 3)
        using Addr = Register::Address<0xf8000268,0xc0000000,0x00000000,std::uint32_t>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can0Mfid3{    ///<Mailbox Family ID Register (MB = 3)
        using Addr = Register::Address<0xf800026c,0xe0000000,0x00000000,std::uint32_t>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfid{}; 
    }
    namespace Can0Msr3{    ///<Mailbox Status Register (MB = 3)
        using Addr = Register::Address<0xf8000270,0xfe200000,0x00000000,std::uint32_t>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtimestamp{}; 
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrtr{}; 
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mabt{}; 
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrdy{}; 
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mmi{}; 
    }
    namespace Can0Mdl3{    ///<Mailbox Data Low Register (MB = 3)
        using Addr = Register::Address<0xf8000274,0x00000000,0x00000000,std::uint32_t>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
    }
    namespace Can0Mdh3{    ///<Mailbox Data High Register (MB = 3)
        using Addr = Register::Address<0xf8000278,0x00000000,0x00000000,std::uint32_t>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
    }
    namespace Can0Mcr3{    ///<Mailbox Control Register (MB = 3)
        using Addr = Register::Address<0xf800027c,0xff20ffff,0x00000000,std::uint32_t>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrtr{}; 
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> macr{}; 
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtcr{}; 
    }
    namespace Can0Mmr4{    ///<Mailbox Mode Register (MB = 4)
        using Addr = Register::Address<0xf8000280,0xf8f00000,0x00000000,std::uint32_t>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
        ///Mailbox Object Type
        enum class MotVal {
            mbDisabled=0x00000000,     ///<Mailbox is disabled. This prevents receiving or transmitting any messages with this mailbox.
            mbRx=0x00000001,     ///<Reception Mailbox. Mailbox is configured for reception. If a message is received while the mailbox data register is full, it is discarded.
            mbRxOverwrite=0x00000002,     ///<Reception mailbox with overwrite. Mailbox is configured for reception. If a message is received while the mailbox is full, it overwrites the previous message.
            mbTx=0x00000003,     ///<Transmit mailbox. Mailbox is configured for transmission.
            mbConsumer=0x00000004,     ///<Consumer Mailbox. Mailbox is configured in reception but behaves as a Transmit Mailbox, i.e., it sends a remote frame and waits for an answer.
            mbProducer=0x00000005,     ///<Producer Mailbox. Mailbox is configured in transmission but also behaves like a reception mailbox, i.e., it waits to receive a Remote Frame before sending its contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,MotVal> mot{}; 
        namespace MotValC{
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbProducer> mbProducer{};
        }
    }
    namespace Can0Mam4{    ///<Mailbox Acceptance Mask Register (MB = 4)
        using Addr = Register::Address<0xf8000284,0xc0000000,0x00000000,std::uint32_t>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can0Mid4{    ///<Mailbox ID Register (MB = 4)
        using Addr = Register::Address<0xf8000288,0xc0000000,0x00000000,std::uint32_t>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can0Mfid4{    ///<Mailbox Family ID Register (MB = 4)
        using Addr = Register::Address<0xf800028c,0xe0000000,0x00000000,std::uint32_t>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfid{}; 
    }
    namespace Can0Msr4{    ///<Mailbox Status Register (MB = 4)
        using Addr = Register::Address<0xf8000290,0xfe200000,0x00000000,std::uint32_t>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtimestamp{}; 
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrtr{}; 
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mabt{}; 
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrdy{}; 
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mmi{}; 
    }
    namespace Can0Mdl4{    ///<Mailbox Data Low Register (MB = 4)
        using Addr = Register::Address<0xf8000294,0x00000000,0x00000000,std::uint32_t>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
    }
    namespace Can0Mdh4{    ///<Mailbox Data High Register (MB = 4)
        using Addr = Register::Address<0xf8000298,0x00000000,0x00000000,std::uint32_t>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
    }
    namespace Can0Mcr4{    ///<Mailbox Control Register (MB = 4)
        using Addr = Register::Address<0xf800029c,0xff20ffff,0x00000000,std::uint32_t>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrtr{}; 
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> macr{}; 
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtcr{}; 
    }
    namespace Can0Mmr5{    ///<Mailbox Mode Register (MB = 5)
        using Addr = Register::Address<0xf80002a0,0xf8f00000,0x00000000,std::uint32_t>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
        ///Mailbox Object Type
        enum class MotVal {
            mbDisabled=0x00000000,     ///<Mailbox is disabled. This prevents receiving or transmitting any messages with this mailbox.
            mbRx=0x00000001,     ///<Reception Mailbox. Mailbox is configured for reception. If a message is received while the mailbox data register is full, it is discarded.
            mbRxOverwrite=0x00000002,     ///<Reception mailbox with overwrite. Mailbox is configured for reception. If a message is received while the mailbox is full, it overwrites the previous message.
            mbTx=0x00000003,     ///<Transmit mailbox. Mailbox is configured for transmission.
            mbConsumer=0x00000004,     ///<Consumer Mailbox. Mailbox is configured in reception but behaves as a Transmit Mailbox, i.e., it sends a remote frame and waits for an answer.
            mbProducer=0x00000005,     ///<Producer Mailbox. Mailbox is configured in transmission but also behaves like a reception mailbox, i.e., it waits to receive a Remote Frame before sending its contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,MotVal> mot{}; 
        namespace MotValC{
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbProducer> mbProducer{};
        }
    }
    namespace Can0Mam5{    ///<Mailbox Acceptance Mask Register (MB = 5)
        using Addr = Register::Address<0xf80002a4,0xc0000000,0x00000000,std::uint32_t>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can0Mid5{    ///<Mailbox ID Register (MB = 5)
        using Addr = Register::Address<0xf80002a8,0xc0000000,0x00000000,std::uint32_t>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can0Mfid5{    ///<Mailbox Family ID Register (MB = 5)
        using Addr = Register::Address<0xf80002ac,0xe0000000,0x00000000,std::uint32_t>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfid{}; 
    }
    namespace Can0Msr5{    ///<Mailbox Status Register (MB = 5)
        using Addr = Register::Address<0xf80002b0,0xfe200000,0x00000000,std::uint32_t>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtimestamp{}; 
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrtr{}; 
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mabt{}; 
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrdy{}; 
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mmi{}; 
    }
    namespace Can0Mdl5{    ///<Mailbox Data Low Register (MB = 5)
        using Addr = Register::Address<0xf80002b4,0x00000000,0x00000000,std::uint32_t>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
    }
    namespace Can0Mdh5{    ///<Mailbox Data High Register (MB = 5)
        using Addr = Register::Address<0xf80002b8,0x00000000,0x00000000,std::uint32_t>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
    }
    namespace Can0Mcr5{    ///<Mailbox Control Register (MB = 5)
        using Addr = Register::Address<0xf80002bc,0xff20ffff,0x00000000,std::uint32_t>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrtr{}; 
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> macr{}; 
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtcr{}; 
    }
    namespace Can0Mmr6{    ///<Mailbox Mode Register (MB = 6)
        using Addr = Register::Address<0xf80002c0,0xf8f00000,0x00000000,std::uint32_t>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
        ///Mailbox Object Type
        enum class MotVal {
            mbDisabled=0x00000000,     ///<Mailbox is disabled. This prevents receiving or transmitting any messages with this mailbox.
            mbRx=0x00000001,     ///<Reception Mailbox. Mailbox is configured for reception. If a message is received while the mailbox data register is full, it is discarded.
            mbRxOverwrite=0x00000002,     ///<Reception mailbox with overwrite. Mailbox is configured for reception. If a message is received while the mailbox is full, it overwrites the previous message.
            mbTx=0x00000003,     ///<Transmit mailbox. Mailbox is configured for transmission.
            mbConsumer=0x00000004,     ///<Consumer Mailbox. Mailbox is configured in reception but behaves as a Transmit Mailbox, i.e., it sends a remote frame and waits for an answer.
            mbProducer=0x00000005,     ///<Producer Mailbox. Mailbox is configured in transmission but also behaves like a reception mailbox, i.e., it waits to receive a Remote Frame before sending its contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,MotVal> mot{}; 
        namespace MotValC{
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbProducer> mbProducer{};
        }
    }
    namespace Can0Mam6{    ///<Mailbox Acceptance Mask Register (MB = 6)
        using Addr = Register::Address<0xf80002c4,0xc0000000,0x00000000,std::uint32_t>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can0Mid6{    ///<Mailbox ID Register (MB = 6)
        using Addr = Register::Address<0xf80002c8,0xc0000000,0x00000000,std::uint32_t>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can0Mfid6{    ///<Mailbox Family ID Register (MB = 6)
        using Addr = Register::Address<0xf80002cc,0xe0000000,0x00000000,std::uint32_t>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfid{}; 
    }
    namespace Can0Msr6{    ///<Mailbox Status Register (MB = 6)
        using Addr = Register::Address<0xf80002d0,0xfe200000,0x00000000,std::uint32_t>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtimestamp{}; 
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrtr{}; 
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mabt{}; 
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrdy{}; 
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mmi{}; 
    }
    namespace Can0Mdl6{    ///<Mailbox Data Low Register (MB = 6)
        using Addr = Register::Address<0xf80002d4,0x00000000,0x00000000,std::uint32_t>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
    }
    namespace Can0Mdh6{    ///<Mailbox Data High Register (MB = 6)
        using Addr = Register::Address<0xf80002d8,0x00000000,0x00000000,std::uint32_t>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
    }
    namespace Can0Mcr6{    ///<Mailbox Control Register (MB = 6)
        using Addr = Register::Address<0xf80002dc,0xff20ffff,0x00000000,std::uint32_t>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrtr{}; 
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> macr{}; 
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtcr{}; 
    }
    namespace Can0Mmr7{    ///<Mailbox Mode Register (MB = 7)
        using Addr = Register::Address<0xf80002e0,0xf8f00000,0x00000000,std::uint32_t>;
        ///Mailbox Timemark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtimemark{}; 
        ///Mailbox Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> prior{}; 
        ///Mailbox Object Type
        enum class MotVal {
            mbDisabled=0x00000000,     ///<Mailbox is disabled. This prevents receiving or transmitting any messages with this mailbox.
            mbRx=0x00000001,     ///<Reception Mailbox. Mailbox is configured for reception. If a message is received while the mailbox data register is full, it is discarded.
            mbRxOverwrite=0x00000002,     ///<Reception mailbox with overwrite. Mailbox is configured for reception. If a message is received while the mailbox is full, it overwrites the previous message.
            mbTx=0x00000003,     ///<Transmit mailbox. Mailbox is configured for transmission.
            mbConsumer=0x00000004,     ///<Consumer Mailbox. Mailbox is configured in reception but behaves as a Transmit Mailbox, i.e., it sends a remote frame and waits for an answer.
            mbProducer=0x00000005,     ///<Producer Mailbox. Mailbox is configured in transmission but also behaves like a reception mailbox, i.e., it waits to receive a Remote Frame before sending its contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,MotVal> mot{}; 
        namespace MotValC{
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbDisabled> mbDisabled{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRx> mbRx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbRxOverwrite> mbRxOverwrite{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbTx> mbTx{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbConsumer> mbConsumer{};
            constexpr Register::FieldValue<decltype(mot)::Type,MotVal::mbProducer> mbProducer{};
        }
    }
    namespace Can0Mam7{    ///<Mailbox Acceptance Mask Register (MB = 7)
        using Addr = Register::Address<0xf80002e4,0xc0000000,0x00000000,std::uint32_t>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can0Mid7{    ///<Mailbox ID Register (MB = 7)
        using Addr = Register::Address<0xf80002e8,0xc0000000,0x00000000,std::uint32_t>;
        ///Complementary bits for identifier in extended frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> midvb{}; 
        ///Identifier for standard frame mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,18),Register::ReadWriteAccess,unsigned> midva{}; 
        ///Identifier Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mide{}; 
    }
    namespace Can0Mfid7{    ///<Mailbox Family ID Register (MB = 7)
        using Addr = Register::Address<0xf80002ec,0xe0000000,0x00000000,std::uint32_t>;
        ///Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfid{}; 
    }
    namespace Can0Msr7{    ///<Mailbox Status Register (MB = 7)
        using Addr = Register::Address<0xf80002f0,0xfe200000,0x00000000,std::uint32_t>;
        ///Timer value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtimestamp{}; 
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrtr{}; 
        ///Mailbox Message Abort
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mabt{}; 
        ///Mailbox Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrdy{}; 
        ///Mailbox Message Ignored
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mmi{}; 
    }
    namespace Can0Mdl7{    ///<Mailbox Data Low Register (MB = 7)
        using Addr = Register::Address<0xf80002f4,0x00000000,0x00000000,std::uint32_t>;
        ///Message Data Low Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdl{}; 
    }
    namespace Can0Mdh7{    ///<Mailbox Data High Register (MB = 7)
        using Addr = Register::Address<0xf80002f8,0x00000000,0x00000000,std::uint32_t>;
        ///Message Data High Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdh{}; 
    }
    namespace Can0Mcr7{    ///<Mailbox Control Register (MB = 7)
        using Addr = Register::Address<0xf80002fc,0xff20ffff,0x00000000,std::uint32_t>;
        ///Mailbox Data Length Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdlc{}; 
        ///Mailbox Remote Transmission Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrtr{}; 
        ///Abort Request for Mailbox x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> macr{}; 
        ///Mailbox Transfer Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtcr{}; 
    }
}
