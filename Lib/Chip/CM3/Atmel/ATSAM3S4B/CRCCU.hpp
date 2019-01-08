#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Cyclic Redundancy Check Calculation Unit
    namespace CrccuDscr{    ///<CRCCU Descriptor Base Register
        using Addr = Register::Address<0x40044000,0x000001ff,0x00000000,std::uint32_t>;
        ///Descriptor Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace CrccuDmaEn{    ///<CRCCU DMA Enable Register
        using Addr = Register::Address<0x40044008,0xfffffffe,0x00000000,std::uint32_t>;
        ///DMA Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmaen{}; 
    }
    namespace CrccuDmaDis{    ///<CRCCU DMA Disable Register
        using Addr = Register::Address<0x4004400c,0xfffffffe,0x00000000,std::uint32_t>;
        ///DMA Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmadis{}; 
    }
    namespace CrccuDmaSr{    ///<CRCCU DMA Status Register
        using Addr = Register::Address<0x40044010,0xfffffffe,0x00000000,std::uint32_t>;
        ///DMA Status Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmasr{}; 
    }
    namespace CrccuDmaIer{    ///<CRCCU DMA Interrupt Enable Register
        using Addr = Register::Address<0x40044014,0xfffffffe,0x00000000,std::uint32_t>;
        ///Interrupt Enable register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmaier{}; 
    }
    namespace CrccuDmaIdr{    ///<CRCCU DMA Interrupt Disable Register
        using Addr = Register::Address<0x40044018,0xfffffffe,0x00000000,std::uint32_t>;
        ///Interrupt Disable register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmaidr{}; 
    }
    namespace CrccuDmaImr{    ///<CRCCU DMA Interrupt Mask Register
        using Addr = Register::Address<0x4004401c,0xfffffffe,0x00000000,std::uint32_t>;
        ///Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmaimr{}; 
    }
    namespace CrccuDmaIsr{    ///<CRCCU DMA Interrupt Status Register
        using Addr = Register::Address<0x40044020,0xfffffffe,0x00000000,std::uint32_t>;
        ///Interrupt Status register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmaisr{}; 
    }
    namespace CrccuCr{    ///<CRCCU Control Register
        using Addr = Register::Address<0x40044034,0xfffffffe,0x00000000,std::uint32_t>;
        ///CRC Computation Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reset{}; 
    }
    namespace CrccuMr{    ///<CRCCU Mode Register
        using Addr = Register::Address<0x40044038,0xffffff00,0x00000000,std::uint32_t>;
        ///CRC Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        ///CRC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> compare{}; 
        ///Primitive Polynomial
        enum class PtypeVal {
            ccitt8023=0x00000000,     ///<Polynom 0x04C11DB7
            castagnoli=0x00000001,     ///<Polynom 0x1EDC6F41
            ccitt16=0x00000002,     ///<Polynom 0x1021
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,PtypeVal> ptype{}; 
        namespace PtypeValC{
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::ccitt8023> ccitt8023{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::castagnoli> castagnoli{};
            constexpr Register::FieldValue<decltype(ptype)::Type,PtypeVal::ccitt16> ccitt16{};
        }
        ///Request Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> divider{}; 
    }
    namespace CrccuSr{    ///<CRCCU Status Register
        using Addr = Register::Address<0x4004403c,0x00000000,0x00000000,std::uint32_t>;
        ///Cyclic Redundancy Check Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crc{}; 
    }
    namespace CrccuIer{    ///<CRCCU Interrupt Enable Register
        using Addr = Register::Address<0x40044040,0xfffffffe,0x00000000,std::uint32_t>;
        ///CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errier{}; 
    }
    namespace CrccuIdr{    ///<CRCCU Interrupt Disable Register
        using Addr = Register::Address<0x40044044,0xfffffffe,0x00000000,std::uint32_t>;
        ///CRC Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> erridr{}; 
    }
    namespace CrccuImr{    ///<CRCCU Interrupt Mask Register
        using Addr = Register::Address<0x40044048,0xfffffffe,0x00000000,std::uint32_t>;
        ///CRC Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errimr{}; 
    }
    namespace CrccuIsr{    ///<CRCCU Interrupt Status Register
        using Addr = Register::Address<0x4004404c,0xfffffffe,0x00000000,std::uint32_t>;
        ///CRC Error Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errisr{}; 
    }
}
