#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General purpose I/Os
    namespace GpioDbgGpioDbgcr{    ///<GPIO debug configuration          register
        using Addr = Register::Address<0x4000bc00,0xffffffcf,0x00000000,std::uint32_t>;
        ///DBGDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dbgdis{}; 
        ///EXTREGEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extregen{}; 
    }
    namespace GpioDbgGpioDbgsr{    ///<GPIO debug status register
        using Addr = Register::Address<0x4000bc04,0xfffffff4,0x00000000,std::uint32_t>;
        ///BOOTMODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bootmode{}; 
        ///FORCEDBG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> forcedbg{}; 
        ///SWEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swen{}; 
    }
    namespace GpioDbgGpioPctracecr{    ///<Clock PC trace register
        using Addr = Register::Address<0x40004028,0xfffffffe,0x00000000,std::uint32_t>;
        ///selects PC_TRACE source on bb_debug GPIO              pins
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sel{}; 
    }
}
