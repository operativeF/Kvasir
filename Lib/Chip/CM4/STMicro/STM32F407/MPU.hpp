#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Memory protection unit
    namespace MpuMpuTyper{    ///<MPU type register
        using Addr = Register::Address<0xe000ed90,0xff0000fe,0x00000000,std::uint32_t>;
        ///Separate flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> separate{}; 
        ///Number of MPU data regions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dregion{}; 
        ///Number of MPU instruction              regions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> iregion{}; 
    }
    namespace MpuMpuCtrl{    ///<MPU control register
        using Addr = Register::Address<0xe000ed94,0xfffffff8,0x00000000,std::uint32_t>;
        ///Enables the MPU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Enables the operation of MPU during hard              fault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hfnmiena{}; 
        ///Enable priviliged software access to              default memory map
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> privdefena{}; 
    }
    namespace MpuMpuRnr{    ///<MPU region number register
        using Addr = Register::Address<0xe000ed98,0xffffff00,0x00000000,std::uint32_t>;
        ///MPU region
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> region{}; 
    }
    namespace MpuMpuRbar{    ///<MPU region base address          register
        using Addr = Register::Address<0xe000ed9c,0x00000000,0x00000000,std::uint32_t>;
        ///MPU region field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> region{}; 
        ///MPU region number valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> valid{}; 
        ///Region base address field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace MpuMpuRasr{    ///<MPU region attribute and size          register
        using Addr = Register::Address<0xe000eda0,0xe8c000c0,0x00000000,std::uint32_t>;
        ///Region enable bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Size of the MPU protection              region
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,1),Register::ReadWriteAccess,unsigned> size{}; 
        ///Subregion disable bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> srd{}; 
        ///memory attribute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> b{}; 
        ///memory attribute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> c{}; 
        ///Shareable memory attribute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> s{}; 
        ///memory attribute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,unsigned> tex{}; 
        ///Access permission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ap{}; 
        ///Instruction access disable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> xn{}; 
    }
}
