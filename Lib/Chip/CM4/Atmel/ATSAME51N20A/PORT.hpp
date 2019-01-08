#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Port Module
    namespace PortDir0{    ///<Data Direction
        using Addr = Register::Address<0x41008000,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dir{}; 
    }
    namespace PortDir1{    ///<Data Direction
        using Addr = Register::Address<0x41008080,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dir{}; 
    }
    namespace PortDir2{    ///<Data Direction
        using Addr = Register::Address<0x41008100,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dir{}; 
    }
    namespace PortDirclr0{    ///<Data Direction Clear
        using Addr = Register::Address<0x41008004,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Direction Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirclr{}; 
    }
    namespace PortDirclr1{    ///<Data Direction Clear
        using Addr = Register::Address<0x41008084,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Direction Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirclr{}; 
    }
    namespace PortDirclr2{    ///<Data Direction Clear
        using Addr = Register::Address<0x41008104,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Direction Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirclr{}; 
    }
    namespace PortDirset0{    ///<Data Direction Set
        using Addr = Register::Address<0x41008008,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Direction Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirset{}; 
    }
    namespace PortDirset1{    ///<Data Direction Set
        using Addr = Register::Address<0x41008088,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Direction Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirset{}; 
    }
    namespace PortDirset2{    ///<Data Direction Set
        using Addr = Register::Address<0x41008108,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Direction Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirset{}; 
    }
    namespace PortDirtgl0{    ///<Data Direction Toggle
        using Addr = Register::Address<0x4100800c,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Direction Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirtgl{}; 
    }
    namespace PortDirtgl1{    ///<Data Direction Toggle
        using Addr = Register::Address<0x4100808c,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Direction Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirtgl{}; 
    }
    namespace PortDirtgl2{    ///<Data Direction Toggle
        using Addr = Register::Address<0x4100810c,0x00000000,0x00000000,std::uint32_t>;
        ///Port Data Direction Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirtgl{}; 
    }
    namespace PortOut0{    ///<Data Output Value
        using Addr = Register::Address<0x41008010,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Data Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> out{}; 
    }
    namespace PortOut1{    ///<Data Output Value
        using Addr = Register::Address<0x41008090,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Data Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> out{}; 
    }
    namespace PortOut2{    ///<Data Output Value
        using Addr = Register::Address<0x41008110,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Data Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> out{}; 
    }
    namespace PortOutclr0{    ///<Data Output Value Clear
        using Addr = Register::Address<0x41008014,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Data Output Value Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outclr{}; 
    }
    namespace PortOutclr1{    ///<Data Output Value Clear
        using Addr = Register::Address<0x41008094,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Data Output Value Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outclr{}; 
    }
    namespace PortOutclr2{    ///<Data Output Value Clear
        using Addr = Register::Address<0x41008114,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Data Output Value Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outclr{}; 
    }
    namespace PortOutset0{    ///<Data Output Value Set
        using Addr = Register::Address<0x41008018,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Data Output Value Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outset{}; 
    }
    namespace PortOutset1{    ///<Data Output Value Set
        using Addr = Register::Address<0x41008098,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Data Output Value Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outset{}; 
    }
    namespace PortOutset2{    ///<Data Output Value Set
        using Addr = Register::Address<0x41008118,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Data Output Value Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outset{}; 
    }
    namespace PortOuttgl0{    ///<Data Output Value Toggle
        using Addr = Register::Address<0x4100801c,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Data Output Value Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outtgl{}; 
    }
    namespace PortOuttgl1{    ///<Data Output Value Toggle
        using Addr = Register::Address<0x4100809c,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Data Output Value Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outtgl{}; 
    }
    namespace PortOuttgl2{    ///<Data Output Value Toggle
        using Addr = Register::Address<0x4100811c,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Data Output Value Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outtgl{}; 
    }
    namespace PortIn0{    ///<Data Input Value
        using Addr = Register::Address<0x41008020,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Data Input Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> in{}; 
    }
    namespace PortIn1{    ///<Data Input Value
        using Addr = Register::Address<0x410080a0,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Data Input Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> in{}; 
    }
    namespace PortIn2{    ///<Data Input Value
        using Addr = Register::Address<0x41008120,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Data Input Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> in{}; 
    }
    namespace PortCtrl0{    ///<Control
        using Addr = Register::Address<0x41008024,0x00000000,0x00000000,std::uint32_t>;
        ///Input Sampling Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sampling{}; 
    }
    namespace PortCtrl1{    ///<Control
        using Addr = Register::Address<0x410080a4,0x00000000,0x00000000,std::uint32_t>;
        ///Input Sampling Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sampling{}; 
    }
    namespace PortCtrl2{    ///<Control
        using Addr = Register::Address<0x41008124,0x00000000,0x00000000,std::uint32_t>;
        ///Input Sampling Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sampling{}; 
    }
    namespace PortWrconfig0{    ///<Write Configuration
        using Addr = Register::Address<0x41008028,0x20b80000,0x00000000,std::uint32_t>;
        ///Pin Mask for Multiple Pin Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pinmask{}; 
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
        ///Peripheral Multiplexing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pmux{}; 
        ///Write PMUX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wrpmux{}; 
        ///Write PINCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wrpincfg{}; 
        ///Half-Word Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hwsel{}; 
    }
    namespace PortWrconfig1{    ///<Write Configuration
        using Addr = Register::Address<0x410080a8,0x20b80000,0x00000000,std::uint32_t>;
        ///Pin Mask for Multiple Pin Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pinmask{}; 
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
        ///Peripheral Multiplexing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pmux{}; 
        ///Write PMUX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wrpmux{}; 
        ///Write PINCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wrpincfg{}; 
        ///Half-Word Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hwsel{}; 
    }
    namespace PortWrconfig2{    ///<Write Configuration
        using Addr = Register::Address<0x41008128,0x20b80000,0x00000000,std::uint32_t>;
        ///Pin Mask for Multiple Pin Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pinmask{}; 
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
        ///Peripheral Multiplexing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pmux{}; 
        ///Write PMUX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wrpmux{}; 
        ///Write PINCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wrpincfg{}; 
        ///Half-Word Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hwsel{}; 
    }
    namespace PortEvctrl0{    ///<Event Input Control
        using Addr = Register::Address<0x4100802c,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Event Pin Identifier 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> pid0{}; 
        ///PORT Event Action 0
        enum class Evact0Val {
            out=0x00000000,     ///<Event output to pin
            set=0x00000001,     ///<Set output register of pin on event
            clr=0x00000002,     ///<Clear output register of pin on event
            tgl=0x00000003,     ///<Toggle output register of pin on event
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,Evact0Val> evact0{}; 
        namespace Evact0ValC{
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::out> out{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::set> set{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::clr> clr{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::tgl> tgl{};
        }
        ///PORT Event Input Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> portei0{}; 
        ///PORT Event Pin Identifier 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> pid1{}; 
        ///PORT Event Action 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> evact1{}; 
        ///PORT Event Input Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> portei1{}; 
        ///PORT Event Pin Identifier 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///PORT Event Action 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> evact2{}; 
        ///PORT Event Input Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> portei2{}; 
        ///PORT Event Pin Identifier 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///PORT Event Action 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> evact3{}; 
        ///PORT Event Input Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> portei3{}; 
    }
    namespace PortEvctrl1{    ///<Event Input Control
        using Addr = Register::Address<0x410080ac,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Event Pin Identifier 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> pid0{}; 
        ///PORT Event Action 0
        enum class Evact0Val {
            out=0x00000000,     ///<Event output to pin
            set=0x00000001,     ///<Set output register of pin on event
            clr=0x00000002,     ///<Clear output register of pin on event
            tgl=0x00000003,     ///<Toggle output register of pin on event
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,Evact0Val> evact0{}; 
        namespace Evact0ValC{
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::out> out{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::set> set{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::clr> clr{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::tgl> tgl{};
        }
        ///PORT Event Input Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> portei0{}; 
        ///PORT Event Pin Identifier 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> pid1{}; 
        ///PORT Event Action 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> evact1{}; 
        ///PORT Event Input Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> portei1{}; 
        ///PORT Event Pin Identifier 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///PORT Event Action 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> evact2{}; 
        ///PORT Event Input Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> portei2{}; 
        ///PORT Event Pin Identifier 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///PORT Event Action 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> evact3{}; 
        ///PORT Event Input Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> portei3{}; 
    }
    namespace PortEvctrl2{    ///<Event Input Control
        using Addr = Register::Address<0x4100812c,0x00000000,0x00000000,std::uint32_t>;
        ///PORT Event Pin Identifier 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> pid0{}; 
        ///PORT Event Action 0
        enum class Evact0Val {
            out=0x00000000,     ///<Event output to pin
            set=0x00000001,     ///<Set output register of pin on event
            clr=0x00000002,     ///<Clear output register of pin on event
            tgl=0x00000003,     ///<Toggle output register of pin on event
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,Evact0Val> evact0{}; 
        namespace Evact0ValC{
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::out> out{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::set> set{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::clr> clr{};
            constexpr Register::FieldValue<decltype(evact0)::Type,Evact0Val::tgl> tgl{};
        }
        ///PORT Event Input Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> portei0{}; 
        ///PORT Event Pin Identifier 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> pid1{}; 
        ///PORT Event Action 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> evact1{}; 
        ///PORT Event Input Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> portei1{}; 
        ///PORT Event Pin Identifier 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///PORT Event Action 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> evact2{}; 
        ///PORT Event Input Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> portei2{}; 
        ///PORT Event Pin Identifier 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///PORT Event Action 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> evact3{}; 
        ///PORT Event Input Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> portei3{}; 
    }
    namespace PortPmux00{    ///<Peripheral Multiplexing - Group 0
        using Addr = Register::Address<0x41008030,0xffffff00,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexing for Even-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pmuxe{}; 
        ///Peripheral Multiplexing for Odd-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pmuxo{}; 
    }
    namespace PortPmux01{    ///<Peripheral Multiplexing - Group 0
        using Addr = Register::Address<0x41008031,0xffffff00,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexing for Even-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pmuxe{}; 
        ///Peripheral Multiplexing for Odd-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pmuxo{}; 
    }
    namespace PortPmux02{    ///<Peripheral Multiplexing - Group 0
        using Addr = Register::Address<0x41008032,0xffffff00,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexing for Even-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pmuxe{}; 
        ///Peripheral Multiplexing for Odd-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pmuxo{}; 
    }
    namespace PortPmux03{    ///<Peripheral Multiplexing - Group 0
        using Addr = Register::Address<0x41008033,0xffffff00,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexing for Even-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pmuxe{}; 
        ///Peripheral Multiplexing for Odd-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pmuxo{}; 
    }
    namespace PortPmux04{    ///<Peripheral Multiplexing - Group 0
        using Addr = Register::Address<0x41008034,0xffffff00,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexing for Even-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pmuxe{}; 
        ///Peripheral Multiplexing for Odd-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pmuxo{}; 
    }
    namespace PortPmux05{    ///<Peripheral Multiplexing - Group 0
        using Addr = Register::Address<0x41008035,0xffffff00,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexing for Even-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pmuxe{}; 
        ///Peripheral Multiplexing for Odd-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pmuxo{}; 
    }
    namespace PortPmux06{    ///<Peripheral Multiplexing - Group 0
        using Addr = Register::Address<0x41008036,0xffffff00,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexing for Even-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pmuxe{}; 
        ///Peripheral Multiplexing for Odd-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pmuxo{}; 
    }
    namespace PortPmux07{    ///<Peripheral Multiplexing - Group 0
        using Addr = Register::Address<0x41008037,0xffffff00,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexing for Even-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pmuxe{}; 
        ///Peripheral Multiplexing for Odd-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pmuxo{}; 
    }
    namespace PortPmux08{    ///<Peripheral Multiplexing - Group 0
        using Addr = Register::Address<0x41008038,0xffffff00,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexing for Even-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pmuxe{}; 
        ///Peripheral Multiplexing for Odd-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pmuxo{}; 
    }
    namespace PortPmux09{    ///<Peripheral Multiplexing - Group 0
        using Addr = Register::Address<0x41008039,0xffffff00,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexing for Even-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pmuxe{}; 
        ///Peripheral Multiplexing for Odd-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pmuxo{}; 
    }
    namespace PortPmux010{    ///<Peripheral Multiplexing - Group 0
        using Addr = Register::Address<0x4100803a,0xffffff00,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexing for Even-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pmuxe{}; 
        ///Peripheral Multiplexing for Odd-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pmuxo{}; 
    }
    namespace PortPmux011{    ///<Peripheral Multiplexing - Group 0
        using Addr = Register::Address<0x4100803b,0xffffff00,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexing for Even-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pmuxe{}; 
        ///Peripheral Multiplexing for Odd-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pmuxo{}; 
    }
    namespace PortPmux012{    ///<Peripheral Multiplexing - Group 0
        using Addr = Register::Address<0x4100803c,0xffffff00,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexing for Even-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pmuxe{}; 
        ///Peripheral Multiplexing for Odd-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pmuxo{}; 
    }
    namespace PortPmux013{    ///<Peripheral Multiplexing - Group 0
        using Addr = Register::Address<0x4100803d,0xffffff00,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexing for Even-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pmuxe{}; 
        ///Peripheral Multiplexing for Odd-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pmuxo{}; 
    }
    namespace PortPmux014{    ///<Peripheral Multiplexing - Group 0
        using Addr = Register::Address<0x4100803e,0xffffff00,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexing for Even-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pmuxe{}; 
        ///Peripheral Multiplexing for Odd-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pmuxo{}; 
    }
    namespace PortPmux015{    ///<Peripheral Multiplexing - Group 0
        using Addr = Register::Address<0x4100803f,0xffffff00,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexing for Even-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pmuxe{}; 
        ///Peripheral Multiplexing for Odd-Numbered Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pmuxo{}; 
    }
    namespace PortPmux10{    ///<Peripheral Multiplexing - Group 1
        using Addr = Register::Address<0x410080b0,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux11{    ///<Peripheral Multiplexing - Group 1
        using Addr = Register::Address<0x410080b1,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux12{    ///<Peripheral Multiplexing - Group 1
        using Addr = Register::Address<0x410080b2,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux13{    ///<Peripheral Multiplexing - Group 1
        using Addr = Register::Address<0x410080b3,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux14{    ///<Peripheral Multiplexing - Group 1
        using Addr = Register::Address<0x410080b4,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux15{    ///<Peripheral Multiplexing - Group 1
        using Addr = Register::Address<0x410080b5,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux16{    ///<Peripheral Multiplexing - Group 1
        using Addr = Register::Address<0x410080b6,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux17{    ///<Peripheral Multiplexing - Group 1
        using Addr = Register::Address<0x410080b7,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux18{    ///<Peripheral Multiplexing - Group 1
        using Addr = Register::Address<0x410080b8,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux19{    ///<Peripheral Multiplexing - Group 1
        using Addr = Register::Address<0x410080b9,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux110{    ///<Peripheral Multiplexing - Group 1
        using Addr = Register::Address<0x410080ba,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux111{    ///<Peripheral Multiplexing - Group 1
        using Addr = Register::Address<0x410080bb,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux112{    ///<Peripheral Multiplexing - Group 1
        using Addr = Register::Address<0x410080bc,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux113{    ///<Peripheral Multiplexing - Group 1
        using Addr = Register::Address<0x410080bd,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux114{    ///<Peripheral Multiplexing - Group 1
        using Addr = Register::Address<0x410080be,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux115{    ///<Peripheral Multiplexing - Group 1
        using Addr = Register::Address<0x410080bf,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux20{    ///<Peripheral Multiplexing - Group 2
        using Addr = Register::Address<0x41008130,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux21{    ///<Peripheral Multiplexing - Group 2
        using Addr = Register::Address<0x41008131,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux22{    ///<Peripheral Multiplexing - Group 2
        using Addr = Register::Address<0x41008132,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux23{    ///<Peripheral Multiplexing - Group 2
        using Addr = Register::Address<0x41008133,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux24{    ///<Peripheral Multiplexing - Group 2
        using Addr = Register::Address<0x41008134,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux25{    ///<Peripheral Multiplexing - Group 2
        using Addr = Register::Address<0x41008135,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux26{    ///<Peripheral Multiplexing - Group 2
        using Addr = Register::Address<0x41008136,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux27{    ///<Peripheral Multiplexing - Group 2
        using Addr = Register::Address<0x41008137,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux28{    ///<Peripheral Multiplexing - Group 2
        using Addr = Register::Address<0x41008138,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux29{    ///<Peripheral Multiplexing - Group 2
        using Addr = Register::Address<0x41008139,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux210{    ///<Peripheral Multiplexing - Group 2
        using Addr = Register::Address<0x4100813a,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux211{    ///<Peripheral Multiplexing - Group 2
        using Addr = Register::Address<0x4100813b,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux212{    ///<Peripheral Multiplexing - Group 2
        using Addr = Register::Address<0x4100813c,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux213{    ///<Peripheral Multiplexing - Group 2
        using Addr = Register::Address<0x4100813d,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux214{    ///<Peripheral Multiplexing - Group 2
        using Addr = Register::Address<0x4100813e,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPmux215{    ///<Peripheral Multiplexing - Group 2
        using Addr = Register::Address<0x4100813f,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg00{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008040,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg01{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008041,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg02{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008042,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg03{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008043,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg04{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008044,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg05{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008045,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg06{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008046,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg07{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008047,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg08{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008048,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg09{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008049,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg010{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x4100804a,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg011{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x4100804b,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg012{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x4100804c,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg013{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x4100804d,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg014{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x4100804e,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg015{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x4100804f,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg016{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008050,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg017{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008051,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg018{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008052,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg019{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008053,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg020{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008054,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg021{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008055,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg022{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008056,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg023{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008057,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg024{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008058,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg025{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x41008059,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg026{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x4100805a,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg027{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x4100805b,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg028{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x4100805c,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg029{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x4100805d,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg030{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x4100805e,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg031{    ///<Pin Configuration - Group 0
        using Addr = Register::Address<0x4100805f,0xffffffb8,0x00000000,std::uint8_t>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> drvstr{}; 
    }
    namespace PortPincfg10{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080c0,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg11{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080c1,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg12{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080c2,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg13{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080c3,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg14{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080c4,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg15{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080c5,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg16{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080c6,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg17{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080c7,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg18{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080c8,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg19{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080c9,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg110{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080ca,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg111{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080cb,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg112{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080cc,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg113{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080cd,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg114{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080ce,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg115{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080cf,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg116{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080d0,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg117{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080d1,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg118{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080d2,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg119{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080d3,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg120{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080d4,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg121{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080d5,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg122{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080d6,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg123{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080d7,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg124{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080d8,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg125{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080d9,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg126{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080da,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg127{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080db,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg128{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080dc,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg129{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080dd,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg130{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080de,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg131{    ///<Pin Configuration - Group 1
        using Addr = Register::Address<0x410080df,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg20{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008140,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg21{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008141,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg22{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008142,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg23{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008143,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg24{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008144,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg25{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008145,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg26{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008146,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg27{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008147,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg28{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008148,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg29{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008149,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg210{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x4100814a,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg211{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x4100814b,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg212{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x4100814c,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg213{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x4100814d,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg214{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x4100814e,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg215{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x4100814f,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg216{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008150,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg217{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008151,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg218{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008152,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg219{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008153,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg220{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008154,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg221{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008155,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg222{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008156,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg223{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008157,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg224{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008158,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg225{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x41008159,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg226{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x4100815a,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg227{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x4100815b,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg228{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x4100815c,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg229{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x4100815d,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg230{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x4100815e,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace PortPincfg231{    ///<Pin Configuration - Group 2
        using Addr = Register::Address<0x4100815f,0xffffffff,0x00000000,std::uint32_t>;
    }
}
