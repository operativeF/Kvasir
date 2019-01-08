#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Universal Asynchronous Receiver Transmitter 1
    namespace Uart1Cr{    ///<Control Register
        using Addr = Register::Address<0x400e0800,0xfffffe03,0x00000000,std::uint32_t>;
        ///Reset Receiver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rstrx{}; 
        ///Reset Transmitter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsttx{}; 
        ///Receiver Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxen{}; 
        ///Receiver Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxdis{}; 
        ///Transmitter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txen{}; 
        ///Transmitter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txdis{}; 
        ///Reset Status Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rststa{}; 
    }
    namespace Uart1Mr{    ///<Mode Register
        using Addr = Register::Address<0x400e0804,0xffff31ff,0x00000000,std::uint32_t>;
        ///Parity Type
        enum class ParVal {
            even=0x00000000,     ///<Even parity
            odd=0x00000001,     ///<Odd parity
            space=0x00000002,     ///<Space: parity forced to 0
            mark=0x00000003,     ///<Mark: parity forced to 1
            no=0x00000004,     ///<No parity
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,ParVal> par{}; 
        namespace ParValC{
            constexpr Register::FieldValue<decltype(par)::Type,ParVal::even> even{};
            constexpr Register::FieldValue<decltype(par)::Type,ParVal::odd> odd{};
            constexpr Register::FieldValue<decltype(par)::Type,ParVal::space> space{};
            constexpr Register::FieldValue<decltype(par)::Type,ParVal::mark> mark{};
            constexpr Register::FieldValue<decltype(par)::Type,ParVal::no> no{};
        }
        ///Channel Mode
        enum class ChmodeVal {
            normal=0x00000000,     ///<Normal Mode
            automatic=0x00000001,     ///<Automatic Echo
            localLoopback=0x00000002,     ///<Local Loopback
            remoteLoopback=0x00000003,     ///<Remote Loopback
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,ChmodeVal> chmode{}; 
        namespace ChmodeValC{
            constexpr Register::FieldValue<decltype(chmode)::Type,ChmodeVal::normal> normal{};
            constexpr Register::FieldValue<decltype(chmode)::Type,ChmodeVal::automatic> automatic{};
            constexpr Register::FieldValue<decltype(chmode)::Type,ChmodeVal::localLoopback> localLoopback{};
            constexpr Register::FieldValue<decltype(chmode)::Type,ChmodeVal::remoteLoopback> remoteLoopback{};
        }
    }
    namespace Uart1Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x400e0808,0xffffe504,0x00000000,std::uint32_t>;
        ///Enable RXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Enable TXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Enable End of Receive Transfer Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endrx{}; 
        ///Enable End of Transmit Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endtx{}; 
        ///Enable Overrun Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Enable Framing Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frame{}; 
        ///Enable Parity Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pare{}; 
        ///Enable TXEMPTY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
        ///Enable Buffer Empty Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbufe{}; 
        ///Enable Buffer Full Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxbuff{}; 
    }
    namespace Uart1Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x400e080c,0xffffe504,0x00000000,std::uint32_t>;
        ///Disable RXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Disable TXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Disable End of Receive Transfer Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endrx{}; 
        ///Disable End of Transmit Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endtx{}; 
        ///Disable Overrun Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Disable Framing Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frame{}; 
        ///Disable Parity Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pare{}; 
        ///Disable TXEMPTY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
        ///Disable Buffer Empty Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbufe{}; 
        ///Disable Buffer Full Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxbuff{}; 
    }
    namespace Uart1Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x400e0810,0xffffe504,0x00000000,std::uint32_t>;
        ///Mask RXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Disable TXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Mask End of Receive Transfer Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endrx{}; 
        ///Mask End of Transmit Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endtx{}; 
        ///Mask Overrun Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Mask Framing Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frame{}; 
        ///Mask Parity Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pare{}; 
        ///Mask TXEMPTY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
        ///Mask TXBUFE Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbufe{}; 
        ///Mask RXBUFF Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxbuff{}; 
    }
    namespace Uart1Sr{    ///<Status Register
        using Addr = Register::Address<0x400e0814,0xffffe504,0x00000000,std::uint32_t>;
        ///Receiver Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Transmitter Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///End of Receiver Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endrx{}; 
        ///End of Transmitter Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endtx{}; 
        ///Overrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Framing Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frame{}; 
        ///Parity Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pare{}; 
        ///Transmitter Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
        ///Transmission Buffer Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbufe{}; 
        ///Receive Buffer Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxbuff{}; 
    }
    namespace Uart1Rhr{    ///<Receive Holding Register
        using Addr = Register::Address<0x400e0818,0xffffff00,0x00000000,std::uint32_t>;
        ///Received Character
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxchr{}; 
    }
    namespace Uart1Thr{    ///<Transmit Holding Register
        using Addr = Register::Address<0x400e081c,0xffffff00,0x00000000,std::uint32_t>;
        ///Character to be Transmitted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txchr{}; 
    }
    namespace Uart1Brgr{    ///<Baud Rate Generator Register
        using Addr = Register::Address<0x400e0820,0xffff0000,0x00000000,std::uint32_t>;
        ///Clock Divisor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cd{}; 
    }
}
