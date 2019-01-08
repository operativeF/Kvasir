#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Ethernet: DMA controller operation
    namespace EthernetDmaDmabmr{    ///<Ethernet DMA bus mode register
        using Addr = Register::Address<0x40029000,0xf8000000,0x00000000,std::uint32_t>;
        ///SR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sr{}; 
        ///DA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> da{}; 
        ///DSL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,unsigned> dsl{}; 
        ///EDFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> edfe{}; 
        ///PBL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> pbl{}; 
        ///RTPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> rtpr{}; 
        ///FB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fb{}; 
        ///RDP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,17),Register::ReadWriteAccess,unsigned> rdp{}; 
        ///USP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usp{}; 
        ///FPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fpm{}; 
        ///AAB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> aab{}; 
        ///MB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mb{}; 
    }
    namespace EthernetDmaDmatpdr{    ///<Ethernet DMA transmit poll demand          register
        using Addr = Register::Address<0x40029004,0x00000000,0x00000000,std::uint32_t>;
        ///TPD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tpd{}; 
    }
    namespace EthernetDmaDmarpdr{    ///<EHERNET DMA receive poll demand          register
        using Addr = Register::Address<0x40029008,0x00000000,0x00000000,std::uint32_t>;
        ///RPD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rpd{}; 
    }
    namespace EthernetDmaDmardlar{    ///<Ethernet DMA receive descriptor list address          register
        using Addr = Register::Address<0x4002900c,0x00000000,0x00000000,std::uint32_t>;
        ///SRL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srl{}; 
    }
    namespace EthernetDmaDmatdlar{    ///<Ethernet DMA transmit descriptor list          address register
        using Addr = Register::Address<0x40029010,0x00000000,0x00000000,std::uint32_t>;
        ///STL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> stl{}; 
    }
    namespace EthernetDmaDmasr{    ///<Ethernet DMA status register
        using Addr = Register::Address<0x40029014,0xc4001800,0x00000000,std::uint32_t>;
        ///TS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts{}; 
        ///TPSS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tpss{}; 
        ///TBUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbus{}; 
        ///TJTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tjts{}; 
        ///ROS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ros{}; 
        ///TUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tus{}; 
        ///RS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rs{}; 
        ///RBUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rbus{}; 
        ///RPSS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rpss{}; 
        ///PWTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pwts{}; 
        ///ETS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ets{}; 
        ///FBES
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbes{}; 
        ///ERS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ers{}; 
        ///AIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ais{}; 
        ///NIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nis{}; 
        ///RPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rps{}; 
        ///TPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tps{}; 
        ///EBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ebs{}; 
        ///MMCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mmcs{}; 
        ///PMTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pmts{}; 
        ///TSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tsts{}; 
    }
    namespace EthernetDmaDmaomr{    ///<Ethernet DMA operation mode          register
        using Addr = Register::Address<0x40029018,0xf8ce1f21,0x00000000,std::uint32_t>;
        ///SR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sr{}; 
        ///OSF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osf{}; 
        ///RTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> rtc{}; 
        ///FUGF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fugf{}; 
        ///FEF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fef{}; 
        ///ST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> st{}; 
        ///TTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,unsigned> ttc{}; 
        ///FTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ftf{}; 
        ///TSF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tsf{}; 
        ///DFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dfrf{}; 
        ///RSF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rsf{}; 
        ///DTCEFD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dtcefd{}; 
    }
    namespace EthernetDmaDmaier{    ///<Ethernet DMA interrupt enable          register
        using Addr = Register::Address<0x4002901c,0xfffe1800,0x00000000,std::uint32_t>;
        ///TIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tie{}; 
        ///TPSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tpsie{}; 
        ///TBUIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbuie{}; 
        ///TJTIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tjtie{}; 
        ///ROIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> roie{}; 
        ///TUIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tuie{}; 
        ///RIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rie{}; 
        ///RBUIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rbuie{}; 
        ///RPSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rpsie{}; 
        ///RWTIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rwtie{}; 
        ///ETIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> etie{}; 
        ///FBEIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbeie{}; 
        ///ERIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> erie{}; 
        ///AISE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> aise{}; 
        ///NISE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nise{}; 
    }
    namespace EthernetDmaDmamfbocr{    ///<Ethernet DMA missed frame and buffer          overflow counter register
        using Addr = Register::Address<0x40029020,0xe0000000,0x00000000,std::uint32_t>;
        ///MFC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mfc{}; 
        ///OMFC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> omfc{}; 
        ///MFA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,17),Register::ReadWriteAccess,unsigned> mfa{}; 
        ///OFOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ofoc{}; 
    }
    namespace EthernetDmaDmarswtr{    ///<Ethernet DMA receive status watchdog timer          register
        using Addr = Register::Address<0x40029024,0xffffff00,0x00000000,std::uint32_t>;
        ///RSWTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rswtc{}; 
    }
    namespace EthernetDmaDmachtdr{    ///<Ethernet DMA current host transmit          descriptor register
        using Addr = Register::Address<0x40029048,0x00000000,0x00000000,std::uint32_t>;
        ///HTDAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htdap{}; 
    }
    namespace EthernetDmaDmachrdr{    ///<Ethernet DMA current host receive descriptor          register
        using Addr = Register::Address<0x4002904c,0x00000000,0x00000000,std::uint32_t>;
        ///HRDAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hrdap{}; 
    }
    namespace EthernetDmaDmachtbar{    ///<Ethernet DMA current host transmit buffer          address register
        using Addr = Register::Address<0x40029050,0x00000000,0x00000000,std::uint32_t>;
        ///HTBAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htbap{}; 
    }
    namespace EthernetDmaDmachrbar{    ///<Ethernet DMA current host receive buffer          address register
        using Addr = Register::Address<0x40029054,0x00000000,0x00000000,std::uint32_t>;
        ///HRBAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hrbap{}; 
    }
}
