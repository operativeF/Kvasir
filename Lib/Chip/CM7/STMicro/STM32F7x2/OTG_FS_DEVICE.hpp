#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//USB on the go full speed
    namespace OtgFsDeviceOtgFsDcfg{    ///<OTG_FS device configuration register          (OTG_FS_DCFG)
        using Addr = Register::Address<0x50000800,0xffffe008,0x00000000,std::uint32_t>;
        ///Device speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> dspd{}; 
        ///Non-zero-length status OUT              handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nzlsohsk{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,4),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Periodic frame interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> pfivl{}; 
    }
    namespace OtgFsDeviceOtgFsDctl{    ///<OTG_FS device control register          (OTG_FS_DCTL)
        using Addr = Register::Address<0x50000804,0xfffff000,0x00000000,std::uint32_t>;
        ///Remote wakeup signaling
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rwusig{}; 
        ///Soft disconnect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sdis{}; 
        ///Global IN NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ginsts{}; 
        ///Global OUT NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gonsts{}; 
        ///Test control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tctl{}; 
        ///Set global IN NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sginak{}; 
        ///Clear global IN NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cginak{}; 
        ///Set global OUT NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sgonak{}; 
        ///Clear global OUT NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cgonak{}; 
        ///Power-on programming done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> poprgdne{}; 
    }
    namespace OtgFsDeviceOtgFsDsts{    ///<OTG_FS device status register          (OTG_FS_DSTS)
        using Addr = Register::Address<0x50000808,0xffc000f0,0x00000000,std::uint32_t>;
        ///Suspend status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> suspsts{}; 
        ///Enumerated speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> enumspd{}; 
        ///Erratic error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eerr{}; 
        ///Frame number of the received              SOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,8),Register::ReadWriteAccess,unsigned> fnsof{}; 
    }
    namespace OtgFsDeviceOtgFsDiepmsk{    ///<OTG_FS device IN endpoint common interrupt          mask register (OTG_FS_DIEPMSK)
        using Addr = Register::Address<0x50000810,0xffffff84,0x00000000,std::uint32_t>;
        ///Transfer completed interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Endpoint disabled interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdm{}; 
        ///Timeout condition mask (Non-isochronous              endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tom{}; 
        ///IN token received when TxFIFO empty              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfemsk{}; 
        ///IN token received with EP mismatch              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inepnmm{}; 
        ///IN endpoint NAK effective              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepnem{}; 
    }
    namespace OtgFsDeviceOtgFsDoepmsk{    ///<OTG_FS device OUT endpoint common interrupt          mask register (OTG_FS_DOEPMSK)
        using Addr = Register::Address<0x50000814,0xffffffe4,0x00000000,std::uint32_t>;
        ///Transfer completed interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Endpoint disabled interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdm{}; 
        ///SETUP phase done mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stupm{}; 
        ///OUT token received when endpoint              disabled mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdm{}; 
    }
    namespace OtgFsDeviceOtgFsDaint{    ///<OTG_FS device all endpoints interrupt          register (OTG_FS_DAINT)
        using Addr = Register::Address<0x50000818,0x00000000,0x00000000,std::uint32_t>;
        ///IN endpoint interrupt bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> iepint{}; 
        ///OUT endpoint interrupt              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> oepint{}; 
    }
    namespace OtgFsDeviceOtgFsDaintmsk{    ///<OTG_FS all endpoints interrupt mask register          (OTG_FS_DAINTMSK)
        using Addr = Register::Address<0x5000081c,0x00000000,0x00000000,std::uint32_t>;
        ///IN EP interrupt mask bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> iepm{}; 
        ///OUT endpoint interrupt              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> oepint{}; 
    }
    namespace OtgFsDeviceOtgFsDvbusdis{    ///<OTG_FS device VBUS discharge time          register
        using Addr = Register::Address<0x50000828,0xffff0000,0x00000000,std::uint32_t>;
        ///Device VBUS discharge time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> vbusdt{}; 
    }
    namespace OtgFsDeviceOtgFsDvbuspulse{    ///<OTG_FS device VBUS pulsing time          register
        using Addr = Register::Address<0x5000082c,0xfffff000,0x00000000,std::uint32_t>;
        ///Device VBUS pulsing time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dvbusp{}; 
    }
    namespace OtgFsDeviceOtgFsDiepempmsk{    ///<OTG_FS device IN endpoint FIFO empty          interrupt mask register
        using Addr = Register::Address<0x50000834,0xffff0000,0x00000000,std::uint32_t>;
        ///IN EP Tx FIFO empty interrupt mask              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxfem{}; 
    }
    namespace OtgFsDeviceOtgFsDiepctl0{    ///<OTG_FS device control IN endpoint 0 control          register (OTG_FS_DIEPCTL0)
        using Addr = Register::Address<0x50000900,0x30117ffc,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbaep{}; 
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptyp{}; 
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///TxFIFO number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epena{}; 
    }
    namespace OtgFsDeviceOtgFsDiepctl1{    ///<OTG device endpoint-1 control          register
        using Addr = Register::Address<0x50000920,0x00107800,0x00000000,std::uint32_t>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///SODDFRM/SD1PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrmSd1pid{}; 
        ///SD0PID/SEVNFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///TXFNUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///EONUM/DPID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDiepctl2{    ///<OTG device endpoint-2 control          register
        using Addr = Register::Address<0x50000940,0x00107800,0x00000000,std::uint32_t>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///SODDFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///SD0PID/SEVNFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///TXFNUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///EONUM/DPID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDiepctl3{    ///<OTG device endpoint-3 control          register
        using Addr = Register::Address<0x50000960,0x00107800,0x00000000,std::uint32_t>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///SODDFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///SD0PID/SEVNFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///TXFNUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///EONUM/DPID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDoepctl0{    ///<device endpoint-0 control          register
        using Addr = Register::Address<0x50000b00,0x33c17ffc,0x00000000,std::uint32_t>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdis{}; 
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///SNPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mpsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDoepctl1{    ///<device endpoint-1 control          register
        using Addr = Register::Address<0x50000b20,0x03c07800,0x00000000,std::uint32_t>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///SODDFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///SD0PID/SEVNFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///SNPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///EONUM/DPID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDoepctl2{    ///<device endpoint-2 control          register
        using Addr = Register::Address<0x50000b40,0x03c07800,0x00000000,std::uint32_t>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///SODDFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///SD0PID/SEVNFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///SNPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///EONUM/DPID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDoepctl3{    ///<device endpoint-3 control          register
        using Addr = Register::Address<0x50000b60,0x03c07800,0x00000000,std::uint32_t>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///SODDFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///SD0PID/SEVNFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///SNPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///EONUM/DPID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDiepint0{    ///<device endpoint-x interrupt          register
        using Addr = Register::Address<0x50000908,0xffffff24,0x00000000,std::uint32_t>;
        ///TXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txfe{}; 
        ///INEPNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///ITTXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///TOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace OtgFsDeviceOtgFsDiepint1{    ///<device endpoint-1 interrupt          register
        using Addr = Register::Address<0x50000928,0xffffff24,0x00000000,std::uint32_t>;
        ///TXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txfe{}; 
        ///INEPNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///ITTXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///TOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace OtgFsDeviceOtgFsDiepint2{    ///<device endpoint-2 interrupt          register
        using Addr = Register::Address<0x50000948,0xffffff24,0x00000000,std::uint32_t>;
        ///TXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txfe{}; 
        ///INEPNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///ITTXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///TOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace OtgFsDeviceOtgFsDiepint3{    ///<device endpoint-3 interrupt          register
        using Addr = Register::Address<0x50000968,0xffffff24,0x00000000,std::uint32_t>;
        ///TXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txfe{}; 
        ///INEPNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///ITTXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///TOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace OtgFsDeviceOtgFsDoepint0{    ///<device endpoint-0 interrupt          register
        using Addr = Register::Address<0x50000b08,0xffffffa4,0x00000000,std::uint32_t>;
        ///B2BSTUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///OTEPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///STUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace OtgFsDeviceOtgFsDoepint1{    ///<device endpoint-1 interrupt          register
        using Addr = Register::Address<0x50000b28,0xffffffa4,0x00000000,std::uint32_t>;
        ///B2BSTUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///OTEPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///STUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace OtgFsDeviceOtgFsDoepint2{    ///<device endpoint-2 interrupt          register
        using Addr = Register::Address<0x50000b48,0xffffffa4,0x00000000,std::uint32_t>;
        ///B2BSTUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///OTEPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///STUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace OtgFsDeviceOtgFsDoepint3{    ///<device endpoint-3 interrupt          register
        using Addr = Register::Address<0x50000b68,0xffffffa4,0x00000000,std::uint32_t>;
        ///B2BSTUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///OTEPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///STUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace OtgFsDeviceOtgFsDieptsiz0{    ///<device endpoint-0 transfer size          register
        using Addr = Register::Address<0x50000910,0xffe7ff80,0x00000000,std::uint32_t>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDoeptsiz0{    ///<device OUT endpoint-0 transfer size          register
        using Addr = Register::Address<0x50000b10,0x9ff7ff80,0x00000000,std::uint32_t>;
        ///SETUP packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> stupcnt{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDieptsiz1{    ///<device endpoint-1 transfer size          register
        using Addr = Register::Address<0x50000930,0x80000000,0x00000000,std::uint32_t>;
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDieptsiz2{    ///<device endpoint-2 transfer size          register
        using Addr = Register::Address<0x50000950,0x80000000,0x00000000,std::uint32_t>;
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDieptsiz3{    ///<device endpoint-3 transfer size          register
        using Addr = Register::Address<0x50000970,0x80000000,0x00000000,std::uint32_t>;
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDtxfsts0{    ///<OTG_FS device IN endpoint transmit FIFO          status register
        using Addr = Register::Address<0x50000918,0xffff0000,0x00000000,std::uint32_t>;
        ///IN endpoint TxFIFO space              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace OtgFsDeviceOtgFsDtxfsts1{    ///<OTG_FS device IN endpoint transmit FIFO          status register
        using Addr = Register::Address<0x50000938,0xffff0000,0x00000000,std::uint32_t>;
        ///IN endpoint TxFIFO space              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace OtgFsDeviceOtgFsDtxfsts2{    ///<OTG_FS device IN endpoint transmit FIFO          status register
        using Addr = Register::Address<0x50000958,0xffff0000,0x00000000,std::uint32_t>;
        ///IN endpoint TxFIFO space              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace OtgFsDeviceOtgFsDtxfsts3{    ///<OTG_FS device IN endpoint transmit FIFO          status register
        using Addr = Register::Address<0x50000978,0xffff0000,0x00000000,std::uint32_t>;
        ///IN endpoint TxFIFO space              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace OtgFsDeviceOtgFsDoeptsiz1{    ///<device OUT endpoint-1 transfer size          register
        using Addr = Register::Address<0x50000b30,0x80000000,0x00000000,std::uint32_t>;
        ///Received data PID/SETUP packet              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDoeptsiz2{    ///<device OUT endpoint-2 transfer size          register
        using Addr = Register::Address<0x50000b50,0x80000000,0x00000000,std::uint32_t>;
        ///Received data PID/SETUP packet              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDoeptsiz3{    ///<device OUT endpoint-3 transfer size          register
        using Addr = Register::Address<0x50000b70,0x80000000,0x00000000,std::uint32_t>;
        ///Received data PID/SETUP packet              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDiepctl4{    ///<OTG device endpoint-4 control          register
        using Addr = Register::Address<0x50000980,0x00107800,0x00000000,std::uint32_t>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///SODDFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///SD0PID/SEVNFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///TXFNUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///EONUM/DPID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDiepint4{    ///<device endpoint-4 interrupt          register
        using Addr = Register::Address<0x50000988,0xffffff24,0x00000000,std::uint32_t>;
        ///TXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txfe{}; 
        ///INEPNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///ITTXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///TOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace OtgFsDeviceOtgFsDieptsiz4{    ///<device endpoint-4 transfer size          register
        using Addr = Register::Address<0x50000990,0x80000000,0x00000000,std::uint32_t>;
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDtxfsts4{    ///<OTG_FS device IN endpoint transmit FIFO          status register
        using Addr = Register::Address<0x50000998,0xffff0000,0x00000000,std::uint32_t>;
        ///IN endpoint TxFIFO space              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace OtgFsDeviceOtgFsDiepctl5{    ///<OTG device endpoint-5 control          register
        using Addr = Register::Address<0x500009a0,0x00107800,0x00000000,std::uint32_t>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///SODDFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///SD0PID/SEVNFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///TXFNUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///EONUM/DPID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDiepint5{    ///<device endpoint-5 interrupt          register
        using Addr = Register::Address<0x500009a8,0xffffff24,0x00000000,std::uint32_t>;
        ///TXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txfe{}; 
        ///INEPNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///ITTXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///TOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace OtgFsDeviceOtgFsDieptsiz5{    ///<device endpoint-5 transfer size          register
        using Addr = Register::Address<0x500009b0,0x80000000,0x00000000,std::uint32_t>;
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDtxfsts5{    ///<OTG_FS device IN endpoint transmit FIFO          status register
        using Addr = Register::Address<0x500009b8,0xffff0000,0x00000000,std::uint32_t>;
        ///IN endpoint TxFIFO space              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace OtgFsDeviceOtgFsDoepctl4{    ///<device endpoint-4 control          register
        using Addr = Register::Address<0x50000b80,0x03c07800,0x00000000,std::uint32_t>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///SODDFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///SD0PID/SEVNFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///SNPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///EONUM/DPID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDoepint4{    ///<device endpoint-4 interrupt          register
        using Addr = Register::Address<0x50000b88,0xffffffa4,0x00000000,std::uint32_t>;
        ///B2BSTUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///OTEPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///STUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace OtgFsDeviceOtgFsDoeptsiz4{    ///<device OUT endpoint-4 transfer size          register
        using Addr = Register::Address<0x50000b90,0x80000000,0x00000000,std::uint32_t>;
        ///Received data PID/SETUP packet              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDoepctl5{    ///<device endpoint-5 control          register
        using Addr = Register::Address<0x50000ba0,0x03c07800,0x00000000,std::uint32_t>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///SODDFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///SD0PID/SEVNFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///SNPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///EONUM/DPID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
    }
    namespace OtgFsDeviceOtgFsDoepint5{    ///<device endpoint-5 interrupt          register
        using Addr = Register::Address<0x50000ba8,0xffffffa4,0x00000000,std::uint32_t>;
        ///B2BSTUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///OTEPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///STUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace OtgFsDeviceOtgFsDoeptsiz5{    ///<device OUT endpoint-5 transfer size          register
        using Addr = Register::Address<0x50000bb0,0x80000000,0x00000000,std::uint32_t>;
        ///Received data PID/SETUP packet              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
}
