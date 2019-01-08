#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Main Clock
    namespace MclkIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x40000801,0xfffffffe,0x00000000,std::uint8_t>;
        ///Clock Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ckrdy{}; 
    }
    namespace MclkIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x40000802,0xfffffffe,0x00000000,std::uint8_t>;
        ///Clock Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ckrdy{}; 
    }
    namespace MclkIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40000803,0xfffffffe,0x00000000,std::uint8_t>;
        ///Clock Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ckrdy{}; 
    }
    namespace MclkHsdiv{    ///<HS Clock Division
        using Addr = Register::Address<0x40000804,0xffffff00,0x00000000,std::uint8_t>;
        ///CPU Clock Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace MclkCpudiv{    ///<CPU Clock Division
        using Addr = Register::Address<0x40000805,0xffffff00,0x00000000,std::uint8_t>;
        ///Low-Power Clock Division Factor
        enum class DivVal {
            div1=0x00000001,     ///<Divide by 1
            div2=0x00000002,     ///<Divide by 2
            div4=0x00000004,     ///<Divide by 4
            div8=0x00000008,     ///<Divide by 8
            div16=0x00000010,     ///<Divide by 16
            div32=0x00000020,     ///<Divide by 32
            div64=0x00000040,     ///<Divide by 64
            div128=0x00000080,     ///<Divide by 128
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,DivVal> div{}; 
        namespace DivValC{
            constexpr Register::FieldValue<decltype(div)::Type,DivVal::div1> div1{};
            constexpr Register::FieldValue<decltype(div)::Type,DivVal::div2> div2{};
            constexpr Register::FieldValue<decltype(div)::Type,DivVal::div4> div4{};
            constexpr Register::FieldValue<decltype(div)::Type,DivVal::div8> div8{};
            constexpr Register::FieldValue<decltype(div)::Type,DivVal::div16> div16{};
            constexpr Register::FieldValue<decltype(div)::Type,DivVal::div32> div32{};
            constexpr Register::FieldValue<decltype(div)::Type,DivVal::div64> div64{};
            constexpr Register::FieldValue<decltype(div)::Type,DivVal::div128> div128{};
        }
    }
    namespace MclkAhbmask{    ///<AHB Mask
        using Addr = Register::Address<0x40000810,0xff014000,0x00000000,std::uint32_t>;
        ///HPB0 AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hpb0{}; 
        ///HPB1 AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hpb1{}; 
        ///HPB2 AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hpb2{}; 
        ///HPB3 AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hpb3{}; 
        ///DSU AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dsu{}; 
        ///HMATRIX AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hmatrix{}; 
        ///NVMCTRL AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nvmctrl{}; 
        ///HSRAM AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hsram{}; 
        ///CMCC AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmcc{}; 
        ///DMAC AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dmac{}; 
        ///USB AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb{}; 
        ///BKUPRAM AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bkupram{}; 
        ///PAC AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pac{}; 
        ///QSPI AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> qspi{}; 
        ///SDHC0 AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sdhc0{}; 
        ///CAN0 AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> can0{}; 
        ///CAN1 AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> can1{}; 
        ///ICM AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> icm{}; 
        ///PUKCC AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pukcc{}; 
        ///QSPI_2X AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> qspi2x{}; 
        ///NVMCTRL_SMEEPROM AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> nvmctrlSmeeprom{}; 
        ///NVMCTRL_CACHE AHB Clock Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nvmctrlCache{}; 
    }
    namespace MclkApbamask{    ///<APBA Mask
        using Addr = Register::Address<0x40000814,0xffff0000,0x00000000,std::uint32_t>;
        ///PAC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pac{}; 
        ///PM APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm{}; 
        ///MCLK APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mclk{}; 
        ///RSTC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rstc{}; 
        ///OSCCTRL APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oscctrl{}; 
        ///OSC32KCTRL APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> osc32kctrl{}; 
        ///SUPC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> supc{}; 
        ///GCLK APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gclk{}; 
        ///WDT APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wdt{}; 
        ///RTC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rtc{}; 
        ///EIC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eic{}; 
        ///FREQM APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> freqm{}; 
        ///SERCOM0 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sercom0{}; 
        ///SERCOM1 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> sercom1{}; 
        ///TC0 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tc0{}; 
        ///TC1 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tc1{}; 
    }
    namespace MclkApbbmask{    ///<APBB Mask
        using Addr = Register::Address<0x40000818,0xfffe8128,0x00000000,std::uint32_t>;
        ///USB APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usb{}; 
        ///DSU APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dsu{}; 
        ///NVMCTRL APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nvmctrl{}; 
        ///PORT APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port{}; 
        ///HMATRIX APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hmatrix{}; 
        ///EVSYS APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evsys{}; 
        ///SERCOM2 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sercom2{}; 
        ///SERCOM3 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sercom3{}; 
        ///TCC0 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tcc0{}; 
        ///TCC1 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tcc1{}; 
        ///TC2 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tc2{}; 
        ///TC3 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tc3{}; 
        ///RAMECC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ramecc{}; 
    }
    namespace MclkApbcmask{    ///<APBC Mask
        using Addr = Register::Address<0x4000081c,0xffff9007,0x00000000,std::uint32_t>;
        ///TCC2 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcc2{}; 
        ///TCC3 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcc3{}; 
        ///TC4 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tc4{}; 
        ///TC5 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tc5{}; 
        ///PDEC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pdec{}; 
        ///AC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ac{}; 
        ///AES APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> aes{}; 
        ///TRNG APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> trng{}; 
        ///ICM APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> icm{}; 
        ///QSPI APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> qspi{}; 
        ///CCL APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ccl{}; 
    }
    namespace MclkApbdmask{    ///<APBD Mask
        using Addr = Register::Address<0x40000820,0xfffff000,0x00000000,std::uint32_t>;
        ///SERCOM4 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sercom4{}; 
        ///SERCOM5 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sercom5{}; 
        ///SERCOM6 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sercom6{}; 
        ///SERCOM7 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sercom7{}; 
        ///TCC4 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcc4{}; 
        ///TC6 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tc6{}; 
        ///TC7 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tc7{}; 
        ///ADC0 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adc0{}; 
        ///ADC1 APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adc1{}; 
        ///DAC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dac{}; 
        ///I2S APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> i2s{}; 
        ///PCC APB Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pcc{}; 
    }
}
