#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//External interrupt/event      controller
    namespace ExtiRtsr1{    ///<EXTI rising trigger selection          register
        using Addr = Register::Address<0x58000000,0xffc00000,0x00000000,std::uint32_t>;
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tr0{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tr1{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tr2{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tr3{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tr4{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tr5{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tr6{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tr7{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tr8{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tr9{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tr10{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tr11{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tr12{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tr13{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tr14{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tr15{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tr16{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tr17{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tr18{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tr19{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tr20{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tr21{}; 
    }
    namespace ExtiFtsr1{    ///<EXTI falling trigger selection          register
        using Addr = Register::Address<0x58000004,0xffc00000,0x00000000,std::uint32_t>;
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tr0{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tr1{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tr2{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tr3{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tr4{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tr5{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tr6{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tr7{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tr8{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tr9{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tr10{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tr11{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tr12{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tr13{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tr14{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tr15{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tr16{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tr17{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tr18{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tr19{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tr20{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tr21{}; 
    }
    namespace ExtiSwier1{    ///<EXTI software interrupt event          register
        using Addr = Register::Address<0x58000008,0xffc00000,0x00000000,std::uint32_t>;
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swier0{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swier1{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swier2{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> swier3{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> swier4{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> swier5{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> swier6{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swier7{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swier8{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> swier9{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> swier10{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> swier11{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> swier12{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> swier13{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> swier14{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swier15{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> swier16{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> swier17{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> swier18{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> swier19{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> swier20{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> swier21{}; 
    }
    namespace ExtiD3pmr1{    ///<EXTI D3 pending mask register
        using Addr = Register::Address<0x5800000c,0xfdc70000,0x00000000,std::uint32_t>;
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mr0{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mr1{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr2{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr3{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mr4{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mr5{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mr6{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mr7{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mr8{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mr9{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mr10{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mr11{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mr12{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mr13{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mr14{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mr15{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mr19{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mr20{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mr21{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mr25{}; 
    }
    namespace ExtiD3pcr1l{    ///<EXTI D3 pending clear selection register          low
        using Addr = Register::Address<0x58000010,0x00000000,0x00000000,std::uint32_t>;
        ///D3 Pending request clear input signal              selection on Event input x = truncate              (n/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pcs0{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              (n/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pcs1{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              (n/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pcs2{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              (n/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pcs3{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              (n/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pcs4{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              (n/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pcs5{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              (n/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pcs6{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              (n/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pcs7{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              (n/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pcs8{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              (n/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pcs9{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              (n/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> pcs10{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              (n/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pcs11{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              (n/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> pcs12{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              (n/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pcs13{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              (n/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pcs14{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              (n/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pcs15{}; 
    }
    namespace ExtiD3pcr1h{    ///<EXTI D3 pending clear selection register          high
        using Addr = Register::Address<0x58000014,0xfff3f03f,0x00000000,std::uint32_t>;
        ///D3 Pending request clear input signal              selection on Event input x = truncate              ((n+32)/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pcs19{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              ((n+32)/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pcs20{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              ((n+32)/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pcs21{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              ((n+32)/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pcs25{}; 
    }
    namespace ExtiRtsr2{    ///<EXTI rising trigger selection          register
        using Addr = Register::Address<0x58000020,0xfff5ffff,0x00000000,std::uint32_t>;
        ///Rising trigger event configuration bit              of Configurable Event input x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tr49{}; 
        ///Rising trigger event configuration bit              of Configurable Event input x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tr51{}; 
    }
    namespace ExtiFtsr2{    ///<EXTI falling trigger selection          register
        using Addr = Register::Address<0x58000024,0xfff5ffff,0x00000000,std::uint32_t>;
        ///Falling trigger event configuration bit              of Configurable Event input x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tr49{}; 
        ///Falling trigger event configuration bit              of Configurable Event input x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tr51{}; 
    }
    namespace ExtiSwier2{    ///<EXTI software interrupt event          register
        using Addr = Register::Address<0x58000028,0xfff5ffff,0x00000000,std::uint32_t>;
        ///Software interrupt on line              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> swier49{}; 
        ///Software interrupt on line              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> swier51{}; 
    }
    namespace ExtiD3pmr2{    ///<EXTI D3 pending mask register
        using Addr = Register::Address<0x5800002c,0xffc0fdf3,0x00000000,std::uint32_t>;
        ///D3 Pending Mask on Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr34{}; 
        ///D3 Pending Mask on Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr35{}; 
        ///D3 Pending Mask on Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mr41{}; 
        ///D3 Pending Mask on Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mr48{}; 
        ///D3 Pending Mask on Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mr49{}; 
        ///D3 Pending Mask on Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mr50{}; 
        ///D3 Pending Mask on Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mr51{}; 
        ///D3 Pending Mask on Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mr52{}; 
        ///D3 Pending Mask on Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mr53{}; 
    }
    namespace ExtiD3pcr2l{    ///<EXTI D3 pending clear selection register          low
        using Addr = Register::Address<0x58000030,0xfff3ff0f,0x00000000,std::uint32_t>;
        ///D3 Pending request clear input signal              selection on Event input x = truncate              ((n+64)/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pcs35{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              ((n+64)/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pcs34{}; 
        ///D3 Pending request clear input signal              selection on Event input x = truncate              ((n+64)/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pcs41{}; 
    }
    namespace ExtiD3pcr2h{    ///<EXTI D3 pending clear selection register          high
        using Addr = Register::Address<0x58000034,0xfffff000,0x00000000,std::uint32_t>;
        ///Pending request clear input signal              selection on Event input x= truncate              ((n+96)/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pcs48{}; 
        ///Pending request clear input signal              selection on Event input x= truncate              ((n+96)/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pcs49{}; 
        ///Pending request clear input signal              selection on Event input x= truncate              ((n+96)/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pcs50{}; 
        ///Pending request clear input signal              selection on Event input x= truncate              ((n+96)/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pcs51{}; 
        ///Pending request clear input signal              selection on Event input x= truncate              ((n+96)/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pcs52{}; 
        ///Pending request clear input signal              selection on Event input x= truncate              ((n+96)/2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pcs53{}; 
    }
    namespace ExtiRtsr3{    ///<EXTI rising trigger selection          register
        using Addr = Register::Address<0x58000040,0xff8bffff,0x00000000,std::uint32_t>;
        ///Rising trigger event configuration bit              of Configurable Event input x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tr82{}; 
        ///Rising trigger event configuration bit              of Configurable Event input x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tr84{}; 
        ///Rising trigger event configuration bit              of Configurable Event input x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tr85{}; 
        ///Rising trigger event configuration bit              of Configurable Event input x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tr86{}; 
    }
    namespace ExtiFtsr3{    ///<EXTI falling trigger selection          register
        using Addr = Register::Address<0x58000044,0xff8bffff,0x00000000,std::uint32_t>;
        ///Falling trigger event configuration bit              of Configurable Event input x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tr82{}; 
        ///Falling trigger event configuration bit              of Configurable Event input x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tr84{}; 
        ///Falling trigger event configuration bit              of Configurable Event input x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tr85{}; 
        ///Falling trigger event configuration bit              of Configurable Event input x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tr86{}; 
    }
    namespace ExtiSwier3{    ///<EXTI software interrupt event          register
        using Addr = Register::Address<0x58000048,0xff8bffff,0x00000000,std::uint32_t>;
        ///Software interrupt on line              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> swier82{}; 
        ///Software interrupt on line              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> swier84{}; 
        ///Software interrupt on line              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> swier85{}; 
        ///Software interrupt on line              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> swier86{}; 
    }
    namespace ExtiD3pmr3{    ///<EXTI D3 pending mask register
        using Addr = Register::Address<0x5800004c,0xfeffffff,0x00000000,std::uint32_t>;
        ///D3 Pending Mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mr88{}; 
    }
    namespace ExtiD3pcr3h{    ///<EXTI D3 pending clear selection register          high
        using Addr = Register::Address<0x58000054,0xfff3ffff,0x00000000,std::uint32_t>;
        ///D3 Pending request clear input signal              selection on Event input x= truncate              N+160/2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pcs88{}; 
    }
    namespace ExtiCpuimr1{    ///<EXTI interrupt mask register
        using Addr = Register::Address<0x58000080,0x00000000,0x00000000,std::uint32_t>;
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mr0{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mr1{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr2{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr3{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mr4{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mr5{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mr6{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mr7{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mr8{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mr9{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mr10{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mr11{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mr12{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mr13{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mr14{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mr15{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mr16{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mr17{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mr18{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mr19{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mr20{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mr21{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mr22{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mr23{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mr24{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mr25{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mr26{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mr27{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mr28{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mr29{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mr30{}; 
        ///Rising trigger event configuration bit              of Configurable Event input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mr31{}; 
    }
    namespace ExtiCpuemr1{    ///<EXTI event mask register
        using Addr = Register::Address<0x58000084,0x00000000,0x00000000,std::uint32_t>;
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mr0{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mr1{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr2{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr3{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mr4{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mr5{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mr6{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mr7{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mr8{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mr9{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mr10{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mr11{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mr12{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mr13{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mr14{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mr15{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mr16{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mr17{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mr18{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mr19{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mr20{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mr21{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mr22{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mr23{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mr24{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mr25{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mr26{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mr27{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mr28{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mr29{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mr30{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mr31{}; 
    }
    namespace ExtiCpupr1{    ///<EXTI pending register
        using Addr = Register::Address<0x58000088,0xffc00000,0x00000000,std::uint32_t>;
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pr0{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pr1{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pr2{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pr3{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pr4{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pr5{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pr6{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pr7{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pr8{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pr9{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pr10{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pr11{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pr12{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pr13{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pr14{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pr15{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pr16{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pr17{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pr18{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pr19{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pr20{}; 
        ///CPU Event mask on Event input              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pr21{}; 
    }
    namespace ExtiCpuimr2{    ///<EXTI interrupt mask register
        using Addr = Register::Address<0x58000090,0x00002000,0x00000000,std::uint32_t>;
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mr0{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mr1{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr2{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr3{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mr4{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mr5{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mr6{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mr7{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mr8{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mr9{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mr10{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mr11{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mr12{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mr14{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mr15{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mr16{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mr17{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mr18{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mr19{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mr20{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mr21{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mr22{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mr23{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mr24{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mr25{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mr26{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mr27{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mr28{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mr29{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mr30{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mr31{}; 
    }
    namespace ExtiCpuemr2{    ///<EXTI event mask register
        using Addr = Register::Address<0x58000094,0x00002000,0x00000000,std::uint32_t>;
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mr32{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mr33{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr34{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr35{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mr36{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mr37{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mr38{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mr39{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mr40{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mr41{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mr42{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mr43{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mr44{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mr46{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mr47{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mr48{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mr49{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mr50{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mr51{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mr52{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mr53{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mr54{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mr55{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mr56{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mr57{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mr58{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mr59{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mr60{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mr61{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mr62{}; 
        ///CPU Interrupt Mask on Direct Event input              x+32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mr63{}; 
    }
    namespace ExtiCpupr2{    ///<EXTI pending register
        using Addr = Register::Address<0x58000098,0xfff5ffff,0x00000000,std::uint32_t>;
        ///Configurable event inputs x+32 Pending              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pr49{}; 
        ///Configurable event inputs x+32 Pending              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pr51{}; 
    }
    namespace ExtiCpuimr3{    ///<EXTI interrupt mask register
        using Addr = Register::Address<0x580000a0,0xfe0a0000,0x00000000,std::uint32_t>;
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mr64{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mr65{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr66{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr67{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mr68{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mr69{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mr70{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mr71{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mr72{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mr73{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mr74{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mr75{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mr76{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mr77{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mr78{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mr79{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mr80{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mr82{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mr84{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mr85{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mr86{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mr87{}; 
        ///CPU Interrupt Mask on Direct Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mr88{}; 
    }
    namespace ExtiCpuemr3{    ///<EXTI event mask register
        using Addr = Register::Address<0x580000a4,0xfe0a0000,0x00000000,std::uint32_t>;
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mr64{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mr65{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr66{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr67{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mr68{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mr69{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mr70{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mr71{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mr72{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mr73{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mr74{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mr75{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mr76{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mr77{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mr78{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mr79{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mr80{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mr82{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mr84{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mr85{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mr86{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mr87{}; 
        ///CPU Event mask on Event input              x+64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mr88{}; 
    }
    namespace ExtiCpupr3{    ///<EXTI pending register
        using Addr = Register::Address<0x580000a8,0xff8bffff,0x00000000,std::uint32_t>;
        ///Configurable event inputs x+64 Pending              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pr82{}; 
        ///Configurable event inputs x+64 Pending              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pr84{}; 
        ///Configurable event inputs x+64 Pending              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pr85{}; 
        ///Configurable event inputs x+64 Pending              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pr86{}; 
    }
}
