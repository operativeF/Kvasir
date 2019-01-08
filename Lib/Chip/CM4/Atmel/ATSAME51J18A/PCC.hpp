#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Parallel Capture Controller
    namespace PccMr{    ///<Mode Register
        using Addr = Register::Address<0x43002c00,0x3ff8f0ce,0x00000000,std::uint32_t>;
        ///Parallel Capture Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pcen{}; 
        ///Data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Scale data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> scale{}; 
        ///Always Sampling
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> alwys{}; 
        ///Half Sampling
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> halfs{}; 
        ///First sample
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> frsts{}; 
        ///Input Data Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> isize{}; 
        ///Clear If Disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> cid{}; 
    }
    namespace PccIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x43002c04,0xfffffffc,0x00000000,std::uint32_t>;
        ///Data Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovre{}; 
    }
    namespace PccIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x43002c08,0xfffffffc,0x00000000,std::uint32_t>;
        ///Data Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///Overrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovre{}; 
    }
    namespace PccImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x43002c0c,0xfffffffc,0x00000000,std::uint32_t>;
        ///Data Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///Overrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovre{}; 
    }
    namespace PccIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x43002c10,0xfffffffc,0x00000000,std::uint32_t>;
        ///Data Ready Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///Overrun Error Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovre{}; 
    }
    namespace PccRhr{    ///<Reception Holding Register
        using Addr = Register::Address<0x43002c14,0x00000000,0x00000000,std::uint32_t>;
        ///Reception Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdata{}; 
    }
    namespace PccWpmr{    ///<Write Protection Mode Register
        using Addr = Register::Address<0x43002ce0,0x000000fe,0x00000000,std::uint32_t>;
        ///Write Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protection Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace PccWpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0x43002ce4,0xff0000fe,0x00000000,std::uint32_t>;
        ///Write Protection Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protection Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
}
