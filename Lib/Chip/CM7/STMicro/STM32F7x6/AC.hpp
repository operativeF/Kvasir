#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Access control
    namespace AcItcmcr{    ///<Instruction and Data Tightly-Coupled Memory          Control Registers
        using Addr = Register::Address<0xe000ef90,0xffffff80,0x00000000,std::uint32_t>;
        ///EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///RMW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rmw{}; 
        ///RETEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> reten{}; 
        ///SZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,unsigned> sz{}; 
    }
    namespace AcDtcmcr{    ///<Instruction and Data Tightly-Coupled Memory          Control Registers
        using Addr = Register::Address<0xe000ef94,0xffffff80,0x00000000,std::uint32_t>;
        ///EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///RMW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rmw{}; 
        ///RETEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> reten{}; 
        ///SZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,unsigned> sz{}; 
    }
    namespace AcAhbpcr{    ///<AHBP Control register
        using Addr = Register::Address<0xe000ef98,0xfffffff0,0x00000000,std::uint32_t>;
        ///EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///SZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> sz{}; 
    }
    namespace AcCacr{    ///<Auxiliary Cache Control          register
        using Addr = Register::Address<0xe000ef9c,0xfffffff8,0x00000000,std::uint32_t>;
        ///SIWT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> siwt{}; 
        ///ECCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eccen{}; 
        ///FORCEWT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> forcewt{}; 
    }
    namespace AcAhbscr{    ///<AHB Slave Control register
        using Addr = Register::Address<0xe000efa0,0xffff0000,0x00000000,std::uint32_t>;
        ///CTL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ctl{}; 
        ///TPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,2),Register::ReadWriteAccess,unsigned> tpri{}; 
        ///INITCOUNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> initcount{}; 
    }
    namespace AcAbfsr{    ///<Auxiliary Bus Fault Status          register
        using Addr = Register::Address<0xe000efa8,0xfffffce0,0x00000000,std::uint32_t>;
        ///ITCM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> itcm{}; 
        ///DTCM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dtcm{}; 
        ///AHBP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahbp{}; 
        ///AXIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> axim{}; 
        ///EPPB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eppb{}; 
        ///AXIMTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> aximtype{}; 
    }
}
