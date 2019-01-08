#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Analog to digital converter
    namespace AdcIsr{    ///<ADC interrupt and status          register
        using Addr = Register::Address<0x50000000,0xfffff800,0x00000000,std::uint32_t>;
        ///Injected context queue              overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jqovf{}; 
        ///Analog watchdog 3 flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awd3{}; 
        ///Analog watchdog 2 flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> awd2{}; 
        ///Analog watchdog 1 flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awd1{}; 
        ///Injected channel end of sequence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> jeos{}; 
        ///Injected channel end of conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jeoc{}; 
        ///ADC overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///End of regular sequence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eos{}; 
        ///End of conversion flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc{}; 
        ///End of sampling flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmp{}; 
        ///ADC ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdy{}; 
    }
    namespace AdcIer{    ///<ADC interrupt enable register
        using Addr = Register::Address<0x50000004,0xfffff800,0x00000000,std::uint32_t>;
        ///Injected context queue overflow              interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jqovfie{}; 
        ///Analog watchdog 3 interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awd3ie{}; 
        ///Analog watchdog 2 interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> awd2ie{}; 
        ///Analog watchdog 1 interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awd1ie{}; 
        ///End of injected sequence of conversions              interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> jeosie{}; 
        ///End of injected conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jeocie{}; 
        ///Overrun interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovrie{}; 
        ///End of regular sequence of conversions              interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eosie{}; 
        ///End of regular conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eocie{}; 
        ///End of sampling flag interrupt enable              for regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmpie{}; 
        ///ADC ready interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdyie{}; 
    }
    namespace AdcCr{    ///<ADC control register
        using Addr = Register::Address<0x50000008,0x0fffffc0,0x00000000,std::uint32_t>;
        ///ADC calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcal{}; 
        ///Differential mode for              calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> adcaldif{}; 
        ///ADC voltage regulator              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> advregen{}; 
        ///ADC stop of injected conversion              command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> jadst{}; 
        ///ADC stop of regular conversion              command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adstp{}; 
        ///ADC start of injected              conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> jadstart{}; 
        ///ADC start of regular              conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adstart{}; 
        ///ADC disable command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> addis{}; 
        ///ADC enable control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> aden{}; 
    }
    namespace AdcCfgr{    ///<ADC configuration register
        using Addr = Register::Address<0x5000000c,0x80008004,0x00000000,std::uint32_t>;
        ///Analog watchdog 1 channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> awd1ch{}; 
        ///Automatic injected group              conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> jauto{}; 
        ///Analog watchdog 1 enable on injected              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> jawd1en{}; 
        ///Analog watchdog 1 enable on regular              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> awd1en{}; 
        ///Enable the watchdog 1 on a single              channel or on all channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> awd1sgl{}; 
        ///JSQR queue mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> jqm{}; 
        ///Discontinuous mode on injected              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> jdiscen{}; 
        ///Discontinuous mode channel              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> discnum{}; 
        ///Discontinuous mode for regular              channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> discen{}; 
        ///Delayed conversion mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> autdly{}; 
        ///Single / continuous conversion mode for              regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cont{}; 
        ///Overrun Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovrmod{}; 
        ///External trigger enable and polarity              selection for regular channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> exten{}; 
        ///External trigger selection for regular              group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> extsel{}; 
        ///Data alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> align{}; 
        ///Data resolution
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> res{}; 
        ///Direct memory access              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmacfg{}; 
        ///Direct memory access              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen{}; 
    }
    namespace AdcSmpr1{    ///<ADC sample time register 1
        using Addr = Register::Address<0x50000014,0xc0000007,0x00000000,std::uint32_t>;
        ///Channel 1 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> smp1{}; 
        ///Channel 2 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> smp2{}; 
        ///Channel 3 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> smp3{}; 
        ///Channel 4 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> smp4{}; 
        ///Channel 5 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> smp5{}; 
        ///Channel 6 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> smp6{}; 
        ///Channel 7 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> smp7{}; 
        ///Channel 8 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> smp8{}; 
        ///Channel 9 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,27),Register::ReadWriteAccess,unsigned> smp9{}; 
    }
    namespace AdcSmpr2{    ///<ADC sample time register 2
        using Addr = Register::Address<0x50000018,0xf8000000,0x00000000,std::uint32_t>;
        ///Channel 10 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> smp10{}; 
        ///Channel 11 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> smp11{}; 
        ///Channel 12 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> smp12{}; 
        ///Channel 13 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> smp13{}; 
        ///Channel 14 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> smp14{}; 
        ///Channel 15 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> smp15{}; 
        ///Channel 16 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> smp16{}; 
        ///Channel 17 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> smp17{}; 
        ///Channel 18 sampling time              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> smp18{}; 
    }
    namespace AdcTr1{    ///<ADC watchdog threshold register          1
        using Addr = Register::Address<0x50000020,0xf000f000,0x00000000,std::uint32_t>;
        ///Analog watchdog 1 higher              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> ht1{}; 
        ///Analog watchdog 1 lower              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> lt1{}; 
    }
    namespace AdcTr2{    ///<ADC watchdog threshold register          2
        using Addr = Register::Address<0x50000024,0xff00ff00,0x00000000,std::uint32_t>;
        ///Analog watchdog 2 higher              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ht2{}; 
        ///Analog watchdog 2 lower              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lt2{}; 
    }
    namespace AdcTr3{    ///<read-write
        using Addr = Register::Address<0x50000028,0xff00ff00,0x00000000,std::uint32_t>;
        ///Analog watchdog 3 higher              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ht3{}; 
        ///Analog watchdog 3 lower              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lt3{}; 
    }
    namespace AdcSqr1{    ///<ADC regular sequence register          1
        using Addr = Register::Address<0x50000030,0xe0820830,0x00000000,std::uint32_t>;
        ///4th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> sq4{}; 
        ///3rd conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> sq3{}; 
        ///2nd conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> sq2{}; 
        ///1st conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq1{}; 
        ///Regular channel sequence              length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> l{}; 
    }
    namespace AdcSqr2{    ///<ADC regular sequence register          2
        using Addr = Register::Address<0x50000034,0xe0820820,0x00000000,std::uint32_t>;
        ///9th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> sq9{}; 
        ///8th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> sq8{}; 
        ///7th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> sq7{}; 
        ///6th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq6{}; 
        ///5th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq5{}; 
    }
    namespace AdcSqr3{    ///<ADC regular sequence register          3
        using Addr = Register::Address<0x50000038,0xe0820820,0x00000000,std::uint32_t>;
        ///14th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> sq14{}; 
        ///13th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> sq13{}; 
        ///13th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> sq12{}; 
        ///11th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq11{}; 
        ///10th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq10{}; 
    }
    namespace AdcSqr4{    ///<ADC regular sequence register          4
        using Addr = Register::Address<0x5000003c,0xfffff820,0x00000000,std::uint32_t>;
        ///16th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq16{}; 
        ///15th conversion in regular              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq15{}; 
    }
    namespace AdcDr{    ///<ADC regular Data Register
        using Addr = Register::Address<0x50000040,0xffff0000,0x00000000,std::uint32_t>;
        ///Regular Data converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rdata{}; 
    }
    namespace AdcJsqr{    ///<ADC injected sequence register
        using Addr = Register::Address<0x5000004c,0x82082000,0x00000000,std::uint32_t>;
        ///4th conversion in the injected              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> jsq4{}; 
        ///3rd conversion in the injected              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> jsq3{}; 
        ///2nd conversion in the injected              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,14),Register::ReadWriteAccess,unsigned> jsq2{}; 
        ///1st conversion in the injected              sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> jsq1{}; 
        ///External Trigger Enable and Polarity              Selection for injected channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///External Trigger Selection for injected              group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///Injected channel sequence              length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> jl{}; 
    }
    namespace AdcOfr1{    ///<ADC offset register1
        using Addr = Register::Address<0x50000060,0x03fff000,0x00000000,std::uint32_t>;
        ///Offset1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> offset1En{}; 
        ///Channel selection for the Data offset              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset1Ch{}; 
        ///Data offset 1 for the channel programmed              into bits OFFSET1_CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset1{}; 
    }
    namespace AdcOfr2{    ///<ADC offset register2
        using Addr = Register::Address<0x50000064,0x03fff000,0x00000000,std::uint32_t>;
        ///Offset 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> offset2En{}; 
        ///Channel selection for the Data offset              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset2Ch{}; 
        ///Data offset 2 for the channel programmed              into bits OFFSET2_CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset2{}; 
    }
    namespace AdcOfr3{    ///<ADC offset register3
        using Addr = Register::Address<0x50000068,0x03fff000,0x00000000,std::uint32_t>;
        ///Offset y Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> offset3En{}; 
        ///Channel selection for the Data offset              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset3Ch{}; 
        ///Data offset 3 for the channel programmed              into bits OFFSET3_CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset3{}; 
    }
    namespace AdcOfr4{    ///<ADC offset register4
        using Addr = Register::Address<0x5000006c,0x03fff000,0x00000000,std::uint32_t>;
        ///Offset 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> offset4En{}; 
        ///Channel selection for the Data offset              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset4Ch{}; 
        ///Data offset 4 for the channel programmed              into bits OFFSET4_CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset4{}; 
    }
    namespace AdcJdr1{    ///<ADC offset register1
        using Addr = Register::Address<0x50000080,0xffff0000,0x00000000,std::uint32_t>;
        ///Injected data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace AdcJdr2{    ///<ADC offset register2
        using Addr = Register::Address<0x50000084,0xffff0000,0x00000000,std::uint32_t>;
        ///Injected data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace AdcJdr3{    ///<ADC offset register3
        using Addr = Register::Address<0x50000088,0xffff0000,0x00000000,std::uint32_t>;
        ///Injected data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace AdcJdr4{    ///<ADC offset register4
        using Addr = Register::Address<0x5000008c,0xffff0000,0x00000000,std::uint32_t>;
        ///Injected data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace AdcAwd2cr{    ///<ADC Analog Watchdog 2 Configuration          Register
        using Addr = Register::Address<0x500000a0,0xfff80001,0x00000000,std::uint32_t>;
        ///Analog watchdog 2 channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,1),Register::ReadWriteAccess,unsigned> awd2ch{}; 
    }
    namespace AdcAwd3cr{    ///<ADC Analog Watchdog 3 Configuration          Register
        using Addr = Register::Address<0x500000a4,0xfff80001,0x00000000,std::uint32_t>;
        ///Analog watchdog 3 channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,1),Register::ReadWriteAccess,unsigned> awd3ch{}; 
    }
    namespace AdcDifsel{    ///<ADC Differential Mode Selection          Register
        using Addr = Register::Address<0x500000b0,0xfff80001,0x00000000,std::uint32_t>;
        ///Differential mode for channels 15 to              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,1),Register::ReadWriteAccess,unsigned> difsel{}; 
    }
    namespace AdcCalfact{    ///<ADC Calibration Factors
        using Addr = Register::Address<0x500000b4,0xff80ff80,0x00000000,std::uint32_t>;
        ///Calibration Factors in differential              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> calfactD{}; 
        ///Calibration Factors In Single-Ended              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> calfactS{}; 
    }
    namespace AdcCsr{    ///<ADC Common status register
        using Addr = Register::Address<0x50000000,0xf800f800,0x00000000,std::uint32_t>;
        ///Injected Context Queue Overflow flag of              the slave ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> jqovfSlv{}; 
        ///Analog watchdog 3 flag of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> awd3Slv{}; 
        ///Analog watchdog 2 flag of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> awd2Slv{}; 
        ///Analog watchdog 1 flag of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> awd1Slv{}; 
        ///End of injected sequence flag of the              slave ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> jeosSlv{}; 
        ///End of injected conversion flag of the              slave ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> jeocSlv{}; 
        ///Overrun flag of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ovrSlv{}; 
        ///End of regular sequence flag of the              slave ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eosSlv{}; 
        ///End of regular conversion of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eocSlv{}; 
        ///End of Sampling phase flag of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eosmpSlv{}; 
        ///Slave ADC ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrdySlv{}; 
        ///Injected Context Queue Overflow flag of              the master ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jqovfMst{}; 
        ///Analog watchdog 3 flag of the master              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awd3Mst{}; 
        ///Analog watchdog 2 flag of the master              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> awd2Mst{}; 
        ///Analog watchdog 1 flag of the master              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awd1Mst{}; 
        ///End of injected sequence flag of the              master ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> jeosMst{}; 
        ///End of injected conversion flag of the              master ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jeocMst{}; 
        ///Overrun flag of the master              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovrMst{}; 
        ///End of regular sequence flag of the              master ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eosMst{}; 
        ///End of regular conversion of the master              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eocMst{}; 
        ///End of Sampling phase flag of the master              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmpMst{}; 
        ///Master ADC ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdyMst{}; 
    }
    namespace AdcCrr{    ///<ADC common control register
        using Addr = Register::Address<0x50000008,0xfe3cffff,0x00000000,std::uint32_t>;
        ///VBATEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> vbaten{}; 
        ///Temperature sensor enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tsen{}; 
        ///VREFINT enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> vrefen{}; 
        ///ADC clock mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ckmode{}; 
    }
}
