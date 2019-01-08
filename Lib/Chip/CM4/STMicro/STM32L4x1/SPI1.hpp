#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Serial peripheral interface/Inter-IC      sound
    namespace Spi1Cr1{    ///<control register 1
        using Addr = Register::Address<0x40013000,0xffff0000,0x00000000,std::uint32_t>;
        ///Bidirectional data mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bidimode{}; 
        ///Output enable in bidirectional              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> bidioe{}; 
        ///Hardware CRC calculation              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> crcen{}; 
        ///CRC transfer next
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crcnext{}; 
        ///Data frame format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dff{}; 
        ///Receive only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxonly{}; 
        ///Software slave management
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ssm{}; 
        ///Internal slave select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ssi{}; 
        ///Frame format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lsbfirst{}; 
        ///SPI enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> spe{}; 
        ///Baud rate control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> br{}; 
        ///Master selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mstr{}; 
        ///Clock polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpha{}; 
    }
    namespace Spi1Cr2{    ///<control register 2
        using Addr = Register::Address<0x40013004,0xffff8000,0x00000000,std::uint32_t>;
        ///Rx buffer DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxdmaen{}; 
        ///Tx buffer DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txdmaen{}; 
        ///SS output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ssoe{}; 
        ///NSS pulse management
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nssp{}; 
        ///Frame format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> frf{}; 
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> errie{}; 
        ///RX buffer not empty interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxneie{}; 
        ///Tx buffer empty interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txeie{}; 
        ///Data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> ds{}; 
        ///FIFO reception threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> frxth{}; 
        ///Last DMA transfer for              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ldmaRx{}; 
        ///Last DMA transfer for              transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ldmaTx{}; 
    }
    namespace Spi1Sr{    ///<status register
        using Addr = Register::Address<0x40013008,0xffffe00c,0x00000000,std::uint32_t>;
        ///Receive buffer not empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxne{}; 
        ///Transmit buffer empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txe{}; 
        ///CRC error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crcerr{}; 
        ///Mode fault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> modf{}; 
        ///Overrun flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovr{}; 
        ///Busy flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bsy{}; 
        ///TI frame format error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tifrfe{}; 
        ///FIFO reception level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frlvl{}; 
        ///FIFO transmission level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ftlvl{}; 
    }
    namespace Spi1Dr{    ///<data register
        using Addr = Register::Address<0x4001300c,0xffff0000,0x00000000,std::uint32_t>;
        ///Data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dr{}; 
    }
    namespace Spi1Crcpr{    ///<CRC polynomial register
        using Addr = Register::Address<0x40013010,0xffff0000,0x00000000,std::uint32_t>;
        ///CRC polynomial register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> crcpoly{}; 
    }
    namespace Spi1Rxcrcr{    ///<RX CRC register
        using Addr = Register::Address<0x40013014,0xffff0000,0x00000000,std::uint32_t>;
        ///Rx CRC register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxcrc{}; 
    }
    namespace Spi1Txcrcr{    ///<TX CRC register
        using Addr = Register::Address<0x40013018,0xffff0000,0x00000000,std::uint32_t>;
        ///Tx CRC register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txcrc{}; 
    }
}
