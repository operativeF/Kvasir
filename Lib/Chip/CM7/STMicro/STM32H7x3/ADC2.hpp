#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Analog to Digital Converter
    namespace Adc2Isr{    ///<ADC interrupt and status          register
        using Addr = Register::Address<0x40022100,0xfffff800,0x00000000,std::uint32_t>;
        ///ADC group injected contexts queue              overflow flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jqovf{}; 
        ///ADC analog watchdog 3 flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awd3{}; 
        ///ADC analog watchdog 2 flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> awd2{}; 
        ///ADC analog watchdog 1 flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awd1{}; 
        ///ADC group injected end of sequence              conversions flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> jeos{}; 
        ///ADC group injected end of unitary              conversion flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jeoc{}; 
        ///ADC group regular overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///ADC group regular end of sequence              conversions flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eos{}; 
        ///ADC group regular end of unitary              conversion flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc{}; 
        ///ADC group regular end of sampling              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmp{}; 
        ///ADC ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdy{}; 
    }
    namespace Adc2Ier{    ///<ADC interrupt enable register
        using Addr = Register::Address<0x40022104,0xfffff800,0x00000000,std::uint32_t>;
        ///ADC group injected contexts queue              overflow interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jqovfie{}; 
        ///ADC analog watchdog 3              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awd3ie{}; 
        ///ADC analog watchdog 2              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> awd2ie{}; 
        ///ADC analog watchdog 1              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awd1ie{}; 
        ///ADC group injected end of sequence              conversions interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> jeosie{}; 
        ///ADC group injected end of unitary              conversion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jeocie{}; 
        ///ADC group regular overrun              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovrie{}; 
        ///ADC group regular end of sequence              conversions interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eosie{}; 
        ///ADC group regular end of unitary              conversion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eocie{}; 
        ///ADC group regular end of sampling              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmpie{}; 
        ///ADC ready interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdyie{}; 
    }
    namespace Adc2Cr{    ///<ADC control register
        using Addr = Register::Address<0x40022108,0x003efec0,0x00000000,std::uint32_t>;
        ///ADC calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> adcal{}; 
        ///ADC differential mode for              calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> adcaldif{}; 
        ///ADC deep power down enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> deeppwd{}; 
        ///ADC voltage regulator              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> advregen{}; 
        ///Linearity calibration ready Word              6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> lincalrdyw6{}; 
        ///Linearity calibration ready Word              5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> lincalrdyw5{}; 
        ///Linearity calibration ready Word              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> lincalrdyw4{}; 
        ///Linearity calibration ready Word              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> lincalrdyw3{}; 
        ///Linearity calibration ready Word              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> lincalrdyw2{}; 
        ///Linearity calibration ready Word              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lincalrdyw1{}; 
        ///Linearity calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adcallin{}; 
        ///Boost mode control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> boost{}; 
        ///ADC group injected conversion              stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jadstp{}; 
        ///ADC group regular conversion              stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adstp{}; 
        ///ADC group injected conversion              start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jadstart{}; 
        ///ADC group regular conversion              start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adstart{}; 
        ///ADC disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> addis{}; 
        ///ADC enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aden{}; 
    }
    namespace Adc2Cfgr{    ///<ADC configuration register 1
        using Addr = Register::Address<0x4002210c,0x00008010,0x00000000,std::uint32_t>;
        ///ADC group injected contexts queue              disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> jqdis{}; 
        ///ADC analog watchdog 1 monitored channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> awdch1ch{}; 
        ///ADC group injected automatic trigger              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> jauto{}; 
        ///ADC analog watchdog 1 enable on scope              ADC group injected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> jawd1en{}; 
        ///ADC analog watchdog 1 enable on scope              ADC group regular
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> awd1en{}; 
        ///ADC analog watchdog 1 monitoring a              single channel or all channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> awd1sgl{}; 
        ///ADC group injected contexts queue              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> jqm{}; 
        ///ADC group injected sequencer              discontinuous mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> jdiscen{}; 
        ///ADC group regular sequencer              discontinuous number of ranks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> discnum{}; 
        ///ADC group regular sequencer              discontinuous mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> discen{}; 
        ///ADC low power auto wait
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> autdly{}; 
        ///ADC group regular continuous conversion              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cont{}; 
        ///ADC group regular overrun              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovrmod{}; 
        ///ADC group regular external trigger              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> exten{}; 
        ///ADC group regular external trigger              source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> extsel{}; 
        ///ADC data resolution
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> res{}; 
        ///ADC DMA transfer enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> dmngt{}; 
    }
    namespace Adc2Cfgr2{    ///<ADC configuration register 2
        using Addr = Register::Address<0x40022110,0x0c00801c,0x00000000,std::uint32_t>;
        ///ADC oversampler enable on scope ADC              group regular
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rovse{}; 
        ///ADC oversampler enable on scope ADC              group injected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jovse{}; 
        ///ADC oversampling shift
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,5),Register::ReadWriteAccess,unsigned> ovss{}; 
        ///ADC oversampling discontinuous mode              (triggered mode) for ADC group regular
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> trovs{}; 
        ///Regular Oversampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovsm{}; 
        ///Right-shift data after Offset 1              correction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rshift1{}; 
        ///Right-shift data after Offset 2              correction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rshift2{}; 
        ///Right-shift data after Offset 3              correction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rshift3{}; 
        ///Right-shift data after Offset 4              correction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rshift4{}; 
        ///Oversampling ratio
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> osr{}; 
        ///Left shift factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> lshift{}; 
    }
    namespace Adc2Smpr1{    ///<ADC sampling time register 1
        using Addr = Register::Address<0x40022114,0xc0000007,0x00000000,std::uint32_t>;
        ///ADC channel 9 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,27),Register::ReadWriteAccess,unsigned> smp9{}; 
        ///ADC channel 8 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> smp8{}; 
        ///ADC channel 7 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> smp7{}; 
        ///ADC channel 6 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> smp6{}; 
        ///ADC channel 5 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> smp5{}; 
        ///ADC channel 4 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> smp4{}; 
        ///ADC channel 3 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> smp3{}; 
        ///ADC channel 2 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> smp2{}; 
        ///ADC channel 1 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> smp1{}; 
    }
    namespace Adc2Smpr2{    ///<ADC sampling time register 2
        using Addr = Register::Address<0x40022118,0xc0000000,0x00000000,std::uint32_t>;
        ///ADC channel 18 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,27),Register::ReadWriteAccess,unsigned> smp19{}; 
        ///ADC channel 18 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> smp18{}; 
        ///ADC channel 17 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> smp17{}; 
        ///ADC channel 16 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> smp16{}; 
        ///ADC channel 15 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> smp15{}; 
        ///ADC channel 14 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> smp14{}; 
        ///ADC channel 13 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> smp13{}; 
        ///ADC channel 12 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> smp12{}; 
        ///ADC channel 11 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> smp11{}; 
        ///ADC channel 10 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> smp10{}; 
    }
    namespace Adc2Ltr1{    ///<ADC analog watchdog 1 threshold          register
        using Addr = Register::Address<0x40022120,0xfc000000,0x00000000,std::uint32_t>;
        ///ADC analog watchdog 1 threshold              low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> ltr1{}; 
    }
    namespace Adc2Lhtr1{    ///<ADC analog watchdog 2 threshold          register
        using Addr = Register::Address<0x40022124,0xfc000000,0x00000000,std::uint32_t>;
        ///ADC analog watchdog 2 threshold              low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> lhtr1{}; 
    }
    namespace Adc2Sqr1{    ///<ADC group regular sequencer ranks register          1
        using Addr = Register::Address<0x40022130,0xe0820830,0x00000000,std::uint32_t>;
        ///ADC group regular sequencer rank              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> sq4{}; 
        ///ADC group regular sequencer rank              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> sq3{}; 
        ///ADC group regular sequencer rank              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> sq2{}; 
        ///ADC group regular sequencer rank              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq1{}; 
        ///L3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> l3{}; 
    }
    namespace Adc2Sqr2{    ///<ADC group regular sequencer ranks register          2
        using Addr = Register::Address<0x40022134,0xe0820820,0x00000000,std::uint32_t>;
        ///ADC group regular sequencer rank              9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> sq9{}; 
        ///ADC group regular sequencer rank              8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> sq8{}; 
        ///ADC group regular sequencer rank              7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> sq7{}; 
        ///ADC group regular sequencer rank              6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq6{}; 
        ///ADC group regular sequencer rank              5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq5{}; 
    }
    namespace Adc2Sqr3{    ///<ADC group regular sequencer ranks register          3
        using Addr = Register::Address<0x40022138,0xe0820820,0x00000000,std::uint32_t>;
        ///ADC group regular sequencer rank              14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> sq14{}; 
        ///ADC group regular sequencer rank              13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> sq13{}; 
        ///ADC group regular sequencer rank              12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> sq12{}; 
        ///ADC group regular sequencer rank              11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq11{}; 
        ///ADC group regular sequencer rank              10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq10{}; 
    }
    namespace Adc2Sqr4{    ///<ADC group regular sequencer ranks register          4
        using Addr = Register::Address<0x4002213c,0xfffff820,0x00000000,std::uint32_t>;
        ///ADC group regular sequencer rank              16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq16{}; 
        ///ADC group regular sequencer rank              15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq15{}; 
    }
    namespace Adc2Dr{    ///<ADC group regular conversion data          register
        using Addr = Register::Address<0x40022140,0xffff0000,0x00000000,std::uint32_t>;
        ///ADC group regular conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rdata{}; 
    }
    namespace Adc2Jsqr{    ///<ADC group injected sequencer          register
        using Addr = Register::Address<0x4002214c,0x04104000,0x00000000,std::uint32_t>;
        ///ADC group injected sequencer rank              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,unsigned> jsq4{}; 
        ///ADC group injected sequencer rank              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> jsq3{}; 
        ///ADC group injected sequencer rank              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> jsq2{}; 
        ///ADC group injected sequencer rank              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> jsq1{}; 
        ///ADC group injected external trigger              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///ADC group injected external trigger              source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///ADC group injected sequencer scan              length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> jl{}; 
    }
    namespace Adc2Ofr1{    ///<ADC offset number 1 register
        using Addr = Register::Address<0x40022160,0x00000000,0x00000000,std::uint32_t>;
        ///ADC offset number 1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ssate{}; 
        ///ADC offset number 1 channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset1Ch{}; 
        ///ADC offset number 1 offset              level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> offset1{}; 
    }
    namespace Adc2Ofr2{    ///<ADC offset number 2 register
        using Addr = Register::Address<0x40022164,0x00000000,0x00000000,std::uint32_t>;
        ///ADC offset number 1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ssate{}; 
        ///ADC offset number 1 channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset1Ch{}; 
        ///ADC offset number 1 offset              level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> offset1{}; 
    }
    namespace Adc2Ofr3{    ///<ADC offset number 3 register
        using Addr = Register::Address<0x40022168,0x00000000,0x00000000,std::uint32_t>;
        ///ADC offset number 1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ssate{}; 
        ///ADC offset number 1 channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset1Ch{}; 
        ///ADC offset number 1 offset              level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> offset1{}; 
    }
    namespace Adc2Ofr4{    ///<ADC offset number 4 register
        using Addr = Register::Address<0x4002216c,0x00000000,0x00000000,std::uint32_t>;
        ///ADC offset number 1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ssate{}; 
        ///ADC offset number 1 channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset1Ch{}; 
        ///ADC offset number 1 offset              level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> offset1{}; 
    }
    namespace Adc2Jdr1{    ///<ADC group injected sequencer rank 1          register
        using Addr = Register::Address<0x40022180,0x00000000,0x00000000,std::uint32_t>;
        ///ADC group injected sequencer rank 1              conversion data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> jdata1{}; 
    }
    namespace Adc2Jdr2{    ///<ADC group injected sequencer rank 2          register
        using Addr = Register::Address<0x40022184,0x00000000,0x00000000,std::uint32_t>;
        ///ADC group injected sequencer rank 2              conversion data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> jdata2{}; 
    }
    namespace Adc2Jdr3{    ///<ADC group injected sequencer rank 3          register
        using Addr = Register::Address<0x40022188,0x00000000,0x00000000,std::uint32_t>;
        ///ADC group injected sequencer rank 3              conversion data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> jdata3{}; 
    }
    namespace Adc2Jdr4{    ///<ADC group injected sequencer rank 4          register
        using Addr = Register::Address<0x4002218c,0x00000000,0x00000000,std::uint32_t>;
        ///ADC group injected sequencer rank 4              conversion data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> jdata4{}; 
    }
    namespace Adc2Awd2cr{    ///<ADC analog watchdog 2 configuration          register
        using Addr = Register::Address<0x400221a0,0xfff00000,0x00000000,std::uint32_t>;
        ///ADC analog watchdog 2 monitored channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> awd2ch{}; 
    }
    namespace Adc2Awd3cr{    ///<ADC analog watchdog 3 configuration          register
        using Addr = Register::Address<0x400221a4,0xffe00001,0x00000000,std::uint32_t>;
        ///ADC analog watchdog 3 monitored channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,1),Register::ReadWriteAccess,unsigned> awd3ch{}; 
    }
    namespace Adc2Difsel{    ///<ADC channel differential or single-ended          mode selection register
        using Addr = Register::Address<0x400221c0,0xfff00000,0x00000000,std::uint32_t>;
        ///ADC channel differential or single-ended              mode for channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> difsel{}; 
    }
    namespace Adc2Calfact{    ///<ADC calibration factors          register
        using Addr = Register::Address<0x400221c4,0xf800f800,0x00000000,std::uint32_t>;
        ///ADC calibration factor in differential              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> calfactD{}; 
        ///ADC calibration factor in single-ended              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> calfactS{}; 
    }
    namespace Adc2Ccr{    ///<ADC common control register
        using Addr = Register::Address<0x40022108,0xfe00ffff,0x00000000,std::uint32_t>;
        ///ADC clock mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ckmode{}; 
        ///ADC prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> presc{}; 
        ///VREFINT enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> vrefen{}; 
        ///Temperature sensor enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tsen{}; 
        ///VBAT enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> vbaten{}; 
    }
    namespace Adc2Pcsel{    ///<ADC pre channel selection          register
        using Addr = Register::Address<0x4002211c,0xfff00000,0x00000000,std::uint32_t>;
        ///Channel x (VINP[i]) pre              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> pcsel{}; 
    }
    namespace Adc2Ltr2{    ///<ADC watchdog lower threshold register          2
        using Addr = Register::Address<0x400221b0,0xfc000000,0x00000000,std::uint32_t>;
        ///Analog watchdog 2 lower              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> ltr2{}; 
    }
    namespace Adc2Htr2{    ///<ADC watchdog higher threshold register          2
        using Addr = Register::Address<0x400221b4,0xfc000000,0x00000000,std::uint32_t>;
        ///Analog watchdog 2 higher              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> htr2{}; 
    }
    namespace Adc2Ltr3{    ///<ADC watchdog lower threshold register          3
        using Addr = Register::Address<0x400221b8,0xfc000000,0x00000000,std::uint32_t>;
        ///Analog watchdog 3 lower              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> ltr3{}; 
    }
    namespace Adc2Htr3{    ///<ADC watchdog higher threshold register          3
        using Addr = Register::Address<0x400221bc,0xfc000000,0x00000000,std::uint32_t>;
        ///Analog watchdog 3 higher              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> htr3{}; 
    }
    namespace Adc2Calfact2{    ///<ADC Calibration Factor register          2
        using Addr = Register::Address<0x400221c8,0xc0000000,0x00000000,std::uint32_t>;
        ///Linearity Calibration              Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> lincalfact{}; 
    }
}
