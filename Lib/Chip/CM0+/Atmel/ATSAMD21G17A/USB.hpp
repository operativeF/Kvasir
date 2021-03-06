#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Universal Serial Bus
    namespace UsbDeviceCtrla{    ///<Control A
        using Addr = Register::Address<0x41005000,0xffffff78,0x00000000,std::uint8_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Run in Standby Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Operating Mode
        enum class ModeVal {
            device=0x00000000,     ///<Device Mode
            host=0x00000001,     ///<Host Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::device> device{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::host> host{};
        }
    }
    namespace UsbDeviceDescadd{    ///<Descriptor Address
        using Addr = Register::Address<0x41005024,0x00000000,0x00000000,std::uint32_t>;
        ///Descriptor Address Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> descadd{}; 
    }
    namespace UsbDeviceCtrlb{    ///<DEVICE Control B
        using Addr = Register::Address<0x41005008,0xfffff000,0x00000000,std::uint16_t>;
        ///Detach
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> detach{}; 
        ///Upstream Resume
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uprsm{}; 
        ///Speed Configuration
        enum class SpdconfVal {
            v0x0=0x00000000,     ///<FS : Full Speed
            v0x1=0x00000001,     ///<LS : Low Speed
            v0x2=0x00000002,     ///<HS : High Speed capable
            v0x3=0x00000003,     ///<HSTM: High Speed Test Mode (force high-speed mode for test mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,SpdconfVal> spdconf{}; 
        namespace SpdconfValC{
            constexpr Register::FieldValue<decltype(spdconf)::Type,SpdconfVal::v0x0> v0x0{};
            constexpr Register::FieldValue<decltype(spdconf)::Type,SpdconfVal::v0x1> v0x1{};
            constexpr Register::FieldValue<decltype(spdconf)::Type,SpdconfVal::v0x2> v0x2{};
            constexpr Register::FieldValue<decltype(spdconf)::Type,SpdconfVal::v0x3> v0x3{};
        }
        ///No Reply
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nreply{}; 
        ///Test mode J
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tstj{}; 
        ///Test mode K
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tstk{}; 
        ///Test packet mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tstpckt{}; 
        ///Specific Operational Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> opmode2{}; 
        ///Global NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gnak{}; 
        ///Link Power Management Handshake
        enum class LpmhdskVal {
            no=0x00000000,     ///<No handshake. LPM is not supported
            ack=0x00000001,     ///<ACK
            nyet=0x00000002,     ///<NYET
            stall=0x00000003,     ///<STALL
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,LpmhdskVal> lpmhdsk{}; 
        namespace LpmhdskValC{
            constexpr Register::FieldValue<decltype(lpmhdsk)::Type,LpmhdskVal::no> no{};
            constexpr Register::FieldValue<decltype(lpmhdsk)::Type,LpmhdskVal::ack> ack{};
            constexpr Register::FieldValue<decltype(lpmhdsk)::Type,LpmhdskVal::nyet> nyet{};
            constexpr Register::FieldValue<decltype(lpmhdsk)::Type,LpmhdskVal::stall> stall{};
        }
    }
    namespace UsbDeviceDadd{    ///<DEVICE Device Address
        using Addr = Register::Address<0x4100500a,0xffffff00,0x00000000,std::uint8_t>;
        ///Device Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> dadd{}; 
        ///Device Address Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adden{}; 
    }
    namespace UsbDeviceEpintsmry{    ///<DEVICE End Point Interrupt Summary
        using Addr = Register::Address<0x41005020,0xffffff00,0x00000000,std::uint16_t>;
        ///End Point 0 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epint0{}; 
        ///End Point 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epint1{}; 
        ///End Point 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epint2{}; 
        ///End Point 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epint3{}; 
        ///End Point 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epint4{}; 
        ///End Point 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epint5{}; 
        ///End Point 6 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epint6{}; 
        ///End Point 7 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epint7{}; 
    }
    namespace UsbDeviceFnum{    ///<DEVICE Device Frame Number
        using Addr = Register::Address<0x41005010,0xffff4000,0x00000000,std::uint16_t>;
        ///Micro Frame Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfnum{}; 
        ///Frame Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fnum{}; 
        ///Frame Number CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fncerr{}; 
    }
    namespace UsbDeviceIntenclr{    ///<DEVICE Device Interrupt Enable Clear
        using Addr = Register::Address<0x41005014,0xfffffc00,0x00000000,std::uint16_t>;
        ///Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> suspend{}; 
        ///Micro Start of Frame Interrupt Enable in High Speed Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msof{}; 
        ///Start Of Frame Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sof{}; 
        ///End of Reset Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eorst{}; 
        ///Wake Up Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///End Of Resume Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eorsm{}; 
        ///Upstream Resume Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uprsm{}; 
        ///Ram Access Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ramacer{}; 
        ///Link Power Management Not Yet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lpmnyet{}; 
        ///Link Power Management Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lpmsusp{}; 
    }
    namespace UsbDeviceIntenset{    ///<DEVICE Device Interrupt Enable Set
        using Addr = Register::Address<0x41005018,0xfffffc00,0x00000000,std::uint16_t>;
        ///Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> suspend{}; 
        ///Micro Start of Frame Interrupt Enable in High Speed Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msof{}; 
        ///Start Of Frame Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sof{}; 
        ///End of Reset Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eorst{}; 
        ///Wake Up Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///End Of Resume Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eorsm{}; 
        ///Upstream Resume Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uprsm{}; 
        ///Ram Access Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ramacer{}; 
        ///Link Power Management Not Yet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lpmnyet{}; 
        ///Link Power Management Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lpmsusp{}; 
    }
    namespace UsbDeviceIntflag{    ///<DEVICE Device Interrupt Flag
        using Addr = Register::Address<0x4100501c,0xfffffc00,0x00000000,std::uint16_t>;
        ///Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> suspend{}; 
        ///Micro Start of Frame in High Speed Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msof{}; 
        ///Start Of Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sof{}; 
        ///End of Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eorst{}; 
        ///Wake Up
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///End Of Resume
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eorsm{}; 
        ///Upstream Resume
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uprsm{}; 
        ///Ram Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ramacer{}; 
        ///Link Power Management Not Yet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lpmnyet{}; 
        ///Link Power Management Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lpmsusp{}; 
    }
    namespace UsbDeviceStatus{    ///<DEVICE Status
        using Addr = Register::Address<0x4100500c,0xffffff33,0x00000000,std::uint8_t>;
        ///Speed Status
        enum class SpeedVal {
            v0x0=0x00000000,     ///<Full-speed mode
            v0x1=0x00000001,     ///<High-speed mode
            v0x2=0x00000002,     ///<Low-speed mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SpeedVal> speed{}; 
        namespace SpeedValC{
            constexpr Register::FieldValue<decltype(speed)::Type,SpeedVal::v0x0> v0x0{};
            constexpr Register::FieldValue<decltype(speed)::Type,SpeedVal::v0x1> v0x1{};
            constexpr Register::FieldValue<decltype(speed)::Type,SpeedVal::v0x2> v0x2{};
        }
        ///USB Line State Status
        enum class LinestateVal {
            v0x0=0x00000000,     ///<SE0/RESET
            v0x1=0x00000001,     ///<FS-J or LS-K State
            v0x2=0x00000002,     ///<FS-K or LS-J State
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,LinestateVal> linestate{}; 
        namespace LinestateValC{
            constexpr Register::FieldValue<decltype(linestate)::Type,LinestateVal::v0x0> v0x0{};
            constexpr Register::FieldValue<decltype(linestate)::Type,LinestateVal::v0x1> v0x1{};
            constexpr Register::FieldValue<decltype(linestate)::Type,LinestateVal::v0x2> v0x2{};
        }
    }
    namespace UsbDeviceEpcfgs{    ///<DEVICE End Point Configuration
        using Addr = Register::Address<0x41005100,0xffffff08,0x00000000,std::uint8_t>;
        ///End Point Type0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> eptype0{}; 
        ///End Point Type1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> eptype1{}; 
        ///NYET Token Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nyetdis{}; 
    }
    namespace UsbDeviceEpintenclrs{    ///<DEVICE End Point Interrupt Clear Flag
        using Addr = Register::Address<0x41005108,0xffffff80,0x00000000,std::uint8_t>;
        ///Transfer Complete 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trcpt0{}; 
        ///Transfer Complete 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trcpt1{}; 
        ///Error Flow 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trfail0{}; 
        ///Error Flow 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> trfail1{}; 
        ///Received Setup Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxstp{}; 
        ///Stall 0 In/Out Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stall0{}; 
        ///Stall 1 In/Out Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stall1{}; 
    }
    namespace UsbDeviceEpintensets{    ///<DEVICE End Point Interrupt Set Flag
        using Addr = Register::Address<0x41005109,0xffffff80,0x00000000,std::uint8_t>;
        ///Transfer Complete 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trcpt0{}; 
        ///Transfer Complete 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trcpt1{}; 
        ///Error Flow 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trfail0{}; 
        ///Error Flow 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> trfail1{}; 
        ///Received Setup Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxstp{}; 
        ///Stall 0 In/out Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stall0{}; 
        ///Stall 1 In/out Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stall1{}; 
    }
    namespace UsbDeviceEpintflags{    ///<DEVICE End Point Interrupt Flag
        using Addr = Register::Address<0x41005107,0xffffff80,0x00000000,std::uint8_t>;
        ///Transfer Complete 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trcpt0{}; 
        ///Transfer Complete 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trcpt1{}; 
        ///Error Flow 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trfail0{}; 
        ///Error Flow 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> trfail1{}; 
        ///Received Setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxstp{}; 
        ///Stall 0 In/out
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stall0{}; 
        ///Stall 1 In/out
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stall1{}; 
    }
    namespace UsbDeviceEpstatuss{    ///<DEVICE End Point Pipe Status
        using Addr = Register::Address<0x41005106,0xffffff08,0x00000000,std::uint8_t>;
        ///Data Toggle Out
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtglout{}; 
        ///Data Toggle In
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtglin{}; 
        ///Current Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbk{}; 
        ///Stall 0 Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrq0{}; 
        ///Stall 1 Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrq1{}; 
        ///Bank 0 ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bk0rdy{}; 
        ///Bank 1 ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bk1rdy{}; 
    }
    namespace UsbDeviceEpstatusclrs{    ///<DEVICE End Point Pipe Status Clear
        using Addr = Register::Address<0x41005104,0xffffff08,0x00000000,std::uint8_t>;
        ///Data Toggle OUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtglout{}; 
        ///Data Toggle IN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtglin{}; 
        ///Curren Bank Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbk{}; 
        ///Stall 0 Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrq0{}; 
        ///Stall 1 Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrq1{}; 
        ///Bank 0 Ready Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bk0rdy{}; 
        ///Bank 1 Ready Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bk1rdy{}; 
    }
    namespace UsbDeviceEpstatussets{    ///<DEVICE End Point Pipe Status Set
        using Addr = Register::Address<0x41005105,0xffffff08,0x00000000,std::uint8_t>;
        ///Data Toggle OUT Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtglout{}; 
        ///Data Toggle IN Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtglin{}; 
        ///Current Bank Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbk{}; 
        ///Stall 0 Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrq0{}; 
        ///Stall 1 Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallrq1{}; 
        ///Bank 0 Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bk0rdy{}; 
        ///Bank 1 Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bk1rdy{}; 
    }
    namespace UsbDeviceFsmstatus{    ///<Finite State Machine Status
        using Addr = Register::Address<0x4100500d,0xffffffc0,0x00000000,std::uint8_t>;
        ///Fine State Machine Status
        enum class FsmstateVal {
            v0x1=0x00000001,     ///<OFF (L3). It corresponds to the powered-off, disconnected, and disabled state
            v0x2=0x00000002,     ///<ON (L0). It corresponds to the Idle and Active states
            v0x4=0x00000004,     ///<SUSPEND (L2)
            v0x8=0x00000008,     ///<SLEEP (L1)
            v0x10=0x00000010,     ///<DNRESUME. Down Stream Resume.
            v0x20=0x00000020,     ///<UPRESUME. Up Stream Resume.
            v0x40=0x00000040,     ///<RESET. USB lines Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FsmstateVal> fsmstate{}; 
        namespace FsmstateValC{
            constexpr Register::FieldValue<decltype(fsmstate)::Type,FsmstateVal::v0x1> v0x1{};
            constexpr Register::FieldValue<decltype(fsmstate)::Type,FsmstateVal::v0x2> v0x2{};
            constexpr Register::FieldValue<decltype(fsmstate)::Type,FsmstateVal::v0x4> v0x4{};
            constexpr Register::FieldValue<decltype(fsmstate)::Type,FsmstateVal::v0x8> v0x8{};
            constexpr Register::FieldValue<decltype(fsmstate)::Type,FsmstateVal::v0x10> v0x10{};
            constexpr Register::FieldValue<decltype(fsmstate)::Type,FsmstateVal::v0x20> v0x20{};
            constexpr Register::FieldValue<decltype(fsmstate)::Type,FsmstateVal::v0x40> v0x40{};
        }
    }
    namespace UsbDevicePadcal{    ///<USB PAD Calibration
        using Addr = Register::Address<0x41005028,0xffff8820,0x00000000,std::uint16_t>;
        ///USB Pad Transp calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> transp{}; 
        ///USB Pad Transn calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> transn{}; 
        ///USB Pad Trim calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> trim{}; 
    }
    namespace UsbDeviceSyncbusy{    ///<Synchronization Busy
        using Addr = Register::Address<0x41005002,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Reset Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
    }
    namespace UsbHostCtrla{    ///<Control A
        using Addr = Register::Address<0x41005000,0xffffff78,0x00000000,std::uint8_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Run in Standby Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Operating Mode
        enum class ModeVal {
            device=0x00000000,     ///<Device Mode
            host=0x00000001,     ///<Host Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::device> device{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::host> host{};
        }
    }
    namespace UsbHostDescadd{    ///<Descriptor Address
        using Addr = Register::Address<0x41005024,0x00000000,0x00000000,std::uint32_t>;
        ///Descriptor Address Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> descadd{}; 
    }
    namespace UsbHostFsmstatus{    ///<Finite State Machine Status
        using Addr = Register::Address<0x4100500d,0xffffffc0,0x00000000,std::uint8_t>;
        ///Fine State Machine Status
        enum class FsmstateVal {
            v0x1=0x00000001,     ///<OFF (L3). It corresponds to the powered-off, disconnected, and disabled state
            v0x2=0x00000002,     ///<ON (L0). It corresponds to the Idle and Active states
            v0x4=0x00000004,     ///<SUSPEND (L2)
            v0x8=0x00000008,     ///<SLEEP (L1)
            v0x10=0x00000010,     ///<DNRESUME. Down Stream Resume.
            v0x20=0x00000020,     ///<UPRESUME. Up Stream Resume.
            v0x40=0x00000040,     ///<RESET. USB lines Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FsmstateVal> fsmstate{}; 
        namespace FsmstateValC{
            constexpr Register::FieldValue<decltype(fsmstate)::Type,FsmstateVal::v0x1> v0x1{};
            constexpr Register::FieldValue<decltype(fsmstate)::Type,FsmstateVal::v0x2> v0x2{};
            constexpr Register::FieldValue<decltype(fsmstate)::Type,FsmstateVal::v0x4> v0x4{};
            constexpr Register::FieldValue<decltype(fsmstate)::Type,FsmstateVal::v0x8> v0x8{};
            constexpr Register::FieldValue<decltype(fsmstate)::Type,FsmstateVal::v0x10> v0x10{};
            constexpr Register::FieldValue<decltype(fsmstate)::Type,FsmstateVal::v0x20> v0x20{};
            constexpr Register::FieldValue<decltype(fsmstate)::Type,FsmstateVal::v0x40> v0x40{};
        }
    }
    namespace UsbHostCtrlb{    ///<HOST Control B
        using Addr = Register::Address<0x41005008,0xfffff091,0x00000000,std::uint16_t>;
        ///Send USB Resume
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> resume{}; 
        ///Speed Configuration for Host
        enum class SpdconfVal {
            v0x0=0x00000000,     ///<Normal mode:the host starts in full-speed mode and performs a high-speed reset to switch to the high speed mode if the downstream peripheralis high-speed capable.
            v0x1=0x00000001,     ///<reserved
            v0x2=0x00000002,     ///<reserved
            v0x3=0x00000003,     ///<Full-speed:the host remains in full-speed mode whatever is the peripheral speed capability. Releveant in UTMI mode only.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,SpdconfVal> spdconf{}; 
        namespace SpdconfValC{
            constexpr Register::FieldValue<decltype(spdconf)::Type,SpdconfVal::v0x0> v0x0{};
            constexpr Register::FieldValue<decltype(spdconf)::Type,SpdconfVal::v0x1> v0x1{};
            constexpr Register::FieldValue<decltype(spdconf)::Type,SpdconfVal::v0x2> v0x2{};
            constexpr Register::FieldValue<decltype(spdconf)::Type,SpdconfVal::v0x3> v0x3{};
        }
        ///Test mode J
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tstj{}; 
        ///Test mode K
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tstk{}; 
        ///Start of Frame Generation Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sofe{}; 
        ///Send USB Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> busreset{}; 
        ///VBUS is OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vbusok{}; 
        ///Send L1 Resume
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> l1resume{}; 
    }
    namespace UsbHostFlenhigh{    ///<HOST Host Frame Length
        using Addr = Register::Address<0x41005012,0xffffff00,0x00000000,std::uint8_t>;
        ///Frame Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> flenhigh{}; 
    }
    namespace UsbHostFnum{    ///<HOST Host Frame Number
        using Addr = Register::Address<0x41005010,0xffffc000,0x00000000,std::uint16_t>;
        ///Micro Frame Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> mfnum{}; 
        ///Frame Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,3),Register::ReadWriteAccess,unsigned> fnum{}; 
    }
    namespace UsbHostHsofc{    ///<HOST Host Start Of Frame Control
        using Addr = Register::Address<0x4100500a,0xffffff70,0x00000000,std::uint8_t>;
        ///Frame Length Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> flenc{}; 
        ///Frame Length Control Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flence{}; 
    }
    namespace UsbHostIntenclr{    ///<HOST Host Interrupt Enable Clear
        using Addr = Register::Address<0x41005014,0xfffffc03,0x00000000,std::uint16_t>;
        ///Host Start Of Frame Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsof{}; 
        ///BUS Reset Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rst{}; 
        ///Wake Up Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///DownStream to Device Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dnrsm{}; 
        ///Upstream Resume from Device Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uprsm{}; 
        ///Ram Access Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ramacer{}; 
        ///Device Connection Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dconn{}; 
        ///Device Disconnection Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ddisc{}; 
    }
    namespace UsbHostIntenset{    ///<HOST Host Interrupt Enable Set
        using Addr = Register::Address<0x41005018,0xfffffc03,0x00000000,std::uint16_t>;
        ///Host Start Of Frame Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsof{}; 
        ///Bus Reset Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rst{}; 
        ///Wake Up Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///DownStream to the Device Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dnrsm{}; 
        ///Upstream Resume fromthe device Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uprsm{}; 
        ///Ram Access Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ramacer{}; 
        ///Link Power Management Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dconn{}; 
        ///Device Disconnection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ddisc{}; 
    }
    namespace UsbHostIntflag{    ///<HOST Host Interrupt Flag
        using Addr = Register::Address<0x4100501c,0xfffffc03,0x00000000,std::uint16_t>;
        ///Host Start Of Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsof{}; 
        ///Bus Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rst{}; 
        ///Wake Up
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Downstream
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dnrsm{}; 
        ///Upstream Resume from the Device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uprsm{}; 
        ///Ram Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ramacer{}; 
        ///Device Connection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dconn{}; 
        ///Device Disconnection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ddisc{}; 
    }
    namespace UsbHostPintsmry{    ///<HOST Pipe Interrupt Summary
        using Addr = Register::Address<0x41005020,0xffffff00,0x00000000,std::uint16_t>;
        ///Pipe 0 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epint0{}; 
        ///Pipe 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epint1{}; 
        ///Pipe 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epint2{}; 
        ///Pipe 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epint3{}; 
        ///Pipe 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epint4{}; 
        ///Pipe 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epint5{}; 
        ///Pipe 6 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epint6{}; 
        ///Pipe 7 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epint7{}; 
    }
    namespace UsbHostStatus{    ///<HOST Status
        using Addr = Register::Address<0x4100500c,0xffffff33,0x00000000,std::uint8_t>;
        ///Speed Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> speed{}; 
        ///USB Line State Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> linestate{}; 
    }
    namespace UsbHostBintervals{    ///<HOST Bus Access Period of Pipe
        using Addr = Register::Address<0x41005103,0xffffff00,0x00000000,std::uint8_t>;
        ///Bit Interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bitinterval{}; 
    }
    namespace UsbHostPcfgs{    ///<HOST End Point Configuration
        using Addr = Register::Address<0x41005100,0xffffffc0,0x00000000,std::uint8_t>;
        ///Pipe Token
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ptoken{}; 
        ///Pipe Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bk{}; 
        ///Pipe Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> ptype{}; 
    }
    namespace UsbHostPintenclrs{    ///<HOST Pipe Interrupt Flag Clear
        using Addr = Register::Address<0x41005108,0xffffffc0,0x00000000,std::uint8_t>;
        ///Transfer Complete 0 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trcpt0{}; 
        ///Transfer Complete 1 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trcpt1{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trfail{}; 
        ///Pipe Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perr{}; 
        ///Transmit  Setup Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txstp{}; 
        ///Stall Inetrrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stall{}; 
    }
    namespace UsbHostPintensets{    ///<HOST Pipe Interrupt Flag Set
        using Addr = Register::Address<0x41005109,0xffffffc0,0x00000000,std::uint8_t>;
        ///Transfer Complete 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trcpt0{}; 
        ///Transfer Complete 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trcpt1{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trfail{}; 
        ///Pipe Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perr{}; 
        ///Transmit  Setup Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txstp{}; 
        ///Stall Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stall{}; 
    }
    namespace UsbHostPintflags{    ///<HOST Pipe Interrupt Flag
        using Addr = Register::Address<0x41005107,0xffffffc0,0x00000000,std::uint8_t>;
        ///Transfer Complete 0 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trcpt0{}; 
        ///Transfer Complete 1 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trcpt1{}; 
        ///Error Flow Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trfail{}; 
        ///Pipe Error Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perr{}; 
        ///Transmit  Setup Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txstp{}; 
        ///Stall Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stall{}; 
    }
    namespace UsbHostPstatuss{    ///<HOST End Point Pipe Status
        using Addr = Register::Address<0x41005106,0xffffff2a,0x00000000,std::uint8_t>;
        ///Data Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtgl{}; 
        ///Current Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbk{}; 
        ///Pipe Freeze
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreeze{}; 
        ///Bank 0 ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bk0rdy{}; 
        ///Bank 1 ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bk1rdy{}; 
    }
    namespace UsbHostPstatusclrs{    ///<HOST End Point Pipe Status Clear
        using Addr = Register::Address<0x41005104,0xffffff2a,0x00000000,std::uint8_t>;
        ///Data Toggle clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtgl{}; 
        ///Curren Bank clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbk{}; 
        ///Pipe Freeze Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreeze{}; 
        ///Bank 0 Ready Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bk0rdy{}; 
        ///Bank 1 Ready Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bk1rdy{}; 
    }
    namespace UsbHostPstatussets{    ///<HOST End Point Pipe Status Set
        using Addr = Register::Address<0x41005105,0xffffff2a,0x00000000,std::uint8_t>;
        ///Data Toggle Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtgl{}; 
        ///Current Bank Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbk{}; 
        ///Pipe Freeze Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pfreeze{}; 
        ///Bank 0 Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bk0rdy{}; 
        ///Bank 1 Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bk1rdy{}; 
    }
    namespace UsbHostPadcal{    ///<USB PAD Calibration
        using Addr = Register::Address<0x41005028,0xffff8820,0x00000000,std::uint16_t>;
        ///USB Pad Transp calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> transp{}; 
        ///USB Pad Transn calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> transn{}; 
        ///USB Pad Trim calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> trim{}; 
    }
    namespace UsbHostSyncbusy{    ///<Synchronization Busy
        using Addr = Register::Address<0x41005002,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Reset Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Enable Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
    }
}
