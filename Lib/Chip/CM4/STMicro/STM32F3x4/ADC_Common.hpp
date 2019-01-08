#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//ADC common registers
    namespace AdcCommonAdc1Csr{    ///<ADC Common status register
        using Addr = Register::Address<0x50000300,0xf800f800,0x00000000,std::uint32_t>;
        ///Master ADC ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdyMst{}; 
        ///End of Sampling phase flag of the master              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmpMst{}; 
        ///End of regular conversion of the master              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eocMst{}; 
        ///End of regular sequence flag of the              master ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eosMst{}; 
        ///Overrun flag of the master              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovrMst{}; 
        ///End of injected conversion flag of the              master ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jeocMst{}; 
        ///End of injected sequence flag of the              master ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> jeosMst{}; 
        ///Analog watchdog 1 flag of the master              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awd1Mst{}; 
        ///Analog watchdog 2 flag of the master              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> awd2Mst{}; 
        ///Analog watchdog 3 flag of the master              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awd3Mst{}; 
        ///Injected Context Queue Overflow flag of              the master ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jqovfMst{}; 
        ///Slave ADC ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrdySlv{}; 
        ///End of Sampling phase flag of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> eosmpSlv{}; 
        ///End of regular conversion of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eocSlv{}; 
        ///End of regular sequence flag of the              slave ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eosSlv{}; 
        ///Overrun flag of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ovrSlv{}; 
        ///End of injected conversion flag of the              slave ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> jeocSlv{}; 
        ///End of injected sequence flag of the              slave ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> jeosSlv{}; 
        ///Analog watchdog 1 flag of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> awd1Slv{}; 
        ///Analog watchdog 2 flag of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> awd2Slv{}; 
        ///Analog watchdog 3 flag of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> awd3Slv{}; 
        ///Injected Context Queue Overflow flag of              the slave ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> jqovfSlv{}; 
    }
    namespace AdcCommonAdc1Ccr{    ///<ADC common control register
        using Addr = Register::Address<0x50000308,0xfe3c10e0,0x00000000,std::uint32_t>;
        ///Dual ADC mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dual{}; 
        ///Delay between 2 sampling              phases
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> delay{}; 
        ///DMA configuration (for dual ADC              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmacfg{}; 
        ///Direct memory access mode for dual ADC              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> mdma{}; 
        ///ADC clock mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ckmode{}; 
        ///VREFINT enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> vrefen{}; 
        ///Temperature sensor enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tsen{}; 
        ///VBAT enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> vbaten{}; 
    }
    namespace AdcCommonAdc1Cdr{    ///<ADC common regular data register for dual          mode
        using Addr = Register::Address<0x5000030c,0x00000000,0x00000000,std::uint32_t>;
        ///Regular data of the slave              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> rdataSlv{}; 
        ///Regular data of the master              ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rdataMst{}; 
    }
}
