#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Ethernet: media access control      (MAC)
    namespace EthernetMacDmamr{    ///<DMA mode register
        using Addr = Register::Address<0x40028000,0xfffe87fc,0x00000000,std::uint32_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swr{}; 
        ///DMA Tx or Rx Arbitration              Scheme
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> da{}; 
        ///Transmit priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txpr{}; 
        ///Priority ratio
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> pr{}; 
        ///Interrupt Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> intm{}; 
    }
    namespace EthernetMacDmasbmr{    ///<System bus mode register
        using Addr = Register::Address<0x40028004,0xffff2ffe,0x00000000,std::uint32_t>;
        ///Fixed Burst Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fb{}; 
        ///Address-Aligned Beats
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> aal{}; 
        ///Mixed Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mb{}; 
        ///Rebuild INCRx Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rb{}; 
    }
    namespace EthernetMacDmaisr{    ///<Interrupt status register
        using Addr = Register::Address<0x40028008,0xfffcfffe,0x00000000,std::uint32_t>;
        ///DMA Channel Interrupt              Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dc0is{}; 
        ///MTL Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mtlis{}; 
        ///MAC Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> macis{}; 
    }
    namespace EthernetMacDmadsr{    ///<Debug status register
        using Addr = Register::Address<0x4002800c,0xffff00fe,0x00000000,std::uint32_t>;
        ///AHB Master Write Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> axwhsts{}; 
        ///DMA Channel Receive Process              State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rps0{}; 
        ///DMA Channel Transmit Process              State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> tps0{}; 
    }
    namespace EthernetMacDmaccr{    ///<Channel control register
        using Addr = Register::Address<0x40028100,0xffe2c000,0x00000000,std::uint32_t>;
        ///Maximum Segment Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> mss{}; 
        ///8xPBL mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pblx8{}; 
        ///Descriptor Skip Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> dsl{}; 
    }
    namespace EthernetMacDmactxcr{    ///<Channel transmit control          register
        using Addr = Register::Address<0x40028104,0xffc0efee,0x00000000,std::uint32_t>;
        ///Start or Stop Transmission              Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> st{}; 
        ///Operate on Second Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> osf{}; 
        ///TCP Segmentation Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tse{}; 
        ///Transmit Programmable Burst              Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> txpbl{}; 
    }
    namespace EthernetMacDmacrxcr{    ///<Channel receive control          register
        using Addr = Register::Address<0x40028108,0x7fc08000,0x00000000,std::uint32_t>;
        ///Start or Stop Receive              Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sr{}; 
        ///Receive Buffer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,1),Register::ReadWriteAccess,unsigned> rbsz{}; 
        ///RXPBL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> rxpbl{}; 
        ///DMA Rx Channel Packet              Flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> rpf{}; 
    }
    namespace EthernetMacDmactxdlar{    ///<Channel Tx descriptor list address          register
        using Addr = Register::Address<0x40028114,0x00000003,0x00000000,std::uint32_t>;
        ///Start of Transmit List
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> tdesla{}; 
    }
    namespace EthernetMacDmacrxdlar{    ///<Channel Rx descriptor list address          register
        using Addr = Register::Address<0x4002811c,0x00000003,0x00000000,std::uint32_t>;
        ///Start of Receive List
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> rdesla{}; 
    }
    namespace EthernetMacDmactxdtpr{    ///<Channel Tx descriptor tail pointer          register
        using Addr = Register::Address<0x40028120,0x00000003,0x00000000,std::uint32_t>;
        ///Transmit Descriptor Tail              Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> tdt{}; 
    }
    namespace EthernetMacDmacrxdtpr{    ///<Channel Rx descriptor tail pointer          register
        using Addr = Register::Address<0x40028128,0x00000003,0x00000000,std::uint32_t>;
        ///Receive Descriptor Tail              Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> rdt{}; 
    }
    namespace EthernetMacDmactxrlr{    ///<Channel Tx descriptor ring length          register
        using Addr = Register::Address<0x4002812c,0xfffffc00,0x00000000,std::uint32_t>;
        ///Transmit Descriptor Ring              Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tdrl{}; 
    }
    namespace EthernetMacDmacrxrlr{    ///<Channel Rx descriptor ring length          register
        using Addr = Register::Address<0x40028130,0xfffffc00,0x00000000,std::uint32_t>;
        ///Receive Descriptor Ring              Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> rdrl{}; 
    }
    namespace EthernetMacDmacier{    ///<Channel interrupt enable          register
        using Addr = Register::Address<0x40028134,0xffff0038,0x00000000,std::uint32_t>;
        ///Transmit Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tie{}; 
        ///Transmit Stopped Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txse{}; 
        ///Transmit Buffer Unavailable              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbue{}; 
        ///Receive Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rie{}; 
        ///Receive Buffer Unavailable              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rbue{}; 
        ///Receive Stopped Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rse{}; 
        ///Receive Watchdog Timeout              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rwte{}; 
        ///Early Transmit Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> etie{}; 
        ///Early Receive Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> erie{}; 
        ///Fatal Bus Error Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fbee{}; 
        ///Context Descriptor Error              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cdee{}; 
        ///Abnormal Interrupt Summary              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> aie{}; 
        ///Normal Interrupt Summary              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nie{}; 
    }
    namespace EthernetMacDmacrxiwtr{    ///<Channel Rx interrupt watchdog timer          register
        using Addr = Register::Address<0x40028138,0xffffff00,0x00000000,std::uint32_t>;
        ///Receive Interrupt Watchdog Timer              Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rwt{}; 
    }
    namespace EthernetMacDmaccatxdr{    ///<Channel current application transmit          descriptor register
        using Addr = Register::Address<0x40028144,0x00000000,0x00000000,std::uint32_t>;
        ///Application Transmit Descriptor Address              Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> curtdesaptr{}; 
    }
    namespace EthernetMacDmaccarxdr{    ///<Channel current application receive          descriptor register
        using Addr = Register::Address<0x4002814c,0x00000000,0x00000000,std::uint32_t>;
        ///Application Receive Descriptor Address              Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> currdesaptr{}; 
    }
    namespace EthernetMacDmaccatxbr{    ///<Channel current application transmit buffer          register
        using Addr = Register::Address<0x40028154,0x00000000,0x00000000,std::uint32_t>;
        ///Application Transmit Buffer Address              Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> curtbufaptr{}; 
    }
    namespace EthernetMacDmaccarxbr{    ///<Channel current application receive buffer          register
        using Addr = Register::Address<0x4002815c,0x00000000,0x00000000,std::uint32_t>;
        ///Application Receive Buffer Address              Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> currbufaptr{}; 
    }
    namespace EthernetMacDmacsr{    ///<Channel status register
        using Addr = Register::Address<0x40028160,0xffc00038,0x00000000,std::uint32_t>;
        ///Transmit Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ti{}; 
        ///Transmit Process Stopped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tps{}; 
        ///Transmit Buffer              Unavailable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbu{}; 
        ///Receive Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ri{}; 
        ///Receive Buffer Unavailable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rbu{}; 
        ///Receive Process Stopped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rps{}; 
        ///Receive Watchdog Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rwt{}; 
        ///Early Transmit Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> et{}; 
        ///Early Receive Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> er{}; 
        ///Fatal Bus Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fbe{}; 
        ///Context Descriptor Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cde{}; 
        ///Abnormal Interrupt Summary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ais{}; 
        ///Normal Interrupt Summary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nis{}; 
        ///Tx DMA Error Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> teb{}; 
        ///Rx DMA Error Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,unsigned> reb{}; 
    }
    namespace EthernetMacDmacmfcr{    ///<Channel missed frame count          register
        using Addr = Register::Address<0x4002816c,0xffff7800,0x00000000,std::uint32_t>;
        ///Dropped Packet Counters
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mfc{}; 
        ///Overflow status of the MFC              Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfco{}; 
    }
}
