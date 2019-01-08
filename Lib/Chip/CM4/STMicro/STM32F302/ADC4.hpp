#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Analog-to-Digital Converter
    namespace Adc4Isr{    ///<interrupt and status register
        using Addr = Register::Address<0x50000500,0xfffff800,0x00000000,std::uint32_t>;
        ///JQOVF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jqovf{}; 
        ///AWD3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awd3{}; 
        ///AWD2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> awd2{}; 
        ///AWD1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awd1{}; 
        ///JEOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> jeos{}; 
        ///JEOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jeoc{}; 
        ///OVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///EOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eos{}; 
        ///EOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc{}; 
        ///EOSMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmp{}; 
        ///ADRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdy{}; 
    }
    namespace Adc4Ier{    ///<interrupt enable register
        using Addr = Register::Address<0x50000504,0xfffff800,0x00000000,std::uint32_t>;
        ///JQOVFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jqovfie{}; 
        ///AWD3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awd3ie{}; 
        ///AWD2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> awd2ie{}; 
        ///AWD1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awd1ie{}; 
        ///JEOSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> jeosie{}; 
        ///JEOCIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jeocie{}; 
        ///OVRIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovrie{}; 
        ///EOSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eosie{}; 
        ///EOCIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eocie{}; 
        ///EOSMPIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmpie{}; 
        ///ADRDYIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdyie{}; 
    }
    namespace Adc4Cr{    ///<control register
        using Addr = Register::Address<0x50000508,0x0fffffc0,0x00000000,std::uint32_t>;
        ///ADCAL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> adcal{}; 
        ///ADCALDIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> adcaldif{}; 
        ///DEEPPWD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> deeppwd{}; 
        ///ADVREGEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> advregen{}; 
        ///JADSTP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jadstp{}; 
        ///ADSTP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adstp{}; 
        ///JADSTART
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jadstart{}; 
        ///ADSTART
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adstart{}; 
        ///ADDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> addis{}; 
        ///ADEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aden{}; 
    }
    namespace Adc4Cfgr{    ///<configuration register
        using Addr = Register::Address<0x5000050c,0x80000004,0x00000000,std::uint32_t>;
        ///AWDCH1CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> awdch1ch{}; 
        ///JAUTO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> jauto{}; 
        ///JAWD1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> jawd1en{}; 
        ///AWD1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> awd1en{}; 
        ///AWD1SGL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> awd1sgl{}; 
        ///JQM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> jqm{}; 
        ///JDISCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> jdiscen{}; 
        ///DISCNUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> discnum{}; 
        ///DISCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> discen{}; 
        ///AUTOFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> autoff{}; 
        ///AUTDLY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> autdly{}; 
        ///CONT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cont{}; 
        ///OVRMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovrmod{}; 
        ///EXTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> exten{}; 
        ///EXTSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> extsel{}; 
        ///ALIGN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> align{}; 
        ///RES
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> res{}; 
        ///DMACFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmacfg{}; 
        ///DMAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen{}; 
    }
    namespace Adc4Smpr1{    ///<sample time register 1
        using Addr = Register::Address<0x50000514,0xc0000007,0x00000000,std::uint32_t>;
        ///SMP9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,27),Register::ReadWriteAccess,unsigned> smp9{}; 
        ///SMP8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> smp8{}; 
        ///SMP7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> smp7{}; 
        ///SMP6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> smp6{}; 
        ///SMP5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> smp5{}; 
        ///SMP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> smp4{}; 
        ///SMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> smp3{}; 
        ///SMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> smp2{}; 
        ///SMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> smp1{}; 
    }
    namespace Adc4Smpr2{    ///<sample time register 2
        using Addr = Register::Address<0x50000518,0xf8000000,0x00000000,std::uint32_t>;
        ///SMP18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> smp18{}; 
        ///SMP17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> smp17{}; 
        ///SMP16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> smp16{}; 
        ///SMP15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> smp15{}; 
        ///SMP14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> smp14{}; 
        ///SMP13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> smp13{}; 
        ///SMP12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> smp12{}; 
        ///SMP11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> smp11{}; 
        ///SMP10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> smp10{}; 
    }
    namespace Adc4Tr1{    ///<watchdog threshold register 1
        using Addr = Register::Address<0x50000520,0xf000f000,0x00000000,std::uint32_t>;
        ///HT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> ht1{}; 
        ///LT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> lt1{}; 
    }
    namespace Adc4Tr2{    ///<watchdog threshold register
        using Addr = Register::Address<0x50000524,0xff00ff00,0x00000000,std::uint32_t>;
        ///HT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ht2{}; 
        ///LT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lt2{}; 
    }
    namespace Adc4Tr3{    ///<watchdog threshold register 3
        using Addr = Register::Address<0x50000528,0xff00ff00,0x00000000,std::uint32_t>;
        ///HT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ht3{}; 
        ///LT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lt3{}; 
    }
    namespace Adc4Sqr1{    ///<regular sequence register 1
        using Addr = Register::Address<0x50000530,0xe0820830,0x00000000,std::uint32_t>;
        ///SQ4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> sq4{}; 
        ///SQ3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> sq3{}; 
        ///SQ2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> sq2{}; 
        ///SQ1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq1{}; 
        ///L3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> l3{}; 
    }
    namespace Adc4Sqr2{    ///<regular sequence register 2
        using Addr = Register::Address<0x50000534,0xe0820820,0x00000000,std::uint32_t>;
        ///SQ9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> sq9{}; 
        ///SQ8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> sq8{}; 
        ///SQ7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> sq7{}; 
        ///SQ6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq6{}; 
        ///SQ5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq5{}; 
    }
    namespace Adc4Sqr3{    ///<regular sequence register 3
        using Addr = Register::Address<0x50000538,0xe0820820,0x00000000,std::uint32_t>;
        ///SQ14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> sq14{}; 
        ///SQ13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> sq13{}; 
        ///SQ12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> sq12{}; 
        ///SQ11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq11{}; 
        ///SQ10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq10{}; 
    }
    namespace Adc4Sqr4{    ///<regular sequence register 4
        using Addr = Register::Address<0x5000053c,0xfffff820,0x00000000,std::uint32_t>;
        ///SQ16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq16{}; 
        ///SQ15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq15{}; 
    }
    namespace Adc4Dr{    ///<regular Data Register
        using Addr = Register::Address<0x50000540,0xffff0000,0x00000000,std::uint32_t>;
        ///regularDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> regulardata{}; 
    }
    namespace Adc4Jsqr{    ///<injected sequence register
        using Addr = Register::Address<0x5000054c,0x82082000,0x00000000,std::uint32_t>;
        ///JSQ4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> jsq4{}; 
        ///JSQ3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> jsq3{}; 
        ///JSQ2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,14),Register::ReadWriteAccess,unsigned> jsq2{}; 
        ///JSQ1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> jsq1{}; 
        ///JEXTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///JEXTSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///JL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> jl{}; 
    }
    namespace Adc4Ofr1{    ///<offset register 1
        using Addr = Register::Address<0x50000560,0x03fff000,0x00000000,std::uint32_t>;
        ///OFFSET1_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> offset1En{}; 
        ///OFFSET1_CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset1Ch{}; 
        ///OFFSET1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset1{}; 
    }
    namespace Adc4Ofr2{    ///<offset register 2
        using Addr = Register::Address<0x50000564,0x03fff000,0x00000000,std::uint32_t>;
        ///OFFSET2_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> offset2En{}; 
        ///OFFSET2_CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset2Ch{}; 
        ///OFFSET2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset2{}; 
    }
    namespace Adc4Ofr3{    ///<offset register 3
        using Addr = Register::Address<0x50000568,0x03fff000,0x00000000,std::uint32_t>;
        ///OFFSET3_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> offset3En{}; 
        ///OFFSET3_CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset3Ch{}; 
        ///OFFSET3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset3{}; 
    }
    namespace Adc4Ofr4{    ///<offset register 4
        using Addr = Register::Address<0x5000056c,0x03fff000,0x00000000,std::uint32_t>;
        ///OFFSET4_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> offset4En{}; 
        ///OFFSET4_CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset4Ch{}; 
        ///OFFSET4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset4{}; 
    }
    namespace Adc4Jdr1{    ///<injected data register 1
        using Addr = Register::Address<0x50000580,0xffff0000,0x00000000,std::uint32_t>;
        ///JDATA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata1{}; 
    }
    namespace Adc4Jdr2{    ///<injected data register 2
        using Addr = Register::Address<0x50000584,0xffff0000,0x00000000,std::uint32_t>;
        ///JDATA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata2{}; 
    }
    namespace Adc4Jdr3{    ///<injected data register 3
        using Addr = Register::Address<0x50000588,0xffff0000,0x00000000,std::uint32_t>;
        ///JDATA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata3{}; 
    }
    namespace Adc4Jdr4{    ///<injected data register 4
        using Addr = Register::Address<0x5000058c,0xffff0000,0x00000000,std::uint32_t>;
        ///JDATA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata4{}; 
    }
    namespace Adc4Awd2cr{    ///<Analog Watchdog 2 Configuration          Register
        using Addr = Register::Address<0x500005a0,0xfff80001,0x00000000,std::uint32_t>;
        ///AWD2CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,1),Register::ReadWriteAccess,unsigned> awd2ch{}; 
    }
    namespace Adc4Awd3cr{    ///<Analog Watchdog 3 Configuration          Register
        using Addr = Register::Address<0x500005a4,0xfff80001,0x00000000,std::uint32_t>;
        ///AWD3CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,1),Register::ReadWriteAccess,unsigned> awd3ch{}; 
    }
    namespace Adc4Difsel{    ///<Differential Mode Selection Register          2
        using Addr = Register::Address<0x500005b0,0xfff80001,0x00000000,std::uint32_t>;
        ///Differential mode for channels 15 to              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,1),Register::ReadWriteAccess,unsigned> difsel115{}; 
        ///Differential mode for channels 18 to              16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> difsel1618{}; 
    }
    namespace Adc4Calfact{    ///<Calibration Factors
        using Addr = Register::Address<0x500005b4,0xff80ff80,0x00000000,std::uint32_t>;
        ///CALFACT_D
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> calfactD{}; 
        ///CALFACT_S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> calfactS{}; 
    }
}
