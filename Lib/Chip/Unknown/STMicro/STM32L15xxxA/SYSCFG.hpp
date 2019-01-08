#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System configuration controller
    namespace SyscfgMemrmp{    ///<memory remap register
        using Addr = Register::Address<0x40010000,0xfffffcfc,0x00000000,std::uint32_t>;
        ///MEM_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> memMode{}; 
        ///BOOT_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bootMode{}; 
    }
    namespace SyscfgPmc{    ///<peripheral mode configuration           register
        using Addr = Register::Address<0x40010004,0xfffffffe,0x00000000,std::uint32_t>;
        ///USB pull-up
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbPu{}; 
    }
    namespace SyscfgExticr1{    ///<external interrupt configuration register           1
        using Addr = Register::Address<0x40010008,0xffff0000,0x00000000,std::uint32_t>;
        ///EXTI x configuration (x = 0 to               3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti3{}; 
        ///EXTI x configuration (x = 0 to               3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti2{}; 
        ///EXTI x configuration (x = 0 to               3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti1{}; 
        ///EXTI x configuration (x = 0 to               3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti0{}; 
    }
    namespace SyscfgExticr2{    ///<external interrupt configuration register           2
        using Addr = Register::Address<0x4001000c,0xffff0000,0x00000000,std::uint32_t>;
        ///EXTI x configuration (x = 4 to               7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti7{}; 
        ///EXTI x configuration (x = 4 to               7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti6{}; 
        ///EXTI x configuration (x = 4 to               7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti5{}; 
        ///EXTI x configuration (x = 4 to               7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti4{}; 
    }
    namespace SyscfgExticr3{    ///<external interrupt configuration register           3
        using Addr = Register::Address<0x40010010,0xffff0000,0x00000000,std::uint32_t>;
        ///EXTI x configuration (x = 8 to               11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti11{}; 
        ///EXTI10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti10{}; 
        ///EXTI x configuration (x = 8 to               11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti9{}; 
        ///EXTI x configuration (x = 8 to               11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti8{}; 
    }
    namespace SyscfgExticr4{    ///<external interrupt configuration register           4
        using Addr = Register::Address<0x40010014,0xffff0000,0x00000000,std::uint32_t>;
        ///EXTI x configuration (x = 12 to               15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti15{}; 
        ///EXTI14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti14{}; 
        ///EXTI13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti13{}; 
        ///EXTI12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti12{}; 
    }
}
