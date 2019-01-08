#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Ethernet: Precision time protocol
    namespace EthernetPtpPtptscr{    ///<Ethernet PTP time stamp control register          (ETH_PTPTSCR)
        using Addr = Register::Address<0x40028700,0xffffffc0,0x00000000,std::uint32_t>;
        ///Time stamp enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tse{}; 
        ///Time stamp fine or coarse              update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tsfcu{}; 
        ///Time stamp system time              initialize
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tssti{}; 
        ///Time stamp system time              update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsstu{}; 
        ///Time stamp interrupt trigger              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tsite{}; 
        ///Time stamp addend register              update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tsaru{}; 
    }
    namespace EthernetPtpPtpssir{    ///<Ethernet PTP subsecond increment          register
        using Addr = Register::Address<0x40028704,0xffffff00,0x00000000,std::uint32_t>;
        ///System time subsecond              increment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> stssi{}; 
    }
    namespace EthernetPtpPtptshr{    ///<Ethernet PTP time stamp high          register
        using Addr = Register::Address<0x40028708,0x00000000,0x00000000,std::uint32_t>;
        ///System time second
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sts{}; 
    }
    namespace EthernetPtpPtptslr{    ///<Ethernet PTP time stamp low register          (ETH_PTPTSLR)
        using Addr = Register::Address<0x4002870c,0x00000000,0x00000000,std::uint32_t>;
        ///System time subseconds
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> stss{}; 
        ///System time positive or negative              sign
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stpns{}; 
    }
    namespace EthernetPtpPtptshur{    ///<Ethernet PTP time stamp high update          register
        using Addr = Register::Address<0x40028710,0x00000000,0x00000000,std::uint32_t>;
        ///Time stamp update second
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsus{}; 
    }
    namespace EthernetPtpPtptslur{    ///<Ethernet PTP time stamp low update register          (ETH_PTPTSLUR)
        using Addr = Register::Address<0x40028714,0x00000000,0x00000000,std::uint32_t>;
        ///Time stamp update              subseconds
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> tsuss{}; 
        ///Time stamp update positive or negative              sign
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tsupns{}; 
    }
    namespace EthernetPtpPtptsar{    ///<Ethernet PTP time stamp addend          register
        using Addr = Register::Address<0x40028718,0x00000000,0x00000000,std::uint32_t>;
        ///Time stamp addend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsa{}; 
    }
    namespace EthernetPtpPtptthr{    ///<Ethernet PTP target time high          register
        using Addr = Register::Address<0x4002871c,0x00000000,0x00000000,std::uint32_t>;
        ///Target time stamp high
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ttsh{}; 
    }
    namespace EthernetPtpPtpttlr{    ///<Ethernet PTP target time low          register
        using Addr = Register::Address<0x40028720,0x00000000,0x00000000,std::uint32_t>;
        ///Target time stamp low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ttsl{}; 
    }
}
