#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//USB 1 on the go high speed
    namespace Otg1HsHostOtgHsHcfg{    ///<OTG_HS host configuration          register
        using Addr = Register::Address<0x40040400,0xfffffff8,0x00000000,std::uint32_t>;
        ///FS/LS PHY clock select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fslspcs{}; 
        ///FS- and LS-only support
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fslss{}; 
    }
    namespace Otg1HsHostOtgHsHfir{    ///<OTG_HS Host frame interval          register
        using Addr = Register::Address<0x40040404,0xffff0000,0x00000000,std::uint32_t>;
        ///Frame interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> frivl{}; 
    }
    namespace Otg1HsHostOtgHsHfnum{    ///<OTG_HS host frame number/frame time          remaining register
        using Addr = Register::Address<0x40040408,0x00000000,0x00000000,std::uint32_t>;
        ///Frame number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> frnum{}; 
        ///Frame time remaining
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ftrem{}; 
    }
    namespace Otg1HsHostOtgHsHptxsts{    ///<OTG_HS_Host periodic transmit FIFO/queue          status register
        using Addr = Register::Address<0x40040410,0x00000000,0x00000000,std::uint32_t>;
        ///Periodic transmit data FIFO space              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ptxfsavl{}; 
        ///Periodic transmit request queue space              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptxqsav{}; 
        ///Top of the periodic transmit request              queue
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptxqtop{}; 
    }
    namespace Otg1HsHostOtgHsHaint{    ///<OTG_HS Host all channels interrupt          register
        using Addr = Register::Address<0x40040414,0xffff0000,0x00000000,std::uint32_t>;
        ///Channel interrupts
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> haint{}; 
    }
    namespace Otg1HsHostOtgHsHaintmsk{    ///<OTG_HS host all channels interrupt mask          register
        using Addr = Register::Address<0x40040418,0xffff0000,0x00000000,std::uint32_t>;
        ///Channel interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> haintm{}; 
    }
    namespace Otg1HsHostOtgHsHprt{    ///<OTG_HS host port control and status          register
        using Addr = Register::Address<0x40040440,0xfff80200,0x00000000,std::uint32_t>;
        ///Port connect status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pcsts{}; 
        ///Port connect detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pcdet{}; 
        ///Port enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pena{}; 
        ///Port enable/disable change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> penchng{}; 
        ///Port overcurrent active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> poca{}; 
        ///Port overcurrent change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pocchng{}; 
        ///Port resume
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pres{}; 
        ///Port suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> psusp{}; 
        ///Port reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> prst{}; 
        ///Port line status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> plsts{}; 
        ///Port power
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ppwr{}; 
        ///Port test control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,unsigned> ptctl{}; 
        ///Port speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pspd{}; 
    }
    namespace Otg1HsHostOtgHsHcchar0{    ///<OTG_HS host channel-0 characteristics          register
        using Addr = Register::Address<0x40040500,0x00010000,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace Otg1HsHostOtgHsHcchar1{    ///<OTG_HS host channel-1 characteristics          register
        using Addr = Register::Address<0x40040520,0x00010000,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace Otg1HsHostOtgHsHcchar2{    ///<OTG_HS host channel-2 characteristics          register
        using Addr = Register::Address<0x40040540,0x00010000,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace Otg1HsHostOtgHsHcchar3{    ///<OTG_HS host channel-3 characteristics          register
        using Addr = Register::Address<0x40040560,0x00010000,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace Otg1HsHostOtgHsHcchar4{    ///<OTG_HS host channel-4 characteristics          register
        using Addr = Register::Address<0x40040580,0x00010000,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace Otg1HsHostOtgHsHcchar5{    ///<OTG_HS host channel-5 characteristics          register
        using Addr = Register::Address<0x400405a0,0x00010000,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace Otg1HsHostOtgHsHcchar6{    ///<OTG_HS host channel-6 characteristics          register
        using Addr = Register::Address<0x400405c0,0x00010000,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace Otg1HsHostOtgHsHcchar7{    ///<OTG_HS host channel-7 characteristics          register
        using Addr = Register::Address<0x400405e0,0x00010000,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace Otg1HsHostOtgHsHcchar8{    ///<OTG_HS host channel-8 characteristics          register
        using Addr = Register::Address<0x40040600,0x00010000,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace Otg1HsHostOtgHsHcchar9{    ///<OTG_HS host channel-9 characteristics          register
        using Addr = Register::Address<0x40040620,0x00010000,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace Otg1HsHostOtgHsHcchar10{    ///<OTG_HS host channel-10 characteristics          register
        using Addr = Register::Address<0x40040640,0x00010000,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace Otg1HsHostOtgHsHcchar11{    ///<OTG_HS host channel-11 characteristics          register
        using Addr = Register::Address<0x40040660,0x00010000,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace Otg1HsHostOtgHsHcsplt0{    ///<OTG_HS host channel-0 split control          register
        using Addr = Register::Address<0x40040504,0x7ffe0000,0x00000000,std::uint32_t>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace Otg1HsHostOtgHsHcsplt1{    ///<OTG_HS host channel-1 split control          register
        using Addr = Register::Address<0x40040524,0x7ffe0000,0x00000000,std::uint32_t>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace Otg1HsHostOtgHsHcsplt2{    ///<OTG_HS host channel-2 split control          register
        using Addr = Register::Address<0x40040544,0x7ffe0000,0x00000000,std::uint32_t>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace Otg1HsHostOtgHsHcsplt3{    ///<OTG_HS host channel-3 split control          register
        using Addr = Register::Address<0x40040564,0x7ffe0000,0x00000000,std::uint32_t>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace Otg1HsHostOtgHsHcsplt4{    ///<OTG_HS host channel-4 split control          register
        using Addr = Register::Address<0x40040584,0x7ffe0000,0x00000000,std::uint32_t>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace Otg1HsHostOtgHsHcsplt5{    ///<OTG_HS host channel-5 split control          register
        using Addr = Register::Address<0x400405a4,0x7ffe0000,0x00000000,std::uint32_t>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace Otg1HsHostOtgHsHcsplt6{    ///<OTG_HS host channel-6 split control          register
        using Addr = Register::Address<0x400405c4,0x7ffe0000,0x00000000,std::uint32_t>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace Otg1HsHostOtgHsHcsplt7{    ///<OTG_HS host channel-7 split control          register
        using Addr = Register::Address<0x400405e4,0x7ffe0000,0x00000000,std::uint32_t>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace Otg1HsHostOtgHsHcsplt8{    ///<OTG_HS host channel-8 split control          register
        using Addr = Register::Address<0x40040604,0x7ffe0000,0x00000000,std::uint32_t>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace Otg1HsHostOtgHsHcsplt9{    ///<OTG_HS host channel-9 split control          register
        using Addr = Register::Address<0x40040624,0x7ffe0000,0x00000000,std::uint32_t>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace Otg1HsHostOtgHsHcsplt10{    ///<OTG_HS host channel-10 split control          register
        using Addr = Register::Address<0x40040644,0x7ffe0000,0x00000000,std::uint32_t>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace Otg1HsHostOtgHsHcsplt11{    ///<OTG_HS host channel-11 split control          register
        using Addr = Register::Address<0x40040664,0x7ffe0000,0x00000000,std::uint32_t>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace Otg1HsHostOtgHsHcint0{    ///<OTG_HS host channel-11 interrupt          register
        using Addr = Register::Address<0x40040508,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace Otg1HsHostOtgHsHcint1{    ///<OTG_HS host channel-1 interrupt          register
        using Addr = Register::Address<0x40040528,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace Otg1HsHostOtgHsHcint2{    ///<OTG_HS host channel-2 interrupt          register
        using Addr = Register::Address<0x40040548,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace Otg1HsHostOtgHsHcint3{    ///<OTG_HS host channel-3 interrupt          register
        using Addr = Register::Address<0x40040568,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace Otg1HsHostOtgHsHcint4{    ///<OTG_HS host channel-4 interrupt          register
        using Addr = Register::Address<0x40040588,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace Otg1HsHostOtgHsHcint5{    ///<OTG_HS host channel-5 interrupt          register
        using Addr = Register::Address<0x400405a8,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace Otg1HsHostOtgHsHcint6{    ///<OTG_HS host channel-6 interrupt          register
        using Addr = Register::Address<0x400405c8,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace Otg1HsHostOtgHsHcint7{    ///<OTG_HS host channel-7 interrupt          register
        using Addr = Register::Address<0x400405e8,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace Otg1HsHostOtgHsHcint8{    ///<OTG_HS host channel-8 interrupt          register
        using Addr = Register::Address<0x40040608,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace Otg1HsHostOtgHsHcint9{    ///<OTG_HS host channel-9 interrupt          register
        using Addr = Register::Address<0x40040628,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace Otg1HsHostOtgHsHcint10{    ///<OTG_HS host channel-10 interrupt          register
        using Addr = Register::Address<0x40040648,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace Otg1HsHostOtgHsHcint11{    ///<OTG_HS host channel-11 interrupt          register
        using Addr = Register::Address<0x40040668,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace Otg1HsHostOtgHsHcintmsk0{    ///<OTG_HS host channel-11 interrupt mask          register
        using Addr = Register::Address<0x4004050c,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace Otg1HsHostOtgHsHcintmsk1{    ///<OTG_HS host channel-1 interrupt mask          register
        using Addr = Register::Address<0x4004052c,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace Otg1HsHostOtgHsHcintmsk2{    ///<OTG_HS host channel-2 interrupt mask          register
        using Addr = Register::Address<0x4004054c,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace Otg1HsHostOtgHsHcintmsk3{    ///<OTG_HS host channel-3 interrupt mask          register
        using Addr = Register::Address<0x4004056c,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace Otg1HsHostOtgHsHcintmsk4{    ///<OTG_HS host channel-4 interrupt mask          register
        using Addr = Register::Address<0x4004058c,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace Otg1HsHostOtgHsHcintmsk5{    ///<OTG_HS host channel-5 interrupt mask          register
        using Addr = Register::Address<0x400405ac,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace Otg1HsHostOtgHsHcintmsk6{    ///<OTG_HS host channel-6 interrupt mask          register
        using Addr = Register::Address<0x400405cc,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace Otg1HsHostOtgHsHcintmsk7{    ///<OTG_HS host channel-7 interrupt mask          register
        using Addr = Register::Address<0x400405ec,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace Otg1HsHostOtgHsHcintmsk8{    ///<OTG_HS host channel-8 interrupt mask          register
        using Addr = Register::Address<0x4004060c,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace Otg1HsHostOtgHsHcintmsk9{    ///<OTG_HS host channel-9 interrupt mask          register
        using Addr = Register::Address<0x4004062c,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace Otg1HsHostOtgHsHcintmsk10{    ///<OTG_HS host channel-10 interrupt mask          register
        using Addr = Register::Address<0x4004064c,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace Otg1HsHostOtgHsHcintmsk11{    ///<OTG_HS host channel-11 interrupt mask          register
        using Addr = Register::Address<0x4004066c,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace Otg1HsHostOtgHsHctsiz0{    ///<OTG_HS host channel-11 transfer size          register
        using Addr = Register::Address<0x40040510,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg1HsHostOtgHsHctsiz1{    ///<OTG_HS host channel-1 transfer size          register
        using Addr = Register::Address<0x40040530,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg1HsHostOtgHsHctsiz2{    ///<OTG_HS host channel-2 transfer size          register
        using Addr = Register::Address<0x40040550,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg1HsHostOtgHsHctsiz3{    ///<OTG_HS host channel-3 transfer size          register
        using Addr = Register::Address<0x40040570,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg1HsHostOtgHsHctsiz4{    ///<OTG_HS host channel-4 transfer size          register
        using Addr = Register::Address<0x40040590,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg1HsHostOtgHsHctsiz5{    ///<OTG_HS host channel-5 transfer size          register
        using Addr = Register::Address<0x400405b0,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg1HsHostOtgHsHctsiz6{    ///<OTG_HS host channel-6 transfer size          register
        using Addr = Register::Address<0x400405d0,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg1HsHostOtgHsHctsiz7{    ///<OTG_HS host channel-7 transfer size          register
        using Addr = Register::Address<0x400405f0,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg1HsHostOtgHsHctsiz8{    ///<OTG_HS host channel-8 transfer size          register
        using Addr = Register::Address<0x40040610,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg1HsHostOtgHsHctsiz9{    ///<OTG_HS host channel-9 transfer size          register
        using Addr = Register::Address<0x40040630,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg1HsHostOtgHsHctsiz10{    ///<OTG_HS host channel-10 transfer size          register
        using Addr = Register::Address<0x40040650,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg1HsHostOtgHsHctsiz11{    ///<OTG_HS host channel-11 transfer size          register
        using Addr = Register::Address<0x40040670,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg1HsHostOtgHsHcdma0{    ///<OTG_HS host channel-0 DMA address          register
        using Addr = Register::Address<0x40040514,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsHostOtgHsHcdma1{    ///<OTG_HS host channel-1 DMA address          register
        using Addr = Register::Address<0x40040534,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsHostOtgHsHcdma2{    ///<OTG_HS host channel-2 DMA address          register
        using Addr = Register::Address<0x40040554,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsHostOtgHsHcdma3{    ///<OTG_HS host channel-3 DMA address          register
        using Addr = Register::Address<0x40040574,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsHostOtgHsHcdma4{    ///<OTG_HS host channel-4 DMA address          register
        using Addr = Register::Address<0x40040594,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsHostOtgHsHcdma5{    ///<OTG_HS host channel-5 DMA address          register
        using Addr = Register::Address<0x400405b4,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsHostOtgHsHcdma6{    ///<OTG_HS host channel-6 DMA address          register
        using Addr = Register::Address<0x400405d4,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsHostOtgHsHcdma7{    ///<OTG_HS host channel-7 DMA address          register
        using Addr = Register::Address<0x400405f4,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsHostOtgHsHcdma8{    ///<OTG_HS host channel-8 DMA address          register
        using Addr = Register::Address<0x40040614,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsHostOtgHsHcdma9{    ///<OTG_HS host channel-9 DMA address          register
        using Addr = Register::Address<0x40040634,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsHostOtgHsHcdma10{    ///<OTG_HS host channel-10 DMA address          register
        using Addr = Register::Address<0x40040654,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsHostOtgHsHcdma11{    ///<OTG_HS host channel-11 DMA address          register
        using Addr = Register::Address<0x40040674,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsHostOtgHsHcchar12{    ///<OTG_HS host channel-12 characteristics          register
        using Addr = Register::Address<0x40040678,0x00010000,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace Otg1HsHostOtgHsHcsplt12{    ///<OTG_HS host channel-12 split control          register
        using Addr = Register::Address<0x4004067c,0x7ffe0000,0x00000000,std::uint32_t>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace Otg1HsHostOtgHsHcint12{    ///<OTG_HS host channel-12 interrupt          register
        using Addr = Register::Address<0x40040680,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace Otg1HsHostOtgHsHcintmsk12{    ///<OTG_HS host channel-12 interrupt mask          register
        using Addr = Register::Address<0x40040684,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace Otg1HsHostOtgHsHctsiz12{    ///<OTG_HS host channel-12 transfer size          register
        using Addr = Register::Address<0x40040688,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg1HsHostOtgHsHcdma12{    ///<OTG_HS host channel-12 DMA address          register
        using Addr = Register::Address<0x4004068c,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsHostOtgHsHcchar13{    ///<OTG_HS host channel-13 characteristics          register
        using Addr = Register::Address<0x40040690,0x00010000,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace Otg1HsHostOtgHsHcsplt13{    ///<OTG_HS host channel-13 split control          register
        using Addr = Register::Address<0x40040694,0x7ffe0000,0x00000000,std::uint32_t>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace Otg1HsHostOtgHsHcint13{    ///<OTG_HS host channel-13 interrupt          register
        using Addr = Register::Address<0x40040698,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace Otg1HsHostOtgHsHcintmsk13{    ///<OTG_HS host channel-13 interrupt mask          register
        using Addr = Register::Address<0x4004069c,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALLM response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace Otg1HsHostOtgHsHctsiz13{    ///<OTG_HS host channel-13 transfer size          register
        using Addr = Register::Address<0x400406a0,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg1HsHostOtgHsHcdma13{    ///<OTG_HS host channel-13 DMA address          register
        using Addr = Register::Address<0x400406a4,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsHostOtgHsHcchar14{    ///<OTG_HS host channel-14 characteristics          register
        using Addr = Register::Address<0x400406a8,0x00010000,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace Otg1HsHostOtgHsHcsplt14{    ///<OTG_HS host channel-14 split control          register
        using Addr = Register::Address<0x400406ac,0x7ffe0000,0x00000000,std::uint32_t>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace Otg1HsHostOtgHsHcint14{    ///<OTG_HS host channel-14 interrupt          register
        using Addr = Register::Address<0x400406b0,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace Otg1HsHostOtgHsHcintmsk14{    ///<OTG_HS host channel-14 interrupt mask          register
        using Addr = Register::Address<0x400406b4,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAKM response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACKM response received/transmitted              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace Otg1HsHostOtgHsHctsiz14{    ///<OTG_HS host channel-14 transfer size          register
        using Addr = Register::Address<0x400406b8,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg1HsHostOtgHsHcdma14{    ///<OTG_HS host channel-14 DMA address          register
        using Addr = Register::Address<0x400406bc,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg1HsHostOtgHsHcchar15{    ///<OTG_HS host channel-15 characteristics          register
        using Addr = Register::Address<0x400406c0,0x00010000,0x00000000,std::uint32_t>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace Otg1HsHostOtgHsHcsplt15{    ///<OTG_HS host channel-15 split control          register
        using Addr = Register::Address<0x400406c4,0x7ffe0000,0x00000000,std::uint32_t>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace Otg1HsHostOtgHsHcint15{    ///<OTG_HS host channel-15 interrupt          register
        using Addr = Register::Address<0x400406c8,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace Otg1HsHostOtgHsHcintmsk15{    ///<OTG_HS host channel-15 interrupt mask          register
        using Addr = Register::Address<0x400406cc,0xfffff800,0x00000000,std::uint32_t>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///Response received              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace Otg1HsHostOtgHsHctsiz15{    ///<OTG_HS host channel-15 transfer size          register
        using Addr = Register::Address<0x400406d0,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg1HsHostOtgHsHcdma15{    ///<OTG_HS host channel-15 DMA address          register
        using Addr = Register::Address<0x400406d4,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
}
