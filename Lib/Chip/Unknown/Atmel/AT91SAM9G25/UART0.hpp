#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Universal Asynchronous Receiver Transmitter 0
    namespace Uart0Cr{    ///<Control Register
        using Addr = Register::Address<0xf8040000,0xfffffe03,0x00000000,std::uint32_t>;
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
    namespace Uart0Mr{    ///<Mode Register
        using Addr = Register::Address<0xf8040004,0xffff31ff,0x00000000,std::uint32_t>;
        ///Parity Type
        enum class ParVal {
            even=0x00000000,     ///<Even Parity
            odd=0x00000001,     ///<Odd Parity
            space=0x00000002,     ///<Space: parity forced to 0
            mark=0x00000003,     ///<Mark: parity forced to 1
            no=0x00000004,     ///<No Parity
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
    namespace Uart0Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf8040008,0xfffffd1c,0x00000000,std::uint32_t>;
        ///Enable RXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Enable TXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Enable Overrun Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Enable Framing Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frame{}; 
        ///Enable Parity Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pare{}; 
        ///Enable TXEMPTY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
    }
    namespace Uart0Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf804000c,0xfffffd1c,0x00000000,std::uint32_t>;
        ///Disable RXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Disable TXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Disable Overrun Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Disable Framing Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frame{}; 
        ///Disable Parity Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pare{}; 
        ///Disable TXEMPTY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
    }
    namespace Uart0Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf8040010,0xfffffd1c,0x00000000,std::uint32_t>;
        ///Mask RXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Disable TXRDY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Mask Overrun Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Mask Framing Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frame{}; 
        ///Mask Parity Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pare{}; 
        ///Mask TXEMPTY Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
    }
    namespace Uart0Sr{    ///<Status Register
        using Addr = Register::Address<0xf8040014,0xfffffd1c,0x00000000,std::uint32_t>;
        ///Receiver Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Transmitter Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Overrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Framing Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frame{}; 
        ///Parity Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pare{}; 
        ///Transmitter Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
    }
    namespace Uart0Rhr{    ///<Receive Holding Register
        using Addr = Register::Address<0xf8040018,0xffffff00,0x00000000,std::uint32_t>;
        ///Received Character
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxchr{}; 
    }
    namespace Uart0Thr{    ///<Transmit Holding Register
        using Addr = Register::Address<0xf804001c,0xffffff00,0x00000000,std::uint32_t>;
        ///Character to be Transmitted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txchr{}; 
    }
    namespace Uart0Brgr{    ///<Baud Rate Generator Register
        using Addr = Register::Address<0xf8040020,0xffff0000,0x00000000,std::uint32_t>;
        ///Clock Divisor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cd{}; 
    }
}
