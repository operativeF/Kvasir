#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//LCD-TFT Controller
    namespace LtdcSscr{    ///<Synchronization Size Configuration          Register
        using Addr = Register::Address<0x50001008,0xfc00f800,0x00000000,std::uint32_t>;
        ///Horizontal Synchronization Width (in              units of pixel clock period)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> hsw{}; 
        ///Vertical Synchronization Height (in              units of horizontal scan line)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> vsh{}; 
    }
    namespace LtdcBpcr{    ///<Back Porch Configuration          Register
        using Addr = Register::Address<0x5000100c,0xf000f800,0x00000000,std::uint32_t>;
        ///Accumulated Horizontal back porch (in              units of pixel clock period)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> ahbp{}; 
        ///Accumulated Vertical back porch (in              units of horizontal scan line)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> avbp{}; 
    }
    namespace LtdcAwcr{    ///<Active Width Configuration          Register
        using Addr = Register::Address<0x50001010,0xf000f800,0x00000000,std::uint32_t>;
        ///AAV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> aav{}; 
        ///Accumulated Active Height (in units of              horizontal scan line)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> aah{}; 
    }
    namespace LtdcTwcr{    ///<Total Width Configuration          Register
        using Addr = Register::Address<0x50001014,0xf000f800,0x00000000,std::uint32_t>;
        ///Total Width (in units of pixel clock              period)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> totalw{}; 
        ///Total Height (in units of horizontal              scan line)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> totalh{}; 
    }
    namespace LtdcGcr{    ///<Global Control Register
        using Addr = Register::Address<0x50001018,0x0ffe888e,0x00000000,std::uint32_t>;
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
        using Addr = Register::Address<0x50001024,0xfffffffc,0x00000000,std::uint32_t>;
        ///Vertical Blanking Reload
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vbr{}; 
        ///Immediate Reload
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> imr{}; 
    }
    namespace LtdcBccr{    ///<Background Color Configuration          Register
        using Addr = Register::Address<0x5000102c,0xff000000,0x00000000,std::uint32_t>;
        ///Background Color Blue              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bcblue{}; 
        ///Background Color Green              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> bcgreen{}; 
        ///Background Color Red value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> bcred{}; 
    }
    namespace LtdcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x50001034,0xfffffff0,0x00000000,std::uint32_t>;
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
        using Addr = Register::Address<0x50001038,0xfffffff0,0x00000000,std::uint32_t>;
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
        using Addr = Register::Address<0x5000103c,0xfffffff0,0x00000000,std::uint32_t>;
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
        using Addr = Register::Address<0x50001040,0xfffff800,0x00000000,std::uint32_t>;
        ///Line Interrupt Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> lipos{}; 
    }
    namespace LtdcCpsr{    ///<Current Position Status          Register
        using Addr = Register::Address<0x50001044,0x00000000,0x00000000,std::uint32_t>;
        ///Current X Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cxpos{}; 
        ///Current Y Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cypos{}; 
    }
    namespace LtdcCdsr{    ///<Current Display Status          Register
        using Addr = Register::Address<0x50001048,0xfffffff0,0x00000000,std::uint32_t>;
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
        using Addr = Register::Address<0x50001084,0xffffffec,0x00000000,std::uint32_t>;
        ///Color Look-Up Table Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cluten{}; 
        ///Color Keying Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> colken{}; 
        ///Layer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> len{}; 
    }
    namespace LtdcL1whpcr{    ///<Layerx Window Horizontal Position          Configuration Register
        using Addr = Register::Address<0x50001088,0xf000f000,0x00000000,std::uint32_t>;
        ///Window Horizontal Stop              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> whsppos{}; 
        ///Window Horizontal Start              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> whstpos{}; 
    }
    namespace LtdcL1wvpcr{    ///<Layerx Window Vertical Position          Configuration Register
        using Addr = Register::Address<0x5000108c,0xf800f800,0x00000000,std::uint32_t>;
        ///Window Vertical Stop              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> wvsppos{}; 
        ///Window Vertical Start              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> wvstpos{}; 
    }
    namespace LtdcL1ckcr{    ///<Layerx Color Keying Configuration          Register
        using Addr = Register::Address<0x50001090,0xff000000,0x00000000,std::uint32_t>;
        ///Color Key Red value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckred{}; 
        ///Color Key Green value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ckgreen{}; 
        ///Color Key Blue value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ckblue{}; 
    }
    namespace LtdcL1pfcr{    ///<Layerx Pixel Format Configuration          Register
        using Addr = Register::Address<0x50001094,0xfffffff8,0x00000000,std::uint32_t>;
        ///Pixel Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pf{}; 
    }
    namespace LtdcL1cacr{    ///<Layerx Constant Alpha Configuration          Register
        using Addr = Register::Address<0x50001098,0xffffff00,0x00000000,std::uint32_t>;
        ///Constant Alpha
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> consta{}; 
    }
    namespace LtdcL1dccr{    ///<Layerx Default Color Configuration          Register
        using Addr = Register::Address<0x5000109c,0x00000000,0x00000000,std::uint32_t>;
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
        using Addr = Register::Address<0x500010a0,0xfffff8f8,0x00000000,std::uint32_t>;
        ///Blending Factor 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> bf1{}; 
        ///Blending Factor 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bf2{}; 
    }
    namespace LtdcL1cfbar{    ///<Layerx Color Frame Buffer Address          Register
        using Addr = Register::Address<0x500010ac,0x00000000,0x00000000,std::uint32_t>;
        ///Color Frame Buffer Start              Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cfbadd{}; 
    }
    namespace LtdcL1cfblr{    ///<Layerx Color Frame Buffer Length          Register
        using Addr = Register::Address<0x500010b0,0xe000e000,0x00000000,std::uint32_t>;
        ///Color Frame Buffer Pitch in              bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,16),Register::ReadWriteAccess,unsigned> cfbp{}; 
        ///Color Frame Buffer Line              Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cfbll{}; 
    }
    namespace LtdcL1cfblnr{    ///<Layerx ColorFrame Buffer Line Number          Register
        using Addr = Register::Address<0x500010b4,0xfffff800,0x00000000,std::uint32_t>;
        ///Frame Buffer Line Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> cfblnbr{}; 
    }
    namespace LtdcL1clutwr{    ///<Layerx CLUT Write Register
        using Addr = Register::Address<0x500010c4,0x00000000,0x00000000,std::uint32_t>;
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
        using Addr = Register::Address<0x50001104,0xffffffec,0x00000000,std::uint32_t>;
        ///Color Look-Up Table Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cluten{}; 
        ///Color Keying Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> colken{}; 
        ///Layer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> len{}; 
    }
    namespace LtdcL2whpcr{    ///<Layerx Window Horizontal Position          Configuration Register
        using Addr = Register::Address<0x50001108,0xf000f000,0x00000000,std::uint32_t>;
        ///Window Horizontal Stop              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> whsppos{}; 
        ///Window Horizontal Start              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> whstpos{}; 
    }
    namespace LtdcL2wvpcr{    ///<Layerx Window Vertical Position          Configuration Register
        using Addr = Register::Address<0x5000110c,0xf800f800,0x00000000,std::uint32_t>;
        ///Window Vertical Stop              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> wvsppos{}; 
        ///Window Vertical Start              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> wvstpos{}; 
    }
    namespace LtdcL2ckcr{    ///<Layerx Color Keying Configuration          Register
        using Addr = Register::Address<0x50001110,0xff000000,0x00000000,std::uint32_t>;
        ///Color Key Red value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckred{}; 
        ///Color Key Green value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ckgreen{}; 
        ///Color Key Blue value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ckblue{}; 
    }
    namespace LtdcL2pfcr{    ///<Layerx Pixel Format Configuration          Register
        using Addr = Register::Address<0x50001114,0xfffffff8,0x00000000,std::uint32_t>;
        ///Pixel Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pf{}; 
    }
    namespace LtdcL2cacr{    ///<Layerx Constant Alpha Configuration          Register
        using Addr = Register::Address<0x50001118,0xffffff00,0x00000000,std::uint32_t>;
        ///Constant Alpha
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> consta{}; 
    }
    namespace LtdcL2dccr{    ///<Layerx Default Color Configuration          Register
        using Addr = Register::Address<0x5000111c,0x00000000,0x00000000,std::uint32_t>;
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
        using Addr = Register::Address<0x50001120,0xfffff8f8,0x00000000,std::uint32_t>;
        ///Blending Factor 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> bf1{}; 
        ///Blending Factor 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bf2{}; 
    }
    namespace LtdcL2cfbar{    ///<Layerx Color Frame Buffer Address          Register
        using Addr = Register::Address<0x5000112c,0x00000000,0x00000000,std::uint32_t>;
        ///Color Frame Buffer Start              Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cfbadd{}; 
    }
    namespace LtdcL2cfblr{    ///<Layerx Color Frame Buffer Length          Register
        using Addr = Register::Address<0x50001130,0xe000e000,0x00000000,std::uint32_t>;
        ///Color Frame Buffer Pitch in              bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,16),Register::ReadWriteAccess,unsigned> cfbp{}; 
        ///Color Frame Buffer Line              Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cfbll{}; 
    }
    namespace LtdcL2cfblnr{    ///<Layerx ColorFrame Buffer Line Number          Register
        using Addr = Register::Address<0x50001134,0xfffff800,0x00000000,std::uint32_t>;
        ///Frame Buffer Line Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> cfblnbr{}; 
    }
    namespace LtdcL2clutwr{    ///<Layerx CLUT Write Register
        using Addr = Register::Address<0x50001144,0x00000000,0x00000000,std::uint32_t>;
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
