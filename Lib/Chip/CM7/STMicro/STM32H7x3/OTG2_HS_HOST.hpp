#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//USB 1 on the go high speed
    namespace Otg2HsHostOtgHsHcfg{    ///<OTG_HS host configuration          register
        using Addr = Register::Address<0x40080400,0xfffffff8,0x00000000,std::uint32_t>;
        ///FS/LS PHY clock select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fslspcs{}; 
        ///FS- and LS-only support
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fslss{}; 
    }
    namespace Otg2HsHostOtgHsHfir{    ///<OTG_HS Host frame interval          register
        using Addr = Register::Address<0x40080404,0xffff0000,0x00000000,std::uint32_t>;
        ///Frame interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> frivl{}; 
    }
    namespace Otg2HsHostOtgHsHfnum{    ///<OTG_HS host frame number/frame time          remaining register
        using Addr = Register::Address<0x40080408,0x00000000,0x00000000,std::uint32_t>;
        ///Frame number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> frnum{}; 
        ///Frame time remaining
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ftrem{}; 
    }
    namespace Otg2HsHostOtgHsHptxsts{    ///<OTG_HS_Host periodic transmit FIFO/queue          status register
        using Addr = Register::Address<0x40080410,0x00000000,0x00000000,std::uint32_t>;
        ///Periodic transmit data FIFO space              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ptxfsavl{}; 
        ///Periodic transmit request queue space              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptxqsav{}; 
        ///Top of the periodic transmit request              queue
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptxqtop{}; 
    }
    namespace Otg2HsHostOtgHsHaint{    ///<OTG_HS Host all channels interrupt          register
        using Addr = Register::Address<0x40080414,0xffff0000,0x00000000,std::uint32_t>;
        ///Channel interrupts
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> haint{}; 
    }
    namespace Otg2HsHostOtgHsHaintmsk{    ///<OTG_HS host all channels interrupt mask          register
        using Addr = Register::Address<0x40080418,0xffff0000,0x00000000,std::uint32_t>;
        ///Channel interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> haintm{}; 
    }
    namespace Otg2HsHostOtgHsHprt{    ///<OTG_HS host port control and status          register
        using Addr = Register::Address<0x40080440,0xfff80200,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcchar0{    ///<OTG_HS host channel-0 characteristics          register
        using Addr = Register::Address<0x40080500,0x00010000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcchar1{    ///<OTG_HS host channel-1 characteristics          register
        using Addr = Register::Address<0x40080520,0x00010000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcchar2{    ///<OTG_HS host channel-2 characteristics          register
        using Addr = Register::Address<0x40080540,0x00010000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcchar3{    ///<OTG_HS host channel-3 characteristics          register
        using Addr = Register::Address<0x40080560,0x00010000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcchar4{    ///<OTG_HS host channel-4 characteristics          register
        using Addr = Register::Address<0x40080580,0x00010000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcchar5{    ///<OTG_HS host channel-5 characteristics          register
        using Addr = Register::Address<0x400805a0,0x00010000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcchar6{    ///<OTG_HS host channel-6 characteristics          register
        using Addr = Register::Address<0x400805c0,0x00010000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcchar7{    ///<OTG_HS host channel-7 characteristics          register
        using Addr = Register::Address<0x400805e0,0x00010000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcchar8{    ///<OTG_HS host channel-8 characteristics          register
        using Addr = Register::Address<0x40080600,0x00010000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcchar9{    ///<OTG_HS host channel-9 characteristics          register
        using Addr = Register::Address<0x40080620,0x00010000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcchar10{    ///<OTG_HS host channel-10 characteristics          register
        using Addr = Register::Address<0x40080640,0x00010000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcchar11{    ///<OTG_HS host channel-11 characteristics          register
        using Addr = Register::Address<0x40080660,0x00010000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcsplt0{    ///<OTG_HS host channel-0 split control          register
        using Addr = Register::Address<0x40080504,0x7ffe0000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcsplt1{    ///<OTG_HS host channel-1 split control          register
        using Addr = Register::Address<0x40080524,0x7ffe0000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcsplt2{    ///<OTG_HS host channel-2 split control          register
        using Addr = Register::Address<0x40080544,0x7ffe0000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcsplt3{    ///<OTG_HS host channel-3 split control          register
        using Addr = Register::Address<0x40080564,0x7ffe0000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcsplt4{    ///<OTG_HS host channel-4 split control          register
        using Addr = Register::Address<0x40080584,0x7ffe0000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcsplt5{    ///<OTG_HS host channel-5 split control          register
        using Addr = Register::Address<0x400805a4,0x7ffe0000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcsplt6{    ///<OTG_HS host channel-6 split control          register
        using Addr = Register::Address<0x400805c4,0x7ffe0000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcsplt7{    ///<OTG_HS host channel-7 split control          register
        using Addr = Register::Address<0x400805e4,0x7ffe0000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcsplt8{    ///<OTG_HS host channel-8 split control          register
        using Addr = Register::Address<0x40080604,0x7ffe0000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcsplt9{    ///<OTG_HS host channel-9 split control          register
        using Addr = Register::Address<0x40080624,0x7ffe0000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcsplt10{    ///<OTG_HS host channel-10 split control          register
        using Addr = Register::Address<0x40080644,0x7ffe0000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcsplt11{    ///<OTG_HS host channel-11 split control          register
        using Addr = Register::Address<0x40080664,0x7ffe0000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcint0{    ///<OTG_HS host channel-11 interrupt          register
        using Addr = Register::Address<0x40080508,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcint1{    ///<OTG_HS host channel-1 interrupt          register
        using Addr = Register::Address<0x40080528,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcint2{    ///<OTG_HS host channel-2 interrupt          register
        using Addr = Register::Address<0x40080548,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcint3{    ///<OTG_HS host channel-3 interrupt          register
        using Addr = Register::Address<0x40080568,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcint4{    ///<OTG_HS host channel-4 interrupt          register
        using Addr = Register::Address<0x40080588,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcint5{    ///<OTG_HS host channel-5 interrupt          register
        using Addr = Register::Address<0x400805a8,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcint6{    ///<OTG_HS host channel-6 interrupt          register
        using Addr = Register::Address<0x400805c8,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcint7{    ///<OTG_HS host channel-7 interrupt          register
        using Addr = Register::Address<0x400805e8,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcint8{    ///<OTG_HS host channel-8 interrupt          register
        using Addr = Register::Address<0x40080608,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcint9{    ///<OTG_HS host channel-9 interrupt          register
        using Addr = Register::Address<0x40080628,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcint10{    ///<OTG_HS host channel-10 interrupt          register
        using Addr = Register::Address<0x40080648,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcint11{    ///<OTG_HS host channel-11 interrupt          register
        using Addr = Register::Address<0x40080668,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcintmsk0{    ///<OTG_HS host channel-11 interrupt mask          register
        using Addr = Register::Address<0x4008050c,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcintmsk1{    ///<OTG_HS host channel-1 interrupt mask          register
        using Addr = Register::Address<0x4008052c,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcintmsk2{    ///<OTG_HS host channel-2 interrupt mask          register
        using Addr = Register::Address<0x4008054c,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcintmsk3{    ///<OTG_HS host channel-3 interrupt mask          register
        using Addr = Register::Address<0x4008056c,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcintmsk4{    ///<OTG_HS host channel-4 interrupt mask          register
        using Addr = Register::Address<0x4008058c,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcintmsk5{    ///<OTG_HS host channel-5 interrupt mask          register
        using Addr = Register::Address<0x400805ac,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcintmsk6{    ///<OTG_HS host channel-6 interrupt mask          register
        using Addr = Register::Address<0x400805cc,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcintmsk7{    ///<OTG_HS host channel-7 interrupt mask          register
        using Addr = Register::Address<0x400805ec,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcintmsk8{    ///<OTG_HS host channel-8 interrupt mask          register
        using Addr = Register::Address<0x4008060c,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcintmsk9{    ///<OTG_HS host channel-9 interrupt mask          register
        using Addr = Register::Address<0x4008062c,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcintmsk10{    ///<OTG_HS host channel-10 interrupt mask          register
        using Addr = Register::Address<0x4008064c,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcintmsk11{    ///<OTG_HS host channel-11 interrupt mask          register
        using Addr = Register::Address<0x4008066c,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHctsiz0{    ///<OTG_HS host channel-11 transfer size          register
        using Addr = Register::Address<0x40080510,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg2HsHostOtgHsHctsiz1{    ///<OTG_HS host channel-1 transfer size          register
        using Addr = Register::Address<0x40080530,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg2HsHostOtgHsHctsiz2{    ///<OTG_HS host channel-2 transfer size          register
        using Addr = Register::Address<0x40080550,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg2HsHostOtgHsHctsiz3{    ///<OTG_HS host channel-3 transfer size          register
        using Addr = Register::Address<0x40080570,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg2HsHostOtgHsHctsiz4{    ///<OTG_HS host channel-4 transfer size          register
        using Addr = Register::Address<0x40080590,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg2HsHostOtgHsHctsiz5{    ///<OTG_HS host channel-5 transfer size          register
        using Addr = Register::Address<0x400805b0,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg2HsHostOtgHsHctsiz6{    ///<OTG_HS host channel-6 transfer size          register
        using Addr = Register::Address<0x400805d0,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg2HsHostOtgHsHctsiz7{    ///<OTG_HS host channel-7 transfer size          register
        using Addr = Register::Address<0x400805f0,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg2HsHostOtgHsHctsiz8{    ///<OTG_HS host channel-8 transfer size          register
        using Addr = Register::Address<0x40080610,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg2HsHostOtgHsHctsiz9{    ///<OTG_HS host channel-9 transfer size          register
        using Addr = Register::Address<0x40080630,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg2HsHostOtgHsHctsiz10{    ///<OTG_HS host channel-10 transfer size          register
        using Addr = Register::Address<0x40080650,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg2HsHostOtgHsHctsiz11{    ///<OTG_HS host channel-11 transfer size          register
        using Addr = Register::Address<0x40080670,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg2HsHostOtgHsHcdma0{    ///<OTG_HS host channel-0 DMA address          register
        using Addr = Register::Address<0x40080514,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg2HsHostOtgHsHcdma1{    ///<OTG_HS host channel-1 DMA address          register
        using Addr = Register::Address<0x40080534,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg2HsHostOtgHsHcdma2{    ///<OTG_HS host channel-2 DMA address          register
        using Addr = Register::Address<0x40080554,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg2HsHostOtgHsHcdma3{    ///<OTG_HS host channel-3 DMA address          register
        using Addr = Register::Address<0x40080574,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg2HsHostOtgHsHcdma4{    ///<OTG_HS host channel-4 DMA address          register
        using Addr = Register::Address<0x40080594,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg2HsHostOtgHsHcdma5{    ///<OTG_HS host channel-5 DMA address          register
        using Addr = Register::Address<0x400805b4,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg2HsHostOtgHsHcdma6{    ///<OTG_HS host channel-6 DMA address          register
        using Addr = Register::Address<0x400805d4,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg2HsHostOtgHsHcdma7{    ///<OTG_HS host channel-7 DMA address          register
        using Addr = Register::Address<0x400805f4,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg2HsHostOtgHsHcdma8{    ///<OTG_HS host channel-8 DMA address          register
        using Addr = Register::Address<0x40080614,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg2HsHostOtgHsHcdma9{    ///<OTG_HS host channel-9 DMA address          register
        using Addr = Register::Address<0x40080634,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg2HsHostOtgHsHcdma10{    ///<OTG_HS host channel-10 DMA address          register
        using Addr = Register::Address<0x40080654,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg2HsHostOtgHsHcdma11{    ///<OTG_HS host channel-11 DMA address          register
        using Addr = Register::Address<0x40080674,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg2HsHostOtgHsHcchar12{    ///<OTG_HS host channel-12 characteristics          register
        using Addr = Register::Address<0x40080678,0x00010000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcsplt12{    ///<OTG_HS host channel-12 split control          register
        using Addr = Register::Address<0x4008067c,0x7ffe0000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcint12{    ///<OTG_HS host channel-12 interrupt          register
        using Addr = Register::Address<0x40080680,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcintmsk12{    ///<OTG_HS host channel-12 interrupt mask          register
        using Addr = Register::Address<0x40080684,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHctsiz12{    ///<OTG_HS host channel-12 transfer size          register
        using Addr = Register::Address<0x40080688,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg2HsHostOtgHsHcdma12{    ///<OTG_HS host channel-12 DMA address          register
        using Addr = Register::Address<0x4008068c,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg2HsHostOtgHsHcchar13{    ///<OTG_HS host channel-13 characteristics          register
        using Addr = Register::Address<0x40080690,0x00010000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcsplt13{    ///<OTG_HS host channel-13 split control          register
        using Addr = Register::Address<0x40080694,0x7ffe0000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcint13{    ///<OTG_HS host channel-13 interrupt          register
        using Addr = Register::Address<0x40080698,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcintmsk13{    ///<OTG_HS host channel-13 interrupt mask          register
        using Addr = Register::Address<0x4008069c,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHctsiz13{    ///<OTG_HS host channel-13 transfer size          register
        using Addr = Register::Address<0x400806a0,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg2HsHostOtgHsHcdma13{    ///<OTG_HS host channel-13 DMA address          register
        using Addr = Register::Address<0x400806a4,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg2HsHostOtgHsHcchar14{    ///<OTG_HS host channel-14 characteristics          register
        using Addr = Register::Address<0x400806a8,0x00010000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcsplt14{    ///<OTG_HS host channel-14 split control          register
        using Addr = Register::Address<0x400806ac,0x7ffe0000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcint14{    ///<OTG_HS host channel-14 interrupt          register
        using Addr = Register::Address<0x400806b0,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcintmsk14{    ///<OTG_HS host channel-14 interrupt mask          register
        using Addr = Register::Address<0x400806b4,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHctsiz14{    ///<OTG_HS host channel-14 transfer size          register
        using Addr = Register::Address<0x400806b8,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg2HsHostOtgHsHcdma14{    ///<OTG_HS host channel-14 DMA address          register
        using Addr = Register::Address<0x400806bc,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace Otg2HsHostOtgHsHcchar15{    ///<OTG_HS host channel-15 characteristics          register
        using Addr = Register::Address<0x400806c0,0x00010000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcsplt15{    ///<OTG_HS host channel-15 split control          register
        using Addr = Register::Address<0x400806c4,0x7ffe0000,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcint15{    ///<OTG_HS host channel-15 interrupt          register
        using Addr = Register::Address<0x400806c8,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHcintmsk15{    ///<OTG_HS host channel-15 interrupt mask          register
        using Addr = Register::Address<0x400806cc,0xfffff800,0x00000000,std::uint32_t>;
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
    namespace Otg2HsHostOtgHsHctsiz15{    ///<OTG_HS host channel-15 transfer size          register
        using Addr = Register::Address<0x400806d0,0x80000000,0x00000000,std::uint32_t>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace Otg2HsHostOtgHsHcdma15{    ///<OTG_HS host channel-15 DMA address          register
        using Addr = Register::Address<0x400806d4,0x00000000,0x00000000,std::uint32_t>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
}
