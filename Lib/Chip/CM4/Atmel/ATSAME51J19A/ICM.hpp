#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Integrity Check Monitor
    namespace IcmCfg{    ///<Configuration
        using Addr = Register::Address<0x42002c00,0xc0c00c08,0x00000000,std::uint32_t>;
        ///Write Back Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wbdis{}; 
        ///End of Monitoring Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eomdis{}; 
        ///Secondary List Branching Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> slbdis{}; 
        ///Bus Burden Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> bbc{}; 
        ///Automatic Switch To Compare Digest
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ascd{}; 
        ///Dual Input Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dualbuff{}; 
        ///User Initial Hash Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> uihash{}; 
        ///User SHA Algorithm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> ualgo{}; 
        ///Region Hash Area Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> haprot{}; 
        ///Region Descriptor Area Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> daprot{}; 
    }
    namespace IcmCtrl{    ///<Control
        using Addr = Register::Address<0x42002c04,0xffff0008,0x00000000,std::uint32_t>;
        ///ICM Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        ///ICM Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disable{}; 
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Recompute Internal Hash
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rehash{}; 
        ///Region Monitoring Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rmdis{}; 
        ///Region Monitoring Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> rmen{}; 
    }
    namespace IcmSr{    ///<Status
        using Addr = Register::Address<0x42002c08,0xffff00fe,0x00000000,std::uint32_t>;
        ///ICM Controller Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        ///RAW Region Monitoring Disabled Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rawrmdis{}; 
        ///Region Monitoring Disabled Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> rmdis{}; 
    }
    namespace IcmIer{    ///<Interrupt Enable
        using Addr = Register::Address<0x42002c10,0xfe000000,0x00000000,std::uint32_t>;
        ///Region Hash Completed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rhc{}; 
        ///Region Digest Mismatch Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rdm{}; 
        ///Region Bus Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rbe{}; 
        ///Region Wrap Condition detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> rwc{}; 
        ///Region End bit Condition Detected Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> rec{}; 
        ///Region Status Updated Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> rsu{}; 
        ///Undefined Register Access Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> urad{}; 
    }
    namespace IcmIdr{    ///<Interrupt Disable
        using Addr = Register::Address<0x42002c14,0xfe000000,0x00000000,std::uint32_t>;
        ///Region Hash Completed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rhc{}; 
        ///Region Digest Mismatch Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rdm{}; 
        ///Region Bus Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rbe{}; 
        ///Region Wrap Condition Detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> rwc{}; 
        ///Region End bit Condition detected Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> rec{}; 
        ///Region Status Updated Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> rsu{}; 
        ///Undefined Register Access Detection Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> urad{}; 
    }
    namespace IcmImr{    ///<Interrupt Mask
        using Addr = Register::Address<0x42002c18,0xfe000000,0x00000000,std::uint32_t>;
        ///Region Hash Completed Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rhc{}; 
        ///Region Digest Mismatch Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rdm{}; 
        ///Region Bus Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rbe{}; 
        ///Region Wrap Condition Detected Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> rwc{}; 
        ///Region End bit Condition Detected Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> rec{}; 
        ///Region Status Updated Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> rsu{}; 
        ///Undefined Register Access Detection Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> urad{}; 
    }
    namespace IcmIsr{    ///<Interrupt Status
        using Addr = Register::Address<0x42002c1c,0xfe000000,0x00000000,std::uint32_t>;
        ///Region Hash Completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rhc{}; 
        ///Region Digest Mismatch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rdm{}; 
        ///Region Bus Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rbe{}; 
        ///Region Wrap Condition Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> rwc{}; 
        ///Region End bit Condition Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> rec{}; 
        ///Region Status Updated Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> rsu{}; 
        ///Undefined Register Access Detection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> urad{}; 
    }
    namespace IcmUasr{    ///<Undefined Access Status
        using Addr = Register::Address<0x42002c20,0xfffffff8,0x00000000,std::uint32_t>;
        ///Undefined Register Access Trace
        enum class UratVal {
            unspecStructMember=0x00000000,     ///<Unspecified structure member set to one detected when the descriptor is loaded
            cfgModified=0x00000001,     ///<CFG modified during active monitoring
            dscrModified=0x00000002,     ///<DSCR modified during active monitoring
            hashModified=0x00000003,     ///<HASH modified during active monitoring
            readAccess=0x00000004,     ///<Write-only register read access
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,UratVal> urat{}; 
        namespace UratValC{
            constexpr Register::FieldValue<decltype(urat)::Type,UratVal::unspecStructMember> unspecStructMember{};
            constexpr Register::FieldValue<decltype(urat)::Type,UratVal::cfgModified> cfgModified{};
            constexpr Register::FieldValue<decltype(urat)::Type,UratVal::dscrModified> dscrModified{};
            constexpr Register::FieldValue<decltype(urat)::Type,UratVal::hashModified> hashModified{};
            constexpr Register::FieldValue<decltype(urat)::Type,UratVal::readAccess> readAccess{};
        }
    }
    namespace IcmDscr{    ///<Region Descriptor Area Start Address
        using Addr = Register::Address<0x42002c30,0x0000003f,0x00000000,std::uint32_t>;
        ///Descriptor Area Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> dasa{}; 
    }
    namespace IcmHash{    ///<Region Hash Area Start Address
        using Addr = Register::Address<0x42002c34,0x0000007f,0x00000000,std::uint32_t>;
        ///Hash Area Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> hasa{}; 
    }
    namespace IcmUihval0{    ///<User Initial Hash Value n
        using Addr = Register::Address<0x42002c38,0x00000000,0x00000000,std::uint32_t>;
        ///Initial Hash Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace IcmUihval1{    ///<User Initial Hash Value n
        using Addr = Register::Address<0x42002c3c,0x00000000,0x00000000,std::uint32_t>;
        ///Initial Hash Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace IcmUihval2{    ///<User Initial Hash Value n
        using Addr = Register::Address<0x42002c40,0x00000000,0x00000000,std::uint32_t>;
        ///Initial Hash Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace IcmUihval3{    ///<User Initial Hash Value n
        using Addr = Register::Address<0x42002c44,0x00000000,0x00000000,std::uint32_t>;
        ///Initial Hash Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace IcmUihval4{    ///<User Initial Hash Value n
        using Addr = Register::Address<0x42002c48,0x00000000,0x00000000,std::uint32_t>;
        ///Initial Hash Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace IcmUihval5{    ///<User Initial Hash Value n
        using Addr = Register::Address<0x42002c4c,0x00000000,0x00000000,std::uint32_t>;
        ///Initial Hash Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace IcmUihval6{    ///<User Initial Hash Value n
        using Addr = Register::Address<0x42002c50,0x00000000,0x00000000,std::uint32_t>;
        ///Initial Hash Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace IcmUihval7{    ///<User Initial Hash Value n
        using Addr = Register::Address<0x42002c54,0x00000000,0x00000000,std::uint32_t>;
        ///Initial Hash Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
}
