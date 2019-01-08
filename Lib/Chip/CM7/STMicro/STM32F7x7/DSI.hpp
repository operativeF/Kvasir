#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DSI Host
    namespace DsiDsiVr{    ///<DSI Host Version Register
        using Addr = Register::Address<0x40016c00,0x00000000,0x00000000,std::uint32_t>;
        ///Version of the DSI Host
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> version{}; 
    }
    namespace DsiDsiCr{    ///<DSI Host Control Register
        using Addr = Register::Address<0x40016c04,0xfffffffe,0x00000000,std::uint32_t>;
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace DsiDsiCcr{    ///<DSI HOST Clock Control          Register
        using Addr = Register::Address<0x40016c08,0xffff0000,0x00000000,std::uint32_t>;
        ///TX Escape Clock Division
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txeckdiv{}; 
        ///Timeout Clock Division
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> tockdiv{}; 
    }
    namespace DsiDsiLvcidr{    ///<DSI Host LTDC VCID Register
        using Addr = Register::Address<0x40016c0c,0xfffffffc,0x00000000,std::uint32_t>;
        ///Virtual Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> vcid{}; 
    }
    namespace DsiDsiLcolcr{    ///<DSI Host LTDC Color Coding          Register
        using Addr = Register::Address<0x40016c10,0xfffffef0,0x00000000,std::uint32_t>;
        ///Color Coding
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> colc{}; 
        ///Loosely Packet Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lpe{}; 
    }
    namespace DsiDsiLpcr{    ///<DSI Host LTDC Polarity Configuration          Register
        using Addr = Register::Address<0x40016c14,0xfffffff8,0x00000000,std::uint32_t>;
        ///Data Enable Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dep{}; 
        ///VSYNC Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vsp{}; 
        ///HSYNC Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsp{}; 
    }
    namespace DsiDsiLpmcr{    ///<DSI Host Low-Power mode Configuration          Register
        using Addr = Register::Address<0x40016c18,0xff00ff00,0x00000000,std::uint32_t>;
        ///VACT Largest Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> vlpsize{}; 
        ///Largest Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> lpsize{}; 
    }
    namespace DsiDsiPcr{    ///<DSI Host Protocol Configuration          Register
        using Addr = Register::Address<0x40016c2c,0xffffffe0,0x00000000,std::uint32_t>;
        ///EoTp Transmission Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ettxe{}; 
        ///EoTp Reception Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> etrxe{}; 
        ///Bus Turn Around Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btae{}; 
        ///ECC Reception Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eccrxe{}; 
        ///CRC Reception Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crcrxe{}; 
    }
    namespace DsiDsiGvcidr{    ///<DSI Host Generic VCID Register
        using Addr = Register::Address<0x40016c30,0xfffffffc,0x00000000,std::uint32_t>;
        ///Virtual Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> vcid{}; 
    }
    namespace DsiDsiMcr{    ///<DSI Host mode Configuration          Register
        using Addr = Register::Address<0x40016c34,0xfffffffe,0x00000000,std::uint32_t>;
        ///Command mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdm{}; 
    }
    namespace DsiDsiVmcr{    ///<DSI Host Video mode Configuration          Register
        using Addr = Register::Address<0x40016c38,0xfeee00fc,0x00000000,std::uint32_t>;
        ///Video mode Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> vmt{}; 
        ///Low-Power Vertical Sync Active              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lpvsae{}; 
        ///Low-power Vertical Back-Porch              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lpvbpe{}; 
        ///Low-power Vertical Front-porch              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lpvfpe{}; 
        ///Low-Power Vertical Active              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lpvae{}; 
        ///Low-Power Horizontal Back-Porch              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lphbpe{}; 
        ///Low-Power Horizontal Front-Porch              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lphfpe{}; 
        ///Frame Bus-Turn-Around Acknowledge              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fbtaae{}; 
        ///Low-Power Command Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lpce{}; 
        ///Pattern Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pge{}; 
        ///Pattern Generator mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pgm{}; 
        ///Pattern Generator              Orientation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pgo{}; 
    }
    namespace DsiDsiVpcr{    ///<DSI Host Video Packet Configuration          Register
        using Addr = Register::Address<0x40016c3c,0xffffc000,0x00000000,std::uint32_t>;
        ///Video Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> vpsize{}; 
    }
    namespace DsiDsiVccr{    ///<DSI Host Video Chunks Configuration          Register
        using Addr = Register::Address<0x40016c40,0xffffe000,0x00000000,std::uint32_t>;
        ///Number of Chunks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> numc{}; 
    }
    namespace DsiDsiVnpcr{    ///<DSI Host Video Null Packet Configuration          Register
        using Addr = Register::Address<0x40016c44,0xffffe000,0x00000000,std::uint32_t>;
        ///Null Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> npsize{}; 
    }
    namespace DsiDsiVhsacr{    ///<DSI Host Video HSA Configuration          Register
        using Addr = Register::Address<0x40016c48,0xfffff000,0x00000000,std::uint32_t>;
        ///Horizontal Synchronism Active              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> hsa{}; 
    }
    namespace DsiDsiVhbpcr{    ///<DSI Host Video HBP Configuration          Register
        using Addr = Register::Address<0x40016c4c,0xfffff000,0x00000000,std::uint32_t>;
        ///Horizontal Back-Porch              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> hbp{}; 
    }
    namespace DsiDsiVlcr{    ///<DSI Host Video Line Configuration          Register
        using Addr = Register::Address<0x40016c50,0xffff8000,0x00000000,std::uint32_t>;
        ///Horizontal Line duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> hline{}; 
    }
    namespace DsiDsiVvsacr{    ///<DSI Host Video VSA Configuration          Register
        using Addr = Register::Address<0x40016c54,0xfffffc00,0x00000000,std::uint32_t>;
        ///Vertical Synchronism Active              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> vsa{}; 
    }
    namespace DsiDsiVvbpcr{    ///<DSI Host Video VBP Configuration          Register
        using Addr = Register::Address<0x40016c58,0xfffffc00,0x00000000,std::uint32_t>;
        ///Vertical Back-Porch              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> vbp{}; 
    }
    namespace DsiDsiVvfpcr{    ///<DSI Host Video VFP Configuration          Register
        using Addr = Register::Address<0x40016c5c,0xfffffc00,0x00000000,std::uint32_t>;
        ///Vertical Front-Porch              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> vfp{}; 
    }
    namespace DsiDsiVvacr{    ///<DSI Host Video VA Configuration          Register
        using Addr = Register::Address<0x40016c60,0xffffc000,0x00000000,std::uint32_t>;
        ///Vertical Active duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> va{}; 
    }
    namespace DsiDsiLccr{    ///<DSI Host LTDC Command Configuration          Register
        using Addr = Register::Address<0x40016c64,0xffff0000,0x00000000,std::uint32_t>;
        ///Command Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmdsize{}; 
    }
    namespace DsiDsiCmcr{    ///<DSI Host Command mode Configuration          Register
        using Addr = Register::Address<0x40016c68,0xfef080fc,0x00000000,std::uint32_t>;
        ///Tearing Effect Acknowledge Request              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teare{}; 
        ///Acknowledge Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> are{}; 
        ///Generic Short Write Zero parameters              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gsw0tx{}; 
        ///Generic Short Write One parameters              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gsw1tx{}; 
        ///Generic Short Write Two parameters              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gsw2tx{}; 
        ///Generic Short Read Zero parameters              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gsr0tx{}; 
        ///Generic Short Read One parameters              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gsr1tx{}; 
        ///Generic Short Read Two parameters              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> gsr2tx{}; 
        ///Generic Long Write              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> glwtx{}; 
        ///DCS Short Write Zero parameter              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dsw0tx{}; 
        ///DCS Short Read One parameter              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dsw1tx{}; 
        ///DCS Short Read Zero parameter              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dsr0tx{}; 
        ///DCS Long Write              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dlwtx{}; 
        ///Maximum Read Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mrdps{}; 
    }
    namespace DsiDsiGhcr{    ///<DSI Host Generic Header Configuration          Register
        using Addr = Register::Address<0x40016c6c,0xff000000,0x00000000,std::uint32_t>;
        ///Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> vcid{}; 
        ///WordCount LSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wclsb{}; 
        ///WordCount MSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wcmsb{}; 
    }
    namespace DsiDsiGpdr{    ///<DSI Host Generic Payload Data          Register
        using Addr = Register::Address<0x40016c70,0x00000000,0x00000000,std::uint32_t>;
        ///Payload Byte 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data1{}; 
        ///Payload Byte 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data2{}; 
        ///Payload Byte 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data3{}; 
        ///Payload Byte 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data4{}; 
    }
    namespace DsiDsiGpsr{    ///<DSI Host Generic Packet Status          Register
        using Addr = Register::Address<0x40016c74,0xffffff80,0x00000000,std::uint32_t>;
        ///Command FIFO Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdfe{}; 
        ///Command FIFO Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmdff{}; 
        ///Payload Write FIFO Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pwrfe{}; 
        ///Payload Write FIFO Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pwrff{}; 
        ///Payload Read FIFO Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> prdfe{}; 
        ///Payload Read FIFO Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> prdff{}; 
        ///Read Command Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rcb{}; 
    }
    namespace DsiDsiTccr0{    ///<DSI Host Timeout Counter Configuration          Register 0
        using Addr = Register::Address<0x40016c78,0x00000000,0x00000000,std::uint32_t>;
        ///Low-power Reception Timeout              Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lprxTocnt{}; 
        ///High-Speed Transmission Timeout              Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> hstxTocnt{}; 
    }
    namespace DsiDsiTccr1{    ///<DSI Host Timeout Counter Configuration          Register 1
        using Addr = Register::Address<0x40016c7c,0xffff0000,0x00000000,std::uint32_t>;
        ///High-Speed Read Timeout              Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hsrdTocnt{}; 
    }
    namespace DsiDsiTccr2{    ///<DSI Host Timeout Counter Configuration          Register 2
        using Addr = Register::Address<0x40016c80,0xffff0000,0x00000000,std::uint32_t>;
        ///Low-Power Read Timeout              Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lprdTocnt{}; 
    }
    namespace DsiDsiTccr3{    ///<DSI Host Timeout Counter Configuration          Register 3
        using Addr = Register::Address<0x40016c84,0xfeff0000,0x00000000,std::uint32_t>;
        ///High-Speed Write Timeout              Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hswrTocnt{}; 
        ///Presp mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pm{}; 
    }
    namespace DsiDsiTccr4{    ///<DSI Host Timeout Counter Configuration          Register 4
        using Addr = Register::Address<0x40016c88,0xffff0000,0x00000000,std::uint32_t>;
        ///Low-Power Write Timeout              Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lswrTocnt{}; 
    }
    namespace DsiDsiTccr5{    ///<DSI Host Timeout Counter Configuration          Register 5
        using Addr = Register::Address<0x40016c8c,0xffff0000,0x00000000,std::uint32_t>;
        ///Bus-Turn-Around Timeout              Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btaTocnt{}; 
    }
    namespace DsiDsiClcr{    ///<DSI Host Clock Lane Configuration          Register
        using Addr = Register::Address<0x40016c94,0xfffffffc,0x00000000,std::uint32_t>;
        ///D-PHY Clock Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dpcc{}; 
        ///Automatic Clock lane              Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> acr{}; 
    }
    namespace DsiDsiCltcr{    ///<DSI Host Clock Lane Timer Configuration          Register
        using Addr = Register::Address<0x40016c98,0xfc00fc00,0x00000000,std::uint32_t>;
        ///Low-Power to High-Speed              Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> lp2hsTime{}; 
        ///High-Speed to Low-Power              Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> hs2lpTime{}; 
    }
    namespace DsiDsiDltcr{    ///<DSI Host Data Lane Timer Configuration          Register
        using Addr = Register::Address<0x40016c9c,0x00008000,0x00000000,std::uint32_t>;
        ///Maximum Read Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> mrdTime{}; 
        ///Low-Power To High-Speed              Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> lp2hsTime{}; 
        ///High-Speed To Low-Power              Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hs2lpTime{}; 
    }
    namespace DsiDsiPctlr{    ///<DSI Host PHY Control Register
        using Addr = Register::Address<0x40016ca0,0xfffffff9,0x00000000,std::uint32_t>;
        ///Digital Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> den{}; 
        ///Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cke{}; 
    }
    namespace DsiDsiPconfr{    ///<DSI Host PHY Configuration          Register
        using Addr = Register::Address<0x40016ca4,0xffff00fc,0x00000000,std::uint32_t>;
        ///Number of Lanes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> nl{}; 
        ///Stop Wait Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> swTime{}; 
    }
    namespace DsiDsiPucr{    ///<DSI Host PHY ULPS Control          Register
        using Addr = Register::Address<0x40016ca8,0xfffffff0,0x00000000,std::uint32_t>;
        ///ULPS Request on Clock Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> urcl{}; 
        ///ULPS Exit on Clock Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uecl{}; 
        ///ULPS Request on Data Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> urdl{}; 
        ///ULPS Exit on Data Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uedl{}; 
    }
    namespace DsiDsiPttcr{    ///<DSI Host PHY TX Triggers Configuration          Register
        using Addr = Register::Address<0x40016cac,0xfffffff0,0x00000000,std::uint32_t>;
        ///Transmission Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> txTrig{}; 
    }
    namespace DsiDsiPsr{    ///<DSI Host PHY Status Register
        using Addr = Register::Address<0x40016cb0,0xfffffe01,0x00000000,std::uint32_t>;
        ///PHY Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd{}; 
        ///PHY Stop State Clock lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pssc{}; 
        ///ULPS Active Not Clock lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uanc{}; 
        ///PHY Stop State lane 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pss0{}; 
        ///ULPS Active Not lane 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> uan0{}; 
        ///RX ULPS Escape lane 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rue0{}; 
        ///PHY Stop State lane 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pss1{}; 
        ///ULPS Active Not lane 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uan1{}; 
    }
    namespace DsiDsiIsr0{    ///<DSI Host Interrupt & Status Register          0
        using Addr = Register::Address<0x40016cbc,0xffe00000,0x00000000,std::uint32_t>;
        ///Acknowledge Error 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ae0{}; 
        ///Acknowledge Error 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ae1{}; 
        ///Acknowledge Error 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ae2{}; 
        ///Acknowledge Error 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ae3{}; 
        ///Acknowledge Error 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ae4{}; 
        ///Acknowledge Error 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ae5{}; 
        ///Acknowledge Error 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ae6{}; 
        ///Acknowledge Error 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ae7{}; 
        ///Acknowledge Error 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ae8{}; 
        ///Acknowledge Error 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ae9{}; 
        ///Acknowledge Error 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ae10{}; 
        ///Acknowledge Error 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ae11{}; 
        ///Acknowledge Error 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ae12{}; 
        ///Acknowledge Error 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ae13{}; 
        ///Acknowledge Error 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ae14{}; 
        ///Acknowledge Error 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ae15{}; 
        ///PHY Error 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pe0{}; 
        ///PHY Error 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pe1{}; 
        ///PHY Error 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pe2{}; 
        ///PHY Error 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pe3{}; 
        ///PHY Error 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pe4{}; 
    }
    namespace DsiDsiIsr1{    ///<DSI Host Interrupt & Status Register          1
        using Addr = Register::Address<0x40016cc0,0xffffe000,0x00000000,std::uint32_t>;
        ///Timeout High-Speed              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tohstx{}; 
        ///Timeout Low-Power              Reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tolprx{}; 
        ///ECC Single-bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eccse{}; 
        ///ECC Multi-bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eccme{}; 
        ///CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crce{}; 
        ///Packet Size Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pse{}; 
        ///EoTp Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eotpe{}; 
        ///LTDC Payload Write Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lpwre{}; 
        ///Generic Command Write              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gcwre{}; 
        ///Generic Payload Write              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpwre{}; 
        ///Generic Payload Transmit              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gptxe{}; 
        ///Generic Payload Read Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gprde{}; 
        ///Generic Payload Receive              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gprxe{}; 
    }
    namespace DsiDsiIer0{    ///<DSI Host Interrupt Enable Register          0
        using Addr = Register::Address<0x40016cc4,0xffe00000,0x00000000,std::uint32_t>;
        ///Acknowledge Error 0 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ae0ie{}; 
        ///Acknowledge Error 1 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ae1ie{}; 
        ///Acknowledge Error 2 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ae2ie{}; 
        ///Acknowledge Error 3 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ae3ie{}; 
        ///Acknowledge Error 4 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ae4ie{}; 
        ///Acknowledge Error 5 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ae5ie{}; 
        ///Acknowledge Error 6 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ae6ie{}; 
        ///Acknowledge Error 7 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ae7ie{}; 
        ///Acknowledge Error 8 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ae8ie{}; 
        ///Acknowledge Error 9 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ae9ie{}; 
        ///Acknowledge Error 10 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ae10ie{}; 
        ///Acknowledge Error 11 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ae11ie{}; 
        ///Acknowledge Error 12 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ae12ie{}; 
        ///Acknowledge Error 13 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ae13ie{}; 
        ///Acknowledge Error 14 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ae14ie{}; 
        ///Acknowledge Error 15 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ae15ie{}; 
        ///PHY Error 0 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pe0ie{}; 
        ///PHY Error 1 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pe1ie{}; 
        ///PHY Error 2 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pe2ie{}; 
        ///PHY Error 3 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pe3ie{}; 
        ///PHY Error 4 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pe4ie{}; 
    }
    namespace DsiDsiIer1{    ///<DSI Host Interrupt Enable Register          1
        using Addr = Register::Address<0x40016cc8,0xffffe000,0x00000000,std::uint32_t>;
        ///Timeout High-Speed Transmission              Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tohstxie{}; 
        ///Timeout Low-Power Reception Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tolprxie{}; 
        ///ECC Single-bit Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eccseie{}; 
        ///ECC Multi-bit Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eccmeie{}; 
        ///CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crceie{}; 
        ///Packet Size Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pseie{}; 
        ///EoTp Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eotpeie{}; 
        ///LTDC Payload Write Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lpwreie{}; 
        ///Generic Command Write Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gcwreie{}; 
        ///Generic Payload Write Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpwreie{}; 
        ///Generic Payload Transmit Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gptxeie{}; 
        ///Generic Payload Read Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gprdeie{}; 
        ///Generic Payload Receive Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gprxeie{}; 
    }
    namespace DsiDsiFir0{    ///<DSI Host Force Interrupt Register          0
        using Addr = Register::Address<0x40016cd8,0xffe00000,0x00000000,std::uint32_t>;
        ///Force Acknowledge Error 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fae0{}; 
        ///Force Acknowledge Error 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fae1{}; 
        ///Force Acknowledge Error 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fae2{}; 
        ///Force Acknowledge Error 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fae3{}; 
        ///Force Acknowledge Error 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fae4{}; 
        ///Force Acknowledge Error 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fae5{}; 
        ///Force Acknowledge Error 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fae6{}; 
        ///Force Acknowledge Error 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fae7{}; 
        ///Force Acknowledge Error 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fae8{}; 
        ///Force Acknowledge Error 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fae9{}; 
        ///Force Acknowledge Error 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fae10{}; 
        ///Force Acknowledge Error 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fae11{}; 
        ///Force Acknowledge Error 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fae12{}; 
        ///Force Acknowledge Error 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fae13{}; 
        ///Force Acknowledge Error 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fae14{}; 
        ///Force Acknowledge Error 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fae15{}; 
        ///Force PHY Error 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fpe0{}; 
        ///Force PHY Error 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fpe1{}; 
        ///Force PHY Error 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fpe2{}; 
        ///Force PHY Error 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> fpe3{}; 
        ///Force PHY Error 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> fpe4{}; 
    }
    namespace DsiDsiFir1{    ///<DSI Host Force Interrupt Register          1
        using Addr = Register::Address<0x40016cdc,0xffffe000,0x00000000,std::uint32_t>;
        ///Force Timeout High-Speed              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ftohstx{}; 
        ///Force Timeout Low-Power              Reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftolprx{}; 
        ///Force ECC Single-bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> feccse{}; 
        ///Force ECC Multi-bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> feccme{}; 
        ///Force CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fcrce{}; 
        ///Force Packet Size Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fpse{}; 
        ///Force EoTp Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> feotpe{}; 
        ///Force LTDC Payload Write              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flpwre{}; 
        ///Force Generic Command Write              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fgcwre{}; 
        ///Force Generic Payload Write              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fgpwre{}; 
        ///Force Generic Payload Transmit              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fgptxe{}; 
        ///Force Generic Payload Read              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fgprde{}; 
        ///Force Generic Payload Receive              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fgprxe{}; 
    }
    namespace DsiDsiVscr{    ///<DSI Host Video Shadow Control          Register
        using Addr = Register::Address<0x40016d00,0xfffffefe,0x00000000,std::uint32_t>;
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Update Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ur{}; 
    }
    namespace DsiDsiLcvcidr{    ///<DSI Host LTDC Current VCID          Register
        using Addr = Register::Address<0x40016d0c,0xfffffffc,0x00000000,std::uint32_t>;
        ///Virtual Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> vcid{}; 
    }
    namespace DsiDsiLcccr{    ///<DSI Host LTDC Current Color Coding          Register
        using Addr = Register::Address<0x40016d10,0xfffffef0,0x00000000,std::uint32_t>;
        ///Color Coding
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> colc{}; 
        ///Loosely Packed Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lpe{}; 
    }
    namespace DsiDsiLpmccr{    ///<DSI Host Low-Power mode Current          Configuration Register
        using Addr = Register::Address<0x40016d18,0xff00ff00,0x00000000,std::uint32_t>;
        ///VACT Largest Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> vlpsize{}; 
        ///Largest Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> lpsize{}; 
    }
    namespace DsiDsiVmccr{    ///<DSI Host Video mode Current Configuration          Register
        using Addr = Register::Address<0x40016d38,0xfffffc00,0x00000000,std::uint32_t>;
        ///Video mode Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> vmt{}; 
        ///Low-Power Vertical Sync time              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lpvsae{}; 
        ///Low-power Vertical Back-Porch              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lpvbpe{}; 
        ///Low-power Vertical Front-Porch              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lpvfpe{}; 
        ///Low-Power Vertical Active              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lpvae{}; 
        ///Low-power Horizontal Back-Porch              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lphbpe{}; 
        ///Low-Power Horizontal Front-Porch              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lphfe{}; 
        ///Frame BTA Acknowledge              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fbtaae{}; 
        ///Low-Power Command Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lpce{}; 
    }
    namespace DsiDsiVpccr{    ///<DSI Host Video Packet Current Configuration          Register
        using Addr = Register::Address<0x40016d3c,0xffffc000,0x00000000,std::uint32_t>;
        ///Video Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> vpsize{}; 
    }
    namespace DsiDsiVcccr{    ///<DSI Host Video Chunks Current Configuration          Register
        using Addr = Register::Address<0x40016d40,0xffffe000,0x00000000,std::uint32_t>;
        ///Number of Chunks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> numc{}; 
    }
    namespace DsiDsiVnpccr{    ///<DSI Host Video Null Packet Current          Configuration Register
        using Addr = Register::Address<0x40016d44,0xffffe000,0x00000000,std::uint32_t>;
        ///Null Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> npsize{}; 
    }
    namespace DsiDsiVhsaccr{    ///<DSI Host Video HSA Current Configuration          Register
        using Addr = Register::Address<0x40016d48,0xfffff000,0x00000000,std::uint32_t>;
        ///Horizontal Synchronism Active              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> hsa{}; 
    }
    namespace DsiDsiVhbpccr{    ///<DSI Host Video HBP Current Configuration          Register
        using Addr = Register::Address<0x40016d4c,0xfffff000,0x00000000,std::uint32_t>;
        ///Horizontal Back-Porch              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> hbp{}; 
    }
    namespace DsiDsiVlccr{    ///<DSI Host Video Line Current Configuration          Register
        using Addr = Register::Address<0x40016d50,0xffff8000,0x00000000,std::uint32_t>;
        ///Horizontal Line duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> hline{}; 
    }
    namespace DsiDsiVvsaccr{    ///<DSI Host Video VSA Current Configuration          Register
        using Addr = Register::Address<0x40016d54,0xfffffc00,0x00000000,std::uint32_t>;
        ///Vertical Synchronism Active              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> vsa{}; 
    }
    namespace DsiDsiVvbpccr{    ///<DSI Host Video VBP Current Configuration          Register
        using Addr = Register::Address<0x40016d58,0xfffffc00,0x00000000,std::uint32_t>;
        ///Vertical Back-Porch              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> vbp{}; 
    }
    namespace DsiDsiVvfpccr{    ///<DSI Host Video VFP Current Configuration          Register
        using Addr = Register::Address<0x40016d5c,0xfffffc00,0x00000000,std::uint32_t>;
        ///Vertical Front-Porch              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> vfp{}; 
    }
    namespace DsiDsiVvaccr{    ///<DSI Host Video VA Current Configuration          Register
        using Addr = Register::Address<0x40016d60,0xffffc000,0x00000000,std::uint32_t>;
        ///Vertical Active duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> va{}; 
    }
    namespace DsiDsiWcfgr{    ///<DSI Wrapper Configuration          Register
        using Addr = Register::Address<0x40017000,0xffffff00,0x00000000,std::uint32_t>;
        ///VSync Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> vspol{}; 
        ///Automatic Refresh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ar{}; 
        ///TE Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tepol{}; 
        ///TE Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tesrc{}; 
        ///Color Multiplexing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> colmux{}; 
        ///DSI Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dsim{}; 
    }
    namespace DsiDsiWcr{    ///<DSI Wrapper Control Register
        using Addr = Register::Address<0x40017004,0xfffffff0,0x00000000,std::uint32_t>;
        ///DSI Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsien{}; 
        ///LTDC Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ltdcen{}; 
        ///Shutdown
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> shtdn{}; 
        ///Color Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> colm{}; 
    }
    namespace DsiDsiWier{    ///<DSI Wrapper Interrupt Enable          Register
        using Addr = Register::Address<0x40017008,0xffffd9fc,0x00000000,std::uint32_t>;
        ///Regulator Ready Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rrie{}; 
        ///PLL Unlock Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> plluie{}; 
        ///PLL Lock Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> plllie{}; 
        ///End of Refresh Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> erie{}; 
        ///Tearing Effect Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teie{}; 
    }
    namespace DsiDsiWisr{    ///<DSI Wrapper Interrupt & Status          Register
        using Addr = Register::Address<0x4001700c,0xffffc8f8,0x00000000,std::uint32_t>;
        ///Regulator Ready Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rrif{}; 
        ///Regulator Ready Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rrs{}; 
        ///PLL Unlock Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> plluif{}; 
        ///PLL Lock Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> plllif{}; 
        ///PLL Lock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pllls{}; 
        ///Busy Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> busy{}; 
        ///End of Refresh Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> erif{}; 
        ///Tearing Effect Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif{}; 
    }
    namespace DsiDsiWifcr{    ///<DSI Wrapper Interrupt Flag Clear          Register
        using Addr = Register::Address<0x40017010,0xffffd9fc,0x00000000,std::uint32_t>;
        ///Clear Regulator Ready Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> crrif{}; 
        ///Clear PLL Unlock Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cplluif{}; 
        ///Clear PLL Lock Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cplllif{}; 
        ///Clear End of Refresh Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cerif{}; 
        ///Clear Tearing Effect Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif{}; 
    }
    namespace DsiDsiWpcr1{    ///<DSI Wrapper PHY Configuration Register          1
        using Addr = Register::Address<0x40017018,0xf0028000,0x00000000,std::uint32_t>;
        ///custom time for tCLK-POST              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> tclkposten{}; 
        ///custom time for tLPX for Clock lane              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tlpxcen{}; 
        ///custom time for tHS-EXIT              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> thsexiten{}; 
        ///custom time for tLPX for Data lanes              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tlpxden{}; 
        ///custom time for tHS-ZERO              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> thszeroen{}; 
        ///custom time for tHS-TRAIL              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> thstrailen{}; 
        ///custom time for tHS-PREPARE              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> thsprepen{}; 
        ///custom time for tCLK-ZERO              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tclkzeroen{}; 
        ///custom time for tCLK-PREPARE              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tclkprepen{}; 
        ///Pull-Down Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pden{}; 
        ///Turn Disable Data Lanes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tddl{}; 
        ///Contention Detection OFF on Data              Lanes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cdoffdl{}; 
        ///Force in TX Stop Mode the Data              Lanes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ftxsmdl{}; 
        ///Force in TX Stop Mode the Clock              Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ftxsmcl{}; 
        ///Invert the High-Speed data signal on              Data Lane 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hsidl1{}; 
        ///Invert the Hight-Speed data signal on              Data Lane 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hsidl0{}; 
        ///Invert Hight-Speed data signal on Clock              Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hsicl{}; 
        ///Swap Data Lane 1 pins
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swdl1{}; 
        ///Swap Data Lane 0 pins
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swdl0{}; 
        ///Swap Clock Lane pins
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> swcl{}; 
        ///Unit Interval multiplied by              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> uix4{}; 
    }
    namespace DsiDsiWpcr2{    ///<DSI Wrapper PHY Configuration Register          2
        using Addr = Register::Address<0x4001701c,0xf9b0ec30,0x00000000,std::uint32_t>;
        ///Low-Power RX low-pass Filtering              Tuning
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,unsigned> lprxft{}; 
        ///Forces LP Receiver in Low-Power              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> flprxlpm{}; 
        ///High-Speed Transmission Slew Rate              Control on Data Lanes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> hstxsrcdl{}; 
        ///High-Speed Transmission Slew Rate              Control on Clock Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> hstxsrccl{}; 
        ///SDD Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sdcc{}; 
        ///Low-Power transmission Slew Rate              Compensation on Data Lanes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> lpsrdl{}; 
        ///Low-Power transmission Slew Rate              Compensation on Clock Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> lpsrcl{}; 
        ///High-Speed Transmission Delay on Data              Lanes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> hstxdll{}; 
        ///High-Speed Transmission Delay on Clock              Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> hstxdcl{}; 
    }
    namespace DsiDsiWpcr3{    ///<DSI Wrapper PHY Configuration Register          3
        using Addr = Register::Address<0x40017020,0x00000000,0x00000000,std::uint32_t>;
        ///tHSTRAIL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> thstrail{}; 
        ///tHS-PREPARE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> thsprep{}; 
        ///tCLK-ZERO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> tclkzeo{}; 
        ///tCLK-PREPARE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tclkprep{}; 
    }
    namespace DsiDsiWpcr4{    ///<DSI_WPCR4
        using Addr = Register::Address<0x40017024,0x00000000,0x00000000,std::uint32_t>;
        ///tLPXC for Clock lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> tlpxc{}; 
        ///tHSEXIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> thsexit{}; 
        ///tLPX for Data lanes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> tlpxd{}; 
        ///tHS-ZERO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> thszero{}; 
    }
    namespace DsiDsiWpcr5{    ///<DSI Wrapper PHY Configuration Register          5
        using Addr = Register::Address<0x40017028,0xffffff00,0x00000000,std::uint32_t>;
        ///tCLK-POST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> thszero{}; 
    }
    namespace DsiDsiWrpcr{    ///<DSI Wrapper Regulator and PLL Control          Register
        using Addr = Register::Address<0x40017030,0xfefc8602,0x00000000,std::uint32_t>;
        ///Regulator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> regen{}; 
        ///PLL Output Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> odf{}; 
        ///PLL Input Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> idf{}; 
        ///PLL Loop Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,2),Register::ReadWriteAccess,unsigned> ndiv{}; 
        ///PLL Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pllen{}; 
    }
}
