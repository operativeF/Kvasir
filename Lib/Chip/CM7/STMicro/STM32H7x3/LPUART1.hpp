#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//LPUART1
    namespace Lpuart1Cr1{    ///<Control register 1
        using Addr = Register::Address<0x58000c00,0x0c008000,0x00000000,std::uint32_t>;
        ///RXFIFO Full interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> rxffie{}; 
        ///TXFIFO empty interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> txfeie{}; 
        ///FIFO mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fifoen{}; 
        ///Word length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> m1{}; 
        ///Driver Enable assertion              time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> deat{}; 
        ///Driver Enable deassertion              time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> dedt{}; 
        ///Character match interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cmie{}; 
        ///Mute mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mme{}; 
        ///Word length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> m0{}; 
        ///Receiver wakeup method
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wake{}; 
        ///Parity control enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pce{}; 
        ///Parity selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ps{}; 
        ///PE interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> peie{}; 
        ///interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txeie{}; 
        ///Transmission complete interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///RXNE interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxneie{}; 
        ///IDLE interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idleie{}; 
        ///Transmitter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> te{}; 
        ///Receiver enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> re{}; 
        ///USART enable in Stop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uesm{}; 
        ///USART enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ue{}; 
    }
    namespace Lpuart1Cr2{    ///<Control register 2
        using Addr = Register::Address<0x58000c04,0x00f04fef,0x00000000,std::uint32_t>;
        ///Address of the USART node
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> add{}; 
        ///Most significant bit first
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> msbfirst{}; 
        ///Binary data inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> datainv{}; 
        ///TX pin active level              inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txinv{}; 
        ///RX pin active level              inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxinv{}; 
        ///Swap TX/RX pins
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swap{}; 
        ///STOP bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> stop{}; 
        ///7-bit Address Detection/4-bit Address              Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> addm7{}; 
    }
    namespace Lpuart1Cr3{    ///<Control register 3
        using Addr = Register::Address<0x58000c08,0x010f0836,0x00000000,std::uint32_t>;
        ///TXFIFO threshold              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> txftcfg{}; 
        ///RXFIFO threshold interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rxftie{}; 
        ///Receive FIFO threshold              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> rxftcfg{}; 
        ///TXFIFO threshold interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> txftie{}; 
        ///Wakeup from Stop mode interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> wufie{}; 
        ///Wakeup from Stop mode interrupt flag              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> wus{}; 
        ///Driver enable polarity              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dep{}; 
        ///Driver enable mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dem{}; 
        ///DMA Disable on Reception              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ddre{}; 
        ///Overrun Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovrdis{}; 
        ///CTS interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctsie{}; 
        ///CTS enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctse{}; 
        ///RTS enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rtse{}; 
        ///DMA enable transmitter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmat{}; 
        ///DMA enable receiver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dmar{}; 
        ///Half-duplex selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hdsel{}; 
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eie{}; 
    }
    namespace Lpuart1Brr{    ///<Baud rate register
        using Addr = Register::Address<0x58000c0c,0xfff00000,0x00000000,std::uint32_t>;
        ///BRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> brr{}; 
    }
    namespace Lpuart1Gtpr{    ///<Guard time and prescaler          register
        using Addr = Register::Address<0x58000c10,0xffff0000,0x00000000,std::uint32_t>;
        ///Guard time value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gt{}; 
        ///Prescaler value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> psc{}; 
    }
    namespace Lpuart1Rtor{    ///<Receiver timeout register
        using Addr = Register::Address<0x58000c14,0x00000000,0x00000000,std::uint32_t>;
        ///Block Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> blen{}; 
        ///Receiver timeout value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> rto{}; 
    }
    namespace Lpuart1Rqr{    ///<Request register
        using Addr = Register::Address<0x58000c18,0xffffffe0,0x00000000,std::uint32_t>;
        ///Transmit data flush              request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txfrq{}; 
        ///Receive data flush request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxfrq{}; 
        ///Mute mode request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mmrq{}; 
        ///Send break request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sbkrq{}; 
        ///Auto baud rate request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> abrrq{}; 
    }
    namespace Lpuart1Isr{    ///<Interrupt & status          register
        using Addr = Register::Address<0x58000c1c,0xf200f900,0x00000000,std::uint32_t>;
        ///TXFIFO threshold flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> txft{}; 
        ///RXFIFO threshold flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rxft{}; 
        ///RXFIFO Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rxff{}; 
        ///TXFIFO Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> txfe{}; 
        ///REACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> reack{}; 
        ///TEACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> teack{}; 
        ///WUF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> wuf{}; 
        ///RWU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rwu{}; 
        ///SBKF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> sbkf{}; 
        ///CMF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmf{}; 
        ///BUSY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> busy{}; 
        ///CTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cts{}; 
        ///CTSIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctsif{}; 
        ///TXE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txe{}; 
        ///TC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tc{}; 
        ///RXNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxne{}; 
        ///IDLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idle{}; 
        ///ORE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        ///NE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ne{}; 
        ///FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe{}; 
        ///PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe{}; 
    }
    namespace Lpuart1Icr{    ///<Interrupt flag clear register
        using Addr = Register::Address<0x58000c20,0xffedfda0,0x00000000,std::uint32_t>;
        ///Wakeup from Stop mode clear              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> wucf{}; 
        ///Character match clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmcf{}; 
        ///CTS clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctscf{}; 
        ///Transmission complete clear              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tccf{}; 
        ///Idle line detected clear              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idlecf{}; 
        ///Overrun error clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> orecf{}; 
        ///Noise detected clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ncf{}; 
        ///Framing error clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fecf{}; 
        ///Parity error clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pecf{}; 
    }
    namespace Lpuart1Rdr{    ///<Receive data register
        using Addr = Register::Address<0x58000c24,0xfffffe00,0x00000000,std::uint32_t>;
        ///Receive data value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rdr{}; 
    }
    namespace Lpuart1Tdr{    ///<Transmit data register
        using Addr = Register::Address<0x58000c28,0xfffffe00,0x00000000,std::uint32_t>;
        ///Transmit data value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> tdr{}; 
    }
    namespace Lpuart1Presc{    ///<Prescaler register
        using Addr = Register::Address<0x58000c2c,0xfffffff0,0x00000000,std::uint32_t>;
        ///Clock prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> prescaler{}; 
    }
}
