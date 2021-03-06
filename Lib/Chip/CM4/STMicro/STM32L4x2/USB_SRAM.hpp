#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Universal serial bus full-speed device      interface
    namespace UsbSramEp0r{    ///<endpoint 0 register
        using Addr = Register::Address<0x40006c00,0xffff0000,0x00000000,std::uint32_t>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        ///Status bits, for transmission              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///Data Toggle, for transmission              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///Correct Transfer for              transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///Endpoint kind
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        ///Setup transaction              completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Status bits, for reception              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///Data Toggle, for reception              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///Correct transfer for              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
    }
    namespace UsbSramEp1r{    ///<endpoint 1 register
        using Addr = Register::Address<0x40006c04,0xffff0000,0x00000000,std::uint32_t>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        ///Status bits, for transmission              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///Data Toggle, for transmission              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///Correct Transfer for              transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///Endpoint kind
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        ///Setup transaction              completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Status bits, for reception              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///Data Toggle, for reception              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///Correct transfer for              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
    }
    namespace UsbSramEp2r{    ///<endpoint 2 register
        using Addr = Register::Address<0x40006c08,0xffff0000,0x00000000,std::uint32_t>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        ///Status bits, for transmission              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///Data Toggle, for transmission              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///Correct Transfer for              transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///Endpoint kind
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        ///Setup transaction              completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Status bits, for reception              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///Data Toggle, for reception              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///Correct transfer for              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
    }
    namespace UsbSramEp3r{    ///<endpoint 3 register
        using Addr = Register::Address<0x40006c0c,0xffff0000,0x00000000,std::uint32_t>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        ///Status bits, for transmission              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///Data Toggle, for transmission              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///Correct Transfer for              transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///Endpoint kind
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        ///Setup transaction              completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Status bits, for reception              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///Data Toggle, for reception              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///Correct transfer for              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
    }
    namespace UsbSramEp4r{    ///<endpoint 4 register
        using Addr = Register::Address<0x40006c10,0xffff0000,0x00000000,std::uint32_t>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        ///Status bits, for transmission              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///Data Toggle, for transmission              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///Correct Transfer for              transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///Endpoint kind
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        ///Setup transaction              completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Status bits, for reception              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///Data Toggle, for reception              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///Correct transfer for              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
    }
    namespace UsbSramEp5r{    ///<endpoint 5 register
        using Addr = Register::Address<0x40006c14,0xffff0000,0x00000000,std::uint32_t>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        ///Status bits, for transmission              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///Data Toggle, for transmission              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///Correct Transfer for              transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///Endpoint kind
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        ///Setup transaction              completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Status bits, for reception              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///Data Toggle, for reception              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///Correct transfer for              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
    }
    namespace UsbSramEp6r{    ///<endpoint 6 register
        using Addr = Register::Address<0x40006c18,0xffff0000,0x00000000,std::uint32_t>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        ///Status bits, for transmission              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///Data Toggle, for transmission              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///Correct Transfer for              transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///Endpoint kind
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        ///Setup transaction              completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Status bits, for reception              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///Data Toggle, for reception              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///Correct transfer for              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
    }
    namespace UsbSramEp7r{    ///<endpoint 7 register
        using Addr = Register::Address<0x40006c1c,0xffff0000,0x00000000,std::uint32_t>;
        ///Endpoint address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
        ///Status bits, for transmission              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///Data Toggle, for transmission              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///Correct Transfer for              transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///Endpoint kind
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> epType{}; 
        ///Setup transaction              completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///Status bits, for reception              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///Data Toggle, for reception              transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///Correct transfer for              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
    }
    namespace UsbSramCntr{    ///<control register
        using Addr = Register::Address<0x40006c40,0xffff0040,0x00000000,std::uint32_t>;
        ///Force USB Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fres{}; 
        ///Power down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdwn{}; 
        ///Low-power mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lpmode{}; 
        ///Force suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fsusp{}; 
        ///Resume request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> resume{}; 
        ///LPM L1 Resume request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> l1resume{}; 
        ///LPM L1 state request interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> l1reqm{}; 
        ///Expected start of frame interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> esofm{}; 
        ///Start of frame interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sofm{}; 
        ///USB reset interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> resetm{}; 
        ///Suspend mode interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> suspm{}; 
        ///Wakeup interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wkupm{}; 
        ///Error interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errm{}; 
        ///Packet memory area over / underrun              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmaovrm{}; 
        ///Correct transfer interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrm{}; 
    }
    namespace UsbSramIstr{    ///<interrupt status register
        using Addr = Register::Address<0x40006c44,0xffff0060,0x00000000,std::uint32_t>;
        ///Endpoint Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epId{}; 
        ///Direction of transaction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dir{}; 
        ///LPM L1 state request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> l1req{}; 
        ///Expected start frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> esof{}; 
        ///start of frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sof{}; 
        ///reset request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reset{}; 
        ///Suspend mode request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp{}; 
        ///Wakeup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wkup{}; 
        ///Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> err{}; 
        ///Packet memory area over /              underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmaovr{}; 
        ///Correct transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctr{}; 
    }
    namespace UsbSramFnr{    ///<frame number register
        using Addr = Register::Address<0x40006c48,0xffff0000,0x00000000,std::uint32_t>;
        ///Frame number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> fn{}; 
        ///Lost SOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> lsof{}; 
        ///Locked
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lck{}; 
        ///Receive data - line status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxdm{}; 
        ///Receive data + line status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxdp{}; 
    }
    namespace UsbSramDaddr{    ///<device address
        using Addr = Register::Address<0x40006c4c,0xffffff00,0x00000000,std::uint32_t>;
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> add{}; 
        ///Enable function
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ef{}; 
    }
    namespace UsbSramBtable{    ///<Buffer table address
        using Addr = Register::Address<0x40006c50,0xffff0007,0x00000000,std::uint32_t>;
        ///Buffer table
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,3),Register::ReadWriteAccess,unsigned> btable{}; 
    }
    namespace UsbSramLpmcsr{    ///<LPM control and status          register
        using Addr = Register::Address<0x40006c54,0xffffff04,0x00000000,std::uint32_t>;
        ///LPM support enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpmen{}; 
        ///LPM Token acknowledge              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lpmack{}; 
        ///bRemoteWake value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> remwake{}; 
        ///BESL value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> besl{}; 
    }
    namespace UsbSramBcdr{    ///<Battery charging detector
        using Addr = Register::Address<0x40006c58,0xffff7f00,0x00000000,std::uint32_t>;
        ///Battery charging detector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bcden{}; 
        ///Data contact detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcden{}; 
        ///Primary detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pden{}; 
        ///Secondary detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sden{}; 
        ///Data contact detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dcdet{}; 
        ///Primary detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdet{}; 
        ///Secondary detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdet{}; 
        ///DM pull-up detection              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ps2det{}; 
        ///DP pull-up control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dppu{}; 
    }
}
