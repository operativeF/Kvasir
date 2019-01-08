#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//SysTick timer
    namespace StkCtrl{    ///<SysTick control and status          register
        using Addr = Register::Address<0xe000e010,0xfffefff8,0x00000000,std::uint32_t>;
        ///Counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        ///SysTick exception request              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tickint{}; 
        ///Clock source selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clksource{}; 
        ///COUNTFLAG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> countflag{}; 
    }
    namespace StkLoad{    ///<SysTick reload value register
        using Addr = Register::Address<0xe000e014,0xff000000,0x00000000,std::uint32_t>;
        ///RELOAD value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> reload{}; 
    }
    namespace StkVal{    ///<SysTick current value register
        using Addr = Register::Address<0xe000e018,0xff000000,0x00000000,std::uint32_t>;
        ///Current counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> current{}; 
    }
    namespace StkCalib{    ///<SysTick calibration value          register
        using Addr = Register::Address<0xe000e01c,0x3f000000,0x00000000,std::uint32_t>;
        ///Calibration value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> tenms{}; 
        ///SKEW flag: Indicates whether the TENMS              value is exact
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> skew{}; 
        ///NOREF flag. Reads as zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> noref{}; 
    }
}
