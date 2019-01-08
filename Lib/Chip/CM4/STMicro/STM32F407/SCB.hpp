#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System control block
    namespace ScbCpuid{    ///<CPUID base register
        using Addr = Register::Address<0xe000ed00,0x00000000,0x00000000,std::uint32_t>;
        ///Revision number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> revision{}; 
        ///Part number of the              processor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> partno{}; 
        ///Reads as 0xF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> constant{}; 
        ///Variant number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> variant{}; 
        ///Implementer code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> implementer{}; 
    }
    namespace ScbIcsr{    ///<Interrupt control and state          register
        using Addr = Register::Address<0xe000ed04,0x61b80600,0x00000000,std::uint32_t>;
        ///Active vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> vectactive{}; 
        ///Return to base level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rettobase{}; 
        ///Pending vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,12),Register::ReadWriteAccess,unsigned> vectpending{}; 
        ///Interrupt pending flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> isrpending{}; 
        ///SysTick exception clear-pending              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pendstclr{}; 
        ///SysTick exception set-pending              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pendstset{}; 
        ///PendSV clear-pending bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pendsvclr{}; 
        ///PendSV set-pending bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pendsvset{}; 
        ///NMI set-pending bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmipendset{}; 
    }
    namespace ScbVtor{    ///<Vector table offset register
        using Addr = Register::Address<0xe000ed08,0xc00001ff,0x00000000,std::uint32_t>;
        ///Vector table base offset              field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,9),Register::ReadWriteAccess,unsigned> tbloff{}; 
    }
    namespace ScbAircr{    ///<Application interrupt and reset control          register
        using Addr = Register::Address<0xe000ed0c,0x000078f8,0x00000000,std::uint32_t>;
        ///VECTRESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vectreset{}; 
        ///VECTCLRACTIVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vectclractive{}; 
        ///SYSRESETREQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sysresetreq{}; 
        ///PRIGROUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> prigroup{}; 
        ///ENDIANESS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> endianess{}; 
        ///Register key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> vectkeystat{}; 
    }
    namespace ScbScr{    ///<System control register
        using Addr = Register::Address<0xe000ed10,0xffffffe9,0x00000000,std::uint32_t>;
        ///SLEEPONEXIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sleeponexit{}; 
        ///SLEEPDEEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sleepdeep{}; 
        ///Send Event on Pending bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> seveonpend{}; 
    }
    namespace ScbCcr{    ///<Configuration and control          register
        using Addr = Register::Address<0xe000ed14,0xfffffce4,0x00000000,std::uint32_t>;
        ///Configures how the processor enters              Thread mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nonbasethrdena{}; 
        ///USERSETMPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usersetmpend{}; 
        ///UNALIGN_ TRP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> unalignTrp{}; 
        ///DIV_0_TRP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> div0Trp{}; 
        ///BFHFNMIGN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bfhfnmign{}; 
        ///STKALIGN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stkalign{}; 
    }
    namespace ScbShpr1{    ///<System handler priority          registers
        using Addr = Register::Address<0xe000ed18,0xff000000,0x00000000,std::uint32_t>;
        ///Priority of system handler              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri4{}; 
        ///Priority of system handler              5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri5{}; 
        ///Priority of system handler              6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri6{}; 
    }
    namespace ScbShpr2{    ///<System handler priority          registers
        using Addr = Register::Address<0xe000ed1c,0x00ffffff,0x00000000,std::uint32_t>;
        ///Priority of system handler              11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri11{}; 
    }
    namespace ScbShpr3{    ///<System handler priority          registers
        using Addr = Register::Address<0xe000ed20,0x0000ffff,0x00000000,std::uint32_t>;
        ///Priority of system handler              14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri14{}; 
        ///Priority of system handler              15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri15{}; 
    }
    namespace ScbShcrs{    ///<System handler control and state          register
        using Addr = Register::Address<0xe000ed24,0xfff80274,0x00000000,std::uint32_t>;
        ///Memory management fault exception active              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> memfaultact{}; 
        ///Bus fault exception active              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> busfaultact{}; 
        ///Usage fault exception active              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usgfaultact{}; 
        ///SVC call active bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> svcallact{}; 
        ///Debug monitor active bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> monitoract{}; 
        ///PendSV exception active              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pendsvact{}; 
        ///SysTick exception active              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> systickact{}; 
        ///Usage fault exception pending              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> usgfaultpended{}; 
        ///Memory management fault exception              pending bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> memfaultpended{}; 
        ///Bus fault exception pending              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busfaultpended{}; 
        ///SVC call pending bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> svcallpended{}; 
        ///Memory management fault enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> memfaultena{}; 
        ///Bus fault enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> busfaultena{}; 
        ///Usage fault enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usgfaultena{}; 
    }
    namespace ScbCfsrUfsrBfsrMmfsr{    ///<Configurable fault status          register
        using Addr = Register::Address<0xe000ed28,0xfcf04045,0x00000000,std::uint32_t>;
        ///Instruction access violation              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iaccviol{}; 
        ///Memory manager fault on unstacking for a              return from exception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> munstkerr{}; 
        ///Memory manager fault on stacking for              exception entry.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mstkerr{}; 
        ///MLSPERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mlsperr{}; 
        ///Memory Management Fault Address Register              (MMAR) valid flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mmarvalid{}; 
        ///Instruction bus error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ibuserr{}; 
        ///Precise data bus error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> preciserr{}; 
        ///Imprecise data bus error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> impreciserr{}; 
        ///Bus fault on unstacking for a return              from exception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> unstkerr{}; 
        ///Bus fault on stacking for exception              entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> stkerr{}; 
        ///Bus fault on floating-point lazy state              preservation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lsperr{}; 
        ///Bus Fault Address Register (BFAR) valid              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bfarvalid{}; 
        ///Undefined instruction usage              fault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> undefinstr{}; 
        ///Invalid state usage fault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> invstate{}; 
        ///Invalid PC load usage              fault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> invpc{}; 
        ///No coprocessor usage              fault.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nocp{}; 
        ///Unaligned access usage              fault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> unaligned{}; 
        ///Divide by zero usage fault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> divbyzero{}; 
    }
    namespace ScbHfsr{    ///<Hard fault status register
        using Addr = Register::Address<0xe000ed2c,0x3ffffffd,0x00000000,std::uint32_t>;
        ///Vector table hard fault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vecttbl{}; 
        ///Forced hard fault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> forced{}; 
        ///Reserved for Debug use
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> debugVt{}; 
    }
    namespace ScbMmfar{    ///<Memory management fault address          register
        using Addr = Register::Address<0xe000ed34,0x00000000,0x00000000,std::uint32_t>;
        ///Memory management fault              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mmfar{}; 
    }
    namespace ScbBfar{    ///<Bus fault address register
        using Addr = Register::Address<0xe000ed38,0x00000000,0x00000000,std::uint32_t>;
        ///Bus fault address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bfar{}; 
    }
    namespace ScbAfsr{    ///<Auxiliary fault status          register
        using Addr = Register::Address<0xe000ed3c,0x00000000,0x00000000,std::uint32_t>;
        ///Implementation defined
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> impdef{}; 
    }
}
