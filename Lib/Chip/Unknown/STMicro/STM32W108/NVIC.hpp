#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Nested Vectored Interrupt      Controller
    namespace NvicIctr{    ///<Interrupt Controller Type          Register
        using Addr = Register::Address<0xe000e004,0xfffffff0,0x00000000,std::uint32_t>;
        ///Total number of interrupt lines in              groups
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> intlinesnum{}; 
    }
    namespace NvicStir{    ///<Software Triggered Interrupt          Register
        using Addr = Register::Address<0xe000ef00,0xfffffe00,0x00000000,std::uint32_t>;
        ///interrupt to be triggered
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> intid{}; 
    }
    namespace NvicIser0{    ///<Interrupt Set-Enable Register
        using Addr = Register::Address<0xe000e100,0x00000000,0x00000000,std::uint32_t>;
        ///SETENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setena{}; 
    }
    namespace NvicIcer0{    ///<Interrupt Clear-Enable          Register
        using Addr = Register::Address<0xe000e180,0x00000000,0x00000000,std::uint32_t>;
        ///CLRENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrena{}; 
    }
    namespace NvicIspr0{    ///<Interrupt Set-Pending Register
        using Addr = Register::Address<0xe000e200,0x00000000,0x00000000,std::uint32_t>;
        ///SETPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setpend{}; 
    }
    namespace NvicIcpr0{    ///<Interrupt Clear-Pending          Register
        using Addr = Register::Address<0xe000e280,0x00000000,0x00000000,std::uint32_t>;
        ///CLRPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrpend{}; 
    }
    namespace NvicIabr0{    ///<Interrupt Active Bit Register
        using Addr = Register::Address<0xe000e300,0x00000000,0x00000000,std::uint32_t>;
        ///ACTIVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> active{}; 
    }
    namespace NvicIpr0{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e400,0x00000000,0x00000000,std::uint32_t>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr1{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e404,0x00000000,0x00000000,std::uint32_t>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr2{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e408,0x00000000,0x00000000,std::uint32_t>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr3{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e40c,0x00000000,0x00000000,std::uint32_t>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
    namespace NvicIpr4{    ///<Interrupt Priority Register
        using Addr = Register::Address<0xe000e410,0x00000000,0x00000000,std::uint32_t>;
        ///IPR_N0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iprN0{}; 
        ///IPR_N1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iprN1{}; 
        ///IPR_N2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iprN2{}; 
        ///IPR_N3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iprN3{}; 
    }
}
