#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Processor features
    namespace PfClidr{    ///<Cache Level ID register
        using Addr = Register::Address<0xe000ed78,0xc0000000,0x00000000,std::uint32_t>;
        ///CL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> cl1{}; 
        ///CL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> cl2{}; 
        ///CL3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> cl3{}; 
        ///CL4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> cl4{}; 
        ///CL5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cl5{}; 
        ///CL6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> cl6{}; 
        ///CL7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> cl7{}; 
        ///LoUIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> louis{}; 
        ///LoC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> loc{}; 
        ///LoU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,27),Register::ReadWriteAccess,unsigned> lou{}; 
    }
    namespace PfCtr{    ///<Cache Type register
        using Addr = Register::Address<0xe000ed7c,0x1000fff0,0x00000000,std::uint32_t>;
        ///IminLine
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> iminline{}; 
        ///DMinLine
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dminline{}; 
        ///ERG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> erg{}; 
        ///CWG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> cwg{}; 
        ///Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> format{}; 
    }
    namespace PfCcsidr{    ///<Cache Size ID register
        using Addr = Register::Address<0xe000ed80,0x00000000,0x00000000,std::uint32_t>;
        ///LineSize
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> linesize{}; 
        ///Associativity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,3),Register::ReadWriteAccess,unsigned> associativity{}; 
        ///NumSets
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,13),Register::ReadWriteAccess,unsigned> numsets{}; 
        ///WA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> wa{}; 
        ///RA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ra{}; 
        ///WB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wb{}; 
        ///WT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> wt{}; 
    }
}
