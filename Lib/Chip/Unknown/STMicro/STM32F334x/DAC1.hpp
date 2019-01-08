#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Digital-to-analog converter 1
    namespace Dac1Cr{    ///<control register
        using Addr = Register::Address<0x40007400,0xc000c000,0x00000000,std::uint32_t>;
        ///DAC channel2 DMA underrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dmaudrie2{}; 
        ///DAC channel2 DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dmaen2{}; 
        ///DAC channel2 mask/amplitude              selector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> mamp2{}; 
        ///DAC channel2 noise/triangle wave              generation enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> wave2{}; 
        ///DAC channel2 trigger              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,unsigned> tsel2{}; 
        ///DAC channel2 trigger              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ten2{}; 
        ///DAC channel2 output buffer              disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> boff2{}; 
        ///DAC channel2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> en2{}; 
        ///DAC channel1 DMA Underrun Interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmaudrie1{}; 
        ///DAC channel1 DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dmaen1{}; 
        ///DAC channel1 mask/amplitude              selector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mamp1{}; 
        ///DAC channel1 noise/triangle wave              generation enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> wave1{}; 
        ///DAC channel1 trigger              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> tsel1{}; 
        ///DAC channel1 trigger              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ten1{}; 
        ///DAC channel1 output buffer              disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> boff1{}; 
        ///DAC channel1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en1{}; 
    }
    namespace Dac1Swtrigr{    ///<software trigger register
        using Addr = Register::Address<0x40007404,0xfffffffc,0x00000000,std::uint32_t>;
        ///DAC channel2 software              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig2{}; 
        ///DAC channel1 software              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swtrig1{}; 
    }
    namespace Dac1Dhr12r1{    ///<channel1 12-bit right-aligned data holding          register
        using Addr = Register::Address<0x40007408,0xfffff000,0x00000000,std::uint32_t>;
        ///DAC channel1 12-bit right-aligned              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
    }
    namespace Dac1Dhr12l1{    ///<channel1 12-bit left aligned data holding          register
        using Addr = Register::Address<0x4000740c,0xffff000f,0x00000000,std::uint32_t>;
        ///DAC channel1 12-bit left-aligned              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
    }
    namespace Dac1Dhr8r1{    ///<channel1 8-bit right aligned data holding          register
        using Addr = Register::Address<0x40007410,0xffffff00,0x00000000,std::uint32_t>;
        ///DAC channel1 8-bit right-aligned              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
    }
    namespace Dac1Dhr12r2{    ///<channel2 12-bit right aligned data holding          register
        using Addr = Register::Address<0x40007414,0xfffff000,0x00000000,std::uint32_t>;
        ///DAC channel2 12-bit right-aligned              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
    }
    namespace Dac1Dhr12l2{    ///<channel2 12-bit left aligned data holding          register
        using Addr = Register::Address<0x40007418,0xffff000f,0x00000000,std::uint32_t>;
        ///DAC channel2 12-bit left-aligned              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
    }
    namespace Dac1Dhr8r2{    ///<channel2 8-bit right-aligned data holding          register
        using Addr = Register::Address<0x4000741c,0xffffff00,0x00000000,std::uint32_t>;
        ///DAC channel2 8-bit right-aligned              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
    }
    namespace Dac1Dhr12rd{    ///<Dual DAC 12-bit right-aligned data holding          register
        using Addr = Register::Address<0x40007420,0xf000f000,0x00000000,std::uint32_t>;
        ///DAC channel2 12-bit right-aligned              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
        ///DAC channel1 12-bit right-aligned              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
    }
    namespace Dac1Dhr12ld{    ///<DUAL DAC 12-bit left aligned data holding          register
        using Addr = Register::Address<0x40007424,0x000f000f,0x00000000,std::uint32_t>;
        ///DAC channel2 12-bit left-aligned              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
        ///DAC channel1 12-bit left-aligned              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
    }
    namespace Dac1Dhr8rd{    ///<DUAL DAC 8-bit right aligned data holding          register
        using Addr = Register::Address<0x40007428,0xffff0000,0x00000000,std::uint32_t>;
        ///DAC channel2 8-bit right-aligned              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
        ///DAC channel1 8-bit right-aligned              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
    }
    namespace Dac1Dor1{    ///<channel1 data output register
        using Addr = Register::Address<0x4000742c,0xfffff000,0x00000000,std::uint32_t>;
        ///DAC channel1 data output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc1dor{}; 
    }
    namespace Dac1Dor2{    ///<channel2 data output register
        using Addr = Register::Address<0x40007430,0xfffff000,0x00000000,std::uint32_t>;
        ///DAC channel2 data output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc2dor{}; 
    }
    namespace Dac1Sr{    ///<status register
        using Addr = Register::Address<0x40007434,0xdfffdfff,0x00000000,std::uint32_t>;
        ///DAC channel2 DMA underrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dmaudr2{}; 
        ///DAC channel1 DMA underrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmaudr1{}; 
    }
}
