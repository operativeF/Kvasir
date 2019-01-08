#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//JPEG
    namespace JpegJpegConfr0{    ///<JPEG codec control register
        using Addr = Register::Address<0x52003000,0xfffffffe,0x00000000,std::uint32_t>;
        ///Start This bit start or stop the              encoding or decoding process. Read this register              always return 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
    }
    namespace JpegJpegConfr1{    ///<JPEG codec configuration register          1
        using Addr = Register::Address<0x52003004,0x0000fe04,0x00000000,std::uint32_t>;
        ///Number of color components This field              defines the number of color components minus              1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> nf{}; 
        ///Decoding Enable This bit selects the              coding or decoding process
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> de{}; 
        ///Color Space This filed defines the              number of quantization tables minus 1 to insert in              the output stream.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> colorspace{}; 
        ///Number of components for Scan This field              defines the number of components minus 1 for scan              header marker segment.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ns{}; 
        ///Header Processing This bit enable the              header processing (generation/parsing).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hdr{}; 
        ///Y Size This field defines the number of              lines in source image.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ysize{}; 
    }
    namespace JpegJpegConfr2{    ///<JPEG codec configuration register          2
        using Addr = Register::Address<0x52003008,0xfc000000,0x00000000,std::uint32_t>;
        ///Number of MCU For encoding: this field              defines the number of MCU units minus 1 to encode.              For decoding: this field indicates the number of              complete MCU units minus 1 to be decoded (this field              is updated after the JPEG header parsing). If the              decoded image size has not a X or Y size multiple of              8 or 16 (depending on the sub-sampling process), the              resulting incomplete or empty MCU must be added to              this value to get the total number of MCU              generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> nmcu{}; 
    }
    namespace JpegJpegConfr3{    ///<JPEG codec configuration register          3
        using Addr = Register::Address<0x5200300c,0x0000ffff,0x00000000,std::uint32_t>;
        ///X size This field defines the number of              pixels per line.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> xsize{}; 
    }
    namespace JpegJpegConfrn1{    ///<JPEG codec configuration register          4-7
        using Addr = Register::Address<0x52003010,0xffff0000,0x00000000,std::uint32_t>;
        ///Huffman DC Selects the Huffman table for              encoding the DC coefficients.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hd{}; 
        ///Huffman AC Selects the Huffman table for              encoding the AC coefficients.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ha{}; 
        ///Quantization Table Selects quantization              table associated with a color              component.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qt{}; 
        ///Number of Block Number of data units              minus 1 that belong to a particular color in the              MCU.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> nb{}; 
        ///Vertical Sampling Factor Vertical              sampling factor for component i.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> vsf{}; 
        ///Horizontal Sampling Factor Horizontal              sampling factor for component i.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> hsf{}; 
    }
    namespace JpegJpegConfrn2{    ///<JPEG codec configuration register          4-7
        using Addr = Register::Address<0x52003014,0xffff0000,0x00000000,std::uint32_t>;
        ///Huffman DC Selects the Huffman table for              encoding the DC coefficients.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hd{}; 
        ///Huffman AC Selects the Huffman table for              encoding the AC coefficients.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ha{}; 
        ///Quantization Table Selects quantization              table associated with a color              component.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qt{}; 
        ///Number of Block Number of data units              minus 1 that belong to a particular color in the              MCU.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> nb{}; 
        ///Vertical Sampling Factor Vertical              sampling factor for component i.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> vsf{}; 
        ///Horizontal Sampling Factor Horizontal              sampling factor for component i.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> hsf{}; 
    }
    namespace JpegJpegConfrn3{    ///<JPEG codec configuration register          4-7
        using Addr = Register::Address<0x52003018,0xffff0000,0x00000000,std::uint32_t>;
        ///Huffman DC Selects the Huffman table for              encoding the DC coefficients.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hd{}; 
        ///Huffman AC Selects the Huffman table for              encoding the AC coefficients.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ha{}; 
        ///Quantization Table Selects quantization              table associated with a color              component.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qt{}; 
        ///Number of Block Number of data units              minus 1 that belong to a particular color in the              MCU.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> nb{}; 
        ///Vertical Sampling Factor Vertical              sampling factor for component i.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> vsf{}; 
        ///Horizontal Sampling Factor Horizontal              sampling factor for component i.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> hsf{}; 
    }
    namespace JpegJpegConfrn4{    ///<JPEG codec configuration register          4-7
        using Addr = Register::Address<0x5200301c,0xffff0000,0x00000000,std::uint32_t>;
        ///Huffman DC Selects the Huffman table for              encoding the DC coefficients.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hd{}; 
        ///Huffman AC Selects the Huffman table for              encoding the AC coefficients.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ha{}; 
        ///Quantization Table Selects quantization              table associated with a color              component.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qt{}; 
        ///Number of Block Number of data units              minus 1 that belong to a particular color in the              MCU.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> nb{}; 
        ///Vertical Sampling Factor Vertical              sampling factor for component i.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> vsf{}; 
        ///Horizontal Sampling Factor Horizontal              sampling factor for component i.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> hsf{}; 
    }
    namespace JpegJpegCr{    ///<JPEG control register
        using Addr = Register::Address<0x52003030,0xffff8780,0x00000000,std::uint32_t>;
        ///JPEG Core Enable Enable the JPEG codec              Core.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jcen{}; 
        ///Input FIFO Threshold Interrupt Enable              This bit enables the interrupt generation when input              FIFO reach the threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iftie{}; 
        ///Input FIFO Not Full Interrupt Enable              This bit enables the interrupt generation when input              FIFO is not empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ifnfie{}; 
        ///Output FIFO Threshold Interrupt Enable              This bit enables the interrupt generation when output              FIFO reach the threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oftie{}; 
        ///Output FIFO Not Empty Interrupt Enable              This bit enables the interrupt generation when output              FIFO is not empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ofneie{}; 
        ///End of Conversion Interrupt Enable This              bit enables the interrupt generation on the end of              conversion.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eocie{}; 
        ///Header Parsing Done Interrupt Enable              This bit enables the interrupt generation on the              Header Parsing Operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hpdie{}; 
        ///Input DMA Enable Enable the DMA request              generation for the input FIFO.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> idmaen{}; 
        ///Output DMA Enable Enable the DMA request              generation for the output FIFO.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> odmaen{}; 
        ///Input FIFO Flush This bit flush the              input FIFO. This bit is always read as              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> iff{}; 
        ///Output FIFO Flush This bit flush the              output FIFO. This bit is always read as              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> off{}; 
    }
    namespace JpegJpegSr{    ///<JPEG status register
        using Addr = Register::Address<0x52003034,0xffffff01,0x00000000,std::uint32_t>;
        ///Input FIFO Threshold Flag This bit is              set when the input FIFO is not full and is bellow its              threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iftf{}; 
        ///Input FIFO Not Full Flag This bit is set              when the input FIFO is not full (a data can be              written).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ifnff{}; 
        ///Output FIFO Threshold Flag This bit is              set when the output FIFO is not empty and has reach              its threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oftf{}; 
        ///Output FIFO Not Empty Flag This bit is              set when the output FIFO is not empty (a data is              available).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ofnef{}; 
        ///End of Conversion Flag This bit is set              when the JPEG codec core has finished the encoding or              the decoding process and than last data has been sent              to the output FIFO.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eocf{}; 
        ///Header Parsing Done Flag This bit is set              in decode mode when the JPEG codec has finished the              parsing of the headers and the internal registers              have been updated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hpdf{}; 
        ///Codec Operation Flag This bit is set              when when a JPEG codec operation is on going              (encoding or decoding).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cof{}; 
    }
    namespace JpegJpegCfr{    ///<JPEG clear flag register
        using Addr = Register::Address<0x52003038,0xffffff9f,0x00000000,std::uint32_t>;
        ///Clear End of Conversion Flag Writing 1              clears the End of Conversion Flag of the JPEG Status              Register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ceocf{}; 
        ///Clear Header Parsing Done Flag Writing 1              clears the Header Parsing Done Flag of the JPEG              Status Register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chpdf{}; 
    }
    namespace JpegJpegDir{    ///<JPEG data input register
        using Addr = Register::Address<0x52003040,0x00000000,0x00000000,std::uint32_t>;
        ///Data Input FIFO Input FIFO data              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datain{}; 
    }
    namespace JpegJpegDor{    ///<JPEG data output register
        using Addr = Register::Address<0x52003044,0x00000000,0x00000000,std::uint32_t>;
        ///Data Output FIFO Output FIFO data              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dataout{}; 
    }
}
