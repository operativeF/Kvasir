#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Universal Serial Bus, OTG Capable Controller
    namespace Usb0Perid{    ///<Peripheral ID Register
        using Addr = Register::Address<0x40072000,0xffffffc0,0x00000000,std::uint8_t>;
        ///Peripheral identification bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> id{}; 
    }
    namespace Usb0Idcomp{    ///<Peripheral ID Complement Register
        using Addr = Register::Address<0x40072004,0xffffffc0,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nid{}; 
    }
    namespace Usb0Rev{    ///<Peripheral Revision Register
        using Addr = Register::Address<0x40072008,0xffffff00,0x00000000,std::uint8_t>;
        ///Revision
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rev{}; 
    }
    namespace Usb0Addinfo{    ///<Peripheral Additional Info Register
        using Addr = Register::Address<0x4007200c,0xffffff06,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> iehost{}; 
        ///Assigned Interrupt Request Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqnum{}; 
    }
    namespace Usb0Otgistat{    ///<OTG Interrupt Status Register
        using Addr = Register::Address<0x40072010,0xffffff12,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> avbuschg{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bSessChg{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sessvldchg{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lineStateChg{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> onemsec{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> idchg{}; 
    }
    namespace Usb0Otgicr{    ///<OTG Interrupt Control Register
        using Addr = Register::Address<0x40072014,0xffffff12,0x00000000,std::uint8_t>;
        ///A VBUS Valid interrupt enable
        enum class AvbusenVal {
            v0=0x00000000,     ///<The AVBUSCHG interrupt is disabled
            v1=0x00000001,     ///<The AVBUSCHG interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,AvbusenVal> avbusen{}; 
        namespace AvbusenValC{
            constexpr Register::FieldValue<decltype(avbusen)::Type,AvbusenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avbusen)::Type,AvbusenVal::v1> v1{};
        }
        ///B Session END interrupt enable
        enum class BsessenVal {
            v0=0x00000000,     ///<The B_SESS_CHG interrupt is disabled
            v1=0x00000001,     ///<The B_SESS_CHG interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BsessenVal> bsessen{}; 
        namespace BsessenValC{
            constexpr Register::FieldValue<decltype(bsessen)::Type,BsessenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bsessen)::Type,BsessenVal::v1> v1{};
        }
        ///Session valid interrupt enable
        enum class SessvldenVal {
            v0=0x00000000,     ///<The SESSVLDCHG interrupt is disabled.
            v1=0x00000001,     ///<The SESSVLDCHG interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SessvldenVal> sessvlden{}; 
        namespace SessvldenValC{
            constexpr Register::FieldValue<decltype(sessvlden)::Type,SessvldenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sessvlden)::Type,SessvldenVal::v1> v1{};
        }
        ///Line State change interrupt enable
        enum class LinestateenVal {
            v0=0x00000000,     ///<The LINE_STAT_CHG interrupt is disabled.
            v1=0x00000001,     ///<The LINE_STAT_CHG interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,LinestateenVal> linestateen{}; 
        namespace LinestateenValC{
            constexpr Register::FieldValue<decltype(linestateen)::Type,LinestateenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(linestateen)::Type,LinestateenVal::v1> v1{};
        }
        ///1 millisecond interrupt enable
        enum class OnemsecenVal {
            v0=0x00000000,     ///<The 1msec timer interrupt is disabled.
            v1=0x00000001,     ///<The 1msec timer interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,OnemsecenVal> onemsecen{}; 
        namespace OnemsecenValC{
            constexpr Register::FieldValue<decltype(onemsecen)::Type,OnemsecenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(onemsecen)::Type,OnemsecenVal::v1> v1{};
        }
        ///ID interrupt enable
        enum class IdenVal {
            v0=0x00000000,     ///<The ID interrupt is disabled
            v1=0x00000001,     ///<The ID interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,IdenVal> iden{}; 
        namespace IdenValC{
            constexpr Register::FieldValue<decltype(iden)::Type,IdenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iden)::Type,IdenVal::v1> v1{};
        }
    }
    namespace Usb0Otgstat{    ///<OTG Status Register
        using Addr = Register::Address<0x40072018,0xffffff12,0x00000000,std::uint8_t>;
        ///A VBUS Valid
        enum class AvbusvldVal {
            v0=0x00000000,     ///<The VBUS voltage is below the A VBUS Valid threshold.
            v1=0x00000001,     ///<The VBUS voltage is above the A VBUS Valid threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,AvbusvldVal> avbusvld{}; 
        namespace AvbusvldValC{
            constexpr Register::FieldValue<decltype(avbusvld)::Type,AvbusvldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avbusvld)::Type,AvbusvldVal::v1> v1{};
        }
        ///B Session END
        enum class BsessendVal {
            v0=0x00000000,     ///<The VBUS voltage is above the B session End threshold.
            v1=0x00000001,     ///<The VBUS voltage is below the B session End threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BsessendVal> bsessend{}; 
        namespace BsessendValC{
            constexpr Register::FieldValue<decltype(bsessend)::Type,BsessendVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bsessend)::Type,BsessendVal::v1> v1{};
        }
        ///Session valid
        enum class SessvldVal {
            v0=0x00000000,     ///<The VBUS voltage is below the B session Valid threshold
            v1=0x00000001,     ///<The VBUS voltage is above the B session Valid threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SessvldVal> sessVld{}; 
        namespace SessvldValC{
            constexpr Register::FieldValue<decltype(sessVld)::Type,SessvldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sessVld)::Type,SessvldVal::v1> v1{};
        }
        ///no description available
        enum class LinestatestableVal {
            v0=0x00000000,     ///<The LINE_STAT_CHG bit is not yet stable.
            v1=0x00000001,     ///<The LINE_STAT_CHG bit has been debounced and is stable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,LinestatestableVal> linestatestable{}; 
        namespace LinestatestableValC{
            constexpr Register::FieldValue<decltype(linestatestable)::Type,LinestatestableVal::v0> v0{};
            constexpr Register::FieldValue<decltype(linestatestable)::Type,LinestatestableVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> onemsecen{}; 
        ///no description available
        enum class IdVal {
            v0=0x00000000,     ///<Indicates a Type A cable has been plugged into the USB connector
            v1=0x00000001,     ///<Indicates no cable is attached or a Type B cable has been plugged into the USB connector
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,IdVal> id{}; 
        namespace IdValC{
            constexpr Register::FieldValue<decltype(id)::Type,IdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(id)::Type,IdVal::v1> v1{};
        }
    }
    namespace Usb0Otgctl{    ///<OTG Control Register
        using Addr = Register::Address<0x4007201c,0xffffff4b,0x00000000,std::uint8_t>;
        ///On-The-Go pullup/pulldown resistor enable
        enum class OtgenVal {
            v0=0x00000000,     ///<If USB_EN is set and HOST_MODE is clear in the Control Register (CTL), then the D+ Data Line pull-up resistors are enabled. If HOST_MODE is set the D+ and D- Data Line pull-down resistors are engaged.
            v1=0x00000001,     ///<The pull-up and pull-down controls in this register are used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,OtgenVal> otgen{}; 
        namespace OtgenValC{
            constexpr Register::FieldValue<decltype(otgen)::Type,OtgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(otgen)::Type,OtgenVal::v1> v1{};
        }
        ///D- Data Line pull-down resistor enable
        enum class DmlowVal {
            v0=0x00000000,     ///<D- pulldown resistor is not enabled.
            v1=0x00000001,     ///<D- pulldown resistor is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DmlowVal> dmlow{}; 
        namespace DmlowValC{
            constexpr Register::FieldValue<decltype(dmlow)::Type,DmlowVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmlow)::Type,DmlowVal::v1> v1{};
        }
        ///D+ Data Line pull-down resistor enable
        enum class DplowVal {
            v0=0x00000000,     ///<D+ pulldown resistor is not enabled.
            v1=0x00000001,     ///<D+ pulldown resistor is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DplowVal> dplow{}; 
        namespace DplowValC{
            constexpr Register::FieldValue<decltype(dplow)::Type,DplowVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dplow)::Type,DplowVal::v1> v1{};
        }
        ///D+ Data Line pullup resistor enable
        enum class DphighVal {
            v0=0x00000000,     ///<D+ pullup resistor is not enabled
            v1=0x00000001,     ///<D+ pullup resistor is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DphighVal> dphigh{}; 
        namespace DphighValC{
            constexpr Register::FieldValue<decltype(dphigh)::Type,DphighVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dphigh)::Type,DphighVal::v1> v1{};
        }
    }
    namespace Usb0Istat{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40072080,0xffffff00,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbrst{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> error{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softok{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tokdne{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sleep{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> resume{}; 
        ///Attach Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> attach{}; 
        ///Stall Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stall{}; 
    }
    namespace Usb0Inten{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40072084,0xffffff00,0x00000000,std::uint8_t>;
        ///USBRST Interrupt Enable
        enum class UsbrstenVal {
            v0=0x00000000,     ///<The USBRST interrupt is not enabled.
            v1=0x00000001,     ///<The USBRST interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UsbrstenVal> usbrsten{}; 
        namespace UsbrstenValC{
            constexpr Register::FieldValue<decltype(usbrsten)::Type,UsbrstenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbrsten)::Type,UsbrstenVal::v1> v1{};
        }
        ///ERROR Interrupt Enable
        enum class ErrorenVal {
            v0=0x00000000,     ///<The ERROR interrupt is not enabled.
            v1=0x00000001,     ///<The ERROR interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ErrorenVal> erroren{}; 
        namespace ErrorenValC{
            constexpr Register::FieldValue<decltype(erroren)::Type,ErrorenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erroren)::Type,ErrorenVal::v1> v1{};
        }
        ///SOFTOK Interrupt Enable
        enum class SoftokenVal {
            v0=0x00000000,     ///<The SOFTOK interrupt is not enabled.
            v1=0x00000001,     ///<The SOFTOK interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SoftokenVal> softoken{}; 
        namespace SoftokenValC{
            constexpr Register::FieldValue<decltype(softoken)::Type,SoftokenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(softoken)::Type,SoftokenVal::v1> v1{};
        }
        ///TOKDNE Interrupt Enable
        enum class TokdneenVal {
            v0=0x00000000,     ///<The TOKDNE interrupt is not enabled.
            v1=0x00000001,     ///<The TOKDNE interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TokdneenVal> tokdneen{}; 
        namespace TokdneenValC{
            constexpr Register::FieldValue<decltype(tokdneen)::Type,TokdneenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tokdneen)::Type,TokdneenVal::v1> v1{};
        }
        ///SLEEP Interrupt Enable
        enum class SleepenVal {
            v0=0x00000000,     ///<The SLEEP interrupt is not enabled.
            v1=0x00000001,     ///<The SLEEP interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SleepenVal> sleepen{}; 
        namespace SleepenValC{
            constexpr Register::FieldValue<decltype(sleepen)::Type,SleepenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sleepen)::Type,SleepenVal::v1> v1{};
        }
        ///RESUME Interrupt Enable
        enum class ResumeenVal {
            v0=0x00000000,     ///<The RESUME interrupt is not enabled.
            v1=0x00000001,     ///<The RESUME interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ResumeenVal> resumeen{}; 
        namespace ResumeenValC{
            constexpr Register::FieldValue<decltype(resumeen)::Type,ResumeenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(resumeen)::Type,ResumeenVal::v1> v1{};
        }
        ///ATTACH Interrupt Enable
        enum class AttachenVal {
            v0=0x00000000,     ///<The ATTACH interrupt is not enabled.
            v1=0x00000001,     ///<The ATTACH interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AttachenVal> attachen{}; 
        namespace AttachenValC{
            constexpr Register::FieldValue<decltype(attachen)::Type,AttachenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(attachen)::Type,AttachenVal::v1> v1{};
        }
        ///STALL Interrupt Enable
        enum class StallenVal {
            v0=0x00000000,     ///<The STALL interrupt is not enabled.
            v1=0x00000001,     ///<The STALL interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,StallenVal> stallen{}; 
        namespace StallenValC{
            constexpr Register::FieldValue<decltype(stallen)::Type,StallenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stallen)::Type,StallenVal::v1> v1{};
        }
    }
    namespace Usb0Errstat{    ///<Error Interrupt Status Register
        using Addr = Register::Address<0x40072088,0xffffff40,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> piderr{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crc5eof{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> crc16{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dfn8{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btoerr{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dmaerr{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btserr{}; 
    }
    namespace Usb0Erren{    ///<Error Interrupt Enable Register
        using Addr = Register::Address<0x4007208c,0xffffff40,0x00000000,std::uint8_t>;
        ///PIDERR Interrupt Enable
        enum class PiderrenVal {
            v0=0x00000000,     ///<The PIDERR interrupt is not enabled.
            v1=0x00000001,     ///<The PIDERR interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PiderrenVal> piderren{}; 
        namespace PiderrenValC{
            constexpr Register::FieldValue<decltype(piderren)::Type,PiderrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(piderren)::Type,PiderrenVal::v1> v1{};
        }
        ///CRC5/EOF Interrupt Enable
        enum class Crc5eofenVal {
            v0=0x00000000,     ///<The CRC5/EOF interrupt is not enabled.
            v1=0x00000001,     ///<The CRC5/EOF interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Crc5eofenVal> crc5eofen{}; 
        namespace Crc5eofenValC{
            constexpr Register::FieldValue<decltype(crc5eofen)::Type,Crc5eofenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crc5eofen)::Type,Crc5eofenVal::v1> v1{};
        }
        ///CRC16 Interrupt Enable
        enum class Crc16enVal {
            v0=0x00000000,     ///<The CRC16 interrupt is not enabled.
            v1=0x00000001,     ///<The CRC16 interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Crc16enVal> crc16en{}; 
        namespace Crc16enValC{
            constexpr Register::FieldValue<decltype(crc16en)::Type,Crc16enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crc16en)::Type,Crc16enVal::v1> v1{};
        }
        ///DFN8 Interrupt Enable
        enum class Dfn8enVal {
            v0=0x00000000,     ///<The DFN8 interrupt is not enabled.
            v1=0x00000001,     ///<The DFN8 interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Dfn8enVal> dfn8en{}; 
        namespace Dfn8enValC{
            constexpr Register::FieldValue<decltype(dfn8en)::Type,Dfn8enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dfn8en)::Type,Dfn8enVal::v1> v1{};
        }
        ///BTOERR Interrupt Enable
        enum class BtoerrenVal {
            v0=0x00000000,     ///<The BTOERR interrupt is not enabled.
            v1=0x00000001,     ///<The BTOERR interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BtoerrenVal> btoerren{}; 
        namespace BtoerrenValC{
            constexpr Register::FieldValue<decltype(btoerren)::Type,BtoerrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(btoerren)::Type,BtoerrenVal::v1> v1{};
        }
        ///DMAERR Interrupt Enable
        enum class DmaerrenVal {
            v0=0x00000000,     ///<The DMAERR interrupt is not enabled.
            v1=0x00000001,     ///<The DMAERR interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DmaerrenVal> dmaerren{}; 
        namespace DmaerrenValC{
            constexpr Register::FieldValue<decltype(dmaerren)::Type,DmaerrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmaerren)::Type,DmaerrenVal::v1> v1{};
        }
        ///BTSERR Interrupt Enable
        enum class BtserrenVal {
            v0=0x00000000,     ///<The BTSERR interrupt is not enabled.
            v1=0x00000001,     ///<The BTSERR interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,BtserrenVal> btserren{}; 
        namespace BtserrenValC{
            constexpr Register::FieldValue<decltype(btserren)::Type,BtserrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(btserren)::Type,BtserrenVal::v1> v1{};
        }
    }
    namespace Usb0Stat{    ///<Status Register
        using Addr = Register::Address<0x40072090,0xffffff03,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> odd{}; 
        ///Transmit Indicator
        enum class TxVal {
            v0=0x00000000,     ///<The most recent transaction was a Receive operation.
            v1=0x00000001,     ///<The most recent transaction was a Transmit operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TxVal> tx{}; 
        namespace TxValC{
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endp{}; 
    }
    namespace Usb0Ctl{    ///<Control Register
        using Addr = Register::Address<0x40072094,0xffffff00,0x00000000,std::uint8_t>;
        ///USB Enable
        enum class UsbensofenVal {
            v0=0x00000000,     ///<The USB Module is disabled.
            v1=0x00000001,     ///<The USB Module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UsbensofenVal> usbensofen{}; 
        namespace UsbensofenValC{
            constexpr Register::FieldValue<decltype(usbensofen)::Type,UsbensofenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbensofen)::Type,UsbensofenVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oddrst{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> resume{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hostmodeen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> reset{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txsuspendtokenbusy{}; 
        ///Live USB Single Ended Zero signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> se0{}; 
        ///Live USB differential receiver JSTATE signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> jstate{}; 
    }
    namespace Usb0Addr{    ///<Address Register
        using Addr = Register::Address<0x40072098,0xffffff00,0x00000000,std::uint8_t>;
        ///USB address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> addr{}; 
        ///Low Speed Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lsen{}; 
    }
    namespace Usb0Bdtpage1{    ///<BDT Page Register 1
        using Addr = Register::Address<0x4007209c,0xffffff01,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> bdtba{}; 
    }
    namespace Usb0Frmnuml{    ///<Frame Number Register Low
        using Addr = Register::Address<0x400720a0,0xffffff00,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frm{}; 
    }
    namespace Usb0Frmnumh{    ///<Frame Number Register High
        using Addr = Register::Address<0x400720a4,0xfffffff8,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> frm{}; 
    }
    namespace Usb0Token{    ///<Token Register
        using Addr = Register::Address<0x400720a8,0xffffff00,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tokenendpt{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tokenpid{}; 
    }
    namespace Usb0Softhld{    ///<SOF Threshold Register
        using Addr = Register::Address<0x400720ac,0xffffff00,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Usb0Bdtpage2{    ///<BDT Page Register 2
        using Addr = Register::Address<0x400720b0,0xffffff00,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bdtba{}; 
    }
    namespace Usb0Bdtpage3{    ///<BDT Page Register 3
        using Addr = Register::Address<0x400720b4,0xffffff00,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bdtba{}; 
    }
    namespace Usb0Usbctrl{    ///<USB Control Register
        using Addr = Register::Address<0x40072100,0xffffff3f,0x00000000,std::uint8_t>;
        ///no description available
        enum class PdeVal {
            v0=0x00000000,     ///<Weak pulldowns are disabled on D+ and D-
            v1=0x00000001,     ///<Weak pulldowns are enabled on D+ and D-.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PdeVal> pde{}; 
        namespace PdeValC{
            constexpr Register::FieldValue<decltype(pde)::Type,PdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pde)::Type,PdeVal::v1> v1{};
        }
        ///no description available
        enum class SuspVal {
            v0=0x00000000,     ///<USB transceiver is not in suspend state.
            v1=0x00000001,     ///<USB transceiver is in suspend state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SuspVal> susp{}; 
        namespace SuspValC{
            constexpr Register::FieldValue<decltype(susp)::Type,SuspVal::v0> v0{};
            constexpr Register::FieldValue<decltype(susp)::Type,SuspVal::v1> v1{};
        }
    }
    namespace Usb0Observe{    ///<USB OTG Observe Register
        using Addr = Register::Address<0x40072104,0xffffff2f,0x00000000,std::uint8_t>;
        ///no description available
        enum class DmpdVal {
            v0=0x00000000,     ///<D- pulldown disabled.
            v1=0x00000001,     ///<D- pulldown enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DmpdVal> dmpd{}; 
        namespace DmpdValC{
            constexpr Register::FieldValue<decltype(dmpd)::Type,DmpdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmpd)::Type,DmpdVal::v1> v1{};
        }
        ///no description available
        enum class DppdVal {
            v0=0x00000000,     ///<D+ pulldown disabled.
            v1=0x00000001,     ///<D+ pulldown enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DppdVal> dppd{}; 
        namespace DppdValC{
            constexpr Register::FieldValue<decltype(dppd)::Type,DppdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dppd)::Type,DppdVal::v1> v1{};
        }
        ///no description available
        enum class DppuVal {
            v0=0x00000000,     ///<D+ pullup disabled.
            v1=0x00000001,     ///<D+ pullup enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DppuVal> dppu{}; 
        namespace DppuValC{
            constexpr Register::FieldValue<decltype(dppu)::Type,DppuVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dppu)::Type,DppuVal::v1> v1{};
        }
    }
    namespace Usb0Control{    ///<USB OTG Control Register
        using Addr = Register::Address<0x40072108,0xffffffef,0x00000000,std::uint8_t>;
        ///no description available
        enum class DppullupnonotgVal {
            v0=0x00000000,     ///<DP Pull up in non-OTG device mode is not enabled.
            v1=0x00000001,     ///<DP Pull up in non-OTG device mode is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DppullupnonotgVal> dppullupnonotg{}; 
        namespace DppullupnonotgValC{
            constexpr Register::FieldValue<decltype(dppullupnonotg)::Type,DppullupnonotgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dppullupnonotg)::Type,DppullupnonotgVal::v1> v1{};
        }
    }
    namespace Usb0Usbtrc0{    ///<USB Transceiver Control Register 0
        using Addr = Register::Address<0x4007210c,0xffffff5c,0x00000000,std::uint8_t>;
        ///USB Asynchronous Interrupt
        enum class UsbresumeintVal {
            v0=0x00000000,     ///<No interrupt was generated.
            v1=0x00000001,     ///<Interrupt was generated because of the USB asynchronous interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,UsbresumeintVal> usbResumeInt{}; 
        namespace UsbresumeintValC{
            constexpr Register::FieldValue<decltype(usbResumeInt)::Type,UsbresumeintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbResumeInt)::Type,UsbresumeintVal::v1> v1{};
        }
        ///Synchronous USB Interrupt Detect
        enum class SyncdetVal {
            v0=0x00000000,     ///<Synchronous interrupt has not been detected.
            v1=0x00000001,     ///<Synchronous interrupt has been detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SyncdetVal> syncDet{}; 
        namespace SyncdetValC{
            constexpr Register::FieldValue<decltype(syncDet)::Type,SyncdetVal::v0> v0{};
            constexpr Register::FieldValue<decltype(syncDet)::Type,SyncdetVal::v1> v1{};
        }
        ///Asynchronous Resume Interrupt Enable
        enum class UsbresmenVal {
            v0=0x00000000,     ///<USB asynchronous wakeup from suspend mode disabled.
            v1=0x00000001,     ///<USB asynchronous wakeup from suspend mode enabled. The asynchronous resume interrupt differs from the synchronous resume interrupt in that it asynchronously detects K-state using the unfiltered state of the D+ and D- pins. This interupt should only be enabled when the Transceiver is suspended.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,UsbresmenVal> usbresmen{}; 
        namespace UsbresmenValC{
            constexpr Register::FieldValue<decltype(usbresmen)::Type,UsbresmenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbresmen)::Type,UsbresmenVal::v1> v1{};
        }
        ///USB reset
        enum class UsbresetVal {
            v0=0x00000000,     ///<Normal USB module operation.
            v1=0x00000001,     ///<Returns the USB module to its reset state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,UsbresetVal> usbreset{}; 
        namespace UsbresetValC{
            constexpr Register::FieldValue<decltype(usbreset)::Type,UsbresetVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbreset)::Type,UsbresetVal::v1> v1{};
        }
    }
    namespace Usb0Endpt0{    ///<Endpoint Control Register
        using Addr = Register::Address<0x400720c0,0xffffff20,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt1{    ///<Endpoint Control Register
        using Addr = Register::Address<0x400720c4,0xffffff20,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt2{    ///<Endpoint Control Register
        using Addr = Register::Address<0x400720c8,0xffffff20,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt3{    ///<Endpoint Control Register
        using Addr = Register::Address<0x400720cc,0xffffff20,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt4{    ///<Endpoint Control Register
        using Addr = Register::Address<0x400720d0,0xffffff20,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt5{    ///<Endpoint Control Register
        using Addr = Register::Address<0x400720d4,0xffffff20,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt6{    ///<Endpoint Control Register
        using Addr = Register::Address<0x400720d8,0xffffff20,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt7{    ///<Endpoint Control Register
        using Addr = Register::Address<0x400720dc,0xffffff20,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt8{    ///<Endpoint Control Register
        using Addr = Register::Address<0x400720e0,0xffffff20,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt9{    ///<Endpoint Control Register
        using Addr = Register::Address<0x400720e4,0xffffff20,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt10{    ///<Endpoint Control Register
        using Addr = Register::Address<0x400720e8,0xffffff20,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt11{    ///<Endpoint Control Register
        using Addr = Register::Address<0x400720ec,0xffffff20,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt12{    ///<Endpoint Control Register
        using Addr = Register::Address<0x400720f0,0xffffff20,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt13{    ///<Endpoint Control Register
        using Addr = Register::Address<0x400720f4,0xffffff20,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt14{    ///<Endpoint Control Register
        using Addr = Register::Address<0x400720f8,0xffffff20,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt15{    ///<Endpoint Control Register
        using Addr = Register::Address<0x400720fc,0xffffff20,0x00000000,std::uint8_t>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
}
