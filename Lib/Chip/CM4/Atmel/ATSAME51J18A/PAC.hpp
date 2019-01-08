#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Peripheral Access Controller
    namespace PacWrctrl{    ///<Write control
        using Addr = Register::Address<0x40000000,0xff000000,0x00000000,std::uint32_t>;
        ///Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> perid{}; 
        ///Peripheral access control key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace PacEvctrl{    ///<Event control
        using Addr = Register::Address<0x40000004,0xfffffffe,0x00000000,std::uint8_t>;
        ///Peripheral acess error event output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> erreo{}; 
    }
    namespace PacIntenclr{    ///<Interrupt enable clear
        using Addr = Register::Address<0x40000008,0xfffffffe,0x00000000,std::uint8_t>;
        ///Peripheral access error interrupt disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> err{}; 
    }
    namespace PacIntenset{    ///<Interrupt enable set
        using Addr = Register::Address<0x40000009,0xfffffffe,0x00000000,std::uint8_t>;
        ///Peripheral access error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> err{}; 
    }
    namespace PacIntflagahb{    ///<Bridge interrupt flag status
        using Addr = Register::Address<0x40000010,0xffff2000,0x00000000,std::uint32_t>;
        ///FLASH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flash{}; 
        ///FLASH_ALT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> flashAlt{}; 
        ///SEEPROM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> seeprom{}; 
        ///RAMCM4S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ramcm4s{}; 
        ///RAMPPPDSU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rampppdsu{}; 
        ///RAMDMAWR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ramdmawr{}; 
        ///RAMDMACICM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ramdmacicm{}; 
        ///HPB0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hpb0{}; 
        ///HPB1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hpb1{}; 
        ///HPB2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hpb2{}; 
        ///HPB3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hpb3{}; 
        ///PUKCC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pukcc{}; 
        ///SDHC0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sdhc0{}; 
        ///QSPI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> qspi{}; 
        ///BKUPRAM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bkupram{}; 
    }
    namespace PacIntflaga{    ///<Peripheral interrupt flag status - Bridge A
        using Addr = Register::Address<0x40000014,0xffff0000,0x00000000,std::uint32_t>;
        ///PAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pac{}; 
        ///PM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm{}; 
        ///MCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mclk{}; 
        ///RSTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rstc{}; 
        ///OSCCTRL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oscctrl{}; 
        ///OSC32KCTRL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> osc32kctrl{}; 
        ///SUPC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> supc{}; 
        ///GCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gclk{}; 
        ///WDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wdt{}; 
        ///RTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rtc{}; 
        ///EIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eic{}; 
        ///FREQM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> freqm{}; 
        ///SERCOM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sercom0{}; 
        ///SERCOM1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> sercom1{}; 
        ///TC0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tc0{}; 
        ///TC1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tc1{}; 
    }
    namespace PacIntflagb{    ///<Peripheral interrupt flag status - Bridge B
        using Addr = Register::Address<0x40000018,0xfffe8100,0x00000000,std::uint32_t>;
        ///USB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usb{}; 
        ///DSU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dsu{}; 
        ///NVMCTRL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nvmctrl{}; 
        ///CMCC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmcc{}; 
        ///PORT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port{}; 
        ///DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dmac{}; 
        ///HMATRIX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hmatrix{}; 
        ///EVSYS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evsys{}; 
        ///SERCOM2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sercom2{}; 
        ///SERCOM3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sercom3{}; 
        ///TCC0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tcc0{}; 
        ///TCC1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tcc1{}; 
        ///TC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tc2{}; 
        ///TC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tc3{}; 
        ///RAMECC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ramecc{}; 
    }
    namespace PacIntflagc{    ///<Peripheral interrupt flag status - Bridge C
        using Addr = Register::Address<0x4000001c,0xffff8004,0x00000000,std::uint32_t>;
        ///CAN0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> can0{}; 
        ///CAN1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> can1{}; 
        ///TCC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcc2{}; 
        ///TCC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcc3{}; 
        ///TC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tc4{}; 
        ///TC5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tc5{}; 
        ///PDEC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pdec{}; 
        ///AC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ac{}; 
        ///AES
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> aes{}; 
        ///TRNG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> trng{}; 
        ///ICM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> icm{}; 
        ///PUKCC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pukcc{}; 
        ///QSPI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> qspi{}; 
        ///CCL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ccl{}; 
    }
    namespace PacIntflagd{    ///<Peripheral interrupt flag status - Bridge D
        using Addr = Register::Address<0x40000020,0xfffff06c,0x00000000,std::uint32_t>;
        ///SERCOM4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sercom4{}; 
        ///SERCOM5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sercom5{}; 
        ///TCC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcc4{}; 
        ///ADC0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adc0{}; 
        ///ADC1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adc1{}; 
        ///DAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dac{}; 
        ///I2S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> i2s{}; 
        ///PCC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pcc{}; 
    }
    namespace PacStatusa{    ///<Peripheral write protection status - Bridge A
        using Addr = Register::Address<0x40000034,0xffff0000,0x00000000,std::uint32_t>;
        ///PAC APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pac{}; 
        ///PM APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm{}; 
        ///MCLK APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mclk{}; 
        ///RSTC APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rstc{}; 
        ///OSCCTRL APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oscctrl{}; 
        ///OSC32KCTRL APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> osc32kctrl{}; 
        ///SUPC APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> supc{}; 
        ///GCLK APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gclk{}; 
        ///WDT APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wdt{}; 
        ///RTC APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rtc{}; 
        ///EIC APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eic{}; 
        ///FREQM APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> freqm{}; 
        ///SERCOM0 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sercom0{}; 
        ///SERCOM1 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> sercom1{}; 
        ///TC0 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tc0{}; 
        ///TC1 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tc1{}; 
    }
    namespace PacStatusb{    ///<Peripheral write protection status - Bridge B
        using Addr = Register::Address<0x40000038,0xfffe8100,0x00000000,std::uint32_t>;
        ///USB APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usb{}; 
        ///DSU APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dsu{}; 
        ///NVMCTRL APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nvmctrl{}; 
        ///CMCC APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmcc{}; 
        ///PORT APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port{}; 
        ///DMAC APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dmac{}; 
        ///HMATRIX APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hmatrix{}; 
        ///EVSYS APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evsys{}; 
        ///SERCOM2 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sercom2{}; 
        ///SERCOM3 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sercom3{}; 
        ///TCC0 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tcc0{}; 
        ///TCC1 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tcc1{}; 
        ///TC2 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tc2{}; 
        ///TC3 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tc3{}; 
        ///RAMECC APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ramecc{}; 
    }
    namespace PacStatusc{    ///<Peripheral write protection status - Bridge C
        using Addr = Register::Address<0x4000003c,0xffff8004,0x00000000,std::uint32_t>;
        ///CAN0 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> can0{}; 
        ///CAN1 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> can1{}; 
        ///TCC2 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcc2{}; 
        ///TCC3 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcc3{}; 
        ///TC4 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tc4{}; 
        ///TC5 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tc5{}; 
        ///PDEC APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pdec{}; 
        ///AC APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ac{}; 
        ///AES APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> aes{}; 
        ///TRNG APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> trng{}; 
        ///ICM APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> icm{}; 
        ///PUKCC APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pukcc{}; 
        ///QSPI APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> qspi{}; 
        ///CCL APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ccl{}; 
    }
    namespace PacStatusd{    ///<Peripheral write protection status - Bridge D
        using Addr = Register::Address<0x40000040,0xfffff06c,0x00000000,std::uint32_t>;
        ///SERCOM4 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sercom4{}; 
        ///SERCOM5 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sercom5{}; 
        ///TCC4 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcc4{}; 
        ///ADC0 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adc0{}; 
        ///ADC1 APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adc1{}; 
        ///DAC APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dac{}; 
        ///I2S APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> i2s{}; 
        ///PCC APB Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pcc{}; 
    }
}
