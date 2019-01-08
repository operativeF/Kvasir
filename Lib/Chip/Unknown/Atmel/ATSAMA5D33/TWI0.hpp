#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Two-wire Interface 0
    namespace Twi0Cr{    ///<Control Register
        using Addr = Register::Address<0xf0014000,0xffffff00,0x00000000,std::uint32_t>;
        ///Send a START Condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> start{}; 
        ///Send a STOP Condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stop{}; 
        ///TWI Master Mode Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> msen{}; 
        ///TWI Master Mode Disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> msdis{}; 
        ///TWI Slave Mode Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sven{}; 
        ///TWI Slave Mode Disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> svdis{}; 
        ///SMBUS Quick Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> quick{}; 
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
    }
    namespace Twi0Mmr{    ///<Master Mode Register
        using Addr = Register::Address<0xf0014004,0xff80ecff,0x00000000,std::uint32_t>;
        ///Internal Device Address Size
        enum class IadrszVal {
            none=0x00000000,     ///<No internal device address
            v1Byte=0x00000001,     ///<One-byte internal device address
            v2Byte=0x00000002,     ///<Two-byte internal device address
            v3Byte=0x00000003,     ///<Three-byte internal device address
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,IadrszVal> iadrsz{}; 
        namespace IadrszValC{
            constexpr Register::FieldValue<decltype(iadrsz)::Type,IadrszVal::none> none{};
            constexpr Register::FieldValue<decltype(iadrsz)::Type,IadrszVal::v1Byte> v1Byte{};
            constexpr Register::FieldValue<decltype(iadrsz)::Type,IadrszVal::v2Byte> v2Byte{};
            constexpr Register::FieldValue<decltype(iadrsz)::Type,IadrszVal::v3Byte> v3Byte{};
        }
        ///Master Read Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mread{}; 
        ///Device Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> dadr{}; 
    }
    namespace Twi0Smr{    ///<Slave Mode Register
        using Addr = Register::Address<0xf0014008,0xff80ffff,0x00000000,std::uint32_t>;
        ///Slave Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> sadr{}; 
    }
    namespace Twi0Iadr{    ///<Internal Address Register
        using Addr = Register::Address<0xf001400c,0xff000000,0x00000000,std::uint32_t>;
        ///Internal Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> iadr{}; 
    }
    namespace Twi0Cwgr{    ///<Clock Waveform Generator Register
        using Addr = Register::Address<0xf0014010,0xfff80000,0x00000000,std::uint32_t>;
        ///Clock Low Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cldiv{}; 
        ///Clock High Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> chdiv{}; 
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ckdiv{}; 
    }
    namespace Twi0Sr{    ///<Status Register
        using Addr = Register::Address<0xf0014020,0xfffff080,0x00000000,std::uint32_t>;
        ///Transmission Completed (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txcomp{}; 
        ///Receive Holding Register Ready (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Transmit Holding Register Ready (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Slave Read (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> svread{}; 
        ///Slave Access (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> svacc{}; 
        ///General Call Access (clear on read)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gacc{}; 
        ///Overrun Error (clear on read)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Not Acknowledged (clear on read)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nack{}; 
        ///Arbitration Lost (clear on read)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> arblst{}; 
        ///Clock Wait State (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclws{}; 
        ///End Of Slave Access (clear on read)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eosacc{}; 
    }
    namespace Twi0Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf0014024,0xfffff088,0x00000000,std::uint32_t>;
        ///Transmission Completed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txcomp{}; 
        ///Receive Holding Register Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Transmit Holding Register Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Slave Access Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> svacc{}; 
        ///General Call Access Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gacc{}; 
        ///Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Not Acknowledge Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nack{}; 
        ///Arbitration Lost Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> arblst{}; 
        ///Clock Wait State Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclWs{}; 
        ///End Of Slave Access Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eosacc{}; 
    }
    namespace Twi0Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf0014028,0xfffff088,0x00000000,std::uint32_t>;
        ///Transmission Completed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txcomp{}; 
        ///Receive Holding Register Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Transmit Holding Register Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Slave Access Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> svacc{}; 
        ///General Call Access Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gacc{}; 
        ///Overrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Not Acknowledge Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nack{}; 
        ///Arbitration Lost Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> arblst{}; 
        ///Clock Wait State Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclWs{}; 
        ///End Of Slave Access Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eosacc{}; 
    }
    namespace Twi0Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf001402c,0xfffff088,0x00000000,std::uint32_t>;
        ///Transmission Completed Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txcomp{}; 
        ///Receive Holding Register Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Transmit Holding Register Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Slave Access Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> svacc{}; 
        ///General Call Access Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gacc{}; 
        ///Overrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Not Acknowledge Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nack{}; 
        ///Arbitration Lost Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> arblst{}; 
        ///Clock Wait State Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclWs{}; 
        ///End Of Slave Access Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eosacc{}; 
    }
    namespace Twi0Rhr{    ///<Receive Holding Register
        using Addr = Register::Address<0xf0014030,0xffffff00,0x00000000,std::uint32_t>;
        ///Master or Slave Receive Holding Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxdata{}; 
    }
    namespace Twi0Thr{    ///<Transmit Holding Register
        using Addr = Register::Address<0xf0014034,0xffffff00,0x00000000,std::uint32_t>;
        ///Master or Slave Transmit Holding Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txdata{}; 
    }
    namespace Twi0WprotMode{    ///<Protection Mode Register
        using Addr = Register::Address<0xf00140e4,0x000000fe,0x00000000,std::uint32_t>;
        ///Write protection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wprot{}; 
        ///Write protection mode security code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> securityCode{}; 
    }
    namespace Twi0WprotStatus{    ///<Protection Status Register
        using Addr = Register::Address<0xf00140e8,0x000000fe,0x00000000,std::uint32_t>;
        ///Write Protection Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wproterr{}; 
        ///Write Protection Error Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wprotaddr{}; 
    }
}
