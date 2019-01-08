#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Universal Serial Bus, OTG Capable Controller
    namespace Usb0Perid{    ///<Peripheral ID register
        using Addr = Register::Address<0x40072000,0xffffffc0,0x00000000,std::uint8_t>;
        ///Peripheral Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> id{}; 
    }
    namespace Usb0Idcomp{    ///<Peripheral ID Complement register
        using Addr = Register::Address<0x40072004,0xffffffc0,0x00000000,std::uint8_t>;
        ///Ones' complement of PERID[ID]. bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nid{}; 
    }
    namespace Usb0Rev{    ///<Peripheral Revision register
        using Addr = Register::Address<0x40072008,0xffffff00,0x00000000,std::uint8_t>;
        ///Revision
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rev{}; 
    }
    namespace Usb0Addinfo{    ///<Peripheral Additional Info register
        using Addr = Register::Address<0x4007200c,0xfffffffe,0x00000000,std::uint8_t>;
        ///This bit is set if host mode is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> iehost{}; 
    }
    namespace Usb0Otgistat{    ///<OTG Interrupt Status register
        using Addr = Register::Address<0x40072010,0xffffff12,0x00000000,std::uint8_t>;
        ///This bit is set when a change in VBUS is detected on an A device.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> avbuschg{}; 
        ///This bit is set when a change in VBUS is detected on a B device.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bSessChg{}; 
        ///This bit is set when a change in VBUS is detected indicating a session valid or a session no longer valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sessvldchg{}; 
        ///This interrupt is set when the USB line state (CTL[SE0] and CTL[JSTATE] bits) are stable without change for 1 millisecond, and the value of the line state is different from the last time when the line state was stable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lineStateChg{}; 
        ///This bit is set when the 1 millisecond timer expires
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> onemsec{}; 
        ///This bit is set when a change in the ID Signal from the USB connector is sensed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> idchg{}; 
    }
    namespace Usb0Otgicr{    ///<OTG Interrupt Control register
        using Addr = Register::Address<0x40072014,0xffffff12,0x00000000,std::uint8_t>;
        ///A VBUS Valid Interrupt Enable
        enum class AvbusenVal {
            v0=0x00000000,     ///<Disables the AVBUSCHG interrupt.
            v1=0x00000001,     ///<Enables the AVBUSCHG interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,AvbusenVal> avbusen{}; 
        namespace AvbusenValC{
            constexpr Register::FieldValue<decltype(avbusen)::Type,AvbusenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avbusen)::Type,AvbusenVal::v1> v1{};
        }
        ///B Session END Interrupt Enable
        enum class BsessenVal {
            v0=0x00000000,     ///<Disables the B_SESS_CHG interrupt.
            v1=0x00000001,     ///<Enables the B_SESS_CHG interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BsessenVal> bsessen{}; 
        namespace BsessenValC{
            constexpr Register::FieldValue<decltype(bsessen)::Type,BsessenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bsessen)::Type,BsessenVal::v1> v1{};
        }
        ///Session Valid Interrupt Enable
        enum class SessvldenVal {
            v0=0x00000000,     ///<Disables the SESSVLDCHG interrupt.
            v1=0x00000001,     ///<Enables the SESSVLDCHG interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SessvldenVal> sessvlden{}; 
        namespace SessvldenValC{
            constexpr Register::FieldValue<decltype(sessvlden)::Type,SessvldenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sessvlden)::Type,SessvldenVal::v1> v1{};
        }
        ///Line State Change Interrupt Enable
        enum class LinestateenVal {
            v0=0x00000000,     ///<Disables the LINE_STAT_CHG interrupt.
            v1=0x00000001,     ///<Enables the LINE_STAT_CHG interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,LinestateenVal> linestateen{}; 
        namespace LinestateenValC{
            constexpr Register::FieldValue<decltype(linestateen)::Type,LinestateenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(linestateen)::Type,LinestateenVal::v1> v1{};
        }
        ///One Millisecond Interrupt Enable
        enum class OnemsecenVal {
            v0=0x00000000,     ///<Diables the 1ms timer interrupt.
            v1=0x00000001,     ///<Enables the 1ms timer interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,OnemsecenVal> onemsecen{}; 
        namespace OnemsecenValC{
            constexpr Register::FieldValue<decltype(onemsecen)::Type,OnemsecenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(onemsecen)::Type,OnemsecenVal::v1> v1{};
        }
        ///ID Interrupt Enable
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
    namespace Usb0Otgstat{    ///<OTG Status register
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
        ///B Session End
        enum class BsessendVal {
            v0=0x00000000,     ///<The VBUS voltage is above the B session end threshold.
            v1=0x00000001,     ///<The VBUS voltage is below the B session end threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BsessendVal> bsessend{}; 
        namespace BsessendValC{
            constexpr Register::FieldValue<decltype(bsessend)::Type,BsessendVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bsessend)::Type,BsessendVal::v1> v1{};
        }
        ///Session Valid
        enum class SessvldVal {
            v0=0x00000000,     ///<The VBUS voltage is below the B session valid threshold
            v1=0x00000001,     ///<The VBUS voltage is above the B session valid threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SessvldVal> sessVld{}; 
        namespace SessvldValC{
            constexpr Register::FieldValue<decltype(sessVld)::Type,SessvldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sessVld)::Type,SessvldVal::v1> v1{};
        }
        ///Indicates that the internal signals that control the LINE_STATE_CHG field of OTGISTAT are stable for at least 1 ms
        enum class LinestatestableVal {
            v0=0x00000000,     ///<The LINE_STAT_CHG bit is not yet stable.
            v1=0x00000001,     ///<The LINE_STAT_CHG bit has been debounced and is stable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,LinestatestableVal> linestatestable{}; 
        namespace LinestatestableValC{
            constexpr Register::FieldValue<decltype(linestatestable)::Type,LinestatestableVal::v0> v0{};
            constexpr Register::FieldValue<decltype(linestatestable)::Type,LinestatestableVal::v1> v1{};
        }
        ///This bit is reserved for the 1ms count, but it is not useful to software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> onemsecen{}; 
        ///Indicates the current state of the ID pin on the USB connector
        enum class IdVal {
            v0=0x00000000,     ///<Indicates a Type A cable is plugged into the USB connector.
            v1=0x00000001,     ///<Indicates no cable is attached or a Type B cable is plugged into the USB connector.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,IdVal> id{}; 
        namespace IdValC{
            constexpr Register::FieldValue<decltype(id)::Type,IdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(id)::Type,IdVal::v1> v1{};
        }
    }
    namespace Usb0Otgctl{    ///<OTG Control register
        using Addr = Register::Address<0x4007201c,0xffffff4b,0x00000000,std::uint8_t>;
        ///On-The-Go pullup/pulldown resistor enable
        enum class OtgenVal {
            v0=0x00000000,     ///<If USB_EN is 1 and HOST_MODE is 0 in the Control Register (CTL), then the D+ Data Line pull-up resistors are enabled. If HOST_MODE is 1 the D+ and D- Data Line pull-down resistors are engaged.
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
    namespace Usb0Istat{    ///<Interrupt Status register
        using Addr = Register::Address<0x40072080,0xffffff00,0x00000000,std::uint8_t>;
        ///This bit is set when the USB Module has decoded a valid USB reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbrst{}; 
        ///This bit is set when any of the error conditions within Error Interrupt Status (ERRSTAT) register occur
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> error{}; 
        ///This bit is set when the USB Module receives a Start Of Frame (SOF) token
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softok{}; 
        ///This bit is set when the current token being processed has completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tokdne{}; 
        ///This bit is set when the USB Module detects a constant idle on the USB bus for 3 ms
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sleep{}; 
        ///This bit is set when a K-state is observed on the DP/DM signals for 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> resume{}; 
        ///Attach Interrupt
        enum class AttachVal {
            v0=0x00000000,     ///<No Attach is detected since the last time the ATTACH bit was cleared.
            v1=0x00000001,     ///<A peripheral is now present and must be configured (a stable non-SE0 state is detected for more than 2.5 us).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AttachVal> attach{}; 
        namespace AttachValC{
            constexpr Register::FieldValue<decltype(attach)::Type,AttachVal::v0> v0{};
            constexpr Register::FieldValue<decltype(attach)::Type,AttachVal::v1> v1{};
        }
        ///Stall Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stall{}; 
    }
    namespace Usb0Inten{    ///<Interrupt Enable register
        using Addr = Register::Address<0x40072084,0xffffff00,0x00000000,std::uint8_t>;
        ///USBRST Interrupt Enable
        enum class UsbrstenVal {
            v0=0x00000000,     ///<Disables the USBRST interrupt.
            v1=0x00000001,     ///<Enables the USBRST interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UsbrstenVal> usbrsten{}; 
        namespace UsbrstenValC{
            constexpr Register::FieldValue<decltype(usbrsten)::Type,UsbrstenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbrsten)::Type,UsbrstenVal::v1> v1{};
        }
        ///ERROR Interrupt Enable
        enum class ErrorenVal {
            v0=0x00000000,     ///<Disables the ERROR interrupt.
            v1=0x00000001,     ///<Enables the ERROR interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ErrorenVal> erroren{}; 
        namespace ErrorenValC{
            constexpr Register::FieldValue<decltype(erroren)::Type,ErrorenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erroren)::Type,ErrorenVal::v1> v1{};
        }
        ///SOFTOK Interrupt Enable
        enum class SoftokenVal {
            v0=0x00000000,     ///<Disbles the SOFTOK interrupt.
            v1=0x00000001,     ///<Enables the SOFTOK interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SoftokenVal> softoken{}; 
        namespace SoftokenValC{
            constexpr Register::FieldValue<decltype(softoken)::Type,SoftokenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(softoken)::Type,SoftokenVal::v1> v1{};
        }
        ///TOKDNE Interrupt Enable
        enum class TokdneenVal {
            v0=0x00000000,     ///<Disables the TOKDNE interrupt.
            v1=0x00000001,     ///<Enables the TOKDNE interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TokdneenVal> tokdneen{}; 
        namespace TokdneenValC{
            constexpr Register::FieldValue<decltype(tokdneen)::Type,TokdneenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tokdneen)::Type,TokdneenVal::v1> v1{};
        }
        ///SLEEP Interrupt Enable
        enum class SleepenVal {
            v0=0x00000000,     ///<Disables the SLEEP interrupt.
            v1=0x00000001,     ///<Enables the SLEEP interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SleepenVal> sleepen{}; 
        namespace SleepenValC{
            constexpr Register::FieldValue<decltype(sleepen)::Type,SleepenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sleepen)::Type,SleepenVal::v1> v1{};
        }
        ///RESUME Interrupt Enable
        enum class ResumeenVal {
            v0=0x00000000,     ///<Disables the RESUME interrupt.
            v1=0x00000001,     ///<Enables the RESUME interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ResumeenVal> resumeen{}; 
        namespace ResumeenValC{
            constexpr Register::FieldValue<decltype(resumeen)::Type,ResumeenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(resumeen)::Type,ResumeenVal::v1> v1{};
        }
        ///ATTACH Interrupt Enable
        enum class AttachenVal {
            v0=0x00000000,     ///<Disables the ATTACH interrupt.
            v1=0x00000001,     ///<Enables the ATTACH interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AttachenVal> attachen{}; 
        namespace AttachenValC{
            constexpr Register::FieldValue<decltype(attachen)::Type,AttachenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(attachen)::Type,AttachenVal::v1> v1{};
        }
        ///STALL Interrupt Enable
        enum class StallenVal {
            v0=0x00000000,     ///<Diasbles the STALL interrupt.
            v1=0x00000001,     ///<Enables the STALL interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,StallenVal> stallen{}; 
        namespace StallenValC{
            constexpr Register::FieldValue<decltype(stallen)::Type,StallenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stallen)::Type,StallenVal::v1> v1{};
        }
    }
    namespace Usb0Errstat{    ///<Error Interrupt Status register
        using Addr = Register::Address<0x40072088,0xffffff40,0x00000000,std::uint8_t>;
        ///This bit is set when the PID check field fails.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> piderr{}; 
        ///This error interrupt has two functions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crc5eof{}; 
        ///This bit is set when a data packet is rejected due to a CRC16 error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> crc16{}; 
        ///This bit is set if the data field received was not 8 bits in length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dfn8{}; 
        ///This bit is set when a bus turnaround timeout error occurs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btoerr{}; 
        ///This bit is set if the USB Module has requested a DMA access to read a new BDT but has not been given the bus before it needs to receive or transmit data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dmaerr{}; 
        ///This bit is set when a bit stuff error is detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btserr{}; 
    }
    namespace Usb0Erren{    ///<Error Interrupt Enable register
        using Addr = Register::Address<0x4007208c,0xffffff40,0x00000000,std::uint8_t>;
        ///PIDERR Interrupt Enable
        enum class PiderrenVal {
            v0=0x00000000,     ///<Disables the PIDERR interrupt.
            v1=0x00000001,     ///<Enters the PIDERR interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PiderrenVal> piderren{}; 
        namespace PiderrenValC{
            constexpr Register::FieldValue<decltype(piderren)::Type,PiderrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(piderren)::Type,PiderrenVal::v1> v1{};
        }
        ///CRC5/EOF Interrupt Enable
        enum class Crc5eofenVal {
            v0=0x00000000,     ///<Disables the CRC5/EOF interrupt.
            v1=0x00000001,     ///<Enables the CRC5/EOF interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Crc5eofenVal> crc5eofen{}; 
        namespace Crc5eofenValC{
            constexpr Register::FieldValue<decltype(crc5eofen)::Type,Crc5eofenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crc5eofen)::Type,Crc5eofenVal::v1> v1{};
        }
        ///CRC16 Interrupt Enable
        enum class Crc16enVal {
            v0=0x00000000,     ///<Disables the CRC16 interrupt.
            v1=0x00000001,     ///<Enables the CRC16 interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Crc16enVal> crc16en{}; 
        namespace Crc16enValC{
            constexpr Register::FieldValue<decltype(crc16en)::Type,Crc16enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crc16en)::Type,Crc16enVal::v1> v1{};
        }
        ///DFN8 Interrupt Enable
        enum class Dfn8enVal {
            v0=0x00000000,     ///<Disables the DFN8 interrupt.
            v1=0x00000001,     ///<Enables the DFN8 interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Dfn8enVal> dfn8en{}; 
        namespace Dfn8enValC{
            constexpr Register::FieldValue<decltype(dfn8en)::Type,Dfn8enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dfn8en)::Type,Dfn8enVal::v1> v1{};
        }
        ///BTOERR Interrupt Enable
        enum class BtoerrenVal {
            v0=0x00000000,     ///<Disables the BTOERR interrupt.
            v1=0x00000001,     ///<Enables the BTOERR interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BtoerrenVal> btoerren{}; 
        namespace BtoerrenValC{
            constexpr Register::FieldValue<decltype(btoerren)::Type,BtoerrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(btoerren)::Type,BtoerrenVal::v1> v1{};
        }
        ///DMAERR Interrupt Enable
        enum class DmaerrenVal {
            v0=0x00000000,     ///<Disables the DMAERR interrupt.
            v1=0x00000001,     ///<Enables the DMAERR interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DmaerrenVal> dmaerren{}; 
        namespace DmaerrenValC{
            constexpr Register::FieldValue<decltype(dmaerren)::Type,DmaerrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmaerren)::Type,DmaerrenVal::v1> v1{};
        }
        ///BTSERR Interrupt Enable
        enum class BtserrenVal {
            v0=0x00000000,     ///<Disables the BTSERR interrupt.
            v1=0x00000001,     ///<Enables the BTSERR interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,BtserrenVal> btserren{}; 
        namespace BtserrenValC{
            constexpr Register::FieldValue<decltype(btserren)::Type,BtserrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(btserren)::Type,BtserrenVal::v1> v1{};
        }
    }
    namespace Usb0Stat{    ///<Status register
        using Addr = Register::Address<0x40072090,0xffffff03,0x00000000,std::uint8_t>;
        ///This bit is set if the last buffer descriptor updated was in the odd bank of the BDT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> odd{}; 
        ///Transmit Indicator
        enum class TxVal {
            v0=0x00000000,     ///<The most recent transaction was a receive operation.
            v1=0x00000001,     ///<The most recent transaction was a transmit operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TxVal> tx{}; 
        namespace TxValC{
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::v1> v1{};
        }
        ///This four-bit field encodes the endpoint address that received or transmitted the previous token
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endp{}; 
    }
    namespace Usb0Ctl{    ///<Control register
        using Addr = Register::Address<0x40072094,0xffffff00,0x00000000,std::uint8_t>;
        ///USB Enable
        enum class UsbensofenVal {
            v0=0x00000000,     ///<Disables the USB Module.
            v1=0x00000001,     ///<Enables the USB Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UsbensofenVal> usbensofen{}; 
        namespace UsbensofenValC{
            constexpr Register::FieldValue<decltype(usbensofen)::Type,UsbensofenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbensofen)::Type,UsbensofenVal::v1> v1{};
        }
        ///Setting this bit to 1 resets all the BDT ODD ping/pong fields to 0, which then specifies the EVEN BDT bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oddrst{}; 
        ///When set to 1 this bit enables the USB Module to execute resume signaling
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> resume{}; 
        ///When set to 1, this bit enables the USB Module to operate in Host mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hostmodeen{}; 
        ///Setting this bit enables the USB Module to generate USB reset signaling
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> reset{}; 
        ///In Host mode, TOKEN_BUSY is set when the USB module is busy executing a USB token
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txsuspendtokenbusy{}; 
        ///Live USB Single Ended Zero signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> se0{}; 
        ///Live USB differential receiver JSTATE signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> jstate{}; 
    }
    namespace Usb0Addr{    ///<Address register
        using Addr = Register::Address<0x40072098,0xffffff00,0x00000000,std::uint8_t>;
        ///USB Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> addr{}; 
        ///Low Speed Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lsen{}; 
    }
    namespace Usb0Bdtpage1{    ///<BDT Page register 1
        using Addr = Register::Address<0x4007209c,0xffffff01,0x00000000,std::uint8_t>;
        ///Provides address bits 15 through 9 of the BDT base address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> bdtba{}; 
    }
    namespace Usb0Frmnuml{    ///<Frame Number register Low
        using Addr = Register::Address<0x400720a0,0xffffff00,0x00000000,std::uint8_t>;
        ///This 8-bit field and the 3-bit field in the Frame Number Register High are used to compute the address where the current Buffer Descriptor Table (BDT) resides in system memory
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frm{}; 
    }
    namespace Usb0Frmnumh{    ///<Frame Number register High
        using Addr = Register::Address<0x400720a4,0xfffffff8,0x00000000,std::uint8_t>;
        ///This 3-bit field and the 8-bit field in the Frame Number Register Low are used to compute the address where the current Buffer Descriptor Table (BDT) resides in system memory
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> frm{}; 
    }
    namespace Usb0Token{    ///<Token register
        using Addr = Register::Address<0x400720a8,0xffffff00,0x00000000,std::uint8_t>;
        ///Holds the Endpoint address for the token command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tokenendpt{}; 
        ///Contains the token type executed by the USB module.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tokenpid{}; 
    }
    namespace Usb0Softhld{    ///<SOF Threshold register
        using Addr = Register::Address<0x400720ac,0xffffff00,0x00000000,std::uint8_t>;
        ///Represents the SOF count threshold in byte times.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Usb0Bdtpage2{    ///<BDT Page Register 2
        using Addr = Register::Address<0x400720b0,0xffffff00,0x00000000,std::uint8_t>;
        ///Provides address bits 23 through 16 of the BDT base address that defines the location of Buffer Descriptor Table resides in system memory
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bdtba{}; 
    }
    namespace Usb0Bdtpage3{    ///<BDT Page Register 3
        using Addr = Register::Address<0x400720b4,0xffffff00,0x00000000,std::uint8_t>;
        ///Provides address bits 31 through 24 of the BDT base address that defines the location of Buffer Descriptor Table resides in system memory
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bdtba{}; 
    }
    namespace Usb0Usbctrl{    ///<USB Control register
        using Addr = Register::Address<0x40072100,0xffffff3f,0x00000000,std::uint8_t>;
        ///Enables the weak pulldowns on the USB transceiver.
        enum class PdeVal {
            v0=0x00000000,     ///<Weak pulldowns are disabled on D+ and D-.
            v1=0x00000001,     ///<Weak pulldowns are enabled on D+ and D-.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PdeVal> pde{}; 
        namespace PdeValC{
            constexpr Register::FieldValue<decltype(pde)::Type,PdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pde)::Type,PdeVal::v1> v1{};
        }
        ///Places the USB transceiver into the suspend state.
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
    namespace Usb0Observe{    ///<USB OTG Observe register
        using Addr = Register::Address<0x40072104,0xffffff2f,0x00000000,std::uint8_t>;
        ///Provides observability of the D- Pulldown enable at the USB transceiver.
        enum class DmpdVal {
            v0=0x00000000,     ///<D- pulldown disabled.
            v1=0x00000001,     ///<D- pulldown enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DmpdVal> dmpd{}; 
        namespace DmpdValC{
            constexpr Register::FieldValue<decltype(dmpd)::Type,DmpdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmpd)::Type,DmpdVal::v1> v1{};
        }
        ///Provides observability of the D+ Pulldown enable at the USB transceiver.
        enum class DppdVal {
            v0=0x00000000,     ///<D+ pulldown disabled.
            v1=0x00000001,     ///<D+ pulldown enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DppdVal> dppd{}; 
        namespace DppdValC{
            constexpr Register::FieldValue<decltype(dppd)::Type,DppdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dppd)::Type,DppdVal::v1> v1{};
        }
        ///Provides observability of the D+ Pullup enable at the USB transceiver.
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
    namespace Usb0Control{    ///<USB OTG Control register
        using Addr = Register::Address<0x40072108,0xffffffef,0x00000000,std::uint8_t>;
        ///Provides control of the DP Pullup in USBOTG, if USB is configured in non-OTG device mode.
        enum class DppullupnonotgVal {
            v0=0x00000000,     ///<DP Pullup in non-OTG device mode is not enabled.
            v1=0x00000001,     ///<DP Pullup in non-OTG device mode is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DppullupnonotgVal> dppullupnonotg{}; 
        namespace DppullupnonotgValC{
            constexpr Register::FieldValue<decltype(dppullupnonotg)::Type,DppullupnonotgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dppullupnonotg)::Type,DppullupnonotgVal::v1> v1{};
        }
    }
    namespace Usb0Usbtrc0{    ///<USB Transceiver Control register 0
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
            v1=0x00000001,     ///<USB asynchronous wakeup from suspend mode enabled. The asynchronous resume interrupt differs from the synchronous resume interrupt in that it asynchronously detects K-state using the unfiltered state of the D+ and D- pins. This interrupt should only be enabled when the Transceiver is suspended.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,UsbresmenVal> usbresmen{}; 
        namespace UsbresmenValC{
            constexpr Register::FieldValue<decltype(usbresmen)::Type,UsbresmenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbresmen)::Type,UsbresmenVal::v1> v1{};
        }
        ///USB Reset
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
    namespace Usb0Usbfrmadjust{    ///<Frame Adjust Register
        using Addr = Register::Address<0x40072114,0xffffff00,0x00000000,std::uint8_t>;
        ///Frame Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adj{}; 
    }
    namespace Usb0Endpt0{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720c0,0xffffff20,0x00000000,std::uint8_t>;
        ///When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///When set this bit indicates that the endpoint is called
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///This bit, when set, enables the endpoint for TX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///This bit, when set, enables the endpoint for RX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///This bit, when set, disables control (SETUP) transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///Host without a hub This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only
        enum class HostwohubVal {
            v0=0x00000000,     ///<Low-speed device connected to Host through a hub. PRE_PID will be generated as required.
            v1=0x00000001,     ///<Low-speed device directly connected. No hub, or no low-speed device attached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HostwohubVal> hostwohub{}; 
        namespace HostwohubValC{
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v1> v1{};
        }
    }
    namespace Usb0Endpt1{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720c4,0xffffff20,0x00000000,std::uint8_t>;
        ///When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///When set this bit indicates that the endpoint is called
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///This bit, when set, enables the endpoint for TX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///This bit, when set, enables the endpoint for RX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///This bit, when set, disables control (SETUP) transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///Host without a hub This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only
        enum class HostwohubVal {
            v0=0x00000000,     ///<Low-speed device connected to Host through a hub. PRE_PID will be generated as required.
            v1=0x00000001,     ///<Low-speed device directly connected. No hub, or no low-speed device attached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HostwohubVal> hostwohub{}; 
        namespace HostwohubValC{
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v1> v1{};
        }
    }
    namespace Usb0Endpt2{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720c8,0xffffff20,0x00000000,std::uint8_t>;
        ///When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///When set this bit indicates that the endpoint is called
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///This bit, when set, enables the endpoint for TX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///This bit, when set, enables the endpoint for RX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///This bit, when set, disables control (SETUP) transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///Host without a hub This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only
        enum class HostwohubVal {
            v0=0x00000000,     ///<Low-speed device connected to Host through a hub. PRE_PID will be generated as required.
            v1=0x00000001,     ///<Low-speed device directly connected. No hub, or no low-speed device attached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HostwohubVal> hostwohub{}; 
        namespace HostwohubValC{
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v1> v1{};
        }
    }
    namespace Usb0Endpt3{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720cc,0xffffff20,0x00000000,std::uint8_t>;
        ///When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///When set this bit indicates that the endpoint is called
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///This bit, when set, enables the endpoint for TX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///This bit, when set, enables the endpoint for RX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///This bit, when set, disables control (SETUP) transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///Host without a hub This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only
        enum class HostwohubVal {
            v0=0x00000000,     ///<Low-speed device connected to Host through a hub. PRE_PID will be generated as required.
            v1=0x00000001,     ///<Low-speed device directly connected. No hub, or no low-speed device attached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HostwohubVal> hostwohub{}; 
        namespace HostwohubValC{
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v1> v1{};
        }
    }
    namespace Usb0Endpt4{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720d0,0xffffff20,0x00000000,std::uint8_t>;
        ///When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///When set this bit indicates that the endpoint is called
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///This bit, when set, enables the endpoint for TX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///This bit, when set, enables the endpoint for RX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///This bit, when set, disables control (SETUP) transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///Host without a hub This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only
        enum class HostwohubVal {
            v0=0x00000000,     ///<Low-speed device connected to Host through a hub. PRE_PID will be generated as required.
            v1=0x00000001,     ///<Low-speed device directly connected. No hub, or no low-speed device attached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HostwohubVal> hostwohub{}; 
        namespace HostwohubValC{
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v1> v1{};
        }
    }
    namespace Usb0Endpt5{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720d4,0xffffff20,0x00000000,std::uint8_t>;
        ///When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///When set this bit indicates that the endpoint is called
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///This bit, when set, enables the endpoint for TX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///This bit, when set, enables the endpoint for RX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///This bit, when set, disables control (SETUP) transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///Host without a hub This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only
        enum class HostwohubVal {
            v0=0x00000000,     ///<Low-speed device connected to Host through a hub. PRE_PID will be generated as required.
            v1=0x00000001,     ///<Low-speed device directly connected. No hub, or no low-speed device attached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HostwohubVal> hostwohub{}; 
        namespace HostwohubValC{
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v1> v1{};
        }
    }
    namespace Usb0Endpt6{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720d8,0xffffff20,0x00000000,std::uint8_t>;
        ///When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///When set this bit indicates that the endpoint is called
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///This bit, when set, enables the endpoint for TX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///This bit, when set, enables the endpoint for RX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///This bit, when set, disables control (SETUP) transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///Host without a hub This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only
        enum class HostwohubVal {
            v0=0x00000000,     ///<Low-speed device connected to Host through a hub. PRE_PID will be generated as required.
            v1=0x00000001,     ///<Low-speed device directly connected. No hub, or no low-speed device attached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HostwohubVal> hostwohub{}; 
        namespace HostwohubValC{
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v1> v1{};
        }
    }
    namespace Usb0Endpt7{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720dc,0xffffff20,0x00000000,std::uint8_t>;
        ///When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///When set this bit indicates that the endpoint is called
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///This bit, when set, enables the endpoint for TX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///This bit, when set, enables the endpoint for RX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///This bit, when set, disables control (SETUP) transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///Host without a hub This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only
        enum class HostwohubVal {
            v0=0x00000000,     ///<Low-speed device connected to Host through a hub. PRE_PID will be generated as required.
            v1=0x00000001,     ///<Low-speed device directly connected. No hub, or no low-speed device attached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HostwohubVal> hostwohub{}; 
        namespace HostwohubValC{
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v1> v1{};
        }
    }
    namespace Usb0Endpt8{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720e0,0xffffff20,0x00000000,std::uint8_t>;
        ///When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///When set this bit indicates that the endpoint is called
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///This bit, when set, enables the endpoint for TX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///This bit, when set, enables the endpoint for RX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///This bit, when set, disables control (SETUP) transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///Host without a hub This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only
        enum class HostwohubVal {
            v0=0x00000000,     ///<Low-speed device connected to Host through a hub. PRE_PID will be generated as required.
            v1=0x00000001,     ///<Low-speed device directly connected. No hub, or no low-speed device attached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HostwohubVal> hostwohub{}; 
        namespace HostwohubValC{
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v1> v1{};
        }
    }
    namespace Usb0Endpt9{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720e4,0xffffff20,0x00000000,std::uint8_t>;
        ///When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///When set this bit indicates that the endpoint is called
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///This bit, when set, enables the endpoint for TX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///This bit, when set, enables the endpoint for RX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///This bit, when set, disables control (SETUP) transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///Host without a hub This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only
        enum class HostwohubVal {
            v0=0x00000000,     ///<Low-speed device connected to Host through a hub. PRE_PID will be generated as required.
            v1=0x00000001,     ///<Low-speed device directly connected. No hub, or no low-speed device attached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HostwohubVal> hostwohub{}; 
        namespace HostwohubValC{
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v1> v1{};
        }
    }
    namespace Usb0Endpt10{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720e8,0xffffff20,0x00000000,std::uint8_t>;
        ///When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///When set this bit indicates that the endpoint is called
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///This bit, when set, enables the endpoint for TX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///This bit, when set, enables the endpoint for RX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///This bit, when set, disables control (SETUP) transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///Host without a hub This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only
        enum class HostwohubVal {
            v0=0x00000000,     ///<Low-speed device connected to Host through a hub. PRE_PID will be generated as required.
            v1=0x00000001,     ///<Low-speed device directly connected. No hub, or no low-speed device attached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HostwohubVal> hostwohub{}; 
        namespace HostwohubValC{
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v1> v1{};
        }
    }
    namespace Usb0Endpt11{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720ec,0xffffff20,0x00000000,std::uint8_t>;
        ///When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///When set this bit indicates that the endpoint is called
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///This bit, when set, enables the endpoint for TX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///This bit, when set, enables the endpoint for RX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///This bit, when set, disables control (SETUP) transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///Host without a hub This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only
        enum class HostwohubVal {
            v0=0x00000000,     ///<Low-speed device connected to Host through a hub. PRE_PID will be generated as required.
            v1=0x00000001,     ///<Low-speed device directly connected. No hub, or no low-speed device attached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HostwohubVal> hostwohub{}; 
        namespace HostwohubValC{
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v1> v1{};
        }
    }
    namespace Usb0Endpt12{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720f0,0xffffff20,0x00000000,std::uint8_t>;
        ///When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///When set this bit indicates that the endpoint is called
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///This bit, when set, enables the endpoint for TX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///This bit, when set, enables the endpoint for RX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///This bit, when set, disables control (SETUP) transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///Host without a hub This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only
        enum class HostwohubVal {
            v0=0x00000000,     ///<Low-speed device connected to Host through a hub. PRE_PID will be generated as required.
            v1=0x00000001,     ///<Low-speed device directly connected. No hub, or no low-speed device attached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HostwohubVal> hostwohub{}; 
        namespace HostwohubValC{
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v1> v1{};
        }
    }
    namespace Usb0Endpt13{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720f4,0xffffff20,0x00000000,std::uint8_t>;
        ///When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///When set this bit indicates that the endpoint is called
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///This bit, when set, enables the endpoint for TX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///This bit, when set, enables the endpoint for RX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///This bit, when set, disables control (SETUP) transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///Host without a hub This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only
        enum class HostwohubVal {
            v0=0x00000000,     ///<Low-speed device connected to Host through a hub. PRE_PID will be generated as required.
            v1=0x00000001,     ///<Low-speed device directly connected. No hub, or no low-speed device attached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HostwohubVal> hostwohub{}; 
        namespace HostwohubValC{
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v1> v1{};
        }
    }
    namespace Usb0Endpt14{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720f8,0xffffff20,0x00000000,std::uint8_t>;
        ///When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///When set this bit indicates that the endpoint is called
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///This bit, when set, enables the endpoint for TX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///This bit, when set, enables the endpoint for RX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///This bit, when set, disables control (SETUP) transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///Host without a hub This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only
        enum class HostwohubVal {
            v0=0x00000000,     ///<Low-speed device connected to Host through a hub. PRE_PID will be generated as required.
            v1=0x00000001,     ///<Low-speed device directly connected. No hub, or no low-speed device attached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HostwohubVal> hostwohub{}; 
        namespace HostwohubValC{
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v1> v1{};
        }
    }
    namespace Usb0Endpt15{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720fc,0xffffff20,0x00000000,std::uint8_t>;
        ///When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///When set this bit indicates that the endpoint is called
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///This bit, when set, enables the endpoint for TX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///This bit, when set, enables the endpoint for RX transfers. See #aal353jj
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///This bit, when set, disables control (SETUP) transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///Host without a hub This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only
        enum class HostwohubVal {
            v0=0x00000000,     ///<Low-speed device connected to Host through a hub. PRE_PID will be generated as required.
            v1=0x00000001,     ///<Low-speed device directly connected. No hub, or no low-speed device attached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HostwohubVal> hostwohub{}; 
        namespace HostwohubValC{
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hostwohub)::Type,HostwohubVal::v1> v1{};
        }
    }
}
