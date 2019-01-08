#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Ethernet: Precision time protocol
    namespace EthernetPtpPtptscr{    ///<Ethernet PTP time stamp control          register
        using Addr = Register::Address<0x40028700,0xfff800c0,0x00000000,std::uint32_t>;
        ///TSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tse{}; 
        ///TSFCU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tsfcu{}; 
        ///TSPTPPSV2E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tsptppsv2e{}; 
        ///TSSPTPOEFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tssptpoefe{}; 
        ///TSSIPV6FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tssipv6fe{}; 
        ///TSSIPV4FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tssipv4fe{}; 
        ///TSSEME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tsseme{}; 
        ///TSSMRME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tssmrme{}; 
        ///TSCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> tscnt{}; 
        ///TSPFFMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tspffmae{}; 
        ///TSSTI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tssti{}; 
        ///TSSTU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsstu{}; 
        ///TSITE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tsite{}; 
        ///TTSARU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ttsaru{}; 
        ///TSSARFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tssarfe{}; 
        ///TSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tsssr{}; 
    }
    namespace EthernetPtpPtpssir{    ///<Ethernet PTP subsecond increment          register
        using Addr = Register::Address<0x40028704,0xffffff00,0x00000000,std::uint32_t>;
        ///STSSI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> stssi{}; 
    }
    namespace EthernetPtpPtptshr{    ///<Ethernet PTP time stamp high          register
        using Addr = Register::Address<0x40028708,0x00000000,0x00000000,std::uint32_t>;
        ///STS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sts{}; 
    }
    namespace EthernetPtpPtptslr{    ///<Ethernet PTP time stamp low          register
        using Addr = Register::Address<0x4002870c,0x00000000,0x00000000,std::uint32_t>;
        ///STSS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> stss{}; 
        ///STPNS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stpns{}; 
    }
    namespace EthernetPtpPtptshur{    ///<Ethernet PTP time stamp high update          register
        using Addr = Register::Address<0x40028710,0x00000000,0x00000000,std::uint32_t>;
        ///TSUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsus{}; 
    }
    namespace EthernetPtpPtptslur{    ///<Ethernet PTP time stamp low update          register
        using Addr = Register::Address<0x40028714,0x00000000,0x00000000,std::uint32_t>;
        ///TSUSS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> tsuss{}; 
        ///TSUSS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tsupns{}; 
    }
    namespace EthernetPtpPtptsar{    ///<Ethernet PTP time stamp addend          register
        using Addr = Register::Address<0x40028718,0x00000000,0x00000000,std::uint32_t>;
        ///TSA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsa{}; 
    }
    namespace EthernetPtpPtptthr{    ///<Ethernet PTP target time high          register
        using Addr = Register::Address<0x4002871c,0x00000000,0x00000000,std::uint32_t>;
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ttsh{}; 
    }
    namespace EthernetPtpPtpttlr{    ///<Ethernet PTP target time low          register
        using Addr = Register::Address<0x40028720,0x00000000,0x00000000,std::uint32_t>;
        ///TTSL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ttsl{}; 
    }
    namespace EthernetPtpPtptssr{    ///<Ethernet PTP time stamp status          register
        using Addr = Register::Address<0x40028728,0xfffffffc,0x00000000,std::uint32_t>;
        ///TSSO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tsso{}; 
        ///TSTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tsttr{}; 
    }
    namespace EthernetPtpPtpppscr{    ///<Ethernet PTP PPS control          register
        using Addr = Register::Address<0x4002872c,0xfffffffc,0x00000000,std::uint32_t>;
        ///TSSO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tsso{}; 
        ///TSTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tsttr{}; 
    }
}
