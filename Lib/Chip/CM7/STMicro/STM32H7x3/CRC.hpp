#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Cryptographic processor
    namespace CrcDr{    ///<Data register
        using Addr = Register::Address<0x58024c00,0x00000000,0x00000000,std::uint32_t>;
        ///Data Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dr{}; 
    }
    namespace CrcIdr{    ///<Independent Data register
        using Addr = Register::Address<0x58024c04,0x00000000,0x00000000,std::uint32_t>;
        ///Independent Data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idr{}; 
    }
    namespace CrcCr{    ///<Control register
        using Addr = Register::Address<0x58024c08,0xffffff06,0x00000000,std::uint32_t>;
        ///RESET bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reset{}; 
        ///Polynomial size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> polysize{}; 
        ///Reverse input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> revIn{}; 
        ///Reverse output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> revOut{}; 
    }
    namespace CrcInit{    ///<Initial CRC value
        using Addr = Register::Address<0x58024c0c,0x00000000,0x00000000,std::uint32_t>;
        ///Programmable initial CRC              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcInit{}; 
    }
    namespace CrcPol{    ///<CRC polynomial
        using Addr = Register::Address<0x58024c10,0x00000000,0x00000000,std::uint32_t>;
        ///Programmable polynomial
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pol{}; 
    }
}
