#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DAC
    namespace DacDacCr{    ///<DAC control register
        using Addr = Register::Address<0x40007400,0x80208020,0x00000000,std::uint32_t>;
        ///DAC channel1 enable This bit is set and              cleared by software to enable/disable DAC              channel1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en1{}; 
        ///DAC channel1 trigger              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ten1{}; 
        ///DAC channel1 trigger selection These              bits select the external event used to trigger DAC              channel1. Note: Only used if bit TEN1 = 1 (DAC              channel1 trigger enabled).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> tsel1{}; 
        ///DAC channel1 noise/triangle wave              generation enable These bits are set and cleared by              software. Note: Only used if bit TEN1 = 1 (DAC              channel1 trigger enabled).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> wave1{}; 
        ///DAC channel1 mask/amplitude selector              These bits are written by software to select mask in              wave generation mode or amplitude in triangle              generation mode. = 1011: Unmask bits[11:0] of LFSR/              triangle amplitude equal to 4095
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mamp1{}; 
        ///DAC channel1 DMA enable This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dmaen1{}; 
        ///DAC channel1 DMA Underrun Interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmaudrie1{}; 
        ///DAC Channel 1 calibration enable This              bit is set and cleared by software to enable/disable              DAC channel 1 calibration, it can be written only if              bit EN1=0 into DAC_CR (the calibration mode can be              entered/exit only when the DAC channel is disabled)              Otherwise, the write operation is              ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cen1{}; 
        ///DAC channel2 enable This bit is set and              cleared by software to enable/disable DAC              channel2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> en2{}; 
        ///DAC channel2 trigger              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ten2{}; 
        ///DAC channel2 trigger selection These              bits select the external event used to trigger DAC              channel2 Note: Only used if bit TEN2 = 1 (DAC              channel2 trigger enabled).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> tsel2{}; 
        ///DAC channel2 noise/triangle wave              generation enable These bits are set/reset by              software. 1x: Triangle wave generation enabled Note:              Only used if bit TEN2 = 1 (DAC channel2 trigger              enabled)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> wave2{}; 
        ///DAC channel2 mask/amplitude selector              These bits are written by software to select mask in              wave generation mode or amplitude in triangle              generation mode. = 1011: Unmask bits[11:0] of LFSR/              triangle amplitude equal to 4095
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> mamp2{}; 
        ///DAC channel2 DMA enable This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dmaen2{}; 
        ///DAC channel2 DMA underrun interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dmaudrie2{}; 
        ///DAC Channel 2 calibration enable This              bit is set and cleared by software to enable/disable              DAC channel 2 calibration, it can be written only if              bit EN2=0 into DAC_CR (the calibration mode can be              entered/exit only when the DAC channel is disabled)              Otherwise, the write operation is              ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cen2{}; 
    }
    namespace DacDacSwtrgr{    ///<DAC software trigger register
        using Addr = Register::Address<0x40007404,0xfffffffc,0x00000000,std::uint32_t>;
        ///DAC channel1 software trigger This bit              is set by software to trigger the DAC in software              trigger mode. Note: This bit is cleared by hardware              (one APB1 clock cycle later) once the DAC_DHR1              register value has been loaded into the DAC_DOR1              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swtrig1{}; 
        ///DAC channel2 software trigger This bit              is set by software to trigger the DAC in software              trigger mode. Note: This bit is cleared by hardware              (one APB1 clock cycle later) once the DAC_DHR2              register value has been loaded into the DAC_DOR2              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig2{}; 
    }
    namespace DacDacDhr12r1{    ///<DAC channel1 12-bit right-aligned data          holding register
        using Addr = Register::Address<0x40007408,0xfffff000,0x00000000,std::uint32_t>;
        ///DAC channel1 12-bit right-aligned data              These bits are written by software which specifies              12-bit data for DAC channel1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
    }
    namespace DacDacDhr12l1{    ///<DAC channel1 12-bit left aligned data          holding register
        using Addr = Register::Address<0x4000740c,0xffff000f,0x00000000,std::uint32_t>;
        ///DAC channel1 12-bit left-aligned data              These bits are written by software which specifies              12-bit data for DAC channel1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
    }
    namespace DacDacDhr8r1{    ///<DAC channel1 8-bit right aligned data          holding register
        using Addr = Register::Address<0x40007410,0xffffff00,0x00000000,std::uint32_t>;
        ///DAC channel1 8-bit right-aligned data              These bits are written by software which specifies              8-bit data for DAC channel1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
    }
    namespace DacDacDhr12r2{    ///<DAC channel2 12-bit right aligned data          holding register
        using Addr = Register::Address<0x40007414,0xfffff000,0x00000000,std::uint32_t>;
        ///DAC channel2 12-bit right-aligned data              These bits are written by software which specifies              12-bit data for DAC channel2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
    }
    namespace DacDacDhr12l2{    ///<DAC channel2 12-bit left aligned data          holding register
        using Addr = Register::Address<0x40007418,0xffff000f,0x00000000,std::uint32_t>;
        ///DAC channel2 12-bit left-aligned data              These bits are written by software which specify              12-bit data for DAC channel2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
    }
    namespace DacDacDhr8r2{    ///<DAC channel2 8-bit right-aligned data          holding register
        using Addr = Register::Address<0x4000741c,0xffffff00,0x00000000,std::uint32_t>;
        ///DAC channel2 8-bit right-aligned data              These bits are written by software which specifies              8-bit data for DAC channel2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
    }
    namespace DacDacDhr12rd{    ///<Dual DAC 12-bit right-aligned data holding          register
        using Addr = Register::Address<0x40007420,0xf000f000,0x00000000,std::uint32_t>;
        ///DAC channel1 12-bit right-aligned data              These bits are written by software which specifies              12-bit data for DAC channel1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
        ///DAC channel2 12-bit right-aligned data              These bits are written by software which specifies              12-bit data for DAC channel2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
    }
    namespace DacDacDhr12ld{    ///<DUAL DAC 12-bit left aligned data holding          register
        using Addr = Register::Address<0x40007424,0x000f000f,0x00000000,std::uint32_t>;
        ///DAC channel1 12-bit left-aligned data              These bits are written by software which specifies              12-bit data for DAC channel1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
        ///DAC channel2 12-bit left-aligned data              These bits are written by software which specifies              12-bit data for DAC channel2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
    }
    namespace DacDacDhr8rd{    ///<DUAL DAC 8-bit right aligned data holding          register
        using Addr = Register::Address<0x40007428,0xffff0000,0x00000000,std::uint32_t>;
        ///DAC channel1 8-bit right-aligned data              These bits are written by software which specifies              8-bit data for DAC channel1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
        ///DAC channel2 8-bit right-aligned data              These bits are written by software which specifies              8-bit data for DAC channel2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
    }
    namespace DacDacDor1{    ///<DAC channel1 data output          register
        using Addr = Register::Address<0x4000742c,0xfffff000,0x00000000,std::uint32_t>;
        ///DAC channel1 data output These bits are              read-only, they contain data output for DAC              channel1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc1dor{}; 
    }
    namespace DacDacDor2{    ///<DAC channel2 data output          register
        using Addr = Register::Address<0x40007430,0xfffff000,0x00000000,std::uint32_t>;
        ///DAC channel2 data output These bits are              read-only, they contain data output for DAC              channel2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc2dor{}; 
    }
    namespace DacDacSr{    ///<DAC status register
        using Addr = Register::Address<0x40007434,0x1fff1fff,0x00000000,std::uint32_t>;
        ///DAC channel1 DMA underrun flag This bit              is set by hardware and cleared by software (by              writing it to 1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmaudr1{}; 
        ///DAC Channel 1 calibration offset status              This bit is set and cleared by hardware
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> calFlag1{}; 
        ///DAC Channel 1 busy writing sample time              flag This bit is systematically set just after Sample              & Hold mode enable and is set each time the              software writes the register DAC_SHSR1, It is cleared              by hardware when the write operation of DAC_SHSR1 is              complete. (It takes about 3LSI periods of              synchronization).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bwst1{}; 
        ///DAC channel2 DMA underrun flag This bit              is set by hardware and cleared by software (by              writing it to 1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dmaudr2{}; 
        ///DAC Channel 2 calibration offset status              This bit is set and cleared by hardware
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> calFlag2{}; 
        ///DAC Channel 2 busy writing sample time              flag This bit is systematically set just after Sample              & Hold mode enable and is set each time the              software writes the register DAC_SHSR2, It is cleared              by hardware when the write operation of DAC_SHSR2 is              complete. (It takes about 3 LSI periods of              synchronization).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bwst2{}; 
    }
    namespace DacDacCcr{    ///<DAC calibration control          register
        using Addr = Register::Address<0x40007438,0xffe0ffe0,0x00000000,std::uint32_t>;
        ///DAC Channel 1 offset trimming              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> otrim1{}; 
        ///DAC Channel 2 offset trimming              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> otrim2{}; 
    }
    namespace DacDacMcr{    ///<DAC mode control register
        using Addr = Register::Address<0x4000743c,0xfff8fff8,0x00000000,std::uint32_t>;
        ///DAC Channel 1 mode These bits can be              written only when the DAC is disabled and not in the              calibration mode (when bit EN1=0 and bit CEN1 =0 in              the DAC_CR register). If EN1=1 or CEN1 =1 the write              operation is ignored. They can be set and cleared by              software to select the DAC Channel 1 mode: DAC              Channel 1 in normal Mode DAC Channel 1 in sample              &amp; hold mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> mode1{}; 
        ///DAC Channel 2 mode These bits can be              written only when the DAC is disabled and not in the              calibration mode (when bit EN2=0 and bit CEN2 =0 in              the DAC_CR register). If EN2=1 or CEN2 =1 the write              operation is ignored. They can be set and cleared by              software to select the DAC Channel 2 mode: DAC              Channel 2 in normal Mode DAC Channel 2 in sample              &amp; hold mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> mode2{}; 
    }
    namespace DacDacShsr1{    ///<DAC Sample and Hold sample time register          1
        using Addr = Register::Address<0x40007440,0xfffffc00,0x00000000,std::uint32_t>;
        ///DAC Channel 1 sample Time (only valid in              sample &amp; hold mode) These bits can be written              when the DAC channel1 is disabled or also during              normal operation. in the latter case, the write can              be done only when BWSTx of DAC_SR register is low, If              BWSTx=1, the write operation is              ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tsample1{}; 
    }
    namespace DacDacShsr2{    ///<DAC Sample and Hold sample time register          2
        using Addr = Register::Address<0x40007444,0xfffffc00,0x00000000,std::uint32_t>;
        ///DAC Channel 2 sample Time (only valid in              sample &amp; hold mode) These bits can be written              when the DAC channel2 is disabled or also during              normal operation. in the latter case, the write can              be done only when BWSTx of DAC_SR register is low, if              BWSTx=1, the write operation is              ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tsample2{}; 
    }
    namespace DacDacShhr{    ///<DAC Sample and Hold hold time          register
        using Addr = Register::Address<0x40007448,0xfc00fc00,0x00000000,std::uint32_t>;
        ///DAC Channel 1 hold Time (only valid in              sample &amp; hold mode) Hold time= (THOLD[9:0]) x              T LSI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> thold1{}; 
        ///DAC Channel 2 hold time (only valid in              sample &amp; hold mode). Hold time= (THOLD[9:0])              x T LSI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> thold2{}; 
    }
    namespace DacDacShrr{    ///<DAC Sample and Hold refresh time          register
        using Addr = Register::Address<0x4000744c,0xff00ff00,0x00000000,std::uint32_t>;
        ///DAC Channel 1 refresh Time (only valid              in sample &amp; hold mode) Refresh time=              (TREFRESH[7:0]) x T LSI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> trefresh1{}; 
        ///DAC Channel 2 refresh Time (only valid              in sample &amp; hold mode) Refresh time=              (TREFRESH[7:0]) x T LSI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> trefresh2{}; 
    }
}
