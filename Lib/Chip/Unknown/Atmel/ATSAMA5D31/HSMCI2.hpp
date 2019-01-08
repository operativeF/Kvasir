#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//High Speed MultiMedia Card Interface 2
    namespace Hsmci2Cr{    ///<Control Register
        using Addr = Register::Address<0xf8004000,0xffffff70,0x00000000,std::uint32_t>;
        ///Multi-Media Interface Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mcien{}; 
        ///Multi-Media Interface Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mcidis{}; 
        ///Power Save Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pwsen{}; 
        ///Power Save Mode Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pwsdis{}; 
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
    }
    namespace Hsmci2Mr{    ///<Mode Register
        using Addr = Register::Address<0xf8004004,0xfffe8000,0x00000000,std::uint32_t>;
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Power Saving Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pwsdiv{}; 
        ///Read Proof Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rdproof{}; 
        ///Write Proof Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wrproof{}; 
        ///Force Byte Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbyte{}; 
        ///Padding Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> padv{}; 
        ///Clock divider is odd
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clkodd{}; 
    }
    namespace Hsmci2Dtor{    ///<Data Timeout Register
        using Addr = Register::Address<0xf8004008,0xffffff80,0x00000000,std::uint32_t>;
        ///Data Timeout Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dtocyc{}; 
        ///Data Timeout Multiplier
        enum class DtomulVal {
            v1=0x00000000,     ///<DTOCYC
            v16=0x00000001,     ///<DTOCYC x 16
            v128=0x00000002,     ///<DTOCYC x 128
            v256=0x00000003,     ///<DTOCYC x 256
            v1024=0x00000004,     ///<DTOCYC x 1024
            v4096=0x00000005,     ///<DTOCYC x 4096
            v65536=0x00000006,     ///<DTOCYC x 65536
            v1048576=0x00000007,     ///<DTOCYC x 1048576
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,DtomulVal> dtomul{}; 
        namespace DtomulValC{
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::v1> v1{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::v16> v16{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::v128> v128{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::v256> v256{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::v1024> v1024{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::v4096> v4096{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::v65536> v65536{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::v1048576> v1048576{};
        }
    }
    namespace Hsmci2Sdcr{    ///<SD/SDIO Card Register
        using Addr = Register::Address<0xf800400c,0xffffff3c,0x00000000,std::uint32_t>;
        ///SDCard/SDIO Slot
        enum class SdcselVal {
            slota=0x00000000,     ///<Slot A is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SdcselVal> sdcsel{}; 
        namespace SdcselValC{
            constexpr Register::FieldValue<decltype(sdcsel)::Type,SdcselVal::slota> slota{};
        }
        ///SDCard/SDIO Bus Width
        enum class SdcbusVal {
            v1=0x00000000,     ///<1 bit
            v4=0x00000002,     ///<4 bit
            v8=0x00000003,     ///<8 bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,SdcbusVal> sdcbus{}; 
        namespace SdcbusValC{
            constexpr Register::FieldValue<decltype(sdcbus)::Type,SdcbusVal::v1> v1{};
            constexpr Register::FieldValue<decltype(sdcbus)::Type,SdcbusVal::v4> v4{};
            constexpr Register::FieldValue<decltype(sdcbus)::Type,SdcbusVal::v8> v8{};
        }
    }
    namespace Hsmci2Argr{    ///<Argument Register
        using Addr = Register::Address<0xf8004010,0x00000000,0x00000000,std::uint32_t>;
        ///Command Argument
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> arg{}; 
    }
    namespace Hsmci2Cmdr{    ///<Command Register
        using Addr = Register::Address<0xf8004014,0xf0c0e000,0x00000000,std::uint32_t>;
        ///Command Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmdnb{}; 
        ///Response Type
        enum class RsptypVal {
            noresp=0x00000000,     ///<No response.
            v48Bit=0x00000001,     ///<48-bit response.
            v136Bit=0x00000002,     ///<136-bit response.
            r1b=0x00000003,     ///<R1b response type
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,RsptypVal> rsptyp{}; 
        namespace RsptypValC{
            constexpr Register::FieldValue<decltype(rsptyp)::Type,RsptypVal::noresp> noresp{};
            constexpr Register::FieldValue<decltype(rsptyp)::Type,RsptypVal::v48Bit> v48Bit{};
            constexpr Register::FieldValue<decltype(rsptyp)::Type,RsptypVal::v136Bit> v136Bit{};
            constexpr Register::FieldValue<decltype(rsptyp)::Type,RsptypVal::r1b> r1b{};
        }
        ///Special Command
        enum class SpcmdVal {
            std=0x00000000,     ///<Not a special CMD.
            init=0x00000001,     ///<Initialization CMD: 74 clock cycles for initialization sequence.
            sync=0x00000002,     ///<Synchronized CMD: Wait for the end of the current data block transfer before sending the pending command.
            ceAta=0x00000003,     ///<CE-ATA Completion Signal disable Command. The host cancels the ability for the device to return a command completion signal on the command line.
            itCmd=0x00000004,     ///<Interrupt command: Corresponds to the Interrupt Mode (CMD40).
            itResp=0x00000005,     ///<Interrupt response: Corresponds to the Interrupt Mode (CMD40).
            bor=0x00000006,     ///<Boot Operation Request. Start a boot operation mode, the host processor can read boot data from the MMC device directly.
            ebo=0x00000007,     ///<End Boot Operation. This command allows the host processor to terminate the boot operation mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SpcmdVal> spcmd{}; 
        namespace SpcmdValC{
            constexpr Register::FieldValue<decltype(spcmd)::Type,SpcmdVal::std> std{};
            constexpr Register::FieldValue<decltype(spcmd)::Type,SpcmdVal::init> init{};
            constexpr Register::FieldValue<decltype(spcmd)::Type,SpcmdVal::sync> sync{};
            constexpr Register::FieldValue<decltype(spcmd)::Type,SpcmdVal::ceAta> ceAta{};
            constexpr Register::FieldValue<decltype(spcmd)::Type,SpcmdVal::itCmd> itCmd{};
            constexpr Register::FieldValue<decltype(spcmd)::Type,SpcmdVal::itResp> itResp{};
            constexpr Register::FieldValue<decltype(spcmd)::Type,SpcmdVal::bor> bor{};
            constexpr Register::FieldValue<decltype(spcmd)::Type,SpcmdVal::ebo> ebo{};
        }
        ///Open Drain Command
        enum class OpdcmdVal {
            pushpull=0x00000000,     ///<Push pull command.
            opendrain=0x00000001,     ///<Open drain command.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,OpdcmdVal> opdcmd{}; 
        namespace OpdcmdValC{
            constexpr Register::FieldValue<decltype(opdcmd)::Type,OpdcmdVal::pushpull> pushpull{};
            constexpr Register::FieldValue<decltype(opdcmd)::Type,OpdcmdVal::opendrain> opendrain{};
        }
        ///Max Latency for Command to Response
        enum class MaxlatVal {
            v5=0x00000000,     ///<5-cycle max latency.
            v64=0x00000001,     ///<64-cycle max latency.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,MaxlatVal> maxlat{}; 
        namespace MaxlatValC{
            constexpr Register::FieldValue<decltype(maxlat)::Type,MaxlatVal::v5> v5{};
            constexpr Register::FieldValue<decltype(maxlat)::Type,MaxlatVal::v64> v64{};
        }
        ///Transfer Command
        enum class TrcmdVal {
            noData=0x00000000,     ///<No data transfer
            startData=0x00000001,     ///<Start data transfer
            stopData=0x00000002,     ///<Stop data transfer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TrcmdVal> trcmd{}; 
        namespace TrcmdValC{
            constexpr Register::FieldValue<decltype(trcmd)::Type,TrcmdVal::noData> noData{};
            constexpr Register::FieldValue<decltype(trcmd)::Type,TrcmdVal::startData> startData{};
            constexpr Register::FieldValue<decltype(trcmd)::Type,TrcmdVal::stopData> stopData{};
        }
        ///Transfer Direction
        enum class TrdirVal {
            write=0x00000000,     ///<Write.
            read=0x00000001,     ///<Read.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TrdirVal> trdir{}; 
        namespace TrdirValC{
            constexpr Register::FieldValue<decltype(trdir)::Type,TrdirVal::write> write{};
            constexpr Register::FieldValue<decltype(trdir)::Type,TrdirVal::read> read{};
        }
        ///Transfer Type
        enum class TrtypVal {
            single=0x00000000,     ///<MMC/SD Card Single Block
            multiple=0x00000001,     ///<MMC/SD Card Multiple Block
            stream=0x00000002,     ///<MMC Stream
            byte=0x00000004,     ///<SDIO Byte
            block=0x00000005,     ///<SDIO Block
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TrtypVal> trtyp{}; 
        namespace TrtypValC{
            constexpr Register::FieldValue<decltype(trtyp)::Type,TrtypVal::single> single{};
            constexpr Register::FieldValue<decltype(trtyp)::Type,TrtypVal::multiple> multiple{};
            constexpr Register::FieldValue<decltype(trtyp)::Type,TrtypVal::stream> stream{};
            constexpr Register::FieldValue<decltype(trtyp)::Type,TrtypVal::byte> byte{};
            constexpr Register::FieldValue<decltype(trtyp)::Type,TrtypVal::block> block{};
        }
        ///SDIO Special Command
        enum class IospcmdVal {
            std=0x00000000,     ///<Not an SDIO Special Command
            suspend=0x00000001,     ///<SDIO Suspend Command
            resume=0x00000002,     ///<SDIO Resume Command
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IospcmdVal> iospcmd{}; 
        namespace IospcmdValC{
            constexpr Register::FieldValue<decltype(iospcmd)::Type,IospcmdVal::std> std{};
            constexpr Register::FieldValue<decltype(iospcmd)::Type,IospcmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(iospcmd)::Type,IospcmdVal::resume> resume{};
        }
        ///ATA with Command Completion Signal
        enum class AtacsVal {
            normal=0x00000000,     ///<Normal operation mode.
            completion=0x00000001,     ///<This bit indicates that a completion signal is expected within a programmed amount of time (HSMCI_CSTOR).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,AtacsVal> atacs{}; 
        namespace AtacsValC{
            constexpr Register::FieldValue<decltype(atacs)::Type,AtacsVal::normal> normal{};
            constexpr Register::FieldValue<decltype(atacs)::Type,AtacsVal::completion> completion{};
        }
        ///Boot Operation Acknowledge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bootAck{}; 
    }
    namespace Hsmci2Blkr{    ///<Block Register
        using Addr = Register::Address<0xf8004018,0x00000000,0x00000000,std::uint32_t>;
        ///MMC/SDIO Block Count - SDIO Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bcnt{}; 
        ///Data Block Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blklen{}; 
    }
    namespace Hsmci2Cstor{    ///<Completion Signal Timeout Register
        using Addr = Register::Address<0xf800401c,0xffffff80,0x00000000,std::uint32_t>;
        ///Completion Signal Timeout Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cstocyc{}; 
        ///Completion Signal Timeout Multiplier
        enum class CstomulVal {
            v1=0x00000000,     ///<CSTOCYC x 1
            v16=0x00000001,     ///<CSTOCYC x 16
            v128=0x00000002,     ///<CSTOCYC x 128
            v256=0x00000003,     ///<CSTOCYC x 256
            v1024=0x00000004,     ///<CSTOCYC x 1024
            v4096=0x00000005,     ///<CSTOCYC x 4096
            v65536=0x00000006,     ///<CSTOCYC x 65536
            v1048576=0x00000007,     ///<CSTOCYC x 1048576
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,CstomulVal> cstomul{}; 
        namespace CstomulValC{
            constexpr Register::FieldValue<decltype(cstomul)::Type,CstomulVal::v1> v1{};
            constexpr Register::FieldValue<decltype(cstomul)::Type,CstomulVal::v16> v16{};
            constexpr Register::FieldValue<decltype(cstomul)::Type,CstomulVal::v128> v128{};
            constexpr Register::FieldValue<decltype(cstomul)::Type,CstomulVal::v256> v256{};
            constexpr Register::FieldValue<decltype(cstomul)::Type,CstomulVal::v1024> v1024{};
            constexpr Register::FieldValue<decltype(cstomul)::Type,CstomulVal::v4096> v4096{};
            constexpr Register::FieldValue<decltype(cstomul)::Type,CstomulVal::v65536> v65536{};
            constexpr Register::FieldValue<decltype(cstomul)::Type,CstomulVal::v1048576> v1048576{};
        }
    }
    namespace Hsmci2Rdr{    ///<Receive Data Register
        using Addr = Register::Address<0xf8004030,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> data{}; 
    }
    namespace Hsmci2Tdr{    ///<Transmit Data Register
        using Addr = Register::Address<0xf8004034,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> data{}; 
    }
    namespace Hsmci2Sr{    ///<Status Register
        using Addr = Register::Address<0xf8004040,0x0000cec0,0x00000000,std::uint32_t>;
        ///Command Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmdrdy{}; 
        ///Receiver Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Transmit Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Data Block Ended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blke{}; 
        ///Data Transfer in Progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtip{}; 
        ///HSMCI Not Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notbusy{}; 
        ///SDIO Interrupt for Slot A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdioirqa{}; 
        ///SDIO Read Wait Operation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdiowait{}; 
        ///CE-ATA Completion Signal Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> csrcv{}; 
        ///Response Index Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rinde{}; 
        ///Response Direction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdire{}; 
        ///Response CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcrce{}; 
        ///Response End Bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rende{}; 
        ///Response Time-out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rtoe{}; 
        ///Data CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dcrce{}; 
        ///Data Time-out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtoe{}; 
        ///Completion Signal Time-out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cstoe{}; 
        ///DMA Block Overrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blkovre{}; 
        ///DMA Transfer done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmadone{}; 
        ///FIFO empty flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoempty{}; 
        ///Transfer Done flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xfrdone{}; 
        ///Boot Operation Acknowledge Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackrcv{}; 
        ///Boot Operation Acknowledge Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackrcve{}; 
        ///Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> unre{}; 
    }
    namespace Hsmci2Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf8004044,0x0000cec0,0x00000000,std::uint32_t>;
        ///Command Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmdrdy{}; 
        ///Receiver Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Transmit Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Data Block Ended Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blke{}; 
        ///Data Transfer in Progress Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtip{}; 
        ///Data Not Busy Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notbusy{}; 
        ///SDIO Interrupt for Slot A Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdioirqa{}; 
        ///SDIO Read Wait Operation Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdiowait{}; 
        ///Completion Signal Received Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> csrcv{}; 
        ///Response Index Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rinde{}; 
        ///Response Direction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdire{}; 
        ///Response CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcrce{}; 
        ///Response End Bit Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rende{}; 
        ///Response Time-out Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rtoe{}; 
        ///Data CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dcrce{}; 
        ///Data Time-out Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtoe{}; 
        ///Completion Signal Timeout Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cstoe{}; 
        ///DMA Block Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blkovre{}; 
        ///DMA Transfer completed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmadone{}; 
        ///FIFO empty Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoempty{}; 
        ///Transfer Done Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xfrdone{}; 
        ///Boot Acknowledge Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackrcv{}; 
        ///Boot Acknowledge Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackrcve{}; 
        ///Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Underrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> unre{}; 
    }
    namespace Hsmci2Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf8004048,0x0000cec0,0x00000000,std::uint32_t>;
        ///Command Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmdrdy{}; 
        ///Receiver Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Transmit Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Data Block Ended Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blke{}; 
        ///Data Transfer in Progress Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtip{}; 
        ///Data Not Busy Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notbusy{}; 
        ///SDIO Interrupt for Slot A Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdioirqa{}; 
        ///SDIO Read Wait Operation Status Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdiowait{}; 
        ///Completion Signal received interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> csrcv{}; 
        ///Response Index Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rinde{}; 
        ///Response Direction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdire{}; 
        ///Response CRC Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcrce{}; 
        ///Response End Bit Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rende{}; 
        ///Response Time-out Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rtoe{}; 
        ///Data CRC Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dcrce{}; 
        ///Data Time-out Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtoe{}; 
        ///Completion Signal Time out Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cstoe{}; 
        ///DMA Block Overrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blkovre{}; 
        ///DMA Transfer completed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmadone{}; 
        ///FIFO empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoempty{}; 
        ///Transfer Done Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xfrdone{}; 
        ///Boot Acknowledge Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackrcv{}; 
        ///Boot Acknowledge Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackrcve{}; 
        ///Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Underrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> unre{}; 
    }
    namespace Hsmci2Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf800404c,0x0000cec0,0x00000000,std::uint32_t>;
        ///Command Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmdrdy{}; 
        ///Receiver Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Transmit Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Data Block Ended Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blke{}; 
        ///Data Transfer in Progress Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtip{}; 
        ///Data Not Busy Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notbusy{}; 
        ///SDIO Interrupt for Slot A Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdioirqa{}; 
        ///SDIO Read Wait Operation Status Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdiowait{}; 
        ///Completion Signal Received Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> csrcv{}; 
        ///Response Index Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rinde{}; 
        ///Response Direction Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdire{}; 
        ///Response CRC Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcrce{}; 
        ///Response End Bit Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rende{}; 
        ///Response Time-out Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rtoe{}; 
        ///Data CRC Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dcrce{}; 
        ///Data Time-out Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtoe{}; 
        ///Completion Signal Time-out Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cstoe{}; 
        ///DMA Block Overrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blkovre{}; 
        ///DMA Transfer Completed Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmadone{}; 
        ///FIFO Empty Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoempty{}; 
        ///Transfer Done Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xfrdone{}; 
        ///Boot Operation Acknowledge Received Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackrcv{}; 
        ///Boot Operation Acknowledge Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackrcve{}; 
        ///Overrun Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Underrun Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> unre{}; 
    }
    namespace Hsmci2Dma{    ///<DMA Configuration Register
        using Addr = Register::Address<0xf8004050,0xffffee8c,0x00000000,std::uint32_t>;
        ///DMA Write Buffer Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DMA Channel Read and Write Chunk Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> chksize{}; 
        ///DMA Hardware Handshaking Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///Read Optimization with padding
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ropt{}; 
    }
    namespace Hsmci2Cfg{    ///<Configuration Register
        using Addr = Register::Address<0xf8004054,0xffffeeee,0x00000000,std::uint32_t>;
        ///HSMCI Internal FIFO control mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fifomode{}; 
        ///Flow Error flag reset control mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ferrctrl{}; 
        ///High Speed Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hsmode{}; 
        ///Synchronize on the last block
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lsync{}; 
    }
    namespace Hsmci2Wpmr{    ///<Write Protection Mode Register
        using Addr = Register::Address<0xf80040e4,0x000000fe,0x00000000,std::uint32_t>;
        ///Write Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpEn{}; 
        ///Write Protection Key password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpKey{}; 
    }
    namespace Hsmci2Wpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0xf80040e8,0xff0000f0,0x00000000,std::uint32_t>;
        ///Write Protection Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpVs{}; 
        ///Write Protection Violation SouRCe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpVsrc{}; 
    }
    namespace Hsmci2Rspr0{    ///<Response Register
        using Addr = Register::Address<0xf8004020,0x00000000,0x00000000,std::uint32_t>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsp{}; 
    }
    namespace Hsmci2Rspr1{    ///<Response Register
        using Addr = Register::Address<0xf8004024,0x00000000,0x00000000,std::uint32_t>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsp{}; 
    }
    namespace Hsmci2Rspr2{    ///<Response Register
        using Addr = Register::Address<0xf8004028,0x00000000,0x00000000,std::uint32_t>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsp{}; 
    }
    namespace Hsmci2Rspr3{    ///<Response Register
        using Addr = Register::Address<0xf800402c,0x00000000,0x00000000,std::uint32_t>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsp{}; 
    }
    namespace Hsmci2Fifo0{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004200,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo1{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004204,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo2{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004208,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo3{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800420c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo4{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004210,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo5{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004214,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo6{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004218,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo7{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800421c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo8{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004220,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo9{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004224,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo10{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004228,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo11{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800422c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo12{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004230,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo13{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004234,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo14{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004238,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo15{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800423c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo16{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004240,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo17{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004244,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo18{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004248,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo19{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800424c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo20{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004250,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo21{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004254,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo22{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004258,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo23{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800425c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo24{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004260,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo25{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004264,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo26{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004268,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo27{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800426c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo28{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004270,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo29{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004274,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo30{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004278,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo31{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800427c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo32{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004280,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo33{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004284,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo34{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004288,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo35{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800428c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo36{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004290,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo37{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004294,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo38{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004298,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo39{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800429c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo40{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042a0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo41{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042a4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo42{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042a8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo43{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042ac,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo44{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042b0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo45{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042b4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo46{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042b8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo47{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042bc,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo48{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042c0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo49{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042c4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo50{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042c8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo51{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042cc,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo52{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042d0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo53{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042d4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo54{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042d8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo55{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042dc,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo56{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042e0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo57{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042e4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo58{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042e8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo59{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042ec,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo60{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042f0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo61{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042f4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo62{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042f8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo63{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80042fc,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo64{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004300,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo65{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004304,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo66{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004308,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo67{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800430c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo68{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004310,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo69{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004314,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo70{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004318,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo71{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800431c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo72{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004320,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo73{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004324,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo74{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004328,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo75{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800432c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo76{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004330,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo77{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004334,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo78{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004338,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo79{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800433c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo80{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004340,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo81{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004344,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo82{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004348,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo83{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800434c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo84{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004350,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo85{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004354,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo86{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004358,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo87{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800435c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo88{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004360,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo89{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004364,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo90{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004368,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo91{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800436c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo92{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004370,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo93{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004374,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo94{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004378,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo95{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800437c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo96{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004380,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo97{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004384,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo98{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004388,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo99{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800438c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo100{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004390,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo101{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004394,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo102{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004398,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo103{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800439c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo104{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043a0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo105{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043a4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo106{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043a8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo107{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043ac,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo108{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043b0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo109{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043b4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo110{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043b8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo111{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043bc,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo112{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043c0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo113{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043c4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo114{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043c8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo115{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043cc,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo116{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043d0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo117{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043d4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo118{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043d8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo119{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043dc,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo120{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043e0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo121{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043e4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo122{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043e8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo123{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043ec,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo124{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043f0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo125{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043f4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo126{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043f8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo127{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80043fc,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo128{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004400,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo129{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004404,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo130{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004408,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo131{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800440c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo132{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004410,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo133{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004414,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo134{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004418,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo135{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800441c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo136{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004420,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo137{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004424,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo138{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004428,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo139{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800442c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo140{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004430,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo141{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004434,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo142{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004438,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo143{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800443c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo144{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004440,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo145{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004444,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo146{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004448,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo147{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800444c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo148{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004450,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo149{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004454,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo150{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004458,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo151{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800445c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo152{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004460,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo153{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004464,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo154{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004468,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo155{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800446c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo156{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004470,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo157{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004474,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo158{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004478,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo159{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800447c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo160{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004480,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo161{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004484,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo162{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004488,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo163{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800448c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo164{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004490,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo165{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004494,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo166{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004498,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo167{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800449c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo168{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044a0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo169{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044a4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo170{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044a8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo171{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044ac,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo172{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044b0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo173{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044b4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo174{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044b8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo175{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044bc,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo176{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044c0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo177{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044c4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo178{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044c8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo179{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044cc,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo180{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044d0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo181{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044d4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo182{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044d8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo183{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044dc,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo184{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044e0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo185{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044e4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo186{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044e8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo187{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044ec,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo188{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044f0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo189{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044f4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo190{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044f8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo191{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80044fc,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo192{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004500,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo193{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004504,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo194{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004508,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo195{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800450c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo196{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004510,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo197{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004514,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo198{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004518,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo199{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800451c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo200{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004520,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo201{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004524,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo202{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004528,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo203{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800452c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo204{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004530,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo205{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004534,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo206{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004538,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo207{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800453c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo208{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004540,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo209{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004544,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo210{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004548,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo211{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800454c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo212{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004550,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo213{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004554,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo214{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004558,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo215{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800455c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo216{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004560,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo217{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004564,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo218{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004568,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo219{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800456c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo220{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004570,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo221{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004574,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo222{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004578,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo223{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800457c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo224{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004580,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo225{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004584,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo226{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004588,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo227{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800458c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo228{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004590,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo229{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004594,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo230{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf8004598,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo231{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf800459c,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo232{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045a0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo233{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045a4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo234{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045a8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo235{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045ac,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo236{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045b0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo237{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045b4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo238{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045b8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo239{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045bc,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo240{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045c0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo241{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045c4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo242{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045c8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo243{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045cc,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo244{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045d0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo245{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045d4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo246{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045d8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo247{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045dc,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo248{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045e0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo249{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045e4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo250{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045e8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo251{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045ec,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo252{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045f0,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo253{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045f4,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo254{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045f8,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci2Fifo255{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf80045fc,0x00000000,0x00000000,std::uint32_t>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
}
