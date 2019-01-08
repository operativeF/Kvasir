#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Serial peripheral interface
    namespace Spi1Cr1{    ///<control register 1
        using Addr = Register::Address<0x40013000,0xfffe00fe,0x00000000,std::uint32_t>;
        ///Locking the AF configuration of              associated IOs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> iolock{}; 
        ///CRC calculation initialization pattern              control for transmitter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tcrci{}; 
        ///CRC calculation initialization pattern              control for receiver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcrci{}; 
        ///32-bit CRC polynomial              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> crc3317{}; 
        ///Internal SS signal input              level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ssi{}; 
        ///Rx/Tx direction at Half-duplex              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hddir{}; 
        ///Master SUSPend request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> csusp{}; 
        ///Master transfer start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cstart{}; 
        ///Master automatic SUSP in Receive              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> masrx{}; 
        ///Serial Peripheral Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> spe{}; 
    }
    namespace Spi1Cr2{    ///<control register 2
        using Addr = Register::Address<0x40013004,0x00000000,0x00000000,std::uint32_t>;
        ///Number of data transfer extension to be              reload into TSIZE just when a previous
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tser{}; 
        ///Number of data at current              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tsize{}; 
    }
    namespace Spi1Cfg1{    ///<configuration register 1
        using Addr = Register::Address<0x40013008,0x8fa02000,0x00000000,std::uint32_t>;
        ///Master baud rate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> mbr{}; 
        ///Hardware CRC computation              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> crcen{}; 
        ///Length of CRC frame to be transacted and              compared
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> crcsize{}; 
        ///Tx DMA stream enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txdmaen{}; 
        ///Rx DMA stream enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxdmaen{}; 
        ///Detection of underrun condition at slave              transmitter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> udrdet{}; 
        ///Behavior of slave transmitter at              underrun condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> udrcfg{}; 
        ///threshold level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,5),Register::ReadWriteAccess,unsigned> fthvl{}; 
        ///Number of bits in at single SPI data              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dsize{}; 
    }
    namespace Spi1Cfg2{    ///<configuration register 2
        using Addr = Register::Address<0x4001300c,0x08017f00,0x00000000,std::uint32_t>;
        ///Alternate function GPIOs              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> afcntr{}; 
        ///SS output management in master              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ssom{}; 
        ///SS output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ssoe{}; 
        ///SS input/output polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ssiop{}; 
        ///Software management of SS signal              input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ssm{}; 
        ///Clock polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cpha{}; 
        ///Data frame format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> lsbfrst{}; 
        ///SPI Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> master{}; 
        ///Serial Protocol
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,unsigned> sp{}; 
        ///SPI Communication Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> comm{}; 
        ///Swap functionality of MISO and MOSI              pins
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ioswp{}; 
        ///Master Inter-Data Idleness
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> midi{}; 
        ///Master SS Idleness
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mssi{}; 
    }
    namespace Spi1Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40013010,0xfffff800,0x00000000,std::uint32_t>;
        ///Additional number of transactions reload              interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tserfie{}; 
        ///Mode Fault interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> modfie{}; 
        ///TIFRE interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tifreie{}; 
        ///CRC Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> crceie{}; 
        ///OVR interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovrie{}; 
        ///UDR interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> udrie{}; 
        ///TXTFIE interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txtfie{}; 
        ///EOT, SUSP and TXC interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eotie{}; 
        ///DXP interrupt enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dpxpie{}; 
        ///TXP interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txpie{}; 
        ///RXP Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxpie{}; 
    }
    namespace Spi1Sr{    ///<Status Register
        using Addr = Register::Address<0x40013014,0x00000000,0x00000000,std::uint32_t>;
        ///Number of data frames remaining in              current TSIZE session
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctsize{}; 
        ///RxFIFO Word Not Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxwne{}; 
        ///RxFIFO Packing LeVeL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> rxplvl{}; 
        ///TxFIFO transmission              complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txc{}; 
        ///SUSPend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp{}; 
        ///Additional number of SPI data to be              transacted was reload
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tserf{}; 
        ///Mode Fault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> modf{}; 
        ///TI frame format error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tifre{}; 
        ///CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> crce{}; 
        ///Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Underrun at slave transmission              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> udr{}; 
        ///Transmission Transfer              Filled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txtf{}; 
        ///End Of Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eot{}; 
        ///Duplex Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dxp{}; 
        ///Tx-Packet space available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txp{}; 
        ///Rx-Packet available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxp{}; 
    }
    namespace Spi1Ifcr{    ///<Interrupt/Status Flags Clear          Register
        using Addr = Register::Address<0x40013018,0xfffff007,0x00000000,std::uint32_t>;
        ///SUSPend flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> suspc{}; 
        ///TSERFC flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tserfc{}; 
        ///Mode Fault flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> modfc{}; 
        ///TI frame format error flag              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tifrec{}; 
        ///CRC Error flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> crcec{}; 
        ///Overrun flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovrc{}; 
        ///Underrun flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> udrc{}; 
        ///Transmission Transfer Filled flag              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txtfc{}; 
        ///End Of Transfer flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eotc{}; 
    }
    namespace Spi1Txdr{    ///<Transmit Data Register
        using Addr = Register::Address<0x40013020,0x00000000,0x00000000,std::uint32_t>;
        ///Transmit data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txdr{}; 
    }
    namespace Spi1Rxdr{    ///<Receive Data Register
        using Addr = Register::Address<0x40013030,0x00000000,0x00000000,std::uint32_t>;
        ///Receive data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxdr{}; 
    }
    namespace Spi1Crcpoly{    ///<Polynomial Register
        using Addr = Register::Address<0x40013040,0x00000000,0x00000000,std::uint32_t>;
        ///CRC polynomial register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcpoly{}; 
    }
    namespace Spi1Txcrc{    ///<Transmitter CRC Register
        using Addr = Register::Address<0x40013044,0x00000000,0x00000000,std::uint32_t>;
        ///CRC register for              transmitter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txcrc{}; 
    }
    namespace Spi1Rxcrc{    ///<Receiver CRC Register
        using Addr = Register::Address<0x40013048,0x00000000,0x00000000,std::uint32_t>;
        ///CRC register for receiver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxcrc{}; 
    }
    namespace Spi1Udrdr{    ///<Underrun Data Register
        using Addr = Register::Address<0x4001304c,0x00000000,0x00000000,std::uint32_t>;
        ///Data at slave underrun              condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> udrdr{}; 
    }
    namespace Spi1Cgfr{    ///<configuration register
        using Addr = Register::Address<0x40013050,0xfc008040,0x00000000,std::uint32_t>;
        ///Master clock output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mckoe{}; 
        ///Odd factor for the              prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> odd{}; 
        ///I2S linear prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> i2sdiv{}; 
        ///Data format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> datfmt{}; 
        ///Fixed channel length in              SLAVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wsinv{}; 
        ///Word select inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fixch{}; 
        ///Serial audio clock              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ckpol{}; 
        ///Channel length (number of bits per audio              channel)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> chlen{}; 
        ///Data length to be              transferred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> datlen{}; 
        ///PCM frame synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pcmsync{}; 
        ///I2S standard selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> i2sstd{}; 
        ///I2S configuration mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> i2scfg{}; 
        ///I2S mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> i2smod{}; 
    }
}
