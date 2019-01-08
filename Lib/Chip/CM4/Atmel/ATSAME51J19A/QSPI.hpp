#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Quad SPI interface
    namespace QspiCtrla{    ///<Control A
        using Addr = Register::Address<0x42003400,0xfefffffc,0x00000000,std::uint32_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Last Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lastxfer{}; 
    }
    namespace QspiCtrlb{    ///<Control B
        using Addr = Register::Address<0x42003404,0x0000f0c0,0x00000000,std::uint32_t>;
        ///Serial Memory Mode
        enum class ModeVal {
            spi=0x00000000,     ///<SPI operating mode
            memory=0x00000001,     ///<Serial Memory operating mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::spi> spi{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::memory> memory{};
        }
        ///Local Loopback Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> loopen{}; 
        ///Wait Data Read Before Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wdrbt{}; 
        ///Serial Memory reg
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> smemreg{}; 
        ///Chip Select Mode
        enum class CsmodeVal {
            noreload=0x00000000,     ///<The chip select is deasserted if TD has not been reloaded before the end of the current transfer.
            lastxfer=0x00000001,     ///<The chip select is deasserted when the bit LASTXFER is written at 1 and the character written in TD has been transferred.
            systematically=0x00000002,     ///<The chip select is deasserted systematically after each transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,CsmodeVal> csmode{}; 
        namespace CsmodeValC{
            constexpr Register::FieldValue<decltype(csmode)::Type,CsmodeVal::noreload> noreload{};
            constexpr Register::FieldValue<decltype(csmode)::Type,CsmodeVal::lastxfer> lastxfer{};
            constexpr Register::FieldValue<decltype(csmode)::Type,CsmodeVal::systematically> systematically{};
        }
        ///Data Length
        enum class DatalenVal {
            v8bits=0x00000000,     ///<8-bits transfer
            v9bits=0x00000001,     ///<9 bits transfer
            v10bits=0x00000002,     ///<10-bits transfer
            v11bits=0x00000003,     ///<11-bits transfer
            v12bits=0x00000004,     ///<12-bits transfer
            v13bits=0x00000005,     ///<13-bits transfer
            v14bits=0x00000006,     ///<14-bits transfer
            v15bits=0x00000007,     ///<15-bits transfer
            v16bits=0x00000008,     ///<16-bits transfer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,DatalenVal> datalen{}; 
        namespace DatalenValC{
            constexpr Register::FieldValue<decltype(datalen)::Type,DatalenVal::v8bits> v8bits{};
            constexpr Register::FieldValue<decltype(datalen)::Type,DatalenVal::v9bits> v9bits{};
            constexpr Register::FieldValue<decltype(datalen)::Type,DatalenVal::v10bits> v10bits{};
            constexpr Register::FieldValue<decltype(datalen)::Type,DatalenVal::v11bits> v11bits{};
            constexpr Register::FieldValue<decltype(datalen)::Type,DatalenVal::v12bits> v12bits{};
            constexpr Register::FieldValue<decltype(datalen)::Type,DatalenVal::v13bits> v13bits{};
            constexpr Register::FieldValue<decltype(datalen)::Type,DatalenVal::v14bits> v14bits{};
            constexpr Register::FieldValue<decltype(datalen)::Type,DatalenVal::v15bits> v15bits{};
            constexpr Register::FieldValue<decltype(datalen)::Type,DatalenVal::v16bits> v16bits{};
        }
        ///Delay Between Consecutive Transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dlybct{}; 
        ///Minimum Inactive CS Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dlycs{}; 
    }
    namespace QspiBaud{    ///<Baud Rate
        using Addr = Register::Address<0x42003408,0xff0000fc,0x00000000,std::uint32_t>;
        ///Clock Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock Phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cpha{}; 
        ///Serial Clock Baud Rate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> baud{}; 
        ///Delay Before SCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dlybs{}; 
    }
    namespace QspiRxdata{    ///<Receive Data
        using Addr = Register::Address<0x4200340c,0xffff0000,0x00000000,std::uint32_t>;
        ///Receive Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> data{}; 
    }
    namespace QspiTxdata{    ///<Transmit Data
        using Addr = Register::Address<0x42003410,0xffff0000,0x00000000,std::uint32_t>;
        ///Transmit Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> data{}; 
    }
    namespace QspiIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x42003414,0xfffffaf0,0x00000000,std::uint32_t>;
        ///Receive Data Register Full Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxc{}; 
        ///Transmit Data Register Empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dre{}; 
        ///Transmission Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txc{}; 
        ///Overrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> error{}; 
        ///Chip Select Rise Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> csrise{}; 
        ///Instruction End Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> instrend{}; 
    }
    namespace QspiIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x42003418,0xfffffaf0,0x00000000,std::uint32_t>;
        ///Receive Data Register Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxc{}; 
        ///Transmit Data Register Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dre{}; 
        ///Transmission Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txc{}; 
        ///Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> error{}; 
        ///Chip Select Rise Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> csrise{}; 
        ///Instruction End Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> instrend{}; 
    }
    namespace QspiIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4200341c,0xfffffaf0,0x00000000,std::uint32_t>;
        ///Receive Data Register Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxc{}; 
        ///Transmit Data Register Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dre{}; 
        ///Transmission Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txc{}; 
        ///Overrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> error{}; 
        ///Chip Select Rise
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> csrise{}; 
        ///Instruction End
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> instrend{}; 
    }
    namespace QspiStatus{    ///<Status Register
        using Addr = Register::Address<0x42003420,0xfffffdfd,0x00000000,std::uint32_t>;
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
        ///Chip Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> csstatus{}; 
    }
    namespace QspiInstraddr{    ///<Instruction Address
        using Addr = Register::Address<0x42003430,0x00000000,0x00000000,std::uint32_t>;
        ///Instruction Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace QspiInstrctrl{    ///<Instruction Code
        using Addr = Register::Address<0x42003434,0xff00ff00,0x00000000,std::uint32_t>;
        ///Instruction Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> instr{}; 
        ///Option Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> optcode{}; 
    }
    namespace QspiInstrframe{    ///<Instruction Frame
        using Addr = Register::Address<0x42003438,0xffe00808,0x00000000,std::uint32_t>;
        ///Instruction Code, Address, Option Code and Data Width
        enum class WidthVal {
            singleBitSpi=0x00000000,     ///<Instruction: Single-bit SPI / Address-Option: Single-bit SPI / Data: Single-bit SPI
            dualOutput=0x00000001,     ///<Instruction: Single-bit SPI / Address-Option: Single-bit SPI / Data: Dual SPI
            quadOutput=0x00000002,     ///<Instruction: Single-bit SPI / Address-Option: Single-bit SPI / Data: Quad SPI
            dualIo=0x00000003,     ///<Instruction: Single-bit SPI / Address-Option: Dual SPI / Data: Dual SPI
            quadIo=0x00000004,     ///<Instruction: Single-bit SPI / Address-Option: Quad SPI / Data: Quad SPI
            dualCmd=0x00000005,     ///<Instruction: Dual SPI / Address-Option: Dual SPI / Data: Dual SPI
            quadCmd=0x00000006,     ///<Instruction: Quad SPI / Address-Option: Quad SPI / Data: Quad SPI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::singleBitSpi> singleBitSpi{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::dualOutput> dualOutput{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::quadOutput> quadOutput{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::dualIo> dualIo{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::quadIo> quadIo{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::dualCmd> dualCmd{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::quadCmd> quadCmd{};
        }
        ///Instruction Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> instren{}; 
        ///Address Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> addren{}; 
        ///Option Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> optcodeen{}; 
        ///Data Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dataen{}; 
        ///Option Code Length
        enum class OptcodelenVal {
            v1bit=0x00000000,     ///<1-bit length option code
            v2bits=0x00000001,     ///<2-bits length option code
            v4bits=0x00000002,     ///<4-bits length option code
            v8bits=0x00000003,     ///<8-bits length option code
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,OptcodelenVal> optcodelen{}; 
        namespace OptcodelenValC{
            constexpr Register::FieldValue<decltype(optcodelen)::Type,OptcodelenVal::v1bit> v1bit{};
            constexpr Register::FieldValue<decltype(optcodelen)::Type,OptcodelenVal::v2bits> v2bits{};
            constexpr Register::FieldValue<decltype(optcodelen)::Type,OptcodelenVal::v4bits> v4bits{};
            constexpr Register::FieldValue<decltype(optcodelen)::Type,OptcodelenVal::v8bits> v8bits{};
        }
        ///Address Length
        enum class AddrlenVal {
            v24bits=0x00000000,     ///<24-bits address length
            v32bits=0x00000001,     ///<32-bits address length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,AddrlenVal> addrlen{}; 
        namespace AddrlenValC{
            constexpr Register::FieldValue<decltype(addrlen)::Type,AddrlenVal::v24bits> v24bits{};
            constexpr Register::FieldValue<decltype(addrlen)::Type,AddrlenVal::v32bits> v32bits{};
        }
        ///Data Transfer Type
        enum class TfrtypeVal {
            read=0x00000000,     ///<Read transfer from the serial memory.Scrambling is not performed.Read at random location (fetch) in the serial flash memory is not possible.
            readmemory=0x00000001,     ///<Read data transfer from the serial memory.If enabled, scrambling is performed.Read at random location (fetch) in the serial flash memory is possible.
            write=0x00000002,     ///<Write transfer into the serial memory.Scrambling is not performed.
            writememory=0x00000003,     ///<Write data transfer into the serial memory.If enabled, scrambling is performed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,TfrtypeVal> tfrtype{}; 
        namespace TfrtypeValC{
            constexpr Register::FieldValue<decltype(tfrtype)::Type,TfrtypeVal::read> read{};
            constexpr Register::FieldValue<decltype(tfrtype)::Type,TfrtypeVal::readmemory> readmemory{};
            constexpr Register::FieldValue<decltype(tfrtype)::Type,TfrtypeVal::write> write{};
            constexpr Register::FieldValue<decltype(tfrtype)::Type,TfrtypeVal::writememory> writememory{};
        }
        ///Continuous Read Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> crmode{}; 
        ///Double Data Rate Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ddren{}; 
        ///Dummy Cycles Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> dummylen{}; 
    }
    namespace QspiScrambctrl{    ///<Scrambling Mode
        using Addr = Register::Address<0x42003440,0xfffffffc,0x00000000,std::uint32_t>;
        ///Scrambling/Unscrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Scrambling/Unscrambling Random Value Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> randomdis{}; 
    }
    namespace QspiScrambkey{    ///<Scrambling Key
        using Addr = Register::Address<0x42003444,0x00000000,0x00000000,std::uint32_t>;
        ///Scrambling User Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> key{}; 
    }
}
