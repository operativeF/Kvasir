#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//RNG
    namespace RngRngCr{    ///<RNG control register
        using Addr = Register::Address<0x48021800,0xffffffd3,0x00000000,std::uint32_t>;
        ///Random number generator              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rngen{}; 
        ///Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ie{}; 
        ///Clock error detection Note: The clock              error detection can be used only when ck_rc48 or              ck_pll1_q (ck_pll1_q = 48MHz) source is selected              otherwise, CED bit must be equal to 1. The clock              error detection cannot be enabled nor disabled on the              fly when RNG peripheral is enabled, to enable or              disable CED the RNG must be disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ced{}; 
    }
    namespace RngRngSr{    ///<RNG status register
        using Addr = Register::Address<0x48021804,0xffffff98,0x00000000,std::uint32_t>;
        ///Data ready Note: If IE=1 in RNG_CR, an              interrupt is generated when DRDY=1. It can rise when              the peripheral is disabled. When the output buffer              becomes empty (after reading RNG_DR), this bit              returns to 0 until a new random value is              generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drdy{}; 
        ///Clock error current status Note: This              bit is meaningless if CED (Clock error detection) bit              in RNG_CR is equal to 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cecs{}; 
        ///Seed error current status ** More than              64 consecutive bits at the same value (0 or 1) **              More than 32 consecutive alternances of 0 and 1              (0101010101...01)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> secs{}; 
        ///Clock error interrupt status This bit is              set at the same time as CECS. It is cleared by              writing it to 0. An interrupt is pending if IE = 1 in              the RNG_CR register. Note: This bit is meaningless if              CED (Clock error detection) bit in RNG_CR is equal to              1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ceis{}; 
        ///Seed error interrupt status This bit is              set at the same time as SECS. It is cleared by              writing it to 0. ** More than 64 consecutive bits at              the same value (0 or 1) ** More than 32 consecutive              alternances of 0 and 1 (0101010101...01) An interrupt              is pending if IE = 1 in the RNG_CR              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> seis{}; 
    }
    namespace RngRngDr{    ///<The RNG_DR register is a read-only register          that delivers a 32-bit random value when read. The          content of this register is valid when DRDY= 1, even if          RNGEN=0.
        using Addr = Register::Address<0x48021808,0x00000000,0x00000000,std::uint32_t>;
        ///Random data 32-bit random data which are              valid when DRDY=1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rndata{}; 
    }
}
