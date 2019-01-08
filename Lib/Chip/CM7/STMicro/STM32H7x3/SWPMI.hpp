#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Single Wire Protocol Master      Interface
    namespace SwpmiCr{    ///<SWPMI Configuration/Control          register
        using Addr = Register::Address<0x40008800,0xfffff3c0,0x00000000,std::uint32_t>;
        ///Reception DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxdma{}; 
        ///Transmission DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txdma{}; 
        ///Reception buffering mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxmode{}; 
        ///Transmission buffering              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txmode{}; 
        ///Loopback mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lpbk{}; 
        ///Single wire protocol master interface              activate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> swpact{}; 
        ///Single wire protocol master interface              deactivate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> deact{}; 
        ///Single wire protocol master transceiver              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> swpten{}; 
    }
    namespace SwpmiBrr{    ///<SWPMI Bitrate register
        using Addr = Register::Address<0x40008804,0xffffff00,0x00000000,std::uint32_t>;
        ///Bitrate prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> br{}; 
    }
    namespace SwpmiIsr{    ///<SWPMI Interrupt and Status          register
        using Addr = Register::Address<0x4000880c,0xfffff000,0x00000000,std::uint32_t>;
        ///Receive buffer full flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxbff{}; 
        ///Transmit buffer empty flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txbef{}; 
        ///Receive CRC error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxberf{}; 
        ///Receive overrun error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxovrf{}; 
        ///Transmit underrun error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunrf{}; 
        ///Receive data register not              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxne{}; 
        ///Transmit data register              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txe{}; 
        ///Transfer complete flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcf{}; 
        ///Slave resume flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srf{}; 
        ///SUSPEND flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> susp{}; 
        ///DEACTIVATED flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> deactf{}; 
        ///transceiver ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rdyf{}; 
    }
    namespace SwpmiIcr{    ///<SWPMI Interrupt Flag Clear          register
        using Addr = Register::Address<0x40008810,0xfffff660,0x00000000,std::uint32_t>;
        ///Clear receive buffer full              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crxbff{}; 
        ///Clear transmit buffer empty              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctxbef{}; 
        ///Clear receive CRC error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> crxberf{}; 
        ///Clear receive overrun error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crxovrf{}; 
        ///Clear transmit underrun error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctxunrf{}; 
        ///Clear transfer complete              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctcf{}; 
        ///Clear slave resume flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> csrf{}; 
        ///Clear transceiver ready              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> crdyf{}; 
    }
    namespace SwpmiIer{    ///<SWPMI Interrupt Enable          register
        using Addr = Register::Address<0x40008814,0xfffff600,0x00000000,std::uint32_t>;
        ///Receive buffer full interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxbfie{}; 
        ///Transmit buffer empty interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txbeie{}; 
        ///Receive CRC error interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxberie{}; 
        ///Receive overrun error interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxovrie{}; 
        ///Transmit underrun error interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunrie{}; 
        ///Receive interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rie{}; 
        ///Transmit interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tie{}; 
        ///Transmit complete interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Slave resume interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srie{}; 
        ///Transceiver ready interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rdyie{}; 
    }
    namespace SwpmiRfl{    ///<SWPMI Receive Frame Length          register
        using Addr = Register::Address<0x40008818,0xffffffe0,0x00000000,std::uint32_t>;
        ///Receive frame length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> rfl{}; 
    }
    namespace SwpmiTdr{    ///<SWPMI Transmit data register
        using Addr = Register::Address<0x4000881c,0x00000000,0x00000000,std::uint32_t>;
        ///Transmit data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> td{}; 
    }
    namespace SwpmiRdr{    ///<SWPMI Receive data register
        using Addr = Register::Address<0x40008820,0x00000000,0x00000000,std::uint32_t>;
        ///received data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rd{}; 
    }
    namespace SwpmiOr{    ///<SWPMI Option register
        using Addr = Register::Address<0x40008824,0xfffffffc,0x00000000,std::uint32_t>;
        ///SWP transceiver bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swpTbyp{}; 
        ///SWP class selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swpClass{}; 
    }
}
