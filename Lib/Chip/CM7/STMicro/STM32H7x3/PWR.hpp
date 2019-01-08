#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//PWR
    namespace PwrPwrCr1{    ///<PWR control register 1
        using Addr = Register::Address<0x58024800,0xfff83c0e,0x00000000,std::uint32_t>;
        ///Low-power Deepsleep with SVOS3 (SVOS4              and SVOS5 always use low-power, regardless of the              setting of this bit)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpds{}; 
        ///Programmable voltage detector              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pvde{}; 
        ///Programmable voltage detector level              selection These bits select the voltage threshold              detected by the PVD. Note: Refer to Section              Electrical characteristics of the product datasheet              for more details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> pls{}; 
        ///Disable backup domain write protection              In reset state, the RCC_BDCR register, the RTC              registers (including the backup registers), BREN and              MOEN bits in PWR_CR2 register, are protected against              parasitic write access. This bit must be set to              enable write access to these registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dbp{}; 
        ///Flash low-power mode in DStop mode This              bit allows to obtain the best trade-off between              low-power consumption and restart time when exiting              from DStop mode. When it is set, the Flash memory              enters low-power mode when D1 domain is in DStop              mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> flps{}; 
        ///System Stop mode voltage scaling              selection These bits control the VCORE voltage level              in system Stop mode, to obtain the best trade-off              between power consumption and              performance.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> svos{}; 
        ///Peripheral voltage monitor on VDDA              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> avden{}; 
        ///Analog voltage detector level selection              These bits select the voltage threshold detected by              the AVD.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> als{}; 
    }
    namespace PwrPwrCsr1{    ///<PWR control status register 1
        using Addr = Register::Address<0x58024804,0xfffe1fef,0x00000000,std::uint32_t>;
        ///Programmable voltage detect output This              bit is set and cleared by hardware. It is valid only              if the PVD has been enabled by the PVDE bit. Note:              since the PVD is disabled in Standby mode, this bit              is equal to 0 after Standby or reset until the PVDE              bit is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pvdo{}; 
        ///Voltage levels ready bit for currently              used VOS and SDLEVEL This bit is set to 1 by hardware              when the voltage regulator and the SD converter are              both disabled and Bypass mode is selected in PWR              control register 3 (PWR_CR3).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> actvosrdy{}; 
        ///VOS currently applied for VCORE voltage              scaling selection. These bits reflect the last VOS              value applied to the PMU.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> actvos{}; 
        ///Analog voltage detector output on VDDA              This bit is set and cleared by hardware. It is valid              only if AVD on VDDA is enabled by the AVDEN bit.              Note: Since the AVD is disabled in Standby mode, this              bit is equal to 0 after Standby or reset until the              AVDEN bit is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> avdo{}; 
    }
    namespace PwrPwrCr2{    ///<This register is not reset by wakeup from          Standby mode, RESET signal and VDD POR. It is only reset          by VSW POR and VSWRST reset. This register shall not be          accessed when VSWRST bit in RCC_BDCR register resets the          VSW domain.After reset, PWR_CR2 register is          write-protected. Prior to modifying its content, the DBP          bit in PWR_CR1 register must be set to disable the write          protection.
        using Addr = Register::Address<0x58024808,0xff0effee,0x00000000,std::uint32_t>;
        ///Backup regulator enable When set, the              Backup regulator (used to maintain the backup RAM              content in Standby and VBAT modes) is enabled. If              BREN is reset, the backup regulator is switched off.              The backup RAM can still be used in Run and Stop              modes. However, its content will be lost in Standby              and VBAT modes. If BREN is set, the application must              wait till the Backup Regulator Ready flag (BRRDY) is              set to indicate that the data written into the SRAM              will be maintained in Standby and VBAT              modes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bren{}; 
        ///VBAT and temperature monitoring enable              When set, the VBAT supply and temperature monitoring              is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> monen{}; 
        ///Backup regulator ready This bit is set              by hardware to indicate that the Backup regulator is              ready.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> brrdy{}; 
        ///VBAT level monitoring versus low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vbatl{}; 
        ///VBAT level monitoring versus high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vbath{}; 
        ///Temperature level monitoring versus low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> templ{}; 
        ///Temperature level monitoring versus high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> temph{}; 
    }
    namespace PwrPwrCr3{    ///<Reset only by POR only, not reset by wakeup          from Standby mode and RESET pad. The lower byte of this          register is written once after POR and shall be written          before changing VOS level or ck_sys clock frequency. No          limitation applies to the upper bytes.Programming data          corresponding to an invalid combination of SDLEVEL,          SDEXTHP, SDEN, LDOEN and BYPASS bits (see Table9) will be          ignored: data will not be written, the written-once          mechanism will lock the register and any further write          access will be ignored. The default supply configuration          will be kept and the ACTVOSRDY bit in PWR control status          register 1 (PWR_CSR1) will go on indicating invalid          voltage levels. The system shall be power cycled before          writing a new value.
        using Addr = Register::Address<0x5802480c,0xf8fffcf8,0x00000000,std::uint32_t>;
        ///Power management unit              bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bypass{}; 
        ///Low drop-out regulator              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldoen{}; 
        ///SD converter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sden{}; 
        ///VBAT charging enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vbe{}; 
        ///VBAT charging resistor              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> vbrs{}; 
        ///VDD33USB voltage level detector              enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usb33den{}; 
        ///USB regulator enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> usbregen{}; 
        ///USB supply ready.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usb33rdy{}; 
    }
    namespace PwrPwrCpucr{    ///<This register allows controlling CPU1          power.
        using Addr = Register::Address<0x58024810,0xfffff418,0x00000000,std::uint32_t>;
        ///D1 domain Power Down Deepsleep              selection. This bit allows CPU1 to define the              Deepsleep mode for D1 domain.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pddsD1{}; 
        ///D2 domain Power Down Deepsleep. This bit              allows CPU1 to define the Deepsleep mode for D2              domain.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pddsD2{}; 
        ///System D3 domain Power Down Deepsleep.              This bit allows CPU1 to define the Deepsleep mode for              System D3 domain.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pddsD3{}; 
        ///STOP flag This bit is set by hardware              and cleared only by any reset or by setting the CPU1              CSSF bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stopf{}; 
        ///System Standby flag This bit is set by              hardware and cleared only by a POR (Power-on Reset)              or by setting the CPU1 CSSF bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sbf{}; 
        ///D1 domain DStandby flag This bit is set              by hardware and cleared by any system reset or by              setting the CPU1 CSSF bit. Once set, this bit can be              cleared only when the D1 domain is no longer in              DStandby mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sbfD1{}; 
        ///D2 domain DStandby flag This bit is set              by hardware and cleared by any system reset or by              setting the CPU1 CSSF bit. Once set, this bit can be              cleared only when the D2 domain is no longer in              DStandby mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sbfD2{}; 
        ///Clear D1 domain CPU1 Standby, Stop and              HOLD flags (always read as 0) This bit is cleared to              0 by hardware.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cssf{}; 
        ///Keep system D3 domain in Run mode              regardless of the CPU sub-systems modes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> runD3{}; 
    }
    namespace PwrPwrD3cr{    ///<This register allows controlling D3 domain          power.Following reset VOSRDY will be read 1 by          software
        using Addr = Register::Address<0x58024818,0xffff1fff,0x00000000,std::uint32_t>;
        ///VOS Ready bit for VCORE voltage scaling              output selection. This bit is set to 1 by hardware              when Bypass mode is selected in PWR control register              3 (PWR_CR3).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vosrdy{}; 
        ///Voltage scaling selection according to              performance These bits control the VCORE voltage              level and allow to obtains the best trade-off between              power consumption and performance: When increasing              the performance, the voltage scaling shall be changed              before increasing the system frequency. When              decreasing performance, the system frequency shall              first be decreased before changing the voltage              scaling.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> vos{}; 
    }
    namespace PwrPwrWkupcr{    ///<reset only by system reset, not reset by          wakeup from Standby mode5 wait states are required when          writing this register (when clearing a WKUPF bit in          PWR_WKUPFR, the AHB write access will complete after the          WKUPF has been cleared).
        using Addr = Register::Address<0x58024820,0xffffffc0,0x00000000,std::uint32_t>;
        ///Clear Wakeup pin flag for WKUP. These              bits are always read as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> wkupc{}; 
    }
    namespace PwrPwrWkupfr{    ///<reset only by system reset, not reset by          wakeup from Standby mode
        using Addr = Register::Address<0x58024824,0xffffffc0,0x00000000,std::uint32_t>;
        ///Wakeup pin WKUPF flag. This bit is set              by hardware and cleared only by a Reset pin or by              setting the WKUPCn+1 bit in the PWR wakeup clear              register (PWR_WKUPCR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wkupf1{}; 
        ///Wakeup pin WKUPF flag. This bit is set              by hardware and cleared only by a Reset pin or by              setting the WKUPCn+1 bit in the PWR wakeup clear              register (PWR_WKUPCR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wkupf2{}; 
        ///Wakeup pin WKUPF flag. This bit is set              by hardware and cleared only by a Reset pin or by              setting the WKUPCn+1 bit in the PWR wakeup clear              register (PWR_WKUPCR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wkupf3{}; 
        ///Wakeup pin WKUPF flag. This bit is set              by hardware and cleared only by a Reset pin or by              setting the WKUPCn+1 bit in the PWR wakeup clear              register (PWR_WKUPCR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wkupf4{}; 
        ///Wakeup pin WKUPF flag. This bit is set              by hardware and cleared only by a Reset pin or by              setting the WKUPCn+1 bit in the PWR wakeup clear              register (PWR_WKUPCR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wkupf5{}; 
        ///Wakeup pin WKUPF flag. This bit is set              by hardware and cleared only by a Reset pin or by              setting the WKUPCn+1 bit in the PWR wakeup clear              register (PWR_WKUPCR).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wkupf6{}; 
    }
    namespace PwrPwrWkupepr{    ///<Reset only by system reset, not reset by          wakeup from Standby mode
        using Addr = Register::Address<0x58024828,0xf000c0c0,0x00000000,std::uint32_t>;
        ///Enable Wakeup Pin WKUPn+1 Each bit is              set and cleared by software. Note: An additional              wakeup event is detected if WKUPn+1 pin is enabled              (by setting the WKUPENn+1 bit) when WKUPn+1 pin level              is already high when WKUPPn+1 selects rising edge, or              low when WKUPPn+1 selects falling edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wkupen1{}; 
        ///Enable Wakeup Pin WKUPn+1 Each bit is              set and cleared by software. Note: An additional              wakeup event is detected if WKUPn+1 pin is enabled              (by setting the WKUPENn+1 bit) when WKUPn+1 pin level              is already high when WKUPPn+1 selects rising edge, or              low when WKUPPn+1 selects falling edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wkupen2{}; 
        ///Enable Wakeup Pin WKUPn+1 Each bit is              set and cleared by software. Note: An additional              wakeup event is detected if WKUPn+1 pin is enabled              (by setting the WKUPENn+1 bit) when WKUPn+1 pin level              is already high when WKUPPn+1 selects rising edge, or              low when WKUPPn+1 selects falling edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wkupen3{}; 
        ///Enable Wakeup Pin WKUPn+1 Each bit is              set and cleared by software. Note: An additional              wakeup event is detected if WKUPn+1 pin is enabled              (by setting the WKUPENn+1 bit) when WKUPn+1 pin level              is already high when WKUPPn+1 selects rising edge, or              low when WKUPPn+1 selects falling edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wkupen4{}; 
        ///Enable Wakeup Pin WKUPn+1 Each bit is              set and cleared by software. Note: An additional              wakeup event is detected if WKUPn+1 pin is enabled              (by setting the WKUPENn+1 bit) when WKUPn+1 pin level              is already high when WKUPPn+1 selects rising edge, or              low when WKUPPn+1 selects falling edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wkupen5{}; 
        ///Enable Wakeup Pin WKUPn+1 Each bit is              set and cleared by software. Note: An additional              wakeup event is detected if WKUPn+1 pin is enabled              (by setting the WKUPENn+1 bit) when WKUPn+1 pin level              is already high when WKUPPn+1 selects rising edge, or              low when WKUPPn+1 selects falling edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wkupen6{}; 
        ///Wakeup pin polarity bit for WKUPn-7              These bits define the polarity used for event              detection on WKUPn-7 external wakeup              pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wkupp1{}; 
        ///Wakeup pin polarity bit for WKUPn-7              These bits define the polarity used for event              detection on WKUPn-7 external wakeup              pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wkupp2{}; 
        ///Wakeup pin polarity bit for WKUPn-7              These bits define the polarity used for event              detection on WKUPn-7 external wakeup              pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wkupp3{}; 
        ///Wakeup pin polarity bit for WKUPn-7              These bits define the polarity used for event              detection on WKUPn-7 external wakeup              pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wkupp4{}; 
        ///Wakeup pin polarity bit for WKUPn-7              These bits define the polarity used for event              detection on WKUPn-7 external wakeup              pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wkupp5{}; 
        ///Wakeup pin polarity bit for WKUPn-7              These bits define the polarity used for event              detection on WKUPn-7 external wakeup              pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wkupp6{}; 
        ///Wakeup pin pull              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> wkuppupd1{}; 
        ///Wakeup pin pull              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> wkuppupd2{}; 
        ///Wakeup pin pull              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> wkuppupd3{}; 
        ///Wakeup pin pull              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> wkuppupd4{}; 
        ///Wakeup pin pull              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> wkuppupd5{}; 
        ///Wakeup pin pull configuration for              WKUP(truncate(n/2)-7) These bits define the I/O pad              pull configuration used when WKUPEN(truncate(n/2)-7)              = 1. The associated GPIO port pull configuration              shall be set to the same value or to 00. The Wakeup              pin pull configuration is kept in Standby              mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> wkuppupd6{}; 
    }
}
