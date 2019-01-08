#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Serial Communication Interface 0
    namespace Sercom0I2cmCtrla{    ///<I2CM Control A
        using Addr = Register::Address<0x40003000,0x840eff60,0x00000000,std::uint32_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Operating Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Pin Usage
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinout{}; 
        ///SDA Hold Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sdahold{}; 
        ///Master SCL Low Extend Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mexttoen{}; 
        ///Slave SCL Low Extend Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> sexttoen{}; 
        ///Transfer Speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> speed{}; 
        ///SCL Clock Stretch Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> sclsm{}; 
        ///Inactive Time-Out
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> inactout{}; 
        ///SCL Low Timeout Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> lowtouten{}; 
    }
    namespace Sercom0I2cmCtrlb{    ///<I2CM Control B
        using Addr = Register::Address<0x40003004,0xfff8fcff,0x00000000,std::uint32_t>;
        ///Smart Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> smen{}; 
        ///Quick Command Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> qcen{}; 
        ///Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmd{}; 
        ///Acknowledge Action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ackact{}; 
    }
    namespace Sercom0I2cmCtrlc{    ///<I2CM Control C
        using Addr = Register::Address<0x40003008,0xfeffffff,0x00000000,std::uint32_t>;
        ///Data 32 Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> data32b{}; 
    }
    namespace Sercom0I2cmBaud{    ///<I2CM Baud Rate
        using Addr = Register::Address<0x4000300c,0x00000000,0x00000000,std::uint32_t>;
        ///Baud Rate Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> baud{}; 
        ///Baud Rate Value Low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> baudlow{}; 
        ///High Speed Baud Rate Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hsbaud{}; 
        ///High Speed Baud Rate Value Low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hsbaudlow{}; 
    }
    namespace Sercom0I2cmIntenclr{    ///<I2CM Interrupt Enable Clear
        using Addr = Register::Address<0x40003014,0xffffff7c,0x00000000,std::uint8_t>;
        ///Master On Bus Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mb{}; 
        ///Slave On Bus Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sb{}; 
        ///Combined Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace Sercom0I2cmIntenset{    ///<I2CM Interrupt Enable Set
        using Addr = Register::Address<0x40003016,0xffffff7c,0x00000000,std::uint8_t>;
        ///Master On Bus Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mb{}; 
        ///Slave On Bus Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sb{}; 
        ///Combined Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace Sercom0I2cmIntflag{    ///<I2CM Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40003018,0xffffff7c,0x00000000,std::uint8_t>;
        ///Master On Bus Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mb{}; 
        ///Slave On Bus Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sb{}; 
        ///Combined Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace Sercom0I2cmStatus{    ///<I2CM Status
        using Addr = Register::Address<0x4000301a,0xfffff808,0x00000000,std::uint16_t>;
        ///Bus Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Arbitration Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> arblost{}; 
        ///Received Not Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxnack{}; 
        ///Bus State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> busstate{}; 
        ///SCL Low Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lowtout{}; 
        ///Clock Hold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clkhold{}; 
        ///Master SCL Low Extend Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mexttout{}; 
        ///Slave SCL Low Extend Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sexttout{}; 
        ///Length Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lenerr{}; 
    }
    namespace Sercom0I2cmSyncbusy{    ///<I2CM Synchronization Busy
        using Addr = Register::Address<0x4000301c,0xffffffe8,0x00000000,std::uint32_t>;
        ///Software Reset Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///SERCOM Enable Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
        ///System Operation Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sysop{}; 
        ///Length Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> length{}; 
    }
    namespace Sercom0I2cmAddr{    ///<I2CM Address
        using Addr = Register::Address<0x40003024,0xff001800,0x00000000,std::uint32_t>;
        ///Address Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> addr{}; 
        ///Length Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lenen{}; 
        ///High Speed Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> hs{}; 
        ///Ten Bit Addressing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tenbiten{}; 
        ///Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> len{}; 
    }
    namespace Sercom0I2cmData{    ///<I2CM Data
        using Addr = Register::Address<0x40003028,0x00000000,0x00000000,std::uint32_t>;
        ///Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Sercom0I2cmDbgctrl{    ///<I2CM Debug Control
        using Addr = Register::Address<0x40003030,0xfffffffe,0x00000000,std::uint8_t>;
        ///Debug Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgstop{}; 
    }
    namespace Sercom0I2csCtrla{    ///<I2CS Control A
        using Addr = Register::Address<0x40003000,0xb44eff60,0x00000000,std::uint32_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Operating Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Run during Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Pin Usage
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pinout{}; 
        ///SDA Hold Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sdahold{}; 
        ///Slave SCL Low Extend Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> sexttoen{}; 
        ///Transfer Speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> speed{}; 
        ///SCL Clock Stretch Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> sclsm{}; 
        ///SCL Low Timeout Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> lowtouten{}; 
    }
    namespace Sercom0I2csCtrlb{    ///<I2CS Control B
        using Addr = Register::Address<0x40003004,0xfff838ff,0x00000000,std::uint32_t>;
        ///Smart Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> smen{}; 
        ///PMBus Group Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gcmd{}; 
        ///Automatic Address Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> aacken{}; 
        ///Address Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> amode{}; 
        ///Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmd{}; 
        ///Acknowledge Action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ackact{}; 
    }
    namespace Sercom0I2csCtrlc{    ///<I2CS Control C
        using Addr = Register::Address<0x40003008,0xfefffff0,0x00000000,std::uint32_t>;
        ///SDA Setup Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sdasetup{}; 
        ///Data 32 Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> data32b{}; 
    }
    namespace Sercom0I2csIntenclr{    ///<I2CS Interrupt Enable Clear
        using Addr = Register::Address<0x40003014,0xffffff78,0x00000000,std::uint8_t>;
        ///Stop Received Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> prec{}; 
        ///Address Match Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> amatch{}; 
        ///Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///Combined Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace Sercom0I2csIntenset{    ///<I2CS Interrupt Enable Set
        using Addr = Register::Address<0x40003016,0xffffff78,0x00000000,std::uint8_t>;
        ///Stop Received Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> prec{}; 
        ///Address Match Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> amatch{}; 
        ///Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///Combined Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace Sercom0I2csIntflag{    ///<I2CS Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40003018,0xffffff78,0x00000000,std::uint8_t>;
        ///Stop Received Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> prec{}; 
        ///Address Match Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> amatch{}; 
        ///Data Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///Combined Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace Sercom0I2csStatus{    ///<I2CS Status
        using Addr = Register::Address<0x4000301a,0xfffff120,0x00000000,std::uint16_t>;
        ///Bus Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Transmit Collision
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> coll{}; 
        ///Received Not Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxnack{}; 
        ///Read/Write Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dir{}; 
        ///Repeated Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sr{}; 
        ///SCL Low Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lowtout{}; 
        ///Clock Hold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clkhold{}; 
        ///Slave SCL Low Extend Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sexttout{}; 
        ///High Speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hs{}; 
        ///Transaction Length Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lenerr{}; 
    }
    namespace Sercom0I2csSyncbusy{    ///<I2CS Synchronization Busy
        using Addr = Register::Address<0x4000301c,0xffffffec,0x00000000,std::uint32_t>;
        ///Software Reset Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///SERCOM Enable Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
        ///Length Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> length{}; 
    }
    namespace Sercom0I2csLength{    ///<I2CS Length
        using Addr = Register::Address<0x40003022,0xfffffe00,0x00000000,std::uint16_t>;
        ///Data Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> len{}; 
        ///Data Length Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lenen{}; 
    }
    namespace Sercom0I2csAddr{    ///<I2CS Address
        using Addr = Register::Address<0x40003024,0xf8017800,0x00000000,std::uint32_t>;
        ///General Call Address Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gencen{}; 
        ///Address Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> addr{}; 
        ///Ten Bit Addressing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tenbiten{}; 
        ///Address Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,17),Register::ReadWriteAccess,unsigned> addrmask{}; 
    }
    namespace Sercom0I2csData{    ///<I2CS Data
        using Addr = Register::Address<0x40003028,0x00000000,0x00000000,std::uint32_t>;
        ///Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Sercom0SpiCtrla{    ///<SPI Control A
        using Addr = Register::Address<0x40003000,0x80ccfe60,0x00000000,std::uint32_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Operating Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Run during Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Immediate Buffer Overflow Notification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ibon{}; 
        ///Data Out Pinout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dopo{}; 
        ///Data In Pinout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> dipo{}; 
        ///Frame Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> form{}; 
        ///Clock Phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cpha{}; 
        ///Clock Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Data Order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dord{}; 
    }
    namespace Sercom0SpiCtrlb{    ///<SPI Control B
        using Addr = Register::Address<0x40003004,0xfffd1db8,0x00000000,std::uint32_t>;
        ///Character Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> chsize{}; 
        ///Data Preload Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ploaden{}; 
        ///Slave Select Low Detect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ssde{}; 
        ///Master Slave Select Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mssen{}; 
        ///Address Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> amode{}; 
        ///Receiver Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxen{}; 
    }
    namespace Sercom0SpiCtrlc{    ///<SPI Control C
        using Addr = Register::Address<0x40003008,0xfeffffc0,0x00000000,std::uint32_t>;
        ///Inter-Character Spacing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> icspace{}; 
        ///Data 32 Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> data32b{}; 
    }
    namespace Sercom0SpiBaud{    ///<SPI Baud Rate
        using Addr = Register::Address<0x4000300c,0xffffff00,0x00000000,std::uint8_t>;
        ///Baud Rate Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> baud{}; 
    }
    namespace Sercom0SpiIntenclr{    ///<SPI Interrupt Enable Clear
        using Addr = Register::Address<0x40003014,0xffffff70,0x00000000,std::uint8_t>;
        ///Data Register Empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dre{}; 
        ///Transmit Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txc{}; 
        ///Receive Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxc{}; 
        ///Slave Select Low Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ssl{}; 
        ///Combined Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace Sercom0SpiIntenset{    ///<SPI Interrupt Enable Set
        using Addr = Register::Address<0x40003016,0xffffff70,0x00000000,std::uint8_t>;
        ///Data Register Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dre{}; 
        ///Transmit Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txc{}; 
        ///Receive Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxc{}; 
        ///Slave Select Low Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ssl{}; 
        ///Combined Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace Sercom0SpiIntflag{    ///<SPI Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40003018,0xffffff70,0x00000000,std::uint8_t>;
        ///Data Register Empty Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dre{}; 
        ///Transmit Complete Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txc{}; 
        ///Receive Complete Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxc{}; 
        ///Slave Select Low Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ssl{}; 
        ///Combined Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace Sercom0SpiStatus{    ///<SPI Status
        using Addr = Register::Address<0x4000301a,0xfffff7fb,0x00000000,std::uint16_t>;
        ///Buffer Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bufovf{}; 
        ///Transaction Length Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lenerr{}; 
    }
    namespace Sercom0SpiSyncbusy{    ///<SPI Synchronization Busy
        using Addr = Register::Address<0x4000301c,0xffffffe8,0x00000000,std::uint32_t>;
        ///Software Reset Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///SERCOM Enable Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
        ///CTRLB Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrlb{}; 
        ///LENGTH Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> length{}; 
    }
    namespace Sercom0SpiLength{    ///<SPI Length
        using Addr = Register::Address<0x40003022,0xfffffe00,0x00000000,std::uint16_t>;
        ///Data Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> len{}; 
        ///Data Length Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lenen{}; 
    }
    namespace Sercom0SpiAddr{    ///<SPI Address
        using Addr = Register::Address<0x40003024,0xff00ff00,0x00000000,std::uint32_t>;
        ///Address Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
        ///Address Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> addrmask{}; 
    }
    namespace Sercom0SpiData{    ///<SPI Data
        using Addr = Register::Address<0x40003028,0x00000000,0x00000000,std::uint32_t>;
        ///Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Sercom0SpiDbgctrl{    ///<SPI Debug Control
        using Addr = Register::Address<0x40003030,0xfffffffe,0x00000000,std::uint8_t>;
        ///Debug Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgstop{}; 
    }
    namespace Sercom0UsartCtrla{    ///<USART Control A
        using Addr = Register::Address<0x40003000,0x800c1860,0x00000000,std::uint32_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Operating Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Run during Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Immediate Buffer Overflow Notification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ibon{}; 
        ///Transmit Data Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txinv{}; 
        ///Receive Data Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxinv{}; 
        ///Sample
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> sampr{}; 
        ///Transmit Data Pinout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> txpo{}; 
        ///Receive Data Pinout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> rxpo{}; 
        ///Sample Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sampa{}; 
        ///Frame Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> form{}; 
        ///Communication Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cmode{}; 
        ///Clock Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Data Order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dord{}; 
    }
    namespace Sercom0UsartCtrlb{    ///<USART Control B
        using Addr = Register::Address<0x40003004,0xfcfcd8b8,0x00000000,std::uint32_t>;
        ///Character Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> chsize{}; 
        ///Stop Bit Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sbmode{}; 
        ///Collision Detection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> colden{}; 
        ///Start of Frame Detection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sfde{}; 
        ///Encoding Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> enc{}; 
        ///Parity Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pmode{}; 
        ///Transmitter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txen{}; 
        ///Receiver Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxen{}; 
        ///LIN Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lincmd{}; 
    }
    namespace Sercom0UsartCtrlc{    ///<USART Control C
        using Addr = Register::Address<0x40003008,0xfc8cf0f8,0x00000000,std::uint32_t>;
        ///Guard Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> gtime{}; 
        ///LIN Master Break Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> brklen{}; 
        ///LIN Master Header Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> hdrdly{}; 
        ///Inhibit Not Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> inack{}; 
        ///Disable Successive NACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dsnack{}; 
        ///Maximum Iterations
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> maxiter{}; 
        ///Data 32 Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> data32b{}; 
    }
    namespace Sercom0UsartBaud{    ///<USART Baud Rate
        using Addr = Register::Address<0x4000300c,0xffff0000,0x00000000,std::uint16_t>;
        ///Baud Rate Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> baud{}; 
    }
    namespace Sercom0UsartBaudFracMode{    ///<USART Baud Rate
        using Addr = Register::Address<0x4000300c,0xffff0000,0x00000000,std::uint16_t>;
        ///Baud Rate Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> baud{}; 
        ///Fractional Part
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> fp{}; 
    }
    namespace Sercom0UsartBaudFracfpMode{    ///<USART Baud Rate
        using Addr = Register::Address<0x4000300c,0xffff0000,0x00000000,std::uint16_t>;
        ///Baud Rate Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> baud{}; 
        ///Fractional Part
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> fp{}; 
    }
    namespace Sercom0UsartBaudUsartfpMode{    ///<USART Baud Rate
        using Addr = Register::Address<0x4000300c,0xffff0000,0x00000000,std::uint16_t>;
        ///Baud Rate Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> baud{}; 
    }
    namespace Sercom0UsartRxpl{    ///<USART Receive Pulse Length
        using Addr = Register::Address<0x4000300e,0xffffff00,0x00000000,std::uint8_t>;
        ///Receive Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxpl{}; 
    }
    namespace Sercom0UsartIntenclr{    ///<USART Interrupt Enable Clear
        using Addr = Register::Address<0x40003014,0xffffff40,0x00000000,std::uint8_t>;
        ///Data Register Empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dre{}; 
        ///Transmit Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txc{}; 
        ///Receive Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxc{}; 
        ///Receive Start Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxs{}; 
        ///Clear To Send Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctsic{}; 
        ///Break Received Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxbrk{}; 
        ///Combined Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace Sercom0UsartIntenset{    ///<USART Interrupt Enable Set
        using Addr = Register::Address<0x40003016,0xffffff40,0x00000000,std::uint8_t>;
        ///Data Register Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dre{}; 
        ///Transmit Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txc{}; 
        ///Receive Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxc{}; 
        ///Receive Start Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxs{}; 
        ///Clear To Send Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctsic{}; 
        ///Break Received Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxbrk{}; 
        ///Combined Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace Sercom0UsartIntflag{    ///<USART Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40003018,0xffffff40,0x00000000,std::uint8_t>;
        ///Data Register Empty Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dre{}; 
        ///Transmit Complete Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txc{}; 
        ///Receive Complete Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxc{}; 
        ///Receive Start Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxs{}; 
        ///Clear To Send Input Change Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctsic{}; 
        ///Break Received Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxbrk{}; 
        ///Combined Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace Sercom0UsartStatus{    ///<USART Status
        using Addr = Register::Address<0x4000301a,0xffffff00,0x00000000,std::uint16_t>;
        ///Parity Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> perr{}; 
        ///Frame Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ferr{}; 
        ///Buffer Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bufovf{}; 
        ///Clear To Send
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cts{}; 
        ///Inconsistent Sync Field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> isf{}; 
        ///Collision Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> coll{}; 
        ///Transmitter Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txe{}; 
        ///Maximum Number of Repetitions Reached
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iter{}; 
    }
    namespace Sercom0UsartSyncbusy{    ///<USART Synchronization Busy
        using Addr = Register::Address<0x4000301c,0xffffffe0,0x00000000,std::uint32_t>;
        ///Software Reset Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///SERCOM Enable Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
        ///CTRLB Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrlb{}; 
        ///RXERRCNT Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxerrcnt{}; 
        ///LENGTH Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> length{}; 
    }
    namespace Sercom0UsartRxerrcnt{    ///<USART Receive Error Count
        using Addr = Register::Address<0x40003020,0xffffffff,0x00000000,std::uint8_t>;
    }
    namespace Sercom0UsartLength{    ///<USART Length
        using Addr = Register::Address<0x40003022,0xfffffc00,0x00000000,std::uint16_t>;
        ///Data Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> len{}; 
        ///Data Length Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> lenen{}; 
    }
    namespace Sercom0UsartData{    ///<USART Data
        using Addr = Register::Address<0x40003028,0x00000000,0x00000000,std::uint32_t>;
        ///Data Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Sercom0UsartDbgctrl{    ///<USART Debug Control
        using Addr = Register::Address<0x40003030,0xfffffffe,0x00000000,std::uint8_t>;
        ///Debug Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgstop{}; 
    }
}
