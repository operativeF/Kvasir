#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//HDMI-CEC controller
    namespace HdmiCecCecCr{    ///<CEC control register
        using Addr = Register::Address<0x40006c00,0xfffffff8,0x00000000,std::uint32_t>;
        ///Tx End Of Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txeom{}; 
        ///Tx Start Of Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txsom{}; 
        ///CEC Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cecen{}; 
    }
    namespace HdmiCecCecCfgr{    ///<CEC configuration register
        using Addr = Register::Address<0x40006c04,0x0000fe00,0x00000000,std::uint32_t>;
        ///Listen mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lstn{}; 
        ///Own addresses              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,16),Register::ReadWriteAccess,unsigned> oar{}; 
        ///SFT Option Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sftop{}; 
        ///Avoid Error-Bit Generation in              Broadcast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> brdnogen{}; 
        ///Generate Error-Bit on Long Bit Period              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lbpegen{}; 
        ///Generate Error-Bit on Bit Rising              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bregen{}; 
        ///Rx-Stop on Bit Rising              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> brestp{}; 
        ///Rx-Tolerance
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxtol{}; 
        ///Signal Free Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sft{}; 
    }
    namespace HdmiCecCecTxdr{    ///<CEC Tx data register
        using Addr = Register::Address<0x40006c08,0xffffff00,0x00000000,std::uint32_t>;
        ///Tx Data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
    }
    namespace HdmiCecCecRxdr{    ///<CEC Rx Data Register
        using Addr = Register::Address<0x40006c0c,0xffffff00,0x00000000,std::uint32_t>;
        ///Rx Data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxd{}; 
    }
    namespace HdmiCecCecIsr{    ///<CEC Interrupt and Status          Register
        using Addr = Register::Address<0x40006c10,0xffffe000,0x00000000,std::uint32_t>;
        ///Tx-Missing Acknowledge              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txacke{}; 
        ///Tx-Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Tx-Buffer Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txudr{}; 
        ///End of Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txend{}; 
        ///Tx-Byte Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txbr{}; 
        ///Arbitration Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arblst{}; 
        ///Rx-Missing Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxacke{}; 
        ///Rx-Long Bit Period Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbpe{}; 
        ///Rx-Short Bit Period Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sbpe{}; 
        ///Rx-Bit Rising Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bre{}; 
        ///Rx-Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxovr{}; 
        ///End Of Reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxend{}; 
        ///Rx-Byte Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxbr{}; 
    }
    namespace HdmiCecCecIer{    ///<CEC interrupt enable register
        using Addr = Register::Address<0x40006c14,0xffffe000,0x00000000,std::uint32_t>;
        ///Tx-Missing Acknowledge Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txackie{}; 
        ///Tx-Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txerrie{}; 
        ///Tx-Underrun Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txudrie{}; 
        ///Tx-End Of Message Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txendie{}; 
        ///Tx-Byte Request Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txbrie{}; 
        ///Arbitration Lost Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arblstie{}; 
        ///Rx-Missing Acknowledge Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxackie{}; 
        ///Long Bit Period Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbpeie{}; 
        ///Short Bit Period Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sbpeie{}; 
        ///Bit Rising Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> breie{}; 
        ///Rx-Buffer Overrun Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxovrie{}; 
        ///End Of Reception Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxendie{}; 
        ///Rx-Byte Received Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxbrie{}; 
    }
}
