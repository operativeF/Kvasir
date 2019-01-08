#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Inter-IC Sound Interface
    namespace I2sCtrla{    ///<Control A
        using Addr = Register::Address<0x43002800,0xffffffc0,0x00000000,std::uint8_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Clock Unit 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cken0{}; 
        ///Clock Unit 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cken1{}; 
        ///Tx Serializer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txen{}; 
        ///Rx Serializer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxen{}; 
    }
    namespace I2sIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x4300280c,0xffffcccc,0x00000000,std::uint16_t>;
        ///Receive Ready 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy0{}; 
        ///Receive Ready 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy1{}; 
        ///Receive Overrun 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxor0{}; 
        ///Receive Overrun 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxor1{}; 
        ///Transmit Ready 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrdy0{}; 
        ///Transmit Ready 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txrdy1{}; 
        ///Transmit Underrun 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txur0{}; 
        ///Transmit Underrun 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txur1{}; 
    }
    namespace I2sIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x43002810,0xffffcccc,0x00000000,std::uint16_t>;
        ///Receive Ready 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy0{}; 
        ///Receive Ready 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy1{}; 
        ///Receive Overrun 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxor0{}; 
        ///Receive Overrun 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxor1{}; 
        ///Transmit Ready 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrdy0{}; 
        ///Transmit Ready 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txrdy1{}; 
        ///Transmit Underrun 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txur0{}; 
        ///Transmit Underrun 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txur1{}; 
    }
    namespace I2sIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x43002814,0xffffcccc,0x00000000,std::uint16_t>;
        ///Receive Ready 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy0{}; 
        ///Receive Ready 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy1{}; 
        ///Receive Overrun 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxor0{}; 
        ///Receive Overrun 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxor1{}; 
        ///Transmit Ready 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrdy0{}; 
        ///Transmit Ready 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txrdy1{}; 
        ///Transmit Underrun 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txur0{}; 
        ///Transmit Underrun 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txur1{}; 
    }
    namespace I2sSyncbusy{    ///<Synchronization Status
        using Addr = Register::Address<0x43002818,0xfffffcc0,0x00000000,std::uint16_t>;
        ///Software Reset Synchronization Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable Synchronization Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Clock Unit 0 Enable Synchronization Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cken0{}; 
        ///Clock Unit 1 Enable Synchronization Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cken1{}; 
        ///Tx Serializer Enable Synchronization Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txen{}; 
        ///Rx Serializer Enable Synchronization Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxen{}; 
        ///Tx Data Synchronization Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txdata{}; 
        ///Rx Data Synchronization Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxdata{}; 
    }
    namespace I2sTxctrl{    ///<Tx Serializer Control
        using Addr = Register::Address<0x43002820,0xfc000863,0x00000000,std::uint32_t>;
        ///Line Default Line when Slot Disabled
        enum class TxdefaultVal {
            zero=0x00000000,     ///<Output Default Value is 0
            one=0x00000001,     ///<Output Default Value is 1
            hiz=0x00000003,     ///<Output Default Value is high impedance
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,TxdefaultVal> txdefault{}; 
        namespace TxdefaultValC{
            constexpr Register::FieldValue<decltype(txdefault)::Type,TxdefaultVal::zero> zero{};
            constexpr Register::FieldValue<decltype(txdefault)::Type,TxdefaultVal::one> one{};
            constexpr Register::FieldValue<decltype(txdefault)::Type,TxdefaultVal::hiz> hiz{};
        }
        ///Transmit Data when Underrun
        enum class TxsameVal {
            zero=0x00000000,     ///<Zero data transmitted in case of underrun
            same=0x00000001,     ///<Last data transmitted in case of underrun
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TxsameVal> txsame{}; 
        namespace TxsameValC{
            constexpr Register::FieldValue<decltype(txsame)::Type,TxsameVal::zero> zero{};
            constexpr Register::FieldValue<decltype(txsame)::Type,TxsameVal::same> same{};
        }
        ///Data Slot Formatting Adjust
        enum class SlotadjVal {
            right=0x00000000,     ///<Data is right adjusted in slot
            left=0x00000001,     ///<Data is left adjusted in slot
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SlotadjVal> slotadj{}; 
        namespace SlotadjValC{
            constexpr Register::FieldValue<decltype(slotadj)::Type,SlotadjVal::right> right{};
            constexpr Register::FieldValue<decltype(slotadj)::Type,SlotadjVal::left> left{};
        }
        ///Data Word Size
        enum class DatasizeVal {
            v32=0x00000000,     ///<32 bits
            v24=0x00000001,     ///<24 bits
            v20=0x00000002,     ///<20 bits
            v18=0x00000003,     ///<18 bits
            v16=0x00000004,     ///<16 bits
            v16c=0x00000005,     ///<16 bits compact stereo
            v8=0x00000006,     ///<8 bits
            v8c=0x00000007,     ///<8 bits compact stereo
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DatasizeVal> datasize{}; 
        namespace DatasizeValC{
            constexpr Register::FieldValue<decltype(datasize)::Type,DatasizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(datasize)::Type,DatasizeVal::v24> v24{};
            constexpr Register::FieldValue<decltype(datasize)::Type,DatasizeVal::v20> v20{};
            constexpr Register::FieldValue<decltype(datasize)::Type,DatasizeVal::v18> v18{};
            constexpr Register::FieldValue<decltype(datasize)::Type,DatasizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(datasize)::Type,DatasizeVal::v16c> v16c{};
            constexpr Register::FieldValue<decltype(datasize)::Type,DatasizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(datasize)::Type,DatasizeVal::v8c> v8c{};
        }
        ///Data Word Formatting Adjust
        enum class WordadjVal {
            right=0x00000000,     ///<Data is right adjusted in word
            left=0x00000001,     ///<Data is left adjusted in word
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,WordadjVal> wordadj{}; 
        namespace WordadjValC{
            constexpr Register::FieldValue<decltype(wordadj)::Type,WordadjVal::right> right{};
            constexpr Register::FieldValue<decltype(wordadj)::Type,WordadjVal::left> left{};
        }
        ///Data Formatting Bit Extension
        enum class ExtendVal {
            zero=0x00000000,     ///<Extend with zeroes
            one=0x00000001,     ///<Extend with ones
            msbit=0x00000002,     ///<Extend with Most Significant Bit
            lsbit=0x00000003,     ///<Extend with Least Significant Bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,ExtendVal> extend{}; 
        namespace ExtendValC{
            constexpr Register::FieldValue<decltype(extend)::Type,ExtendVal::zero> zero{};
            constexpr Register::FieldValue<decltype(extend)::Type,ExtendVal::one> one{};
            constexpr Register::FieldValue<decltype(extend)::Type,ExtendVal::msbit> msbit{};
            constexpr Register::FieldValue<decltype(extend)::Type,ExtendVal::lsbit> lsbit{};
        }
        ///Data Formatting Bit Reverse
        enum class BitrevVal {
            msbit=0x00000000,     ///<Transfer Data Most Significant Bit (MSB) first (default for I2S protocol)
            lsbit=0x00000001,     ///<Transfer Data Least Significant Bit (LSB) first
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,BitrevVal> bitrev{}; 
        namespace BitrevValC{
            constexpr Register::FieldValue<decltype(bitrev)::Type,BitrevVal::msbit> msbit{};
            constexpr Register::FieldValue<decltype(bitrev)::Type,BitrevVal::lsbit> lsbit{};
        }
        ///Slot 0 Disabled for this Serializer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> slotdis0{}; 
        ///Slot 1 Disabled for this Serializer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> slotdis1{}; 
        ///Slot 2 Disabled for this Serializer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> slotdis2{}; 
        ///Slot 3 Disabled for this Serializer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> slotdis3{}; 
        ///Slot 4 Disabled for this Serializer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> slotdis4{}; 
        ///Slot 5 Disabled for this Serializer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> slotdis5{}; 
        ///Slot 6 Disabled for this Serializer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> slotdis6{}; 
        ///Slot 7 Disabled for this Serializer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> slotdis7{}; 
        ///Mono Mode
        enum class MonoVal {
            stereo=0x00000000,     ///<Normal mode
            mono=0x00000001,     ///<Left channel data is duplicated to right channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,MonoVal> mono{}; 
        namespace MonoValC{
            constexpr Register::FieldValue<decltype(mono)::Type,MonoVal::stereo> stereo{};
            constexpr Register::FieldValue<decltype(mono)::Type,MonoVal::mono> mono{};
        }
        ///Single or Multiple DMA Channels
        enum class DmaVal {
            single=0x00000000,     ///<Single DMA channel
            multiple=0x00000001,     ///<One DMA channel per data channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,DmaVal> dma{}; 
        namespace DmaValC{
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::single> single{};
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::multiple> multiple{};
        }
    }
    namespace I2sRxctrl{    ///<Rx Serializer Control
        using Addr = Register::Address<0x43002824,0xf800085c,0x00000000,std::uint32_t>;
        ///Serializer Mode
        enum class SermodeVal {
            rx=0x00000000,     ///<Receive
            pdm2=0x00000002,     ///<Receive one PDM data on each serial clock edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SermodeVal> sermode{}; 
        namespace SermodeValC{
            constexpr Register::FieldValue<decltype(sermode)::Type,SermodeVal::rx> rx{};
            constexpr Register::FieldValue<decltype(sermode)::Type,SermodeVal::pdm2> pdm2{};
        }
        ///Clock Unit Selection
        enum class ClkselVal {
            clk0=0x00000000,     ///<Use Clock Unit 0
            clk1=0x00000001,     ///<Use Clock Unit 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ClkselVal> clksel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::clk0> clk0{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::clk1> clk1{};
        }
        ///Data Slot Formatting Adjust
        enum class SlotadjVal {
            right=0x00000000,     ///<Data is right adjusted in slot
            left=0x00000001,     ///<Data is left adjusted in slot
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SlotadjVal> slotadj{}; 
        namespace SlotadjValC{
            constexpr Register::FieldValue<decltype(slotadj)::Type,SlotadjVal::right> right{};
            constexpr Register::FieldValue<decltype(slotadj)::Type,SlotadjVal::left> left{};
        }
        ///Data Word Size
        enum class DatasizeVal {
            v32=0x00000000,     ///<32 bits
            v24=0x00000001,     ///<24 bits
            v20=0x00000002,     ///<20 bits
            v18=0x00000003,     ///<18 bits
            v16=0x00000004,     ///<16 bits
            v16c=0x00000005,     ///<16 bits compact stereo
            v8=0x00000006,     ///<8 bits
            v8c=0x00000007,     ///<8 bits compact stereo
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,DatasizeVal> datasize{}; 
        namespace DatasizeValC{
            constexpr Register::FieldValue<decltype(datasize)::Type,DatasizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(datasize)::Type,DatasizeVal::v24> v24{};
            constexpr Register::FieldValue<decltype(datasize)::Type,DatasizeVal::v20> v20{};
            constexpr Register::FieldValue<decltype(datasize)::Type,DatasizeVal::v18> v18{};
            constexpr Register::FieldValue<decltype(datasize)::Type,DatasizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(datasize)::Type,DatasizeVal::v16c> v16c{};
            constexpr Register::FieldValue<decltype(datasize)::Type,DatasizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(datasize)::Type,DatasizeVal::v8c> v8c{};
        }
        ///Data Word Formatting Adjust
        enum class WordadjVal {
            right=0x00000000,     ///<Data is right adjusted in word
            left=0x00000001,     ///<Data is left adjusted in word
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,WordadjVal> wordadj{}; 
        namespace WordadjValC{
            constexpr Register::FieldValue<decltype(wordadj)::Type,WordadjVal::right> right{};
            constexpr Register::FieldValue<decltype(wordadj)::Type,WordadjVal::left> left{};
        }
        ///Data Formatting Bit Extension
        enum class ExtendVal {
            zero=0x00000000,     ///<Extend with zeroes
            one=0x00000001,     ///<Extend with ones
            msbit=0x00000002,     ///<Extend with Most Significant Bit
            lsbit=0x00000003,     ///<Extend with Least Significant Bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,ExtendVal> extend{}; 
        namespace ExtendValC{
            constexpr Register::FieldValue<decltype(extend)::Type,ExtendVal::zero> zero{};
            constexpr Register::FieldValue<decltype(extend)::Type,ExtendVal::one> one{};
            constexpr Register::FieldValue<decltype(extend)::Type,ExtendVal::msbit> msbit{};
            constexpr Register::FieldValue<decltype(extend)::Type,ExtendVal::lsbit> lsbit{};
        }
        ///Data Formatting Bit Reverse
        enum class BitrevVal {
            msbit=0x00000000,     ///<Transfer Data Most Significant Bit (MSB) first (default for I2S protocol)
            lsbit=0x00000001,     ///<Transfer Data Least Significant Bit (LSB) first
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,BitrevVal> bitrev{}; 
        namespace BitrevValC{
            constexpr Register::FieldValue<decltype(bitrev)::Type,BitrevVal::msbit> msbit{};
            constexpr Register::FieldValue<decltype(bitrev)::Type,BitrevVal::lsbit> lsbit{};
        }
        ///Slot 0 Disabled for this Serializer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> slotdis0{}; 
        ///Slot 1 Disabled for this Serializer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> slotdis1{}; 
        ///Slot 2 Disabled for this Serializer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> slotdis2{}; 
        ///Slot 3 Disabled for this Serializer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> slotdis3{}; 
        ///Slot 4 Disabled for this Serializer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> slotdis4{}; 
        ///Slot 5 Disabled for this Serializer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> slotdis5{}; 
        ///Slot 6 Disabled for this Serializer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> slotdis6{}; 
        ///Slot 7 Disabled for this Serializer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> slotdis7{}; 
        ///Mono Mode
        enum class MonoVal {
            stereo=0x00000000,     ///<Normal mode
            mono=0x00000001,     ///<Left channel data is duplicated to right channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,MonoVal> mono{}; 
        namespace MonoValC{
            constexpr Register::FieldValue<decltype(mono)::Type,MonoVal::stereo> stereo{};
            constexpr Register::FieldValue<decltype(mono)::Type,MonoVal::mono> mono{};
        }
        ///Single or Multiple DMA Channels
        enum class DmaVal {
            single=0x00000000,     ///<Single DMA channel
            multiple=0x00000001,     ///<One DMA channel per data channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,DmaVal> dma{}; 
        namespace DmaValC{
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::single> single{};
            constexpr Register::FieldValue<decltype(dma)::Type,DmaVal::multiple> multiple{};
        }
        ///Loop-back Test Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rxloop{}; 
    }
    namespace I2sTxdata{    ///<Tx Data
        using Addr = Register::Address<0x43002830,0x00000000,0x00000000,std::uint32_t>;
        ///Sample Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace I2sRxdata{    ///<Rx Data
        using Addr = Register::Address<0x43002834,0x00000000,0x00000000,std::uint32_t>;
        ///Sample Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace I2sClkctrl0{    ///<Clock Unit n Control
        using Addr = Register::Address<0x43002804,0xc0c00000,0x00000000,std::uint32_t>;
        ///Slot Size
        enum class SlotsizeVal {
            v8=0x00000000,     ///<8-bit Slot for Clock Unit n
            v16=0x00000001,     ///<16-bit Slot for Clock Unit n
            v24=0x00000002,     ///<24-bit Slot for Clock Unit n
            v32=0x00000003,     ///<32-bit Slot for Clock Unit n
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SlotsizeVal> slotsize{}; 
        namespace SlotsizeValC{
            constexpr Register::FieldValue<decltype(slotsize)::Type,SlotsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(slotsize)::Type,SlotsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(slotsize)::Type,SlotsizeVal::v24> v24{};
            constexpr Register::FieldValue<decltype(slotsize)::Type,SlotsizeVal::v32> v32{};
        }
        ///Number of Slots in Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> nbslots{}; 
        ///Frame Sync Width
        enum class FswidthVal {
            slot=0x00000000,     ///<Frame Sync Pulse is 1 Slot wide (default for I2S protocol)
            half=0x00000001,     ///<Frame Sync Pulse is half a Frame wide
            bit=0x00000002,     ///<Frame Sync Pulse is 1 Bit wide
            burst=0x00000003,     ///<Clock Unit n operates in Burst mode, with a 1-bit wide Frame Sync pulse per Data sample, only when Data transfer is requested
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,FswidthVal> fswidth{}; 
        namespace FswidthValC{
            constexpr Register::FieldValue<decltype(fswidth)::Type,FswidthVal::slot> slot{};
            constexpr Register::FieldValue<decltype(fswidth)::Type,FswidthVal::half> half{};
            constexpr Register::FieldValue<decltype(fswidth)::Type,FswidthVal::bit> bit{};
            constexpr Register::FieldValue<decltype(fswidth)::Type,FswidthVal::burst> burst{};
        }
        ///Data Delay from Frame Sync
        enum class BitdelayVal {
            lj=0x00000000,     ///<Left Justified (0 Bit Delay)
            i2s=0x00000001,     ///<I2S (1 Bit Delay)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,BitdelayVal> bitdelay{}; 
        namespace BitdelayValC{
            constexpr Register::FieldValue<decltype(bitdelay)::Type,BitdelayVal::lj> lj{};
            constexpr Register::FieldValue<decltype(bitdelay)::Type,BitdelayVal::i2s> i2s{};
        }
        ///Frame Sync Select
        enum class FsselVal {
            sckdiv=0x00000000,     ///<Divided Serial Clock n is used as Frame Sync n source
            fspin=0x00000001,     ///<FSn input pin is used as Frame Sync n source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FsselVal> fssel{}; 
        namespace FsselValC{
            constexpr Register::FieldValue<decltype(fssel)::Type,FsselVal::sckdiv> sckdiv{};
            constexpr Register::FieldValue<decltype(fssel)::Type,FsselVal::fspin> fspin{};
        }
        ///Frame Sync Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fsinv{}; 
        ///Frame Sync Output Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fsoutinv{}; 
        ///Serial Clock Select
        enum class SckselVal {
            mckdiv=0x00000000,     ///<Divided Master Clock n is used as Serial Clock n source
            sckpin=0x00000001,     ///<SCKn input pin is used as Serial Clock n source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,SckselVal> scksel{}; 
        namespace SckselValC{
            constexpr Register::FieldValue<decltype(scksel)::Type,SckselVal::mckdiv> mckdiv{};
            constexpr Register::FieldValue<decltype(scksel)::Type,SckselVal::sckpin> sckpin{};
        }
        ///Serial Clock Output Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sckoutinv{}; 
        ///Master Clock Select
        enum class MckselVal {
            gclk=0x00000000,     ///<GCLK_I2S_n is used as Master Clock n source
            mckpin=0x00000001,     ///<MCKn input pin is used as Master Clock n source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,MckselVal> mcksel{}; 
        namespace MckselValC{
            constexpr Register::FieldValue<decltype(mcksel)::Type,MckselVal::gclk> gclk{};
            constexpr Register::FieldValue<decltype(mcksel)::Type,MckselVal::mckpin> mckpin{};
        }
        ///Master Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mcken{}; 
        ///Master Clock Output Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mckoutinv{}; 
        ///Master Clock Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> mckdiv{}; 
        ///Master Clock Output Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> mckoutdiv{}; 
    }
    namespace I2sClkctrl1{    ///<Clock Unit n Control
        using Addr = Register::Address<0x43002808,0xc0c00000,0x00000000,std::uint32_t>;
        ///Slot Size
        enum class SlotsizeVal {
            v8=0x00000000,     ///<8-bit Slot for Clock Unit n
            v16=0x00000001,     ///<16-bit Slot for Clock Unit n
            v24=0x00000002,     ///<24-bit Slot for Clock Unit n
            v32=0x00000003,     ///<32-bit Slot for Clock Unit n
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SlotsizeVal> slotsize{}; 
        namespace SlotsizeValC{
            constexpr Register::FieldValue<decltype(slotsize)::Type,SlotsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(slotsize)::Type,SlotsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(slotsize)::Type,SlotsizeVal::v24> v24{};
            constexpr Register::FieldValue<decltype(slotsize)::Type,SlotsizeVal::v32> v32{};
        }
        ///Number of Slots in Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> nbslots{}; 
        ///Frame Sync Width
        enum class FswidthVal {
            slot=0x00000000,     ///<Frame Sync Pulse is 1 Slot wide (default for I2S protocol)
            half=0x00000001,     ///<Frame Sync Pulse is half a Frame wide
            bit=0x00000002,     ///<Frame Sync Pulse is 1 Bit wide
            burst=0x00000003,     ///<Clock Unit n operates in Burst mode, with a 1-bit wide Frame Sync pulse per Data sample, only when Data transfer is requested
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,FswidthVal> fswidth{}; 
        namespace FswidthValC{
            constexpr Register::FieldValue<decltype(fswidth)::Type,FswidthVal::slot> slot{};
            constexpr Register::FieldValue<decltype(fswidth)::Type,FswidthVal::half> half{};
            constexpr Register::FieldValue<decltype(fswidth)::Type,FswidthVal::bit> bit{};
            constexpr Register::FieldValue<decltype(fswidth)::Type,FswidthVal::burst> burst{};
        }
        ///Data Delay from Frame Sync
        enum class BitdelayVal {
            lj=0x00000000,     ///<Left Justified (0 Bit Delay)
            i2s=0x00000001,     ///<I2S (1 Bit Delay)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,BitdelayVal> bitdelay{}; 
        namespace BitdelayValC{
            constexpr Register::FieldValue<decltype(bitdelay)::Type,BitdelayVal::lj> lj{};
            constexpr Register::FieldValue<decltype(bitdelay)::Type,BitdelayVal::i2s> i2s{};
        }
        ///Frame Sync Select
        enum class FsselVal {
            sckdiv=0x00000000,     ///<Divided Serial Clock n is used as Frame Sync n source
            fspin=0x00000001,     ///<FSn input pin is used as Frame Sync n source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FsselVal> fssel{}; 
        namespace FsselValC{
            constexpr Register::FieldValue<decltype(fssel)::Type,FsselVal::sckdiv> sckdiv{};
            constexpr Register::FieldValue<decltype(fssel)::Type,FsselVal::fspin> fspin{};
        }
        ///Frame Sync Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fsinv{}; 
        ///Frame Sync Output Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fsoutinv{}; 
        ///Serial Clock Select
        enum class SckselVal {
            mckdiv=0x00000000,     ///<Divided Master Clock n is used as Serial Clock n source
            sckpin=0x00000001,     ///<SCKn input pin is used as Serial Clock n source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,SckselVal> scksel{}; 
        namespace SckselValC{
            constexpr Register::FieldValue<decltype(scksel)::Type,SckselVal::mckdiv> mckdiv{};
            constexpr Register::FieldValue<decltype(scksel)::Type,SckselVal::sckpin> sckpin{};
        }
        ///Serial Clock Output Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sckoutinv{}; 
        ///Master Clock Select
        enum class MckselVal {
            gclk=0x00000000,     ///<GCLK_I2S_n is used as Master Clock n source
            mckpin=0x00000001,     ///<MCKn input pin is used as Master Clock n source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,MckselVal> mcksel{}; 
        namespace MckselValC{
            constexpr Register::FieldValue<decltype(mcksel)::Type,MckselVal::gclk> gclk{};
            constexpr Register::FieldValue<decltype(mcksel)::Type,MckselVal::mckpin> mckpin{};
        }
        ///Master Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mcken{}; 
        ///Master Clock Output Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mckoutinv{}; 
        ///Master Clock Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> mckdiv{}; 
        ///Master Clock Output Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> mckoutdiv{}; 
    }
}
