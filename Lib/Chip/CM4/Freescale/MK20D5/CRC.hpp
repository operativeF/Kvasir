#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Cyclic Redundancy Check
    namespace CrcCrc{    ///<CRC Data Register
        using Addr = Register::Address<0x40032000,0x00000000,0x00000000,std::uint32_t>;
        ///CRC Low Lower Byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///CRC Low Upper Byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lu{}; 
        ///CRC High Lower Byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///CRC High Upper Byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hu{}; 
    }
    namespace CrcCrcl{    ///<CRC_CRCL register.
        using Addr = Register::Address<0x40032000,0xffff0000,0x00000000,std::uint16_t>;
        ///CRCL stores the lower 16 bits of the 16/32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> crcl{}; 
    }
    namespace CrcCrcll{    ///<CRC_CRCLL register.
        using Addr = Register::Address<0x40032000,0xffffff00,0x00000000,std::uint8_t>;
        ///CRCLL stores the first 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> crcll{}; 
    }
    namespace CrcCrclu{    ///<CRC_CRCLU register.
        using Addr = Register::Address<0x40032001,0xffffff00,0x00000000,std::uint8_t>;
        ///CRCLL stores the second 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> crclu{}; 
    }
    namespace CrcCrch{    ///<CRC_CRCH register.
        using Addr = Register::Address<0x40032002,0xffff0000,0x00000000,std::uint16_t>;
        ///CRCH stores the high 16 bits of the 16/32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> crch{}; 
    }
    namespace CrcCrchl{    ///<CRC_CRCHL register.
        using Addr = Register::Address<0x40032002,0xffffff00,0x00000000,std::uint8_t>;
        ///CRCHL stores the third 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> crchl{}; 
    }
    namespace CrcCrchu{    ///<CRC_CRCHU register.
        using Addr = Register::Address<0x40032003,0xffffff00,0x00000000,std::uint8_t>;
        ///CRCHU stores the fourth 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> crchu{}; 
    }
    namespace CrcGpoly{    ///<CRC Polynomial Register
        using Addr = Register::Address<0x40032004,0x00000000,0x00000000,std::uint32_t>;
        ///Low polynominal half-word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> low{}; 
        ///High polynominal half-word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> high{}; 
    }
    namespace CrcGpolyl{    ///<CRC_GPOLYL register.
        using Addr = Register::Address<0x40032004,0xffff0000,0x00000000,std::uint16_t>;
        ///POLYL stores the lower 16 bits of the 16/32 bit CRC polynomial value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpolyl{}; 
    }
    namespace CrcGpolyll{    ///<CRC_GPOLYLL register.
        using Addr = Register::Address<0x40032004,0xffffff00,0x00000000,std::uint8_t>;
        ///POLYLL stores the first 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpolyll{}; 
    }
    namespace CrcGpolylu{    ///<CRC_GPOLYLU register.
        using Addr = Register::Address<0x40032005,0xffffff00,0x00000000,std::uint8_t>;
        ///POLYLL stores the second 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpolylu{}; 
    }
    namespace CrcGpolyh{    ///<CRC_GPOLYH register.
        using Addr = Register::Address<0x40032006,0xffff0000,0x00000000,std::uint16_t>;
        ///POLYH stores the high 16 bits of the 16/32 bit CRC polynomial value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpolyh{}; 
    }
    namespace CrcGpolyhl{    ///<CRC_GPOLYHL register.
        using Addr = Register::Address<0x40032006,0xffffff00,0x00000000,std::uint8_t>;
        ///POLYHL stores the third 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpolyhl{}; 
    }
    namespace CrcGpolyhu{    ///<CRC_GPOLYHU register.
        using Addr = Register::Address<0x40032007,0xffffff00,0x00000000,std::uint8_t>;
        ///POLYHU stores the fourth 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpolyhu{}; 
    }
    namespace CrcCtrl{    ///<CRC Control Register
        using Addr = Register::Address<0x40032008,0x08ffffff,0x00000000,std::uint32_t>;
        ///Width of CRC protocol.
        enum class TcrcVal {
            v0=0x00000000,     ///<16-bit CRC protocol.
            v1=0x00000001,     ///<32-bit CRC protocol.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,TcrcVal> tcrc{}; 
        namespace TcrcValC{
            constexpr Register::FieldValue<decltype(tcrc)::Type,TcrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcrc)::Type,TcrcVal::v1> v1{};
        }
        ///Write CRC data register as seed
        enum class WasVal {
            v0=0x00000000,     ///<Writes to the CRC data register are data values.
            v1=0x00000001,     ///<Writes to the CRC data register are seed values.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,WasVal> was{}; 
        namespace WasValC{
            constexpr Register::FieldValue<decltype(was)::Type,WasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(was)::Type,WasVal::v1> v1{};
        }
        ///Complement Read of CRC data register
        enum class FxorVal {
            v0=0x00000000,     ///<No XOR on reading.
            v1=0x00000001,     ///<Invert or complement the read value of the CRC data register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,FxorVal> fxor{}; 
        namespace FxorValC{
            constexpr Register::FieldValue<decltype(fxor)::Type,FxorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fxor)::Type,FxorVal::v1> v1{};
        }
        ///Type of Transpose for Read
        enum class TotrVal {
            v00=0x00000000,     ///<No transposition.
            v01=0x00000001,     ///<Bits in bytes are transposed; bytes are not transposed.
            v10=0x00000002,     ///<Both bits in bytes and bytes are transposed.
            v11=0x00000003,     ///<Only bytes are transposed; no bits in a byte are transposed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,TotrVal> totr{}; 
        namespace TotrValC{
            constexpr Register::FieldValue<decltype(totr)::Type,TotrVal::v00> v00{};
            constexpr Register::FieldValue<decltype(totr)::Type,TotrVal::v01> v01{};
            constexpr Register::FieldValue<decltype(totr)::Type,TotrVal::v10> v10{};
            constexpr Register::FieldValue<decltype(totr)::Type,TotrVal::v11> v11{};
        }
        ///Type of Transpose for Writes
        enum class TotVal {
            v00=0x00000000,     ///<No transposition.
            v01=0x00000001,     ///<Bits in bytes are transposed; bytes are not transposed.
            v10=0x00000002,     ///<Both bits in bytes and bytes are transposed.
            v11=0x00000003,     ///<Only bytes are transposed; no bits in a byte are transposed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,TotVal> tot{}; 
        namespace TotValC{
            constexpr Register::FieldValue<decltype(tot)::Type,TotVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tot)::Type,TotVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tot)::Type,TotVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tot)::Type,TotVal::v11> v11{};
        }
    }
    namespace CrcCtrlhu{    ///<CRC_CTRLHU register.
        using Addr = Register::Address<0x4003200b,0xffffff08,0x00000000,std::uint8_t>;
        ///no description available
        enum class TcrcVal {
            v0=0x00000000,     ///<16-bit CRC protocol.
            v1=0x00000001,     ///<32-bit CRC protocol.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TcrcVal> tcrc{}; 
        namespace TcrcValC{
            constexpr Register::FieldValue<decltype(tcrc)::Type,TcrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcrc)::Type,TcrcVal::v1> v1{};
        }
        ///no description available
        enum class WasVal {
            v0=0x00000000,     ///<Writes to CRC data register are data values.
            v1=0x00000001,     ///<Writes to CRC data reguster are seed values.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WasVal> was{}; 
        namespace WasValC{
            constexpr Register::FieldValue<decltype(was)::Type,WasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(was)::Type,WasVal::v1> v1{};
        }
        ///no description available
        enum class FxorVal {
            v0=0x00000000,     ///<No XOR on reading.
            v1=0x00000001,     ///<Invert or complement the read value of CRC data register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FxorVal> fxor{}; 
        namespace FxorValC{
            constexpr Register::FieldValue<decltype(fxor)::Type,FxorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fxor)::Type,FxorVal::v1> v1{};
        }
        ///no description available
        enum class TotrVal {
            v00=0x00000000,     ///<No Transposition.
            v01=0x00000001,     ///<Bits in bytes are transposed, bytes are not transposed.
            v10=0x00000002,     ///<Both bits in bytes and bytes are transposed.
            v11=0x00000003,     ///<Only bytes are transposed; no bits in a byte are transposed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,TotrVal> totr{}; 
        namespace TotrValC{
            constexpr Register::FieldValue<decltype(totr)::Type,TotrVal::v00> v00{};
            constexpr Register::FieldValue<decltype(totr)::Type,TotrVal::v01> v01{};
            constexpr Register::FieldValue<decltype(totr)::Type,TotrVal::v10> v10{};
            constexpr Register::FieldValue<decltype(totr)::Type,TotrVal::v11> v11{};
        }
        ///no description available
        enum class TotVal {
            v00=0x00000000,     ///<No Transposition.
            v01=0x00000001,     ///<Bits in bytes are transposed, bytes are not transposed.
            v10=0x00000002,     ///<Both bits in bytes and bytes are transposed.
            v11=0x00000003,     ///<Only bytes are transposed; no bits in a byte are transposed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,TotVal> tot{}; 
        namespace TotValC{
            constexpr Register::FieldValue<decltype(tot)::Type,TotVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tot)::Type,TotVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tot)::Type,TotVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tot)::Type,TotVal::v11> v11{};
        }
    }
}
