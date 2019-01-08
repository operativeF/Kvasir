#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Power Management Controller
    namespace PmcPmcScer{    ///<System Clock Enable Register
        using Addr = Register::Address<0xfffffc00,0xfffffcbb,0x00000000,std::uint32_t>;
        ///DDR Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ddrck{}; 
        ///USB Host OHCI Clocks Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uhp{}; 
        ///Programmable Clock 0 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pck0{}; 
        ///Programmable Clock 1 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pck1{}; 
    }
    namespace PmcPmcScdr{    ///<System Clock Disable Register
        using Addr = Register::Address<0xfffffc04,0xfffffcba,0x00000000,std::uint32_t>;
        ///Processor Clock Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pck{}; 
        ///DDR Clock Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ddrck{}; 
        ///USB Host OHCI Clock Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uhp{}; 
        ///Programmable Clock 0 Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pck0{}; 
        ///Programmable Clock 1 Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pck1{}; 
    }
    namespace PmcPmcScsr{    ///<System Clock Status Register
        using Addr = Register::Address<0xfffffc08,0xfffffcba,0x00000000,std::uint32_t>;
        ///Processor Clock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pck{}; 
        ///DDR Clock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ddrck{}; 
        ///USB Host Port Clock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uhp{}; 
        ///Programmable Clock 0 Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pck0{}; 
        ///Programmable Clock 1 Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pck1{}; 
    }
    namespace PmcPmcPcer{    ///<Peripheral Clock Enable Register
        using Addr = Register::Address<0xfffffc10,0x00000003,0x00000000,std::uint32_t>;
        ///Peripheral Clock 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid2{}; 
        ///Peripheral Clock 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid3{}; 
        ///Peripheral Clock 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid4{}; 
        ///Peripheral Clock 5 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid5{}; 
        ///Peripheral Clock 6 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid6{}; 
        ///Peripheral Clock 7 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid7{}; 
        ///Peripheral Clock 8 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid8{}; 
        ///Peripheral Clock 9 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid9{}; 
        ///Peripheral Clock 10 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid10{}; 
        ///Peripheral Clock 11 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid11{}; 
        ///Peripheral Clock 12 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid12{}; 
        ///Peripheral Clock 13 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid13{}; 
        ///Peripheral Clock 14 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid14{}; 
        ///Peripheral Clock 15 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid15{}; 
        ///Peripheral Clock 16 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid16{}; 
        ///Peripheral Clock 17 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid17{}; 
        ///Peripheral Clock 18 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid18{}; 
        ///Peripheral Clock 19 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid19{}; 
        ///Peripheral Clock 20 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid20{}; 
        ///Peripheral Clock 21 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid21{}; 
        ///Peripheral Clock 22 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid22{}; 
        ///Peripheral Clock 23 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid23{}; 
        ///Peripheral Clock 24 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid24{}; 
        ///Peripheral Clock 25 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid25{}; 
        ///Peripheral Clock 26 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid26{}; 
        ///Peripheral Clock 27 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid27{}; 
        ///Peripheral Clock 28 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid28{}; 
        ///Peripheral Clock 29 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid29{}; 
        ///Peripheral Clock 30 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid30{}; 
        ///Peripheral Clock 31 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid31{}; 
    }
    namespace PmcPmcPcdr{    ///<Peripheral Clock Disable Register
        using Addr = Register::Address<0xfffffc14,0x00000003,0x00000000,std::uint32_t>;
        ///Peripheral Clock 2 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid2{}; 
        ///Peripheral Clock 3 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid3{}; 
        ///Peripheral Clock 4 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid4{}; 
        ///Peripheral Clock 5 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid5{}; 
        ///Peripheral Clock 6 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid6{}; 
        ///Peripheral Clock 7 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid7{}; 
        ///Peripheral Clock 8 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid8{}; 
        ///Peripheral Clock 9 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid9{}; 
        ///Peripheral Clock 10 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid10{}; 
        ///Peripheral Clock 11 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid11{}; 
        ///Peripheral Clock 12 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid12{}; 
        ///Peripheral Clock 13 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid13{}; 
        ///Peripheral Clock 14 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid14{}; 
        ///Peripheral Clock 15 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid15{}; 
        ///Peripheral Clock 16 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid16{}; 
        ///Peripheral Clock 17 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid17{}; 
        ///Peripheral Clock 18 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid18{}; 
        ///Peripheral Clock 19 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid19{}; 
        ///Peripheral Clock 20 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid20{}; 
        ///Peripheral Clock 21 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid21{}; 
        ///Peripheral Clock 22 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid22{}; 
        ///Peripheral Clock 23 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid23{}; 
        ///Peripheral Clock 24 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid24{}; 
        ///Peripheral Clock 25 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid25{}; 
        ///Peripheral Clock 26 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid26{}; 
        ///Peripheral Clock 27 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid27{}; 
        ///Peripheral Clock 28 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid28{}; 
        ///Peripheral Clock 29 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid29{}; 
        ///Peripheral Clock 30 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid30{}; 
        ///Peripheral Clock 31 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid31{}; 
    }
    namespace PmcPmcPcsr{    ///<Peripheral Clock Status Register
        using Addr = Register::Address<0xfffffc18,0x00000003,0x00000000,std::uint32_t>;
        ///Peripheral Clock 2 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid2{}; 
        ///Peripheral Clock 3 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid3{}; 
        ///Peripheral Clock 4 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid4{}; 
        ///Peripheral Clock 5 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid5{}; 
        ///Peripheral Clock 6 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid6{}; 
        ///Peripheral Clock 7 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid7{}; 
        ///Peripheral Clock 8 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid8{}; 
        ///Peripheral Clock 9 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid9{}; 
        ///Peripheral Clock 10 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid10{}; 
        ///Peripheral Clock 11 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid11{}; 
        ///Peripheral Clock 12 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid12{}; 
        ///Peripheral Clock 13 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid13{}; 
        ///Peripheral Clock 14 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid14{}; 
        ///Peripheral Clock 15 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid15{}; 
        ///Peripheral Clock 16 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid16{}; 
        ///Peripheral Clock 17 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid17{}; 
        ///Peripheral Clock 18 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid18{}; 
        ///Peripheral Clock 19 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid19{}; 
        ///Peripheral Clock 20 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid20{}; 
        ///Peripheral Clock 21 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid21{}; 
        ///Peripheral Clock 22 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid22{}; 
        ///Peripheral Clock 23 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid23{}; 
        ///Peripheral Clock 24 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid24{}; 
        ///Peripheral Clock 25 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid25{}; 
        ///Peripheral Clock 26 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid26{}; 
        ///Peripheral Clock 27 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid27{}; 
        ///Peripheral Clock 28 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid28{}; 
        ///Peripheral Clock 29 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid29{}; 
        ///Peripheral Clock 30 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid30{}; 
        ///Peripheral Clock 31 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid31{}; 
    }
    namespace PmcCkgrUckr{    ///<UTMI Clock Register
        using Addr = Register::Address<0xfffffc1c,0x0e0effff,0x00000000,std::uint32_t>;
        ///UTMI PLL Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> upllen{}; 
        ///UTMI PLL Start-up Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> pllcount{}; 
        ///UTMI BIAS Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> biasen{}; 
        ///UTMI BIAS Start-up Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> biascount{}; 
    }
    namespace PmcCkgrMor{    ///<Main Oscillator Register
        using Addr = Register::Address<0xfffffc20,0xffff00fc,0x00000000,std::uint32_t>;
        ///Main Oscillator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscen{}; 
        ///Oscillator Bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oscbypass{}; 
        ///Main Oscillator Start-up Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> oscount{}; 
    }
    namespace PmcCkgrMcfr{    ///<Main Clock Frequency Register
        using Addr = Register::Address<0xfffffc24,0xfffe0000,0x00000000,std::uint32_t>;
        ///Main Clock Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mainf{}; 
        ///Main Clock Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mainrdy{}; 
    }
    namespace PmcCkgrPllar{    ///<PLLA Register
        using Addr = Register::Address<0xfffffc28,0xdf000000,0x00000000,std::uint32_t>;
        ///Divider A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> diva{}; 
        ///PLLA Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> pllacount{}; 
        ///PLLA Clock Frequency Range
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> outa{}; 
        ///PLLA Multiplier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> mula{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> stuckto1{}; 
    }
    namespace PmcPmcMckr{    ///<Master Clock Register
        using Addr = Register::Address<0xfffffc30,0xffffece0,0x00000000,std::uint32_t>;
        ///Master/Processor Clock Source Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> css{}; 
        ///Master/Processor Clock Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> pres{}; 
        ///Master Clock Division
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> mdiv{}; 
        ///PLLA divisor by 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> plladiv2{}; 
    }
    namespace PmcPmcUsb{    ///<USB Clock Register
        using Addr = Register::Address<0xfffffc38,0xfffff0fe,0x00000000,std::uint32_t>;
        ///USB OHCI Input clock selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbs{}; 
        ///Divider for USB OHCI Clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> usbdiv{}; 
    }
    namespace PmcPmcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffffc60,0xfffffcb4,0x00000000,std::uint32_t>;
        ///Main Oscillator Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscs{}; 
        ///PLL Lock Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> locka{}; 
        ///Master Clock Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mckrdy{}; 
        ///UTMI PLL Lock Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> locku{}; 
        ///Programmable Clock Ready 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pckrdy1{}; 
    }
    namespace PmcPmcIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffffc64,0xfffffcb4,0x00000000,std::uint32_t>;
        ///Main Oscillator Status Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscs{}; 
        ///PLLA Lock Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> locka{}; 
        ///Master Clock Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mckrdy{}; 
        ///UTMI PLL Lock Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> locku{}; 
        ///Programmable Clock Ready 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pckrdy1{}; 
    }
    namespace PmcPmcSr{    ///<Status Register
        using Addr = Register::Address<0xfffffc68,0xfffffcb4,0x00000000,std::uint32_t>;
        ///MOSCS Flag Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscs{}; 
        ///PLLA Lock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> locka{}; 
        ///Master Clock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mckrdy{}; 
        ///UPLL Lock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> locku{}; 
        ///Programmable Clock Ready Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pckrdy1{}; 
    }
    namespace PmcPmcImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffffc6c,0xfffffcb4,0x00000000,std::uint32_t>;
        ///Main Oscillator Status Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscs{}; 
        ///PLLA Lock Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> locka{}; 
        ///Master Clock Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mckrdy{}; 
        ///UTMI PLL Lock Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> locku{}; 
        ///Programmable Clock Ready 0 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready 1 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pckrdy1{}; 
    }
    namespace PmcPmcPck0{    ///<Programmable Clock 0 Register
        using Addr = Register::Address<0xfffffc40,0xfffffee0,0x00000000,std::uint32_t>;
        ///Master Clock Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> css{}; 
        ///Programmable Clock Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> pres{}; 
        ///Slow Clock or Master Clock Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slckmck{}; 
    }
    namespace PmcPmcPck1{    ///<Programmable Clock 0 Register
        using Addr = Register::Address<0xfffffc44,0xfffffee0,0x00000000,std::uint32_t>;
        ///Master Clock Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> css{}; 
        ///Programmable Clock Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> pres{}; 
        ///Slow Clock or Master Clock Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slckmck{}; 
    }
}
