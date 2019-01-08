#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Floting point unit
    namespace FpuFpccr{    ///<Floating-point context control          register
        using Addr = Register::Address<0xe000ef34,0x3ffffe84,0x00000000,std::uint32_t>;
        ///LSPACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lspact{}; 
        ///USER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> user{}; 
        ///THREAD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> thread{}; 
        ///HFRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hfrdy{}; 
        ///MMRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mmrdy{}; 
        ///BFRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bfrdy{}; 
        ///MONRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> monrdy{}; 
        ///LSPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> lspen{}; 
        ///ASPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> aspen{}; 
    }
    namespace FpuFpcar{    ///<Floating-point context address          register
        using Addr = Register::Address<0xe000ef38,0x00000007,0x00000000,std::uint32_t>;
        ///Location of unpopulated              floating-point
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace FpuFpscr{    ///<Floating-point status control          register
        using Addr = Register::Address<0xe000ef3c,0x083fff60,0x00000000,std::uint32_t>;
        ///Invalid operation cumulative exception              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ioc{}; 
        ///Division by zero cumulative exception              bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dzc{}; 
        ///Overflow cumulative exception              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ofc{}; 
        ///Underflow cumulative exception              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ufc{}; 
        ///Inexact cumulative exception              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ixc{}; 
        ///Input denormal cumulative exception              bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> idc{}; 
        ///Rounding Mode control              field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> rmode{}; 
        ///Flush-to-zero mode control              bit:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fz{}; 
        ///Default NaN mode control              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dn{}; 
        ///Alternative half-precision control              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ahp{}; 
        ///Overflow condition code              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> v{}; 
        ///Carry condition code flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> c{}; 
        ///Zero condition code flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> z{}; 
        ///Negative condition code              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> n{}; 
    }
}
