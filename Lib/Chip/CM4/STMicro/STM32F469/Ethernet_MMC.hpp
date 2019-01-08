#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Ethernet: MAC management counters
    namespace EthernetMmcMmccr{    ///<Ethernet MMC control register
        using Addr = Register::Address<0x40028100,0xffffffc0,0x00000000,std::uint32_t>;
        ///CR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cr{}; 
        ///CSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csr{}; 
        ///ROR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ror{}; 
        ///MCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mcf{}; 
        ///MCP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mcp{}; 
        ///MCFHP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mcfhp{}; 
    }
    namespace EthernetMmcMmcrir{    ///<Ethernet MMC receive interrupt          register
        using Addr = Register::Address<0x40028104,0xfffdff9f,0x00000000,std::uint32_t>;
        ///RFCES
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rfces{}; 
        ///RFAES
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rfaes{}; 
        ///RGUFS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rgufs{}; 
    }
    namespace EthernetMmcMmctir{    ///<Ethernet MMC transmit interrupt          register
        using Addr = Register::Address<0x40028108,0xffdf3fff,0x00000000,std::uint32_t>;
        ///TGFSCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tgfscs{}; 
        ///TGFMSCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tgfmscs{}; 
        ///TGFS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tgfs{}; 
    }
    namespace EthernetMmcMmcrimr{    ///<Ethernet MMC receive interrupt mask          register
        using Addr = Register::Address<0x4002810c,0xfffdff9f,0x00000000,std::uint32_t>;
        ///RFCEM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rfcem{}; 
        ///RFAEM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rfaem{}; 
        ///RGUFM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rgufm{}; 
    }
    namespace EthernetMmcMmctimr{    ///<Ethernet MMC transmit interrupt mask          register
        using Addr = Register::Address<0x40028110,0xfffe3fff,0x00000000,std::uint32_t>;
        ///TGFSCM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tgfscm{}; 
        ///TGFMSCM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tgfmscm{}; 
        ///TGFM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tgfm{}; 
    }
    namespace EthernetMmcMmctgfsccr{    ///<Ethernet MMC transmitted good frames after a          single collision counter
        using Addr = Register::Address<0x4002814c,0x00000000,0x00000000,std::uint32_t>;
        ///TGFSCC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tgfscc{}; 
    }
    namespace EthernetMmcMmctgfmsccr{    ///<Ethernet MMC transmitted good frames after          more than a single collision
        using Addr = Register::Address<0x40028150,0x00000000,0x00000000,std::uint32_t>;
        ///TGFMSCC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tgfmscc{}; 
    }
    namespace EthernetMmcMmctgfcr{    ///<Ethernet MMC transmitted good frames counter          register
        using Addr = Register::Address<0x40028168,0x00000000,0x00000000,std::uint32_t>;
        ///HTL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tgfc{}; 
    }
    namespace EthernetMmcMmcrfcecr{    ///<Ethernet MMC received frames with CRC error          counter register
        using Addr = Register::Address<0x40028194,0x00000000,0x00000000,std::uint32_t>;
        ///RFCFC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rfcfc{}; 
    }
    namespace EthernetMmcMmcrfaecr{    ///<Ethernet MMC received frames with alignment          error counter register
        using Addr = Register::Address<0x40028198,0x00000000,0x00000000,std::uint32_t>;
        ///RFAEC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rfaec{}; 
    }
    namespace EthernetMmcMmcrgufcr{    ///<MMC received good unicast frames counter          register
        using Addr = Register::Address<0x400281c4,0x00000000,0x00000000,std::uint32_t>;
        ///RGUFC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rgufc{}; 
    }
}
