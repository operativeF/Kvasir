#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//JPEG codec
    namespace JpegJpegConfr0{    ///<JPEG codec configuration register          0
        using Addr = Register::Address<0x50051000,0xfffffffe,0x00000000,std::uint32_t>;
        ///Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
    }
    namespace JpegJpegConfr1{    ///<JPEG codec configuration register          1
        using Addr = Register::Address<0x50051004,0x0000fe04,0x00000000,std::uint32_t>;
        ///Number of color components
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> nf{}; 
        ///Decoding Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> de{}; 
        ///Color Space
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> colorspace{}; 
        ///Number of components for              Scan
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ns{}; 
        ///Header Processing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hdr{}; 
        ///Y Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ysize{}; 
    }
    namespace JpegJpegConfr2{    ///<JPEG codec configuration register          2
        using Addr = Register::Address<0x50051008,0xfc000000,0x00000000,std::uint32_t>;
        ///Number of MCU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> nmcu{}; 
    }
    namespace JpegJpegConfr3{    ///<JPEG codec configuration register          3
        using Addr = Register::Address<0x5005100c,0x0000ffff,0x00000000,std::uint32_t>;
        ///X size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> xsize{}; 
    }
    namespace JpegJpegConfr4{    ///<JPEG codec configuration register          4
        using Addr = Register::Address<0x50051010,0xffff0000,0x00000000,std::uint32_t>;
        ///Huffman DC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hd{}; 
        ///Huffman AC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ha{}; 
        ///Quantization Table
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qt{}; 
        ///Number of Block
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> nb{}; 
        ///Vertical Sampling Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> vsf{}; 
        ///Horizontal Sampling Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> hsf{}; 
    }
    namespace JpegJpegConfr5{    ///<JPEG codec configuration register          5
        using Addr = Register::Address<0x50051014,0xffff0000,0x00000000,std::uint32_t>;
        ///Huffman DC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hd{}; 
        ///Huffman AC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ha{}; 
        ///Quantization Table
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qt{}; 
        ///Number of Block
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> nb{}; 
        ///Vertical Sampling Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> vsf{}; 
        ///Horizontal Sampling Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> hsf{}; 
    }
    namespace JpegJpegConfr6{    ///<JPEG codec configuration register          6
        using Addr = Register::Address<0x50051018,0xffff0000,0x00000000,std::uint32_t>;
        ///Huffman DC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hd{}; 
        ///Huffman AC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ha{}; 
        ///Quantization Table
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qt{}; 
        ///Number of Block
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> nb{}; 
        ///Vertical Sampling Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> vsf{}; 
        ///Horizontal Sampling Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> hsf{}; 
    }
    namespace JpegJpegConfr7{    ///<JPEG codec configuration register          7
        using Addr = Register::Address<0x5005101c,0xffff0000,0x00000000,std::uint32_t>;
        ///Huffman DC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hd{}; 
        ///Huffman AC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ha{}; 
        ///Quantization Table
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qt{}; 
        ///Number of Block
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> nb{}; 
        ///Vertical Sampling Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> vsf{}; 
        ///Horizontal Sampling Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> hsf{}; 
    }
    namespace JpegJpegCr{    ///<JPEG control register
        using Addr = Register::Address<0x50051020,0xffff8780,0x00000000,std::uint32_t>;
        ///JPEG Core Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jcen{}; 
        ///Input FIFO Threshold Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iftie{}; 
        ///Input FIFO Not Full Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ifnfie{}; 
        ///Output FIFO Threshold Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oftie{}; 
        ///Output FIFO Not Empty Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ofneie{}; 
        ///End of Conversion Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eocie{}; 
        ///Header Parsing Done Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hpdie{}; 
        ///Input DMA Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> idmaen{}; 
        ///Output DMA Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> odmaen{}; 
        ///Input FIFO Flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> iff{}; 
        ///Output FIFO Flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> off{}; 
    }
    namespace JpegJpegSr{    ///<JPEG status register
        using Addr = Register::Address<0x50051024,0xffffff01,0x00000000,std::uint32_t>;
        ///Input FIFO Threshold Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iftf{}; 
        ///Input FIFO Not Full Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ifnff{}; 
        ///Output FIFO Threshold Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oftf{}; 
        ///Output FIFO Not Empty Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ofnef{}; 
        ///End of Conversion Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eocf{}; 
        ///Header Parsing Done Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hpdf{}; 
        ///Codec Operation Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cof{}; 
    }
    namespace JpegJpegCfr{    ///<JPEG clear flag register
        using Addr = Register::Address<0x50051028,0xffffff9f,0x00000000,std::uint32_t>;
        ///Clear End of Conversion              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ceocf{}; 
        ///Clear Header Parsing Done              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chpdf{}; 
    }
    namespace JpegJpegDir{    ///<JPEG data input register
        using Addr = Register::Address<0x5005102c,0x00000000,0x00000000,std::uint32_t>;
        ///Data Input FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datain{}; 
    }
    namespace JpegJpegDor{    ///<JPEG data output register
        using Addr = Register::Address<0x50051030,0x00000000,0x00000000,std::uint32_t>;
        ///Data Output FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dataout{}; 
    }
}
