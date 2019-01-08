#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Flash Memory Controller
    namespace FmcPfapr{    ///<Flash Access Protection Register
        using Addr = Register::Address<0x4001f000,0x00000000,0x00000000,std::uint32_t>;
        ///Master 0 Access Protection
        enum class M0apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,M0apVal> m0ap{}; 
        namespace M0apValC{
            constexpr Register::FieldValue<decltype(m0ap)::Type,M0apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m0ap)::Type,M0apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m0ap)::Type,M0apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m0ap)::Type,M0apVal::v11> v11{};
        }
        ///Master 1 Access Protection
        enum class M1apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,M1apVal> m1ap{}; 
        namespace M1apValC{
            constexpr Register::FieldValue<decltype(m1ap)::Type,M1apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m1ap)::Type,M1apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m1ap)::Type,M1apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m1ap)::Type,M1apVal::v11> v11{};
        }
        ///Master 2 Access Protection
        enum class M2apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,M2apVal> m2ap{}; 
        namespace M2apValC{
            constexpr Register::FieldValue<decltype(m2ap)::Type,M2apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m2ap)::Type,M2apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m2ap)::Type,M2apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m2ap)::Type,M2apVal::v11> v11{};
        }
        ///Master 3 Access Protection
        enum class M3apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,M3apVal> m3ap{}; 
        namespace M3apValC{
            constexpr Register::FieldValue<decltype(m3ap)::Type,M3apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3ap)::Type,M3apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3ap)::Type,M3apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3ap)::Type,M3apVal::v11> v11{};
        }
        ///Master 4 Access Protection
        enum class M4apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,M4apVal> m4ap{}; 
        namespace M4apValC{
            constexpr Register::FieldValue<decltype(m4ap)::Type,M4apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m4ap)::Type,M4apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m4ap)::Type,M4apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m4ap)::Type,M4apVal::v11> v11{};
        }
        ///Master 5 Access Protection
        enum class M5apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,M5apVal> m5ap{}; 
        namespace M5apValC{
            constexpr Register::FieldValue<decltype(m5ap)::Type,M5apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m5ap)::Type,M5apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m5ap)::Type,M5apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m5ap)::Type,M5apVal::v11> v11{};
        }
        ///Master 6 Access Protection
        enum class M6apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,M6apVal> m6ap{}; 
        namespace M6apValC{
            constexpr Register::FieldValue<decltype(m6ap)::Type,M6apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m6ap)::Type,M6apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m6ap)::Type,M6apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m6ap)::Type,M6apVal::v11> v11{};
        }
        ///Master 7 Access Protection
        enum class M7apVal {
            v00=0x00000000,     ///<No access may be performed by this master.
            v01=0x00000001,     ///<Only read accesses may be performed by this master.
            v10=0x00000002,     ///<Only write accesses may be performed by this master.
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,M7apVal> m7ap{}; 
        namespace M7apValC{
            constexpr Register::FieldValue<decltype(m7ap)::Type,M7apVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m7ap)::Type,M7apVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m7ap)::Type,M7apVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m7ap)::Type,M7apVal::v11> v11{};
        }
        ///Master 0 Prefetch Disable
        enum class M0pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,M0pfdVal> m0pfd{}; 
        namespace M0pfdValC{
            constexpr Register::FieldValue<decltype(m0pfd)::Type,M0pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m0pfd)::Type,M0pfdVal::v1> v1{};
        }
        ///Master 1 Prefetch Disable
        enum class M1pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,M1pfdVal> m1pfd{}; 
        namespace M1pfdValC{
            constexpr Register::FieldValue<decltype(m1pfd)::Type,M1pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m1pfd)::Type,M1pfdVal::v1> v1{};
        }
        ///Master 2 Prefetch Disable
        enum class M2pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,M2pfdVal> m2pfd{}; 
        namespace M2pfdValC{
            constexpr Register::FieldValue<decltype(m2pfd)::Type,M2pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m2pfd)::Type,M2pfdVal::v1> v1{};
        }
        ///Master 3 Prefetch Disable
        enum class M3pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,M3pfdVal> m3pfd{}; 
        namespace M3pfdValC{
            constexpr Register::FieldValue<decltype(m3pfd)::Type,M3pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pfd)::Type,M3pfdVal::v1> v1{};
        }
        ///Master 4 Prefetch Disable
        enum class M4pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,M4pfdVal> m4pfd{}; 
        namespace M4pfdValC{
            constexpr Register::FieldValue<decltype(m4pfd)::Type,M4pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4pfd)::Type,M4pfdVal::v1> v1{};
        }
        ///Master 5 Prefetch Disable
        enum class M5pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,M5pfdVal> m5pfd{}; 
        namespace M5pfdValC{
            constexpr Register::FieldValue<decltype(m5pfd)::Type,M5pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5pfd)::Type,M5pfdVal::v1> v1{};
        }
        ///Master 6 Prefetch Disable
        enum class M6pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,M6pfdVal> m6pfd{}; 
        namespace M6pfdValC{
            constexpr Register::FieldValue<decltype(m6pfd)::Type,M6pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6pfd)::Type,M6pfdVal::v1> v1{};
        }
        ///Master 7 Prefetch Disable
        enum class M7pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M7pfdVal> m7pfd{}; 
        namespace M7pfdValC{
            constexpr Register::FieldValue<decltype(m7pfd)::Type,M7pfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7pfd)::Type,M7pfdVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace FmcPfb0cr{    ///<Flash Bank 0 Control Register
        using Addr = Register::Address<0x4001f004,0x00000000,0x00000000,std::uint32_t>;
        ///Bank 0 Single Entry Buffer Enable
        enum class B0sebeVal {
            v0=0x00000000,     ///<Single entry buffer is disabled.
            v1=0x00000001,     ///<Single entry buffer is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,B0sebeVal> b0sebe{}; 
        namespace B0sebeValC{
            constexpr Register::FieldValue<decltype(b0sebe)::Type,B0sebeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b0sebe)::Type,B0sebeVal::v1> v1{};
        }
        ///Bank 0 Instruction Prefetch Enable
        enum class B0ipeVal {
            v0=0x00000000,     ///<Do not prefetch in response to instruction fetches.
            v1=0x00000001,     ///<Enable prefetches in response to instruction fetches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,B0ipeVal> b0ipe{}; 
        namespace B0ipeValC{
            constexpr Register::FieldValue<decltype(b0ipe)::Type,B0ipeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b0ipe)::Type,B0ipeVal::v1> v1{};
        }
        ///Bank 0 Data Prefetch Enable
        enum class B0dpeVal {
            v0=0x00000000,     ///<Do not prefetch in response to data references.
            v1=0x00000001,     ///<Enable prefetches in response to data references.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,B0dpeVal> b0dpe{}; 
        namespace B0dpeValC{
            constexpr Register::FieldValue<decltype(b0dpe)::Type,B0dpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b0dpe)::Type,B0dpeVal::v1> v1{};
        }
        ///Bank 0 Instruction Cache Enable
        enum class B0iceVal {
            v0=0x00000000,     ///<Do not cache instruction fetches.
            v1=0x00000001,     ///<Cache instruction fetches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,B0iceVal> b0ice{}; 
        namespace B0iceValC{
            constexpr Register::FieldValue<decltype(b0ice)::Type,B0iceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b0ice)::Type,B0iceVal::v1> v1{};
        }
        ///Bank 0 Data Cache Enable
        enum class B0dceVal {
            v0=0x00000000,     ///<Do not cache data references.
            v1=0x00000001,     ///<Cache data references.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,B0dceVal> b0dce{}; 
        namespace B0dceValC{
            constexpr Register::FieldValue<decltype(b0dce)::Type,B0dceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b0dce)::Type,B0dceVal::v1> v1{};
        }
        ///Cache Replacement Control
        enum class CrcVal {
            v000=0x00000000,     ///<LRU replacement algorithm per set across all four ways
            v001=0x00000001,     ///<Reserved
            v010=0x00000002,     ///<Independent LRU with ways [0-1] for ifetches, [2-3] for data
            v011=0x00000003,     ///<Independent LRU with ways [0-2] for ifetches, [3] for data
            v1xx=0x00000004,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,CrcVal> crc{}; 
        namespace CrcValC{
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v000> v000{};
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v001> v001{};
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v010> v010{};
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v011> v011{};
            constexpr Register::FieldValue<decltype(crc)::Type,CrcVal::v1xx> v1xx{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Bank 0 Memory Width
        enum class B0mwVal {
            v00=0x00000000,     ///<32 bits
            v01=0x00000001,     ///<64 bits
            v10=0x00000002,     ///<Reserved
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,B0mwVal> b0mw{}; 
        namespace B0mwValC{
            constexpr Register::FieldValue<decltype(b0mw)::Type,B0mwVal::v00> v00{};
            constexpr Register::FieldValue<decltype(b0mw)::Type,B0mwVal::v01> v01{};
            constexpr Register::FieldValue<decltype(b0mw)::Type,B0mwVal::v10> v10{};
            constexpr Register::FieldValue<decltype(b0mw)::Type,B0mwVal::v11> v11{};
        }
        ///Invalidate Prefetch Speculation Buffer
        enum class SbinvVal {
            v0=0x00000000,     ///<Speculation buffer and single entry buffer are not affected.
            v1=0x00000001,     ///<Invalidate (clear) speculation buffer and single entry buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SbinvVal> sBInv{}; 
        namespace SbinvValC{
            constexpr Register::FieldValue<decltype(sBInv)::Type,SbinvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sBInv)::Type,SbinvVal::v1> v1{};
        }
        ///Cache Invalidate Way x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cinvWay{}; 
        ///Cache Lock Way x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> clckWay{}; 
        ///Bank 0 Read Wait State Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> b0rwsc{}; 
    }
    namespace FmcPfb1cr{    ///<Flash Bank 1 Control Register
        using Addr = Register::Address<0x4001f008,0x00000000,0x00000000,std::uint32_t>;
        ///Bank 1 Single Entry Buffer Enable
        enum class B1sebeVal {
            v0=0x00000000,     ///<Single entry buffer is disabled.
            v1=0x00000001,     ///<Single entry buffer is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,B1sebeVal> b1sebe{}; 
        namespace B1sebeValC{
            constexpr Register::FieldValue<decltype(b1sebe)::Type,B1sebeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b1sebe)::Type,B1sebeVal::v1> v1{};
        }
        ///Bank 1 Instruction Prefetch Enable
        enum class B1ipeVal {
            v0=0x00000000,     ///<Do not prefetch in response to instruction fetches.
            v1=0x00000001,     ///<Enable prefetches in response to instruction fetches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,B1ipeVal> b1ipe{}; 
        namespace B1ipeValC{
            constexpr Register::FieldValue<decltype(b1ipe)::Type,B1ipeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b1ipe)::Type,B1ipeVal::v1> v1{};
        }
        ///Bank 1 Data Prefetch Enable
        enum class B1dpeVal {
            v0=0x00000000,     ///<Do not prefetch in response to data references.
            v1=0x00000001,     ///<Enable prefetches in response to data references.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,B1dpeVal> b1dpe{}; 
        namespace B1dpeValC{
            constexpr Register::FieldValue<decltype(b1dpe)::Type,B1dpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b1dpe)::Type,B1dpeVal::v1> v1{};
        }
        ///Bank 1 Instruction Cache Enable
        enum class B1iceVal {
            v0=0x00000000,     ///<Do not cache instruction fetches.
            v1=0x00000001,     ///<Cache instruction fetches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,B1iceVal> b1ice{}; 
        namespace B1iceValC{
            constexpr Register::FieldValue<decltype(b1ice)::Type,B1iceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b1ice)::Type,B1iceVal::v1> v1{};
        }
        ///Bank 1 Data Cache Enable
        enum class B1dceVal {
            v0=0x00000000,     ///<Do not cache data references.
            v1=0x00000001,     ///<Cache data references.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,B1dceVal> b1dce{}; 
        namespace B1dceValC{
            constexpr Register::FieldValue<decltype(b1dce)::Type,B1dceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(b1dce)::Type,B1dceVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Bank 1 Memory Width
        enum class B1mwVal {
            v00=0x00000000,     ///<32 bits
            v01=0x00000001,     ///<64 bits
            v10=0x00000002,     ///<Reserved
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,B1mwVal> b1mw{}; 
        namespace B1mwValC{
            constexpr Register::FieldValue<decltype(b1mw)::Type,B1mwVal::v00> v00{};
            constexpr Register::FieldValue<decltype(b1mw)::Type,B1mwVal::v01> v01{};
            constexpr Register::FieldValue<decltype(b1mw)::Type,B1mwVal::v10> v10{};
            constexpr Register::FieldValue<decltype(b1mw)::Type,B1mwVal::v11> v11{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Bank 1 Read Wait State Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> b1rwsc{}; 
    }
    namespace FmcTagvdw0s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f100,0x00000000,0x00000000,std::uint32_t>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///15-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,4),Register::ReadWriteAccess,unsigned> tag{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace FmcTagvdw0s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f104,0x00000000,0x00000000,std::uint32_t>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///15-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,4),Register::ReadWriteAccess,unsigned> tag{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace FmcTagvdw1s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f108,0x00000000,0x00000000,std::uint32_t>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///15-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,4),Register::ReadWriteAccess,unsigned> tag{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace FmcTagvdw1s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f10c,0x00000000,0x00000000,std::uint32_t>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///15-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,4),Register::ReadWriteAccess,unsigned> tag{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace FmcTagvdw2s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f110,0x00000000,0x00000000,std::uint32_t>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///15-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,4),Register::ReadWriteAccess,unsigned> tag{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace FmcTagvdw2s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f114,0x00000000,0x00000000,std::uint32_t>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///15-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,4),Register::ReadWriteAccess,unsigned> tag{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace FmcTagvdw3s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f118,0x00000000,0x00000000,std::uint32_t>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///15-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,4),Register::ReadWriteAccess,unsigned> tag{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace FmcTagvdw3s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f11c,0x00000000,0x00000000,std::uint32_t>;
        ///1-bit valid for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///15-bit tag for cache entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,4),Register::ReadWriteAccess,unsigned> tag{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace FmcDataw0s0u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f200,0x00000000,0x00000000,std::uint32_t>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s1u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f208,0x00000000,0x00000000,std::uint32_t>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s0l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f204,0x00000000,0x00000000,std::uint32_t>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s1l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f20c,0x00000000,0x00000000,std::uint32_t>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s0u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f210,0x00000000,0x00000000,std::uint32_t>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s1u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f218,0x00000000,0x00000000,std::uint32_t>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s0l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f214,0x00000000,0x00000000,std::uint32_t>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s1l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f21c,0x00000000,0x00000000,std::uint32_t>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s0u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f220,0x00000000,0x00000000,std::uint32_t>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s1u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f228,0x00000000,0x00000000,std::uint32_t>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s0l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f224,0x00000000,0x00000000,std::uint32_t>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s1l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f22c,0x00000000,0x00000000,std::uint32_t>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s0u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f230,0x00000000,0x00000000,std::uint32_t>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s1u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f238,0x00000000,0x00000000,std::uint32_t>;
        ///Bits [63:32] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s0l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f234,0x00000000,0x00000000,std::uint32_t>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s1l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f23c,0x00000000,0x00000000,std::uint32_t>;
        ///Bits [31:0] of data entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
}
