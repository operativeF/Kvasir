#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//USB 1 on the go high speed
    namespace Otg1HsDeviceOtgHsDcfg{    ///<OTG_HS device configuration          register
        using Addr = Register::Address<0x40040800,0xfcffe008,0x00000000,std::uint32_t>;
        ///Device speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> dspd{}; 
        ///Nonzero-length status OUT              handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nzlsohsk{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,4),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Periodic (micro)frame              interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> pfivl{}; 
        ///Periodic scheduling              interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> perschivl{}; 
    }
    namespace Otg1HsDeviceOtgHsDctl{    ///<OTG_HS device control register
        using Addr = Register::Address<0x40040804,0xfffff000,0x00000000,std::uint32_t>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sginak{}; 
        ///Clear global IN NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cginak{}; 
        ///Set global OUT NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sgonak{}; 
        ///Clear global OUT NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cgonak{}; 
        ///Power-on programming done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> poprgdne{}; 
    }
    namespace Otg1HsDeviceOtgHsDsts{    ///<OTG_HS device status register
        using Addr = Register::Address<0x40040808,0xffc000f0,0x00000000,std::uint32_t>;
        ///Suspend status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> suspsts{}; 
        ///Enumerated speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> enumspd{}; 
        ///Erratic error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eerr{}; 
        ///Frame number of the received              SOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,8),Register::ReadWriteAccess,unsigned> fnsof{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepmsk{    ///<OTG_HS device IN endpoint common interrupt          mask register
        using Addr = Register::Address<0x40040810,0xfffffc84,0x00000000,std::uint32_t>;
        ///Transfer completed interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Endpoint disabled interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdm{}; 
        ///Timeout condition mask (nonisochronous              endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tom{}; 
        ///IN token received when TxFIFO empty              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfemsk{}; 
        ///IN token received with EP mismatch              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inepnmm{}; 
        ///IN endpoint NAK effective              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepnem{}; 
        ///FIFO underrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfurm{}; 
        ///BNA interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bim{}; 
    }
    namespace Otg1HsDeviceOtgHsDoepmsk{    ///<OTG_HS device OUT endpoint common interrupt          mask register
        using Addr = Register::Address<0x40040814,0xfffffca4,0x00000000,std::uint32_t>;
        ///Transfer completed interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Endpoint disabled interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdm{}; 
        ///SETUP phase done mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stupm{}; 
        ///OUT token received when endpoint              disabled mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdm{}; 
        ///Back-to-back SETUP packets received              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///OUT packet error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> opem{}; 
        ///BNA interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> boim{}; 
    }
    namespace Otg1HsDeviceOtgHsDaint{    ///<OTG_HS device all endpoints interrupt          register
        using Addr = Register::Address<0x40040818,0x00000000,0x00000000,std::uint32_t>;
        ///IN endpoint interrupt bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> iepint{}; 
        ///OUT endpoint interrupt              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> oepint{}; 
    }
    namespace Otg1HsDeviceOtgHsDaintmsk{    ///<OTG_HS all endpoints interrupt mask          register
        using Addr = Register::Address<0x4004081c,0x00000000,0x00000000,std::uint32_t>;
        ///IN EP interrupt mask bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> iepm{}; 
        ///OUT EP interrupt mask bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> oepm{}; 
    }
    namespace Otg1HsDeviceOtgHsDvbusdis{    ///<OTG_HS device VBUS discharge time          register
        using Addr = Register::Address<0x40040828,0xffff0000,0x00000000,std::uint32_t>;
        ///Device VBUS discharge time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> vbusdt{}; 
    }
    namespace Otg1HsDeviceOtgHsDvbuspulse{    ///<OTG_HS device VBUS pulsing time          register
        using Addr = Register::Address<0x4004082c,0xfffff000,0x00000000,std::uint32_t>;
        ///Device VBUS pulsing time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dvbusp{}; 
    }
    namespace Otg1HsDeviceOtgHsDthrctl{    ///<OTG_HS Device threshold control          register
        using Addr = Register::Address<0x40040830,0xf400f800,0x00000000,std::uint32_t>;
        ///Nonisochronous IN endpoints threshold              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nonisothren{}; 
        ///ISO IN endpoint threshold              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> isothren{}; 
        ///Transmit threshold length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,2),Register::ReadWriteAccess,unsigned> txthrlen{}; 
        ///Receive threshold enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxthren{}; 
        ///Receive threshold length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> rxthrlen{}; 
        ///Arbiter parking enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> arpen{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepempmsk{    ///<OTG_HS device IN endpoint FIFO empty          interrupt mask register
        using Addr = Register::Address<0x40040834,0xffff0000,0x00000000,std::uint32_t>;
        ///IN EP Tx FIFO empty interrupt mask              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxfem{}; 
    }
    namespace Otg1HsDeviceOtgHsDeachint{    ///<OTG_HS device each endpoint interrupt          register
        using Addr = Register::Address<0x40040838,0xfffdfffd,0x00000000,std::uint32_t>;
        ///IN endpoint 1interrupt bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iep1int{}; 
        ///OUT endpoint 1 interrupt              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> oep1int{}; 
    }
    namespace Otg1HsDeviceOtgHsDeachintmsk{    ///<OTG_HS device each endpoint interrupt          register mask
        using Addr = Register::Address<0x4004083c,0xfffdfffd,0x00000000,std::uint32_t>;
        ///IN Endpoint 1 interrupt mask              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iep1intm{}; 
        ///OUT Endpoint 1 interrupt mask              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> oep1intm{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepctl0{    ///<OTG device endpoint-0 control          register
        using Addr = Register::Address<0x40040900,0x00107800,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even/odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///TxFIFO number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///Set DATA0 PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepctl1{    ///<OTG device endpoint-1 control          register
        using Addr = Register::Address<0x40040920,0x00107800,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even/odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///TxFIFO number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///Set DATA0 PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepctl2{    ///<OTG device endpoint-2 control          register
        using Addr = Register::Address<0x40040940,0x00107800,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even/odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///TxFIFO number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///Set DATA0 PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepctl3{    ///<OTG device endpoint-3 control          register
        using Addr = Register::Address<0x40040960,0x00107800,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even/odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///TxFIFO number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///Set DATA0 PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepctl4{    ///<OTG device endpoint-4 control          register
        using Addr = Register::Address<0x40040980,0x00107800,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even/odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///TxFIFO number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///Set DATA0 PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepctl5{    ///<OTG device endpoint-5 control          register
        using Addr = Register::Address<0x400409a0,0x00107800,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even/odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///TxFIFO number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///Set DATA0 PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepctl6{    ///<OTG device endpoint-6 control          register
        using Addr = Register::Address<0x400409c0,0x00107800,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even/odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///TxFIFO number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///Set DATA0 PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepctl7{    ///<OTG device endpoint-7 control          register
        using Addr = Register::Address<0x400409e0,0x00107800,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even/odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///TxFIFO number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///Set DATA0 PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepint0{    ///<OTG device endpoint-0 interrupt          register
        using Addr = Register::Address<0x40040908,0xffffc424,0x00000000,std::uint32_t>;
        ///Transfer completed              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///Timeout condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///IN token received when TxFIFO is              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///IN endpoint NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txfe{}; 
        ///Transmit Fifo Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        ///Buffer not available              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Packet dropped status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        ///Babble error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        ///NAK interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepint1{    ///<OTG device endpoint-1 interrupt          register
        using Addr = Register::Address<0x40040928,0xffffc424,0x00000000,std::uint32_t>;
        ///Transfer completed              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///Timeout condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///IN token received when TxFIFO is              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///IN endpoint NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txfe{}; 
        ///Transmit Fifo Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        ///Buffer not available              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Packet dropped status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        ///Babble error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        ///NAK interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepint2{    ///<OTG device endpoint-2 interrupt          register
        using Addr = Register::Address<0x40040948,0xffffc424,0x00000000,std::uint32_t>;
        ///Transfer completed              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///Timeout condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///IN token received when TxFIFO is              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///IN endpoint NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txfe{}; 
        ///Transmit Fifo Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        ///Buffer not available              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Packet dropped status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        ///Babble error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        ///NAK interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepint3{    ///<OTG device endpoint-3 interrupt          register
        using Addr = Register::Address<0x40040968,0xffffc424,0x00000000,std::uint32_t>;
        ///Transfer completed              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///Timeout condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///IN token received when TxFIFO is              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///IN endpoint NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txfe{}; 
        ///Transmit Fifo Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        ///Buffer not available              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Packet dropped status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        ///Babble error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        ///NAK interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepint4{    ///<OTG device endpoint-4 interrupt          register
        using Addr = Register::Address<0x40040988,0xffffc424,0x00000000,std::uint32_t>;
        ///Transfer completed              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///Timeout condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///IN token received when TxFIFO is              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///IN endpoint NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txfe{}; 
        ///Transmit Fifo Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        ///Buffer not available              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Packet dropped status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        ///Babble error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        ///NAK interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepint5{    ///<OTG device endpoint-5 interrupt          register
        using Addr = Register::Address<0x400409a8,0xffffc424,0x00000000,std::uint32_t>;
        ///Transfer completed              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///Timeout condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///IN token received when TxFIFO is              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///IN endpoint NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txfe{}; 
        ///Transmit Fifo Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        ///Buffer not available              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Packet dropped status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        ///Babble error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        ///NAK interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepint6{    ///<OTG device endpoint-6 interrupt          register
        using Addr = Register::Address<0x400409c8,0xffffc424,0x00000000,std::uint32_t>;
        ///Transfer completed              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///Timeout condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///IN token received when TxFIFO is              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///IN endpoint NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txfe{}; 
        ///Transmit Fifo Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        ///Buffer not available              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Packet dropped status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        ///Babble error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        ///NAK interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepint7{    ///<OTG device endpoint-7 interrupt          register
        using Addr = Register::Address<0x400409e8,0xffffc424,0x00000000,std::uint32_t>;
        ///Transfer completed              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///Timeout condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///IN token received when TxFIFO is              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///IN endpoint NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txfe{}; 
        ///Transmit Fifo Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        ///Buffer not available              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Packet dropped status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        ///Babble error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        ///NAK interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
    }
    namespace Otg1HsDeviceOtgHsDieptsiz0{    ///<OTG_HS device IN endpoint 0 transfer size          register
        using Addr = Register::Address<0x40040910,0xffe7ff80,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepdma1{    ///<OTG_HS device endpoint-1 DMA address          register
        using Addr = Register::Address<0x40040914,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepdma2{    ///<OTG_HS device endpoint-2 DMA address          register
        using Addr = Register::Address<0x40040934,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepdma3{    ///<OTG_HS device endpoint-3 DMA address          register
        using Addr = Register::Address<0x40040954,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepdma4{    ///<OTG_HS device endpoint-4 DMA address          register
        using Addr = Register::Address<0x40040974,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsDeviceOtgHsDiepdma5{    ///<OTG_HS device endpoint-5 DMA address          register
        using Addr = Register::Address<0x40040994,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsDeviceOtgHsDtxfsts0{    ///<OTG_HS device IN endpoint transmit FIFO          status register
        using Addr = Register::Address<0x40040918,0xffff0000,0x00000000,std::uint32_t>;
        ///IN endpoint TxFIFO space              avail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace Otg1HsDeviceOtgHsDtxfsts1{    ///<OTG_HS device IN endpoint transmit FIFO          status register
        using Addr = Register::Address<0x40040938,0xffff0000,0x00000000,std::uint32_t>;
        ///IN endpoint TxFIFO space              avail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace Otg1HsDeviceOtgHsDtxfsts2{    ///<OTG_HS device IN endpoint transmit FIFO          status register
        using Addr = Register::Address<0x40040958,0xffff0000,0x00000000,std::uint32_t>;
        ///IN endpoint TxFIFO space              avail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace Otg1HsDeviceOtgHsDtxfsts3{    ///<OTG_HS device IN endpoint transmit FIFO          status register
        using Addr = Register::Address<0x40040978,0xffff0000,0x00000000,std::uint32_t>;
        ///IN endpoint TxFIFO space              avail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace Otg1HsDeviceOtgHsDtxfsts4{    ///<OTG_HS device IN endpoint transmit FIFO          status register
        using Addr = Register::Address<0x40040998,0xffff0000,0x00000000,std::uint32_t>;
        ///IN endpoint TxFIFO space              avail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace Otg1HsDeviceOtgHsDtxfsts5{    ///<OTG_HS device IN endpoint transmit FIFO          status register
        using Addr = Register::Address<0x400409b8,0xffff0000,0x00000000,std::uint32_t>;
        ///IN endpoint TxFIFO space              avail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace Otg1HsDeviceOtgHsDieptsiz1{    ///<OTG_HS device endpoint transfer size          register
        using Addr = Register::Address<0x40040930,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
    }
    namespace Otg1HsDeviceOtgHsDieptsiz2{    ///<OTG_HS device endpoint transfer size          register
        using Addr = Register::Address<0x40040950,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
    }
    namespace Otg1HsDeviceOtgHsDieptsiz3{    ///<OTG_HS device endpoint transfer size          register
        using Addr = Register::Address<0x40040970,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
    }
    namespace Otg1HsDeviceOtgHsDieptsiz4{    ///<OTG_HS device endpoint transfer size          register
        using Addr = Register::Address<0x40040990,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
    }
    namespace Otg1HsDeviceOtgHsDieptsiz5{    ///<OTG_HS device endpoint transfer size          register
        using Addr = Register::Address<0x400409b0,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
    }
    namespace Otg1HsDeviceOtgHsDoepctl0{    ///<OTG_HS device control OUT endpoint 0 control          register
        using Addr = Register::Address<0x40040b00,0x33c17ffc,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbaep{}; 
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptyp{}; 
        ///Snoop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epena{}; 
    }
    namespace Otg1HsDeviceOtgHsDoepctl1{    ///<OTG device endpoint-1 control          register
        using Addr = Register::Address<0x40040b20,0x03c07800,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even odd frame/Endpoint data              PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Snoop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///Set DATA0 PID/Set even              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace Otg1HsDeviceOtgHsDoepctl2{    ///<OTG device endpoint-2 control          register
        using Addr = Register::Address<0x40040b40,0x03c07800,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even odd frame/Endpoint data              PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Snoop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///Set DATA0 PID/Set even              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace Otg1HsDeviceOtgHsDoepctl3{    ///<OTG device endpoint-3 control          register
        using Addr = Register::Address<0x40040b60,0x03c07800,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even odd frame/Endpoint data              PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Snoop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///Set DATA0 PID/Set even              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace Otg1HsDeviceOtgHsDoepint0{    ///<OTG_HS device endpoint-0 interrupt          register
        using Addr = Register::Address<0x40040b08,0xffffbfa4,0x00000000,std::uint32_t>;
        ///Transfer completed              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///SETUP phase done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///OUT token received when endpoint              disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///Back-to-back SETUP packets              received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///NYET interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
    }
    namespace Otg1HsDeviceOtgHsDoepint1{    ///<OTG_HS device endpoint-1 interrupt          register
        using Addr = Register::Address<0x40040b28,0xffffbfa4,0x00000000,std::uint32_t>;
        ///Transfer completed              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///SETUP phase done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///OUT token received when endpoint              disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///Back-to-back SETUP packets              received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///NYET interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
    }
    namespace Otg1HsDeviceOtgHsDoepint2{    ///<OTG_HS device endpoint-2 interrupt          register
        using Addr = Register::Address<0x40040b48,0xffffbfa4,0x00000000,std::uint32_t>;
        ///Transfer completed              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///SETUP phase done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///OUT token received when endpoint              disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///Back-to-back SETUP packets              received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///NYET interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
    }
    namespace Otg1HsDeviceOtgHsDoepint3{    ///<OTG_HS device endpoint-3 interrupt          register
        using Addr = Register::Address<0x40040b68,0xffffbfa4,0x00000000,std::uint32_t>;
        ///Transfer completed              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///SETUP phase done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///OUT token received when endpoint              disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///Back-to-back SETUP packets              received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///NYET interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
    }
    namespace Otg1HsDeviceOtgHsDoepint4{    ///<OTG_HS device endpoint-4 interrupt          register
        using Addr = Register::Address<0x40040b88,0xffffbfa4,0x00000000,std::uint32_t>;
        ///Transfer completed              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///SETUP phase done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///OUT token received when endpoint              disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///Back-to-back SETUP packets              received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///NYET interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
    }
    namespace Otg1HsDeviceOtgHsDoepint5{    ///<OTG_HS device endpoint-5 interrupt          register
        using Addr = Register::Address<0x40040ba8,0xffffbfa4,0x00000000,std::uint32_t>;
        ///Transfer completed              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///SETUP phase done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///OUT token received when endpoint              disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///Back-to-back SETUP packets              received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///NYET interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
    }
    namespace Otg1HsDeviceOtgHsDoepint6{    ///<OTG_HS device endpoint-6 interrupt          register
        using Addr = Register::Address<0x40040bc8,0xffffbfa4,0x00000000,std::uint32_t>;
        ///Transfer completed              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///SETUP phase done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///OUT token received when endpoint              disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///Back-to-back SETUP packets              received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///NYET interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
    }
    namespace Otg1HsDeviceOtgHsDoepint7{    ///<OTG_HS device endpoint-7 interrupt          register
        using Addr = Register::Address<0x40040be8,0xffffbfa4,0x00000000,std::uint32_t>;
        ///Transfer completed              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///SETUP phase done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///OUT token received when endpoint              disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///Back-to-back SETUP packets              received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///NYET interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
    }
    namespace Otg1HsDeviceOtgHsDoeptsiz0{    ///<OTG_HS device endpoint-0 transfer size          register
        using Addr = Register::Address<0x40040b10,0x9ff7ff80,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///SETUP packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> stupcnt{}; 
    }
    namespace Otg1HsDeviceOtgHsDoeptsiz1{    ///<OTG_HS device endpoint-1 transfer size          register
        using Addr = Register::Address<0x40040b30,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Received data PID/SETUP packet              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
    }
    namespace Otg1HsDeviceOtgHsDoeptsiz2{    ///<OTG_HS device endpoint-2 transfer size          register
        using Addr = Register::Address<0x40040b50,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Received data PID/SETUP packet              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
    }
    namespace Otg1HsDeviceOtgHsDoeptsiz3{    ///<OTG_HS device endpoint-3 transfer size          register
        using Addr = Register::Address<0x40040b70,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Received data PID/SETUP packet              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
    }
    namespace Otg1HsDeviceOtgHsDoeptsiz4{    ///<OTG_HS device endpoint-4 transfer size          register
        using Addr = Register::Address<0x40040b90,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Received data PID/SETUP packet              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
    }
    namespace Otg1HsDeviceOtgHsDieptsiz6{    ///<OTG_HS device endpoint transfer size          register
        using Addr = Register::Address<0x400409a0,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
    }
    namespace Otg1HsDeviceOtgHsDtxfsts6{    ///<OTG_HS device IN endpoint transmit FIFO          status register
        using Addr = Register::Address<0x400409a4,0xffff0000,0x00000000,std::uint32_t>;
        ///IN endpoint TxFIFO space              avail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace Otg1HsDeviceOtgHsDieptsiz7{    ///<OTG_HS device endpoint transfer size          register
        using Addr = Register::Address<0x400409a8,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
    }
    namespace Otg1HsDeviceOtgHsDtxfsts7{    ///<OTG_HS device IN endpoint transmit FIFO          status register
        using Addr = Register::Address<0x400409ac,0xffff0000,0x00000000,std::uint32_t>;
        ///IN endpoint TxFIFO space              avail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace Otg1HsDeviceOtgHsDoepctl4{    ///<OTG device endpoint-4 control          register
        using Addr = Register::Address<0x40040b80,0x03c07800,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even odd frame/Endpoint data              PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Snoop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///Set DATA0 PID/Set even              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace Otg1HsDeviceOtgHsDoepctl5{    ///<OTG device endpoint-5 control          register
        using Addr = Register::Address<0x40040ba0,0x03c07800,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even odd frame/Endpoint data              PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Snoop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///Set DATA0 PID/Set even              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace Otg1HsDeviceOtgHsDoepctl6{    ///<OTG device endpoint-6 control          register
        using Addr = Register::Address<0x40040bc0,0x03c07800,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even odd frame/Endpoint data              PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Snoop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///Set DATA0 PID/Set even              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace Otg1HsDeviceOtgHsDoepctl7{    ///<OTG device endpoint-7 control          register
        using Addr = Register::Address<0x40040be0,0x03c07800,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even odd frame/Endpoint data              PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Snoop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> snak{}; 
        ///Set DATA0 PID/Set even              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace Otg1HsDeviceOtgHsDoeptsiz5{    ///<OTG_HS device endpoint-5 transfer size          register
        using Addr = Register::Address<0x40040bb0,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Received data PID/SETUP packet              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
    }
    namespace Otg1HsDeviceOtgHsDoeptsiz6{    ///<OTG_HS device endpoint-6 transfer size          register
        using Addr = Register::Address<0x40040bd0,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Received data PID/SETUP packet              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
    }
    namespace Otg1HsDeviceOtgHsDoeptsiz7{    ///<OTG_HS device endpoint-7 transfer size          register
        using Addr = Register::Address<0x40040bf0,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Received data PID/SETUP packet              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
    }
}
