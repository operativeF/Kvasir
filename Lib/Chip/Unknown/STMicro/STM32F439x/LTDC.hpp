#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//LCD-TFT Controller
    namespace LtdcSscr{    ///<Synchronization Size Configuration          Register
        using Addr = Register::Address<0x40016808,0xfc00f800,0x00000000,std::uint32_t>;
        ///Horizontal Synchronization Width (in              units of pixel clock period)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> hsw{}; 
        ///Vertical Synchronization Height (in              units of horizontal scan line)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> vsh{}; 
    }
    namespace LtdcBpcr{    ///<Back Porch Configuration          Register
        using Addr = Register::Address<0x4001680c,0xfc00f800,0x00000000,std::uint32_t>;
        ///Accumulated Horizontal back porch (in              units of pixel clock period)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> ahbp{}; 
        ///Accumulated Vertical back porch (in              units of horizontal scan line)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> avbp{}; 
    }
    namespace LtdcAwcr{    ///<Active Width Configuration          Register
        using Addr = Register::Address<0x40016810,0xfc00f800,0x00000000,std::uint32_t>;
        ///AAV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> aav{}; 
        ///Accumulated Active Height (in units of              horizontal scan line)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> aah{}; 
    }
    namespace LtdcTwcr{    ///<Total Width Configuration          Register
        using Addr = Register::Address<0x40016814,0xfc00f800,0x00000000,std::uint32_t>;
        ///Total Width (in units of pixel clock              period)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> totalw{}; 
        ///Total Height (in units of horizontal              scan line)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> totalh{}; 
    }
    namespace LtdcGcr{    ///<Global Control Register
        using Addr = Register::Address<0x40016818,0x0ffe888e,0x00000000,std::uint32_t>;
        ///Horizontal Synchronization              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> hspol{}; 
        ///Vertical Synchronization              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> vspol{}; 
        ///Data Enable Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> depol{}; 
        ///Pixel Clock Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pcpol{}; 
        ///Dither Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> den{}; 
        ///Dither Red Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drw{}; 
        ///Dither Green Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dgw{}; 
        ///Dither Blue Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dbw{}; 
        ///LCD-TFT controller enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ltdcen{}; 
    }
    namespace LtdcSrcr{    ///<Shadow Reload Configuration          Register
        using Addr = Register::Address<0x40016824,0xfffffffc,0x00000000,std::uint32_t>;
        ///Vertical Blanking Reload
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vbr{}; 
        ///Immediate Reload
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> imr{}; 
    }
    namespace LtdcBccr{    ///<Background Color Configuration          Register
        using Addr = Register::Address<0x4001682c,0xff000000,0x00000000,std::uint32_t>;
        ///Background Color Red value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> bc{}; 
    }
    namespace LtdcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40016834,0xfffffff0,0x00000000,std::uint32_t>;
        ///Register Reload interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rrie{}; 
        ///Transfer Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> terrie{}; 
        ///FIFO Underrun Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fuie{}; 
        ///Line Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lie{}; 
    }
    namespace LtdcIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40016838,0xfffffff0,0x00000000,std::uint32_t>;
        ///Register Reload Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rrif{}; 
        ///Transfer Error interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> terrif{}; 
        ///FIFO Underrun Interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fuif{}; 
        ///Line Interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lif{}; 
    }
    namespace LtdcIcr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0x4001683c,0xfffffff0,0x00000000,std::uint32_t>;
        ///Clears Register Reload Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crrif{}; 
        ///Clears the Transfer Error Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cterrif{}; 
        ///Clears the FIFO Underrun Interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cfuif{}; 
        ///Clears the Line Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clif{}; 
    }
    namespace LtdcLipcr{    ///<Line Interrupt Position Configuration          Register
        using Addr = Register::Address<0x40016840,0xfffff800,0x00000000,std::uint32_t>;
        ///Line Interrupt Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> lipos{}; 
    }
    namespace LtdcCpsr{    ///<Current Position Status          Register
        using Addr = Register::Address<0x40016844,0x00000000,0x00000000,std::uint32_t>;
        ///Current X Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cxpos{}; 
        ///Current Y Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cypos{}; 
    }
    namespace LtdcCdsr{    ///<Current Display Status          Register
        using Addr = Register::Address<0x40016848,0xfffffff0,0x00000000,std::uint32_t>;
        ///Horizontal Synchronization display              Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hsyncs{}; 
        ///Vertical Synchronization display              Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vsyncs{}; 
        ///Horizontal Data Enable display              Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hdes{}; 
        ///Vertical Data Enable display              Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vdes{}; 
    }
    namespace LtdcL1cr{    ///<Layerx Control Register
        using Addr = Register::Address<0x40016884,0xffffffec,0x00000000,std::uint32_t>;
        ///Color Look-Up Table Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cluten{}; 
        ///Color Keying Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> colken{}; 
        ///Layer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> len{}; 
    }
    namespace LtdcL1whpcr{    ///<Layerx Window Horizontal Position          Configuration Register
        using Addr = Register::Address<0x40016888,0xf000f000,0x00000000,std::uint32_t>;
        ///Window Horizontal Stop              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> whsppos{}; 
        ///Window Horizontal Start              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> whstpos{}; 
    }
    namespace LtdcL1wvpcr{    ///<Layerx Window Vertical Position          Configuration Register
        using Addr = Register::Address<0x4001688c,0xf800f800,0x00000000,std::uint32_t>;
        ///Window Vertical Stop              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> wvsppos{}; 
        ///Window Vertical Start              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> wvstpos{}; 
    }
    namespace LtdcL1ckcr{    ///<Layerx Color Keying Configuration          Register
        using Addr = Register::Address<0x40016890,0xff000000,0x00000000,std::uint32_t>;
        ///Color Key Red value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckred{}; 
        ///Color Key Green value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ckgreen{}; 
        ///Color Key Blue value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ckblue{}; 
    }
    namespace LtdcL1pfcr{    ///<Layerx Pixel Format Configuration          Register
        using Addr = Register::Address<0x40016894,0xfffffff8,0x00000000,std::uint32_t>;
        ///Pixel Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pf{}; 
    }
    namespace LtdcL1cacr{    ///<Layerx Constant Alpha Configuration          Register
        using Addr = Register::Address<0x40016898,0xffffff00,0x00000000,std::uint32_t>;
        ///Constant Alpha
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> consta{}; 
    }
    namespace LtdcL1dccr{    ///<Layerx Default Color Configuration          Register
        using Addr = Register::Address<0x4001689c,0x00000000,0x00000000,std::uint32_t>;
        ///Default Color Alpha
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dcalpha{}; 
        ///Default Color Red
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dcred{}; 
        ///Default Color Green
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dcgreen{}; 
        ///Default Color Blue
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dcblue{}; 
    }
    namespace LtdcL1bfcr{    ///<Layerx Blending Factors Configuration          Register
        using Addr = Register::Address<0x400168a0,0xfffff8f8,0x00000000,std::uint32_t>;
        ///Blending Factor 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> bf1{}; 
        ///Blending Factor 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bf2{}; 
    }
    namespace LtdcL1cfbar{    ///<Layerx Color Frame Buffer Address          Register
        using Addr = Register::Address<0x400168ac,0x00000000,0x00000000,std::uint32_t>;
        ///Color Frame Buffer Start              Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cfbadd{}; 
    }
    namespace LtdcL1cfblr{    ///<Layerx Color Frame Buffer Length          Register
        using Addr = Register::Address<0x400168b0,0xe000e000,0x00000000,std::uint32_t>;
        ///Color Frame Buffer Pitch in              bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,16),Register::ReadWriteAccess,unsigned> cfbp{}; 
        ///Color Frame Buffer Line              Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cfbll{}; 
    }
    namespace LtdcL1cfblnr{    ///<Layerx ColorFrame Buffer Line Number          Register
        using Addr = Register::Address<0x400168b4,0xfffff800,0x00000000,std::uint32_t>;
        ///Frame Buffer Line Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> cfblnbr{}; 
    }
    namespace LtdcL1clutwr{    ///<Layerx CLUT Write Register
        using Addr = Register::Address<0x400168c4,0x00000000,0x00000000,std::uint32_t>;
        ///CLUT Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clutadd{}; 
        ///Red value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
        ///Green value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        ///Blue value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
    }
    namespace LtdcL2cr{    ///<Layerx Control Register
        using Addr = Register::Address<0x40016904,0xffffffec,0x00000000,std::uint32_t>;
        ///Color Look-Up Table Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cluten{}; 
        ///Color Keying Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> colken{}; 
        ///Layer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> len{}; 
    }
    namespace LtdcL2whpcr{    ///<Layerx Window Horizontal Position          Configuration Register
        using Addr = Register::Address<0x40016908,0xf000f000,0x00000000,std::uint32_t>;
        ///Window Horizontal Stop              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> whsppos{}; 
        ///Window Horizontal Start              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> whstpos{}; 
    }
    namespace LtdcL2wvpcr{    ///<Layerx Window Vertical Position          Configuration Register
        using Addr = Register::Address<0x4001690c,0xf800f800,0x00000000,std::uint32_t>;
        ///Window Vertical Stop              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> wvsppos{}; 
        ///Window Vertical Start              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> wvstpos{}; 
    }
    namespace LtdcL2ckcr{    ///<Layerx Color Keying Configuration          Register
        using Addr = Register::Address<0x40016910,0xff000000,0x00000000,std::uint32_t>;
        ///Color Key Red value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,15),Register::ReadWriteAccess,unsigned> ckred{}; 
        ///Color Key Green value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ckgreen{}; 
        ///Color Key Blue value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ckblue{}; 
    }
    namespace LtdcL2pfcr{    ///<Layerx Pixel Format Configuration          Register
        using Addr = Register::Address<0x40016914,0xfffffff8,0x00000000,std::uint32_t>;
        ///Pixel Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pf{}; 
    }
    namespace LtdcL2cacr{    ///<Layerx Constant Alpha Configuration          Register
        using Addr = Register::Address<0x40016918,0xffffff00,0x00000000,std::uint32_t>;
        ///Constant Alpha
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> consta{}; 
    }
    namespace LtdcL2dccr{    ///<Layerx Default Color Configuration          Register
        using Addr = Register::Address<0x4001691c,0x00000000,0x00000000,std::uint32_t>;
        ///Default Color Alpha
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dcalpha{}; 
        ///Default Color Red
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dcred{}; 
        ///Default Color Green
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dcgreen{}; 
        ///Default Color Blue
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dcblue{}; 
    }
    namespace LtdcL2bfcr{    ///<Layerx Blending Factors Configuration          Register
        using Addr = Register::Address<0x40016920,0xfffff8f8,0x00000000,std::uint32_t>;
        ///Blending Factor 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> bf1{}; 
        ///Blending Factor 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bf2{}; 
    }
    namespace LtdcL2cfbar{    ///<Layerx Color Frame Buffer Address          Register
        using Addr = Register::Address<0x4001692c,0x00000000,0x00000000,std::uint32_t>;
        ///Color Frame Buffer Start              Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cfbadd{}; 
    }
    namespace LtdcL2cfblr{    ///<Layerx Color Frame Buffer Length          Register
        using Addr = Register::Address<0x40016930,0xe000e000,0x00000000,std::uint32_t>;
        ///Color Frame Buffer Pitch in              bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,16),Register::ReadWriteAccess,unsigned> cfbp{}; 
        ///Color Frame Buffer Line              Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cfbll{}; 
    }
    namespace LtdcL2cfblnr{    ///<Layerx ColorFrame Buffer Line Number          Register
        using Addr = Register::Address<0x40016934,0xfffff800,0x00000000,std::uint32_t>;
        ///Frame Buffer Line Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> cfblnbr{}; 
    }
    namespace LtdcL2clutwr{    ///<Layerx CLUT Write Register
        using Addr = Register::Address<0x40016944,0x00000000,0x00000000,std::uint32_t>;
        ///CLUT Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clutadd{}; 
        ///Red value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
        ///Green value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        ///Blue value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
    }
}
