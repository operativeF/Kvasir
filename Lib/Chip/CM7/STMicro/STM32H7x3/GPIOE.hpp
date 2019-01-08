#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//GPIO
    namespace GpioeGpioaModer{    ///<GPIO port mode register
        using Addr = Register::Address<0x58021000,0x00000000,0x00000000,std::uint32_t>;
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode0{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mode1{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mode2{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> mode3{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> mode4{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> mode5{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> mode6{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> mode7{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> mode8{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> mode9{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mode10{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> mode11{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> mode12{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> mode13{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> mode14{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> mode15{}; 
    }
    namespace GpioeGpioaOtyper{    ///<GPIO port output type register
        using Addr = Register::Address<0x58021004,0xffff0000,0x00000000,std::uint32_t>;
        ///Port x configuration bits (y = 0..15)              These bits are written by software to configure the              I/O output type.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ot0{}; 
        ///Port x configuration bits (y = 0..15)              These bits are written by software to configure the              I/O output type.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ot1{}; 
        ///Port x configuration bits (y = 0..15)              These bits are written by software to configure the              I/O output type.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ot2{}; 
        ///Port x configuration bits (y = 0..15)              These bits are written by software to configure the              I/O output type.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ot3{}; 
        ///Port x configuration bits (y = 0..15)              These bits are written by software to configure the              I/O output type.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ot4{}; 
        ///Port x configuration bits (y = 0..15)              These bits are written by software to configure the              I/O output type.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ot5{}; 
        ///Port x configuration bits (y = 0..15)              These bits are written by software to configure the              I/O output type.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ot6{}; 
        ///Port x configuration bits (y = 0..15)              These bits are written by software to configure the              I/O output type.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ot7{}; 
        ///Port x configuration bits (y = 0..15)              These bits are written by software to configure the              I/O output type.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ot8{}; 
        ///Port x configuration bits (y = 0..15)              These bits are written by software to configure the              I/O output type.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ot9{}; 
        ///Port x configuration bits (y = 0..15)              These bits are written by software to configure the              I/O output type.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ot10{}; 
        ///Port x configuration bits (y = 0..15)              These bits are written by software to configure the              I/O output type.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ot11{}; 
        ///Port x configuration bits (y = 0..15)              These bits are written by software to configure the              I/O output type.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ot12{}; 
        ///Port x configuration bits (y = 0..15)              These bits are written by software to configure the              I/O output type.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ot13{}; 
        ///Port x configuration bits (y = 0..15)              These bits are written by software to configure the              I/O output type.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ot14{}; 
        ///Port x configuration bits (y = 0..15)              These bits are written by software to configure the              I/O output type.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ot15{}; 
    }
    namespace GpioeGpioaOspeedr{    ///<GPIO port output speed          register
        using Addr = Register::Address<0x58021008,0x00000000,0x00000000,std::uint32_t>;
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O output speed. Note: Refer to the              device datasheet for the frequency specifications and              the power supply and load conditions for each              speed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ospeed0{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O output speed. Note: Refer to the              device datasheet for the frequency specifications and              the power supply and load conditions for each              speed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ospeed1{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O output speed. Note: Refer to the              device datasheet for the frequency specifications and              the power supply and load conditions for each              speed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ospeed2{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O output speed. Note: Refer to the              device datasheet for the frequency specifications and              the power supply and load conditions for each              speed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ospeed3{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O output speed. Note: Refer to the              device datasheet for the frequency specifications and              the power supply and load conditions for each              speed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ospeed4{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O output speed. Note: Refer to the              device datasheet for the frequency specifications and              the power supply and load conditions for each              speed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ospeed5{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O output speed. Note: Refer to the              device datasheet for the frequency specifications and              the power supply and load conditions for each              speed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> ospeed6{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O output speed. Note: Refer to the              device datasheet for the frequency specifications and              the power supply and load conditions for each              speed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> ospeed7{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O output speed. Note: Refer to the              device datasheet for the frequency specifications and              the power supply and load conditions for each              speed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ospeed8{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O output speed. Note: Refer to the              device datasheet for the frequency specifications and              the power supply and load conditions for each              speed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ospeed9{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O output speed. Note: Refer to the              device datasheet for the frequency specifications and              the power supply and load conditions for each              speed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ospeed10{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O output speed. Note: Refer to the              device datasheet for the frequency specifications and              the power supply and load conditions for each              speed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> ospeed11{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O output speed. Note: Refer to the              device datasheet for the frequency specifications and              the power supply and load conditions for each              speed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> ospeed12{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O output speed. Note: Refer to the              device datasheet for the frequency specifications and              the power supply and load conditions for each              speed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> ospeed13{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O output speed. Note: Refer to the              device datasheet for the frequency specifications and              the power supply and load conditions for each              speed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ospeed14{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O output speed. Note: Refer to the              device datasheet for the frequency specifications and              the power supply and load conditions for each              speed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> ospeed15{}; 
    }
    namespace GpioeGpioaPupdr{    ///<GPIO port pull-up/pull-down          register
        using Addr = Register::Address<0x5802100c,0x00000000,0x00000000,std::uint32_t>;
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O pull-up or pull-down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pupd0{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O pull-up or pull-down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pupd1{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O pull-up or pull-down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pupd2{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O pull-up or pull-down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pupd3{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O pull-up or pull-down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pupd4{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O pull-up or pull-down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pupd5{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O pull-up or pull-down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pupd6{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O pull-up or pull-down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pupd7{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O pull-up or pull-down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pupd8{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O pull-up or pull-down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pupd9{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O pull-up or pull-down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> pupd10{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O pull-up or pull-down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pupd11{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O pull-up or pull-down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> pupd12{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O pull-up or pull-down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pupd13{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O pull-up or pull-down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pupd14{}; 
        ///[1:0]: Port x configuration bits (y =              0..15) These bits are written by software to              configure the I/O pull-up or pull-down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pupd15{}; 
    }
    namespace GpioeGpioaIdr{    ///<GPIO port input data register
        using Addr = Register::Address<0x58021010,0xffff0000,0x00000000,std::uint32_t>;
        ///Port input data bit (y = 0..15) These              bits are read-only. They contain the input value of              the corresponding I/O port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> id0{}; 
        ///Port input data bit (y = 0..15) These              bits are read-only. They contain the input value of              the corresponding I/O port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> id1{}; 
        ///Port input data bit (y = 0..15) These              bits are read-only. They contain the input value of              the corresponding I/O port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> id2{}; 
        ///Port input data bit (y = 0..15) These              bits are read-only. They contain the input value of              the corresponding I/O port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> id3{}; 
        ///Port input data bit (y = 0..15) These              bits are read-only. They contain the input value of              the corresponding I/O port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id4{}; 
        ///Port input data bit (y = 0..15) These              bits are read-only. They contain the input value of              the corresponding I/O port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> id5{}; 
        ///Port input data bit (y = 0..15) These              bits are read-only. They contain the input value of              the corresponding I/O port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> id6{}; 
        ///Port input data bit (y = 0..15) These              bits are read-only. They contain the input value of              the corresponding I/O port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> id7{}; 
        ///Port input data bit (y = 0..15) These              bits are read-only. They contain the input value of              the corresponding I/O port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> id8{}; 
        ///Port input data bit (y = 0..15) These              bits are read-only. They contain the input value of              the corresponding I/O port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> id9{}; 
        ///Port input data bit (y = 0..15) These              bits are read-only. They contain the input value of              the corresponding I/O port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> id10{}; 
        ///Port input data bit (y = 0..15) These              bits are read-only. They contain the input value of              the corresponding I/O port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> id11{}; 
        ///Port input data bit (y = 0..15) These              bits are read-only. They contain the input value of              the corresponding I/O port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> id12{}; 
        ///Port input data bit (y = 0..15) These              bits are read-only. They contain the input value of              the corresponding I/O port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> id13{}; 
        ///Port input data bit (y = 0..15) These              bits are read-only. They contain the input value of              the corresponding I/O port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> id14{}; 
        ///Port input data bit (y = 0..15) These              bits are read-only. They contain the input value of              the corresponding I/O port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> id15{}; 
    }
    namespace GpioeGpioaOdr{    ///<GPIO port output data register
        using Addr = Register::Address<0x58021014,0xffff0000,0x00000000,std::uint32_t>;
        ///Port output data bit These bits can be              read and written by software. Note: For atomic bit              set/reset, the OD bits can be individually set and/or              reset by writing to the GPIOx_BSRR or GPIOx_BRR              registers (x = A..F).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> od0{}; 
        ///Port output data bit These bits can be              read and written by software. Note: For atomic bit              set/reset, the OD bits can be individually set and/or              reset by writing to the GPIOx_BSRR or GPIOx_BRR              registers (x = A..F).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> od1{}; 
        ///Port output data bit These bits can be              read and written by software. Note: For atomic bit              set/reset, the OD bits can be individually set and/or              reset by writing to the GPIOx_BSRR or GPIOx_BRR              registers (x = A..F).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> od2{}; 
        ///Port output data bit These bits can be              read and written by software. Note: For atomic bit              set/reset, the OD bits can be individually set and/or              reset by writing to the GPIOx_BSRR or GPIOx_BRR              registers (x = A..F).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> od3{}; 
        ///Port output data bit These bits can be              read and written by software. Note: For atomic bit              set/reset, the OD bits can be individually set and/or              reset by writing to the GPIOx_BSRR or GPIOx_BRR              registers (x = A..F).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> od4{}; 
        ///Port output data bit These bits can be              read and written by software. Note: For atomic bit              set/reset, the OD bits can be individually set and/or              reset by writing to the GPIOx_BSRR or GPIOx_BRR              registers (x = A..F).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> od5{}; 
        ///Port output data bit These bits can be              read and written by software. Note: For atomic bit              set/reset, the OD bits can be individually set and/or              reset by writing to the GPIOx_BSRR or GPIOx_BRR              registers (x = A..F).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> od6{}; 
        ///Port output data bit These bits can be              read and written by software. Note: For atomic bit              set/reset, the OD bits can be individually set and/or              reset by writing to the GPIOx_BSRR or GPIOx_BRR              registers (x = A..F).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> od7{}; 
        ///Port output data bit These bits can be              read and written by software. Note: For atomic bit              set/reset, the OD bits can be individually set and/or              reset by writing to the GPIOx_BSRR or GPIOx_BRR              registers (x = A..F).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> od8{}; 
        ///Port output data bit These bits can be              read and written by software. Note: For atomic bit              set/reset, the OD bits can be individually set and/or              reset by writing to the GPIOx_BSRR or GPIOx_BRR              registers (x = A..F).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> od9{}; 
        ///Port output data bit These bits can be              read and written by software. Note: For atomic bit              set/reset, the OD bits can be individually set and/or              reset by writing to the GPIOx_BSRR or GPIOx_BRR              registers (x = A..F).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> od10{}; 
        ///Port output data bit These bits can be              read and written by software. Note: For atomic bit              set/reset, the OD bits can be individually set and/or              reset by writing to the GPIOx_BSRR or GPIOx_BRR              registers (x = A..F).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> od11{}; 
        ///Port output data bit These bits can be              read and written by software. Note: For atomic bit              set/reset, the OD bits can be individually set and/or              reset by writing to the GPIOx_BSRR or GPIOx_BRR              registers (x = A..F).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> od12{}; 
        ///Port output data bit These bits can be              read and written by software. Note: For atomic bit              set/reset, the OD bits can be individually set and/or              reset by writing to the GPIOx_BSRR or GPIOx_BRR              registers (x = A..F).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> od13{}; 
        ///Port output data bit These bits can be              read and written by software. Note: For atomic bit              set/reset, the OD bits can be individually set and/or              reset by writing to the GPIOx_BSRR or GPIOx_BRR              registers (x = A..F).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> od14{}; 
        ///Port output data bit These bits can be              read and written by software. Note: For atomic bit              set/reset, the OD bits can be individually set and/or              reset by writing to the GPIOx_BSRR or GPIOx_BRR              registers (x = A..F).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> od15{}; 
    }
    namespace GpioeGpioaBsrr{    ///<GPIO port bit set/reset          register
        using Addr = Register::Address<0x58021018,0x00000000,0x00000000,std::uint32_t>;
        ///Port x set bit y (y= 0..15) These bits              are write-only. A read to these bits returns the              value 0x0000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bs0{}; 
        ///Port x set bit y (y= 0..15) These bits              are write-only. A read to these bits returns the              value 0x0000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bs1{}; 
        ///Port x set bit y (y= 0..15) These bits              are write-only. A read to these bits returns the              value 0x0000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bs2{}; 
        ///Port x set bit y (y= 0..15) These bits              are write-only. A read to these bits returns the              value 0x0000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bs3{}; 
        ///Port x set bit y (y= 0..15) These bits              are write-only. A read to these bits returns the              value 0x0000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bs4{}; 
        ///Port x set bit y (y= 0..15) These bits              are write-only. A read to these bits returns the              value 0x0000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bs5{}; 
        ///Port x set bit y (y= 0..15) These bits              are write-only. A read to these bits returns the              value 0x0000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bs6{}; 
        ///Port x set bit y (y= 0..15) These bits              are write-only. A read to these bits returns the              value 0x0000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bs7{}; 
        ///Port x set bit y (y= 0..15) These bits              are write-only. A read to these bits returns the              value 0x0000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bs8{}; 
        ///Port x set bit y (y= 0..15) These bits              are write-only. A read to these bits returns the              value 0x0000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bs9{}; 
        ///Port x set bit y (y= 0..15) These bits              are write-only. A read to these bits returns the              value 0x0000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bs10{}; 
        ///Port x set bit y (y= 0..15) These bits              are write-only. A read to these bits returns the              value 0x0000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bs11{}; 
        ///Port x set bit y (y= 0..15) These bits              are write-only. A read to these bits returns the              value 0x0000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bs12{}; 
        ///Port x set bit y (y= 0..15) These bits              are write-only. A read to these bits returns the              value 0x0000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bs13{}; 
        ///Port x set bit y (y= 0..15) These bits              are write-only. A read to these bits returns the              value 0x0000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> bs14{}; 
        ///Port x set bit y (y= 0..15) These bits              are write-only. A read to these bits returns the              value 0x0000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bs15{}; 
        ///Port x reset bit y (y = 0..15) These              bits are write-only. A read to these bits returns the              value 0x0000. Note: If both BSx and BRx are set, BSx              has priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> br0{}; 
        ///Port x reset bit y (y = 0..15) These              bits are write-only. A read to these bits returns the              value 0x0000. Note: If both BSx and BRx are set, BSx              has priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> br1{}; 
        ///Port x reset bit y (y = 0..15) These              bits are write-only. A read to these bits returns the              value 0x0000. Note: If both BSx and BRx are set, BSx              has priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> br2{}; 
        ///Port x reset bit y (y = 0..15) These              bits are write-only. A read to these bits returns the              value 0x0000. Note: If both BSx and BRx are set, BSx              has priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> br3{}; 
        ///Port x reset bit y (y = 0..15) These              bits are write-only. A read to these bits returns the              value 0x0000. Note: If both BSx and BRx are set, BSx              has priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> br4{}; 
        ///Port x reset bit y (y = 0..15) These              bits are write-only. A read to these bits returns the              value 0x0000. Note: If both BSx and BRx are set, BSx              has priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> br5{}; 
        ///Port x reset bit y (y = 0..15) These              bits are write-only. A read to these bits returns the              value 0x0000. Note: If both BSx and BRx are set, BSx              has priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> br6{}; 
        ///Port x reset bit y (y = 0..15) These              bits are write-only. A read to these bits returns the              value 0x0000. Note: If both BSx and BRx are set, BSx              has priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> br7{}; 
        ///Port x reset bit y (y = 0..15) These              bits are write-only. A read to these bits returns the              value 0x0000. Note: If both BSx and BRx are set, BSx              has priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> br8{}; 
        ///Port x reset bit y (y = 0..15) These              bits are write-only. A read to these bits returns the              value 0x0000. Note: If both BSx and BRx are set, BSx              has priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> br9{}; 
        ///Port x reset bit y (y = 0..15) These              bits are write-only. A read to these bits returns the              value 0x0000. Note: If both BSx and BRx are set, BSx              has priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> br10{}; 
        ///Port x reset bit y (y = 0..15) These              bits are write-only. A read to these bits returns the              value 0x0000. Note: If both BSx and BRx are set, BSx              has priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> br11{}; 
        ///Port x reset bit y (y = 0..15) These              bits are write-only. A read to these bits returns the              value 0x0000. Note: If both BSx and BRx are set, BSx              has priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> br12{}; 
        ///Port x reset bit y (y = 0..15) These              bits are write-only. A read to these bits returns the              value 0x0000. Note: If both BSx and BRx are set, BSx              has priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> br13{}; 
        ///Port x reset bit y (y = 0..15) These              bits are write-only. A read to these bits returns the              value 0x0000. Note: If both BSx and BRx are set, BSx              has priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> br14{}; 
        ///Port x reset bit y (y = 0..15) These              bits are write-only. A read to these bits returns the              value 0x0000. Note: If both BSx and BRx are set, BSx              has priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> br15{}; 
    }
    namespace GpioeGpioaLckr{    ///<This register is used to lock the          configuration of the port bits when a correct write          sequence is applied to bit 16 (LCKK). The value of bits          [15:0] is used to lock the configuration of the GPIO.          During the write sequence, the value of LCKR[15:0] must          not change. When the LOCK sequence has been applied on a          port bit, the value of this port bit can no longer be          modified until the next MCU reset or peripheral reset.A          specific write sequence is used to write to the          GPIOx_LCKR register. Only word access (32-bit long) is          allowed during this locking sequence.Each lock bit          freezes a specific configuration register (control and          alternate function registers).
        using Addr = Register::Address<0x5802101c,0xfffe0000,0x00000000,std::uint32_t>;
        ///Port x lock bit y (y= 0..15) These bits              are read/write but can only be written when the LCKK              bit is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lck0{}; 
        ///Port x lock bit y (y= 0..15) These bits              are read/write but can only be written when the LCKK              bit is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lck1{}; 
        ///Port x lock bit y (y= 0..15) These bits              are read/write but can only be written when the LCKK              bit is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lck2{}; 
        ///Port x lock bit y (y= 0..15) These bits              are read/write but can only be written when the LCKK              bit is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lck3{}; 
        ///Port x lock bit y (y= 0..15) These bits              are read/write but can only be written when the LCKK              bit is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lck4{}; 
        ///Port x lock bit y (y= 0..15) These bits              are read/write but can only be written when the LCKK              bit is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lck5{}; 
        ///Port x lock bit y (y= 0..15) These bits              are read/write but can only be written when the LCKK              bit is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lck6{}; 
        ///Port x lock bit y (y= 0..15) These bits              are read/write but can only be written when the LCKK              bit is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lck7{}; 
        ///Port x lock bit y (y= 0..15) These bits              are read/write but can only be written when the LCKK              bit is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lck8{}; 
        ///Port x lock bit y (y= 0..15) These bits              are read/write but can only be written when the LCKK              bit is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lck9{}; 
        ///Port x lock bit y (y= 0..15) These bits              are read/write but can only be written when the LCKK              bit is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lck10{}; 
        ///Port x lock bit y (y= 0..15) These bits              are read/write but can only be written when the LCKK              bit is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lck11{}; 
        ///Port x lock bit y (y= 0..15) These bits              are read/write but can only be written when the LCKK              bit is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lck12{}; 
        ///Port x lock bit y (y= 0..15) These bits              are read/write but can only be written when the LCKK              bit is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lck13{}; 
        ///Port x lock bit y (y= 0..15) These bits              are read/write but can only be written when the LCKK              bit is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> lck14{}; 
        ///Port x lock bit y (y= 0..15) These bits              are read/write but can only be written when the LCKK              bit is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lck15{}; 
        ///Lock key This bit can be read any time.              It can only be modified using the lock key write              sequence. LOCK key write sequence: WR LCKR[16] = 1 +              LCKR[15:0] WR LCKR[16] = 0 + LCKR[15:0] WR LCKR[16] =              1 + LCKR[15:0] RD LCKR RD LCKR[16] = 1 (this read              operation is optional but it confirms that the lock              is active) Note: During the LOCK key write sequence,              the value of LCK[15:0] must not change. Any error in              the lock sequence aborts the lock. After the first              lock sequence on any bit of the port, any read access              on the LCKK bit will return 1 until the next MCU              reset or peripheral reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lckk{}; 
    }
    namespace GpioeGpioaAfrl{    ///<GPIO alternate function low          register
        using Addr = Register::Address<0x58021020,0x00000000,0x00000000,std::uint32_t>;
        ///[3:0]: Alternate function selection for              port x pin y (y = 0..7) These bits are written by              software to configure alternate function I/Os AFSELy              selection:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> afsel0{}; 
        ///[3:0]: Alternate function selection for              port x pin y (y = 0..7) These bits are written by              software to configure alternate function I/Os AFSELy              selection:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> afsel1{}; 
        ///[3:0]: Alternate function selection for              port x pin y (y = 0..7) These bits are written by              software to configure alternate function I/Os AFSELy              selection:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> afsel2{}; 
        ///[3:0]: Alternate function selection for              port x pin y (y = 0..7) These bits are written by              software to configure alternate function I/Os AFSELy              selection:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> afsel3{}; 
        ///[3:0]: Alternate function selection for              port x pin y (y = 0..7) These bits are written by              software to configure alternate function I/Os AFSELy              selection:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> afsel4{}; 
        ///[3:0]: Alternate function selection for              port x pin y (y = 0..7) These bits are written by              software to configure alternate function I/Os AFSELy              selection:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> afsel5{}; 
        ///[3:0]: Alternate function selection for              port x pin y (y = 0..7) These bits are written by              software to configure alternate function I/Os AFSELy              selection:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> afsel6{}; 
        ///[3:0]: Alternate function selection for              port x pin y (y = 0..7) These bits are written by              software to configure alternate function I/Os AFSELy              selection:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> afsel7{}; 
    }
    namespace GpioeGpioaAfrh{    ///<GPIO alternate function high          register
        using Addr = Register::Address<0x58021024,0x00000000,0x00000000,std::uint32_t>;
        ///[3:0]: Alternate function selection for              port x pin y (y = 8..15) These bits are written by              software to configure alternate function              I/Os
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> afsel8{}; 
        ///[3:0]: Alternate function selection for              port x pin y (y = 8..15) These bits are written by              software to configure alternate function              I/Os
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> afsel9{}; 
        ///[3:0]: Alternate function selection for              port x pin y (y = 8..15) These bits are written by              software to configure alternate function              I/Os
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> afsel10{}; 
        ///[3:0]: Alternate function selection for              port x pin y (y = 8..15) These bits are written by              software to configure alternate function              I/Os
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> afsel11{}; 
        ///[3:0]: Alternate function selection for              port x pin y (y = 8..15) These bits are written by              software to configure alternate function              I/Os
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> afsel12{}; 
        ///[3:0]: Alternate function selection for              port x pin y (y = 8..15) These bits are written by              software to configure alternate function              I/Os
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> afsel13{}; 
        ///[3:0]: Alternate function selection for              port x pin y (y = 8..15) These bits are written by              software to configure alternate function              I/Os
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> afsel14{}; 
        ///[3:0]: Alternate function selection for              port x pin y (y = 8..15) These bits are written by              software to configure alternate function              I/Os
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> afsel15{}; 
    }
}
