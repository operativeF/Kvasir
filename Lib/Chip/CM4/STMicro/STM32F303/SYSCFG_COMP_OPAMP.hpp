#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System configuration controller _Comparator and      Operational amplifier
    namespace SyscfgCompOpampSyscfgCfgr1{    ///<configuration register 1
        using Addr = Register::Address<0x40010000,0x0300861c,0x00000000,std::uint32_t>;
        ///Memory mapping selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> memMode{}; 
        ///USB interrupt remap
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usbItRmp{}; 
        ///Timer 1 ITR3 selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tim1ItrRmp{}; 
        ///DAC trigger remap (when TSEL =              001)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dacTrigRmp{}; 
        ///ADC24 DMA remapping bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adc24DmaRmp{}; 
        ///TIM16 DMA request remapping              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tim16DmaRmp{}; 
        ///TIM17 DMA request remapping              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tim17DmaRmp{}; 
        ///TIM6 and DAC1 DMA request remapping              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim6Dac1DmaRmp{}; 
        ///TIM7 and DAC2 DMA request remapping              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim7Dac2DmaRmp{}; 
        ///Fast Mode Plus (FM+) driving capability              activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> i2cPb6Fm{}; 
        ///Fast Mode Plus (FM+) driving capability              activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> i2cPb7Fm{}; 
        ///Fast Mode Plus (FM+) driving capability              activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> i2cPb8Fm{}; 
        ///Fast Mode Plus (FM+) driving capability              activation bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> i2cPb9Fm{}; 
        ///I2C1 Fast Mode Plus
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> i2c1Fm{}; 
        ///I2C2 Fast Mode Plus
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c2Fm{}; 
        ///Encoder mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> encoderMode{}; 
        ///Interrupt enable bits from              FPU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> fpuIt{}; 
    }
    namespace SyscfgCompOpampSyscfgExticr1{    ///<external interrupt configuration register          1
        using Addr = Register::Address<0x40010008,0xffff0000,0x00000000,std::uint32_t>;
        ///EXTI 3 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti3{}; 
        ///EXTI 2 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti2{}; 
        ///EXTI 1 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti1{}; 
        ///EXTI 0 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti0{}; 
    }
    namespace SyscfgCompOpampSyscfgExticr2{    ///<external interrupt configuration register          2
        using Addr = Register::Address<0x4001000c,0xffff0000,0x00000000,std::uint32_t>;
        ///EXTI 7 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti7{}; 
        ///EXTI 6 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti6{}; 
        ///EXTI 5 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti5{}; 
        ///EXTI 4 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti4{}; 
    }
    namespace SyscfgCompOpampSyscfgExticr3{    ///<external interrupt configuration register          3
        using Addr = Register::Address<0x40010010,0xffff0000,0x00000000,std::uint32_t>;
        ///EXTI 11 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti11{}; 
        ///EXTI 10 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti10{}; 
        ///EXTI 9 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti9{}; 
        ///EXTI 8 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti8{}; 
    }
    namespace SyscfgCompOpampSyscfgExticr4{    ///<external interrupt configuration register          4
        using Addr = Register::Address<0x40010014,0xffff0000,0x00000000,std::uint32_t>;
        ///EXTI 15 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti15{}; 
        ///EXTI 14 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti14{}; 
        ///EXTI 13 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti13{}; 
        ///EXTI 12 configuration bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti12{}; 
    }
    namespace SyscfgCompOpampSyscfgCfgr2{    ///<configuration register 2
        using Addr = Register::Address<0x40010018,0xfffffee8,0x00000000,std::uint32_t>;
        ///Cortex-M0 LOCKUP bit enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> locupLock{}; 
        ///SRAM parity lock bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sramParityLock{}; 
        ///PVD lock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pvdLock{}; 
        ///Bypass address bit 29 in parity              calculation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bypAddPar{}; 
        ///SRAM parity flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sramPef{}; 
    }
    namespace SyscfgCompOpampSyscfgRcr{    ///<CCM SRAM protection register
        using Addr = Register::Address<0x40010004,0xffffff00,0x00000000,std::uint32_t>;
        ///CCM SRAM page write protection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> page0Wp{}; 
        ///CCM SRAM page write protection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> page1Wp{}; 
        ///CCM SRAM page write protection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> page2Wp{}; 
        ///CCM SRAM page write protection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> page3Wp{}; 
        ///CCM SRAM page write protection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> page4Wp{}; 
        ///CCM SRAM page write protection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> page5Wp{}; 
        ///CCM SRAM page write protection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> page6Wp{}; 
        ///CCM SRAM page write protection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> page7Wp{}; 
    }
    namespace SyscfgCompOpampComp1Csr{    ///<control and status register
        using Addr = Register::Address<0x4001001c,0x3fe04380,0x00000000,std::uint32_t>;
        ///Comparator 1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp1en{}; 
        ///COMP1_INP_DAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> comp1InpDac{}; 
        ///Comparator 1 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp1mode{}; 
        ///Comparator 1 inverting input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp1insel{}; 
        ///Comparator 1 output              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp1OutSel{}; 
        ///Comparator 1 output              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp1pol{}; 
        ///Comparator 1 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp1hyst{}; 
        ///Comparator 1 blanking              source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp1Blanking{}; 
        ///Comparator 1 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp1out{}; 
        ///Comparator 1 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp1lock{}; 
    }
    namespace SyscfgCompOpampComp2Csr{    ///<control and status register
        using Addr = Register::Address<0x40010020,0x7fe04102,0x00000000,std::uint32_t>;
        ///Comparator 2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp2en{}; 
        ///Comparator 2 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp2mode{}; 
        ///Comparator 2 inverting input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp2insel{}; 
        ///Comparator 2 non inverted input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp2inpsel{}; 
        ///Comparator 1inverting input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> comp2inmsel{}; 
        ///Comparator 2 output              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp2OutSel{}; 
        ///Comparator 2 output              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp2pol{}; 
        ///Comparator 2 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp2hyst{}; 
        ///Comparator 2 blanking              source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp2Blanking{}; 
        ///Comparator 2 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp2lock{}; 
    }
    namespace SyscfgCompOpampComp3Csr{    ///<control and status register
        using Addr = Register::Address<0x40010024,0x3fe04302,0x00000000,std::uint32_t>;
        ///Comparator 3 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp3en{}; 
        ///Comparator 3 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp3mode{}; 
        ///Comparator 3 inverting input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp3insel{}; 
        ///Comparator 3 non inverted input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp3inpsel{}; 
        ///Comparator 3 output              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp3OutSel{}; 
        ///Comparator 3 output              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp3pol{}; 
        ///Comparator 3 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp3hyst{}; 
        ///Comparator 3 blanking              source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp3Blanking{}; 
        ///Comparator 3 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp3out{}; 
        ///Comparator 3 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp3lock{}; 
    }
    namespace SyscfgCompOpampComp4Csr{    ///<control and status register
        using Addr = Register::Address<0x40010028,0x3fe04102,0x00000000,std::uint32_t>;
        ///Comparator 4 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp4en{}; 
        ///Comparator 4 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp4mode{}; 
        ///Comparator 4 inverting input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp4insel{}; 
        ///Comparator 4 non inverted input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp4inpsel{}; 
        ///Comparator 4 window mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> com4winmode{}; 
        ///Comparator 4 output              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp4OutSel{}; 
        ///Comparator 4 output              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp4pol{}; 
        ///Comparator 4 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp4hyst{}; 
        ///Comparator 4 blanking              source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp4Blanking{}; 
        ///Comparator 4 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp4out{}; 
        ///Comparator 4 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp4lock{}; 
    }
    namespace SyscfgCompOpampComp5Csr{    ///<control and status register
        using Addr = Register::Address<0x4001002c,0x3fe04302,0x00000000,std::uint32_t>;
        ///Comparator 5 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp5en{}; 
        ///Comparator 5 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp5mode{}; 
        ///Comparator 5 inverting input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp5insel{}; 
        ///Comparator 5 non inverted input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp5inpsel{}; 
        ///Comparator 5 output              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp5OutSel{}; 
        ///Comparator 5 output              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp5pol{}; 
        ///Comparator 5 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp5hyst{}; 
        ///Comparator 5 blanking              source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp5Blanking{}; 
        ///Comparator51 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp5out{}; 
        ///Comparator 5 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp5lock{}; 
    }
    namespace SyscfgCompOpampComp6Csr{    ///<control and status register
        using Addr = Register::Address<0x40010030,0x3fe04102,0x00000000,std::uint32_t>;
        ///Comparator 6 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp6en{}; 
        ///Comparator 6 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp6mode{}; 
        ///Comparator 6 inverting input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp6insel{}; 
        ///Comparator 6 non inverted input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp6inpsel{}; 
        ///Comparator 6 window mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> com6winmode{}; 
        ///Comparator 6 output              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp6OutSel{}; 
        ///Comparator 6 output              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp6pol{}; 
        ///Comparator 6 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp6hyst{}; 
        ///Comparator 6 blanking              source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp6Blanking{}; 
        ///Comparator 6 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp6out{}; 
        ///Comparator 6 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp6lock{}; 
    }
    namespace SyscfgCompOpampComp7Csr{    ///<control and status register
        using Addr = Register::Address<0x40010034,0x3fe04302,0x00000000,std::uint32_t>;
        ///Comparator 7 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp7en{}; 
        ///Comparator 7 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> comp7mode{}; 
        ///Comparator 7 inverting input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp7insel{}; 
        ///Comparator 7 non inverted input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> comp7inpsel{}; 
        ///Comparator 7 output              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> comp7OutSel{}; 
        ///Comparator 7 output              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp7pol{}; 
        ///Comparator 7 hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> comp7hyst{}; 
        ///Comparator 7 blanking              source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> comp7Blanking{}; 
        ///Comparator 7 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp7out{}; 
        ///Comparator 7 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> comp7lock{}; 
    }
    namespace SyscfgCompOpampOpamp1Csr{    ///<control register
        using Addr = Register::Address<0x40010038,0x00000010,0x00000000,std::uint32_t>;
        ///OPAMP1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opamp1En{}; 
        ///FORCE_VP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> forceVp{}; 
        ///OPAMP1 Non inverting input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> vpSel{}; 
        ///OPAMP1 inverting input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> vmSel{}; 
        ///Timer controlled Mux mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcmEn{}; 
        ///OPAMP1 inverting input secondary              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vmsSel{}; 
        ///OPAMP1 Non inverting input secondary              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> vpsSel{}; 
        ///Calibration mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> calon{}; 
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> calsel{}; 
        ///Gain in PGA mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,14),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        ///User trimming enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> userTrim{}; 
        ///Offset trimming value              (PMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
        ///Offset trimming value              (NMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        ///TSTREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tstref{}; 
        ///OPAMP 1 ouput status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> outcal{}; 
        ///OPAMP 1 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace SyscfgCompOpampOpamp2Csr{    ///<control register
        using Addr = Register::Address<0x4001003c,0x00000010,0x00000000,std::uint32_t>;
        ///OPAMP2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opamp2en{}; 
        ///FORCE_VP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> forceVp{}; 
        ///OPAMP2 Non inverting input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> vpSel{}; 
        ///OPAMP2 inverting input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> vmSel{}; 
        ///Timer controlled Mux mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcmEn{}; 
        ///OPAMP2 inverting input secondary              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vmsSel{}; 
        ///OPAMP2 Non inverting input secondary              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> vpsSel{}; 
        ///Calibration mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> calon{}; 
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> calSel{}; 
        ///Gain in PGA mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,14),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        ///User trimming enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> userTrim{}; 
        ///Offset trimming value              (PMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
        ///Offset trimming value              (NMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        ///TSTREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tstref{}; 
        ///OPAMP 2 ouput status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> outcal{}; 
        ///OPAMP 2 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace SyscfgCompOpampOpamp3Csr{    ///<control register
        using Addr = Register::Address<0x40010040,0x00000010,0x00000000,std::uint32_t>;
        ///OPAMP3 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opamp3en{}; 
        ///FORCE_VP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> forceVp{}; 
        ///OPAMP3 Non inverting input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> vpSel{}; 
        ///OPAMP3 inverting input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> vmSel{}; 
        ///Timer controlled Mux mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcmEn{}; 
        ///OPAMP3 inverting input secondary              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vmsSel{}; 
        ///OPAMP3 Non inverting input secondary              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> vpsSel{}; 
        ///Calibration mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> calon{}; 
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> calsel{}; 
        ///Gain in PGA mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,14),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        ///User trimming enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> userTrim{}; 
        ///Offset trimming value              (PMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
        ///Offset trimming value              (NMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        ///TSTREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tstref{}; 
        ///OPAMP 3 ouput status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> outcal{}; 
        ///OPAMP 3 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace SyscfgCompOpampOpamp4Csr{    ///<control register
        using Addr = Register::Address<0x40010044,0x00000010,0x00000000,std::uint32_t>;
        ///OPAMP4 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opamp4en{}; 
        ///FORCE_VP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> forceVp{}; 
        ///OPAMP4 Non inverting input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> vpSel{}; 
        ///OPAMP4 inverting input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> vmSel{}; 
        ///Timer controlled Mux mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcmEn{}; 
        ///OPAMP4 inverting input secondary              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vmsSel{}; 
        ///OPAMP4 Non inverting input secondary              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> vpsSel{}; 
        ///Calibration mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> calon{}; 
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> calsel{}; 
        ///Gain in PGA mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,14),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        ///User trimming enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> userTrim{}; 
        ///Offset trimming value              (PMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
        ///Offset trimming value              (NMOS)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        ///TSTREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tstref{}; 
        ///OPAMP 4 ouput status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> outcal{}; 
        ///OPAMP 4 lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
}
