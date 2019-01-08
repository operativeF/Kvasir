#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Analog-to-digital converter
    namespace Adc3Sr{    ///<status register
        using Addr = Register::Address<0x40012200,0xffffffc0,0x00000000,std::uint32_t>;
        ///Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Regular channel start flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> strt{}; 
        ///Injected channel start              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jstrt{}; 
        ///Injected channel end of              conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jeoc{}; 
        ///Regular channel end of              conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc{}; 
        ///Analog watchdog flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> awd{}; 
    }
    namespace Adc3Cr1{    ///<control register 1
        using Addr = Register::Address<0x40012204,0xf83f0000,0x00000000,std::uint32_t>;
        ///Overrun interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ovrie{}; 
        ///Resolution
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> res{}; 
        ///Analog watchdog enable on regular              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> awden{}; 
        ///Analog watchdog enable on injected              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> jawden{}; 
        ///Discontinuous mode channel              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> discnum{}; 
        ///Discontinuous mode on injected              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> jdiscen{}; 
        ///Discontinuous mode on regular              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> discen{}; 
        ///Automatic injected group              conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jauto{}; 
        ///Enable the watchdog on a single channel              in scan mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awdsgl{}; 
        ///Scan mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> scan{}; 
        ///Interrupt enable for injected              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> jeocie{}; 
        ///Analog watchdog interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> awdie{}; 
        ///Interrupt enable for EOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eocie{}; 
        ///Analog watchdog channel select              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> awdch{}; 
    }
    namespace Adc3Cr2{    ///<control register 2
        using Addr = Register::Address<0x40012208,0x8080f0fc,0x00000000,std::uint32_t>;
        ///Start conversion of regular              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swstart{}; 
        ///External trigger enable for regular              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> exten{}; 
        ///External event select for regular              group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> extsel{}; 
        ///Start conversion of injected              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> jswstart{}; 
        ///External trigger enable for injected              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///External event select for injected              group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///Data alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> align{}; 
        ///End of conversion              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eocs{}; 
        ///DMA disable selection (for single ADC              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dds{}; 
        ///Direct memory access mode (for single              ADC mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Continuous conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cont{}; 
        ///A/D Converter ON / OFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adon{}; 
    }
    namespace Adc3Smpr1{    ///<sample time register 1
        using Addr = Register::Address<0x4001220c,0x00000000,0x00000000,std::uint32_t>;
        ///Sample time bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> smpxX{}; 
    }
    namespace Adc3Smpr2{    ///<sample time register 2
        using Addr = Register::Address<0x40012210,0x00000000,0x00000000,std::uint32_t>;
        ///Sample time bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> smpxX{}; 
    }
    namespace Adc3Jofr1{    ///<injected channel data offset register          x
        using Addr = Register::Address<0x40012214,0xfffff000,0x00000000,std::uint32_t>;
        ///Data offset for injected channel              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> joffset1{}; 
    }
    namespace Adc3Jofr2{    ///<injected channel data offset register          x
        using Addr = Register::Address<0x40012218,0xfffff000,0x00000000,std::uint32_t>;
        ///Data offset for injected channel              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> joffset2{}; 
    }
    namespace Adc3Jofr3{    ///<injected channel data offset register          x
        using Addr = Register::Address<0x4001221c,0xfffff000,0x00000000,std::uint32_t>;
        ///Data offset for injected channel              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> joffset3{}; 
    }
    namespace Adc3Jofr4{    ///<injected channel data offset register          x
        using Addr = Register::Address<0x40012220,0xfffff000,0x00000000,std::uint32_t>;
        ///Data offset for injected channel              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> joffset4{}; 
    }
    namespace Adc3Htr{    ///<watchdog higher threshold          register
        using Addr = Register::Address<0x40012224,0xfffff000,0x00000000,std::uint32_t>;
        ///Analog watchdog higher              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ht{}; 
    }
    namespace Adc3Ltr{    ///<watchdog lower threshold          register
        using Addr = Register::Address<0x40012228,0xfffff000,0x00000000,std::uint32_t>;
        ///Analog watchdog lower              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> lt{}; 
    }
    namespace Adc3Sqr1{    ///<regular sequence register 1
        using Addr = Register::Address<0x4001222c,0xff000000,0x00000000,std::uint32_t>;
        ///Regular channel sequence              length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> l{}; 
        ///16th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> sq16{}; 
        ///15th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> sq15{}; 
        ///14th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> sq14{}; 
        ///13th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq13{}; 
    }
    namespace Adc3Sqr2{    ///<regular sequence register 2
        using Addr = Register::Address<0x40012230,0xc0000000,0x00000000,std::uint32_t>;
        ///12th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> sq12{}; 
        ///11th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> sq11{}; 
        ///10th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> sq10{}; 
        ///9th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> sq9{}; 
        ///8th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> sq8{}; 
        ///7th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq7{}; 
    }
    namespace Adc3Sqr3{    ///<regular sequence register 3
        using Addr = Register::Address<0x40012234,0xc0000000,0x00000000,std::uint32_t>;
        ///6th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> sq6{}; 
        ///5th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> sq5{}; 
        ///4th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> sq4{}; 
        ///3rd conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> sq3{}; 
        ///2nd conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> sq2{}; 
        ///1st conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq1{}; 
    }
    namespace Adc3Jsqr{    ///<injected sequence register
        using Addr = Register::Address<0x40012238,0xffc00000,0x00000000,std::uint32_t>;
        ///Injected sequence length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> jl{}; 
        ///4th conversion in injected              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> jsq4{}; 
        ///3rd conversion in injected              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> jsq3{}; 
        ///2nd conversion in injected              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> jsq2{}; 
        ///1st conversion in injected              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> jsq1{}; 
    }
    namespace Adc3Jdr1{    ///<injected data register x
        using Addr = Register::Address<0x4001223c,0xffff0000,0x00000000,std::uint32_t>;
        ///Injected data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace Adc3Jdr2{    ///<injected data register x
        using Addr = Register::Address<0x40012240,0xffff0000,0x00000000,std::uint32_t>;
        ///Injected data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace Adc3Jdr3{    ///<injected data register x
        using Addr = Register::Address<0x40012244,0xffff0000,0x00000000,std::uint32_t>;
        ///Injected data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace Adc3Jdr4{    ///<injected data register x
        using Addr = Register::Address<0x40012248,0xffff0000,0x00000000,std::uint32_t>;
        ///Injected data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace Adc3Dr{    ///<regular data register
        using Addr = Register::Address<0x4001224c,0xffff0000,0x00000000,std::uint32_t>;
        ///Regular data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
}
