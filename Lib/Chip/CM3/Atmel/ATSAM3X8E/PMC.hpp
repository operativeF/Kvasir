#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Power Management Controller
    namespace PmcPmcScer{    ///<System Clock Enable Register
        using Addr = Register::Address<0x400e0600,0xfffff8df,0x00000000,std::uint32_t>;
        ///Enable USB OTG Clock (48 MHz, USB_48M) for UTMI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uotgclk{}; 
        ///Programmable Clock 0 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pck0{}; 
        ///Programmable Clock 1 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pck1{}; 
        ///Programmable Clock 2 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pck2{}; 
    }
    namespace PmcPmcScdr{    ///<System Clock Disable Register
        using Addr = Register::Address<0x400e0604,0xfffff8df,0x00000000,std::uint32_t>;
        ///Disable USB OTG Clock (48 MHz, USB_48M) for UTMI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uotgclk{}; 
        ///Programmable Clock 0 Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pck0{}; 
        ///Programmable Clock 1 Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pck1{}; 
        ///Programmable Clock 2 Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pck2{}; 
    }
    namespace PmcPmcScsr{    ///<System Clock Status Register
        using Addr = Register::Address<0x400e0608,0xfffff8df,0x00000000,std::uint32_t>;
        ///USB OTG Clock (48 MHz, USB_48M) Clock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uotgclk{}; 
        ///Programmable Clock 0 Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pck0{}; 
        ///Programmable Clock 1 Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pck1{}; 
        ///Programmable Clock 2 Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pck2{}; 
    }
    namespace PmcPmcPcer0{    ///<Peripheral Clock Enable Register 0
        using Addr = Register::Address<0x400e0610,0x00000003,0x00000000,std::uint32_t>;
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
    namespace PmcPmcPcdr0{    ///<Peripheral Clock Disable Register 0
        using Addr = Register::Address<0x400e0614,0x00000003,0x00000000,std::uint32_t>;
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
    namespace PmcPmcPcsr0{    ///<Peripheral Clock Status Register 0
        using Addr = Register::Address<0x400e0618,0x00000003,0x00000000,std::uint32_t>;
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
        using Addr = Register::Address<0x400e061c,0xff0effff,0x00000000,std::uint32_t>;
        ///UTMI PLL Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> upllen{}; 
        ///UTMI PLL Start-up Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> upllcount{}; 
    }
    namespace PmcCkgrMor{    ///<Main Oscillator Register
        using Addr = Register::Address<0x400e0620,0xfc000084,0x00000000,std::uint32_t>;
        ///Main Crystal Oscillator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscxten{}; 
        ///Main Crystal Oscillator Bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> moscxtby{}; 
        ///Main On-Chip RC Oscillator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> moscrcen{}; 
        ///Main On-Chip RC Oscillator Frequency Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> moscrcf{}; 
        ///Main Crystal Oscillator Start-up Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> moscxtst{}; 
        ///Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> key{}; 
        ///Main Oscillator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> moscsel{}; 
        ///Clock Failure Detector Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cfden{}; 
    }
    namespace PmcCkgrMcfr{    ///<Main Clock Frequency Register
        using Addr = Register::Address<0x400e0624,0xfffe0000,0x00000000,std::uint32_t>;
        ///Main Clock Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mainf{}; 
        ///Main Clock Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mainfrdy{}; 
    }
    namespace PmcCkgrPllar{    ///<PLLA Register
        using Addr = Register::Address<0x400e0628,0xd800c000,0x00000000,std::uint32_t>;
        ///Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> diva{}; 
        ///PLLA Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> pllacount{}; 
        ///PLLA Multiplier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> mula{}; 
        ///Must Be Set to 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> one{}; 
    }
    namespace PmcPmcMckr{    ///<Master Clock Register
        using Addr = Register::Address<0x400e0630,0xffffcf8c,0x00000000,std::uint32_t>;
        ///Master Clock Source Selection
        enum class CssVal {
            slowClk=0x00000000,     ///<Slow Clock is selected
            mainClk=0x00000001,     ///<Main Clock is selected
            pllaClk=0x00000002,     ///<PLLA Clock is selected
            upllClk=0x00000003,     ///<UPLL Clock is selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CssVal> css{}; 
        namespace CssValC{
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::slowClk> slowClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::mainClk> mainClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::pllaClk> pllaClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::upllClk> upllClk{};
        }
        ///Processor Clock Prescaler
        enum class PresVal {
            clk1=0x00000000,     ///<Selected clock
            clk2=0x00000001,     ///<Selected clock divided by 2
            clk4=0x00000002,     ///<Selected clock divided by 4
            clk8=0x00000003,     ///<Selected clock divided by 8
            clk16=0x00000004,     ///<Selected clock divided by 16
            clk32=0x00000005,     ///<Selected clock divided by 32
            clk64=0x00000006,     ///<Selected clock divided by 64
            clk3=0x00000007,     ///<Selected clock divided by 3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PresVal> pres{}; 
        namespace PresValC{
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk1> clk1{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk2> clk2{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk4> clk4{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk8> clk8{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk16> clk16{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk32> clk32{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk64> clk64{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk3> clk3{};
        }
        ///PLLA Divisor by 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> plladiv2{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> uplldiv2{}; 
    }
    namespace PmcPmcUsb{    ///<USB Clock Register
        using Addr = Register::Address<0x400e0638,0xfffff0fe,0x00000000,std::uint32_t>;
        ///USB Input Clock Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbs{}; 
        ///Divider for USB Clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> usbdiv{}; 
    }
    namespace PmcPmcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x400e0660,0xfff8f8b4,0x00000000,std::uint32_t>;
        ///Main Crystal Oscillator Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscxts{}; 
        ///PLLA Lock Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> locka{}; 
        ///Master Clock Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mckrdy{}; 
        ///UTMI PLL Lock Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> locku{}; 
        ///Programmable Clock Ready 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pckrdy1{}; 
        ///Programmable Clock Ready 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pckrdy2{}; 
        ///Main Oscillator Selection Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscsels{}; 
        ///Main On-Chip RC Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscrcs{}; 
        ///Clock Failure Detector Event Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfdev{}; 
    }
    namespace PmcPmcIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x400e0664,0xfff8f8b4,0x00000000,std::uint32_t>;
        ///Main Crystal Oscillator Status Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscxts{}; 
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
        ///Programmable Clock Ready 2 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pckrdy2{}; 
        ///Main Oscillator Selection Status Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscsels{}; 
        ///Main On-Chip RC Status Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscrcs{}; 
        ///Clock Failure Detector Event Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfdev{}; 
    }
    namespace PmcPmcSr{    ///<Status Register
        using Addr = Register::Address<0x400e0668,0xffe0f834,0x00000000,std::uint32_t>;
        ///Main XTAL Oscillator Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscxts{}; 
        ///PLLA Lock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> locka{}; 
        ///Master Clock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mckrdy{}; 
        ///UTMI PLL Lock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> locku{}; 
        ///Slow Clock Oscillator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oscsels{}; 
        ///Programmable Clock Ready Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pckrdy1{}; 
        ///Programmable Clock Ready Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pckrdy2{}; 
        ///Main Oscillator Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscsels{}; 
        ///Main On-Chip RC Oscillator Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscrcs{}; 
        ///Clock Failure Detector Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfdev{}; 
        ///Clock Failure Detector Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfds{}; 
        ///Clock Failure Detector Fault Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fos{}; 
    }
    namespace PmcPmcImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x400e066c,0xfff8f8b4,0x00000000,std::uint32_t>;
        ///Main Crystal Oscillator Status Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscxts{}; 
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
        ///Programmable Clock Ready 2 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pckrdy2{}; 
        ///Main Oscillator Selection Status Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscsels{}; 
        ///Main On-Chip RC Status Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscrcs{}; 
        ///Clock Failure Detector Event Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cfdev{}; 
    }
    namespace PmcPmcFsmr{    ///<Fast Startup Mode Register
        using Addr = Register::Address<0x400e0670,0xffe80000,0x00000000,std::uint32_t>;
        ///Fast Startup Input Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fstt0{}; 
        ///Fast Startup Input Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fstt1{}; 
        ///Fast Startup Input Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fstt2{}; 
        ///Fast Startup Input Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fstt3{}; 
        ///Fast Startup Input Enable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fstt4{}; 
        ///Fast Startup Input Enable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fstt5{}; 
        ///Fast Startup Input Enable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fstt6{}; 
        ///Fast Startup Input Enable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fstt7{}; 
        ///Fast Startup Input Enable 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fstt8{}; 
        ///Fast Startup Input Enable 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fstt9{}; 
        ///Fast Startup Input Enable 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fstt10{}; 
        ///Fast Startup Input Enable 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fstt11{}; 
        ///Fast Startup Input Enable 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fstt12{}; 
        ///Fast Startup Input Enable 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fstt13{}; 
        ///Fast Startup Input Enable 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fstt14{}; 
        ///Fast Startup Input Enable 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fstt15{}; 
        ///RTT Alarm Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rttal{}; 
        ///RTC Alarm Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rtcal{}; 
        ///USB Alarm Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usbal{}; 
        ///Low Power Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lpm{}; 
    }
    namespace PmcPmcFspr{    ///<Fast Startup Polarity Register
        using Addr = Register::Address<0x400e0674,0xffff0000,0x00000000,std::uint32_t>;
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fstp0{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fstp1{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fstp2{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fstp3{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fstp4{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fstp5{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fstp6{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fstp7{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fstp8{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fstp9{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fstp10{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fstp11{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fstp12{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fstp13{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fstp14{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fstp15{}; 
    }
    namespace PmcPmcFocr{    ///<Fault Output Clear Register
        using Addr = Register::Address<0x400e0678,0xfffffffe,0x00000000,std::uint32_t>;
        ///Fault Output Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> foclr{}; 
    }
    namespace PmcPmcWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0x400e06e4,0x000000fe,0x00000000,std::uint32_t>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace PmcPmcWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0x400e06e8,0xff0000fe,0x00000000,std::uint32_t>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvsrc{}; 
    }
    namespace PmcPmcPcer1{    ///<Peripheral Clock Enable Register 1
        using Addr = Register::Address<0x400e0700,0xffffe000,0x00000000,std::uint32_t>;
        ///Peripheral Clock 32 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid32{}; 
        ///Peripheral Clock 33 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid33{}; 
        ///Peripheral Clock 34 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid34{}; 
        ///Peripheral Clock 35 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid35{}; 
        ///Peripheral Clock 36 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid36{}; 
        ///Peripheral Clock 37 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid37{}; 
        ///Peripheral Clock 38 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid38{}; 
        ///Peripheral Clock 39 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid39{}; 
        ///Peripheral Clock 40 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid40{}; 
        ///Peripheral Clock 41 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid41{}; 
        ///Peripheral Clock 42 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid42{}; 
        ///Peripheral Clock 43 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid43{}; 
        ///Peripheral Clock 44 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid44{}; 
    }
    namespace PmcPmcPcdr1{    ///<Peripheral Clock Disable Register 1
        using Addr = Register::Address<0x400e0704,0xffffe000,0x00000000,std::uint32_t>;
        ///Peripheral Clock 32 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid32{}; 
        ///Peripheral Clock 33 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid33{}; 
        ///Peripheral Clock 34 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid34{}; 
        ///Peripheral Clock 35 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid35{}; 
        ///Peripheral Clock 36 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid36{}; 
        ///Peripheral Clock 37 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid37{}; 
        ///Peripheral Clock 38 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid38{}; 
        ///Peripheral Clock 39 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid39{}; 
        ///Peripheral Clock 40 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid40{}; 
        ///Peripheral Clock 41 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid41{}; 
        ///Peripheral Clock 42 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid42{}; 
        ///Peripheral Clock 43 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid43{}; 
        ///Peripheral Clock 44 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid44{}; 
    }
    namespace PmcPmcPcsr1{    ///<Peripheral Clock Status Register 1
        using Addr = Register::Address<0x400e0708,0xffffe000,0x00000000,std::uint32_t>;
        ///Peripheral Clock 32 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid32{}; 
        ///Peripheral Clock 33 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid33{}; 
        ///Peripheral Clock 34 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid34{}; 
        ///Peripheral Clock 35 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid35{}; 
        ///Peripheral Clock 36 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid36{}; 
        ///Peripheral Clock 37 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid37{}; 
        ///Peripheral Clock 38 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid38{}; 
        ///Peripheral Clock 39 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid39{}; 
        ///Peripheral Clock 40 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid40{}; 
        ///Peripheral Clock 41 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid41{}; 
        ///Peripheral Clock 42 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid42{}; 
        ///Peripheral Clock 43 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid43{}; 
        ///Peripheral Clock 44 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pid44{}; 
    }
    namespace PmcPmcPcr{    ///<Peripheral Control Register
        using Addr = Register::Address<0x400e070c,0xeffcefc0,0x00000000,std::uint32_t>;
        ///Peripheral ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pid{}; 
        ///Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cmd{}; 
        ///Divisor Value
        enum class DivVal {
            periphDivMck=0x00000000,     ///<Peripheral clock is MCK
            periphDiv2Mck=0x00000001,     ///<Peripheral clock is MCK/2
            periphDiv4Mck=0x00000002,     ///<Peripheral clock is MCK/4
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,DivVal> div{}; 
        namespace DivValC{
            constexpr Register::FieldValue<decltype(div)::Type,DivVal::periphDivMck> periphDivMck{};
            constexpr Register::FieldValue<decltype(div)::Type,DivVal::periphDiv2Mck> periphDiv2Mck{};
            constexpr Register::FieldValue<decltype(div)::Type,DivVal::periphDiv4Mck> periphDiv4Mck{};
        }
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace PmcPmcPck0{    ///<Programmable Clock 0 Register
        using Addr = Register::Address<0x400e0640,0xffffff88,0x00000000,std::uint32_t>;
        ///Master Clock Source Selection
        enum class CssVal {
            slowClk=0x00000000,     ///<Slow Clock is selected
            mainClk=0x00000001,     ///<Main Clock is selected
            pllaClk=0x00000002,     ///<PLLA Clock is selected
            upllClk=0x00000003,     ///<UPLL Clock is selected
            mck=0x00000004,     ///<Master Clock is selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,CssVal> css{}; 
        namespace CssValC{
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::slowClk> slowClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::mainClk> mainClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::pllaClk> pllaClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::upllClk> upllClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::mck> mck{};
        }
        ///Programmable Clock Prescaler
        enum class PresVal {
            clk1=0x00000000,     ///<Selected clock
            clk2=0x00000001,     ///<Selected clock divided by 2
            clk4=0x00000002,     ///<Selected clock divided by 4
            clk8=0x00000003,     ///<Selected clock divided by 8
            clk16=0x00000004,     ///<Selected clock divided by 16
            clk32=0x00000005,     ///<Selected clock divided by 32
            clk64=0x00000006,     ///<Selected clock divided by 64
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PresVal> pres{}; 
        namespace PresValC{
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk1> clk1{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk2> clk2{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk4> clk4{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk8> clk8{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk16> clk16{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk32> clk32{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk64> clk64{};
        }
    }
    namespace PmcPmcPck1{    ///<Programmable Clock 0 Register
        using Addr = Register::Address<0x400e0644,0xffffff88,0x00000000,std::uint32_t>;
        ///Master Clock Source Selection
        enum class CssVal {
            slowClk=0x00000000,     ///<Slow Clock is selected
            mainClk=0x00000001,     ///<Main Clock is selected
            pllaClk=0x00000002,     ///<PLLA Clock is selected
            upllClk=0x00000003,     ///<UPLL Clock is selected
            mck=0x00000004,     ///<Master Clock is selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,CssVal> css{}; 
        namespace CssValC{
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::slowClk> slowClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::mainClk> mainClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::pllaClk> pllaClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::upllClk> upllClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::mck> mck{};
        }
        ///Programmable Clock Prescaler
        enum class PresVal {
            clk1=0x00000000,     ///<Selected clock
            clk2=0x00000001,     ///<Selected clock divided by 2
            clk4=0x00000002,     ///<Selected clock divided by 4
            clk8=0x00000003,     ///<Selected clock divided by 8
            clk16=0x00000004,     ///<Selected clock divided by 16
            clk32=0x00000005,     ///<Selected clock divided by 32
            clk64=0x00000006,     ///<Selected clock divided by 64
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PresVal> pres{}; 
        namespace PresValC{
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk1> clk1{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk2> clk2{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk4> clk4{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk8> clk8{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk16> clk16{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk32> clk32{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk64> clk64{};
        }
    }
    namespace PmcPmcPck2{    ///<Programmable Clock 0 Register
        using Addr = Register::Address<0x400e0648,0xffffff88,0x00000000,std::uint32_t>;
        ///Master Clock Source Selection
        enum class CssVal {
            slowClk=0x00000000,     ///<Slow Clock is selected
            mainClk=0x00000001,     ///<Main Clock is selected
            pllaClk=0x00000002,     ///<PLLA Clock is selected
            upllClk=0x00000003,     ///<UPLL Clock is selected
            mck=0x00000004,     ///<Master Clock is selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,CssVal> css{}; 
        namespace CssValC{
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::slowClk> slowClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::mainClk> mainClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::pllaClk> pllaClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::upllClk> upllClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::mck> mck{};
        }
        ///Programmable Clock Prescaler
        enum class PresVal {
            clk1=0x00000000,     ///<Selected clock
            clk2=0x00000001,     ///<Selected clock divided by 2
            clk4=0x00000002,     ///<Selected clock divided by 4
            clk8=0x00000003,     ///<Selected clock divided by 8
            clk16=0x00000004,     ///<Selected clock divided by 16
            clk32=0x00000005,     ///<Selected clock divided by 32
            clk64=0x00000006,     ///<Selected clock divided by 64
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PresVal> pres{}; 
        namespace PresValC{
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk1> clk1{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk2> clk2{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk4> clk4{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk8> clk8{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk16> clk16{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk32> clk32{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk64> clk64{};
        }
    }
}
