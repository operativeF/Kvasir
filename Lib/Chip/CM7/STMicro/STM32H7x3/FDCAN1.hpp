#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//FDCAN1
    namespace Fdcan1FdcanCrel{    ///<FDCAN Core Release Register
        using Addr = Register::Address<0x4000a000,0x00000000,0x00000000,std::uint32_t>;
        ///Core release
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> rel{}; 
        ///Step of Core release
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> step{}; 
        ///Sub-step of Core release
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> substep{}; 
        ///Timestamp Year
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> year{}; 
        ///Timestamp Month
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> mon{}; 
        ///Timestamp Day
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> day{}; 
    }
    namespace Fdcan1FdcanEndn{    ///<FDCAN Core Release Register
        using Addr = Register::Address<0x4000a004,0x00000000,0x00000000,std::uint32_t>;
        ///Endiannes Test Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> etv{}; 
    }
    namespace Fdcan1FdcanDbtp{    ///<FDCAN Data Bit Timing and Prescaler          Register
        using Addr = Register::Address<0x4000a00c,0xff60e000,0x00000000,std::uint32_t>;
        ///Synchronization Jump Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dsjw{}; 
        ///Data time segment after sample              point
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dtseg2{}; 
        ///Data time segment after sample              point
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> dtseg1{}; 
        ///Data BIt Rate Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> dbrp{}; 
        ///Transceiver Delay              Compensation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tdc{}; 
    }
    namespace Fdcan1FdcanTest{    ///<FDCAN Test Register
        using Addr = Register::Address<0x4000a010,0xffffff0f,0x00000000,std::uint32_t>;
        ///Loop Back mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lbck{}; 
        ///Loop Back mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> tx{}; 
        ///Control of Transmit Pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rx{}; 
    }
    namespace Fdcan1FdcanRwd{    ///<FDCAN RAM Watchdog Register
        using Addr = Register::Address<0x4000a014,0xffff0000,0x00000000,std::uint32_t>;
        ///Watchdog value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wdv{}; 
        ///Watchdog configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wdc{}; 
    }
    namespace Fdcan1FdcanCccr{    ///<FDCAN CC Control Register
        using Addr = Register::Address<0x4000a018,0xffff0c00,0x00000000,std::uint32_t>;
        ///Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> init{}; 
        ///Configuration Change              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cce{}; 
        ///ASM Restricted Operation              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> asm_{}; 
        ///Clock Stop Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csa{}; 
        ///Clock Stop Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> csr{}; 
        ///Bus Monitoring Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mon{}; 
        ///Disable Automatic              Retransmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dar{}; 
        ///Test Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> test{}; 
        ///FD Operation Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fdoe{}; 
        ///FDCAN Bit Rate Switching
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bse{}; 
        ///Protocol Exception Handling              Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pxhd{}; 
        ///Edge Filtering during Bus              Integration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> efbi{}; 
        ///TXP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txp{}; 
        ///Non ISO Operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> niso{}; 
    }
    namespace Fdcan1FdcanNbtp{    ///<FDCAN Nominal Bit Timing and Prescaler          Register
        using Addr = Register::Address<0x4000a01c,0x00000080,0x00000000,std::uint32_t>;
        ///NSJW: Nominal (Re)Synchronization Jump              Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::ReadWriteAccess,unsigned> nsjw{}; 
        ///Bit Rate Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nbrp{}; 
        ///Nominal Time segment before sample              point
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ntseg1{}; 
        ///Nominal Time segment after sample              point
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tseg2{}; 
    }
    namespace Fdcan1FdcanTscc{    ///<FDCAN Timestamp Counter Configuration          Register
        using Addr = Register::Address<0x4000a020,0xfff0fffc,0x00000000,std::uint32_t>;
        ///Timestamp Counter              Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tcp{}; 
        ///Timestamp Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> tss{}; 
    }
    namespace Fdcan1FdcanTscv{    ///<FDCAN Timestamp Counter Value          Register
        using Addr = Register::Address<0x4000a024,0xffff0000,0x00000000,std::uint32_t>;
        ///Timestamp Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tsc{}; 
    }
    namespace Fdcan1FdcanTocc{    ///<FDCAN Timeout Counter Configuration          Register
        using Addr = Register::Address<0x4000a028,0x0000fff8,0x00000000,std::uint32_t>;
        ///Enable Timeout Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> etoc{}; 
        ///Timeout Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> tos{}; 
        ///Timeout Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> top{}; 
    }
    namespace Fdcan1FdcanTocv{    ///<FDCAN Timeout Counter Value          Register
        using Addr = Register::Address<0x4000a02c,0xffff0000,0x00000000,std::uint32_t>;
        ///Timeout Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> toc{}; 
    }
    namespace Fdcan1FdcanEcr{    ///<FDCAN Error Counter Register
        using Addr = Register::Address<0x4000a040,0xff000000,0x00000000,std::uint32_t>;
        ///AN Error Logging
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> cel{}; 
        ///Receive Error Passive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rp{}; 
        ///Receive Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> trec{}; 
        ///Transmit Error Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tec{}; 
    }
    namespace Fdcan1FdcanPsr{    ///<FDCAN Protocol Status Register
        using Addr = Register::Address<0x4000a044,0xff808000,0x00000000,std::uint32_t>;
        ///Last Error Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> lec{}; 
        ///Activity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> act{}; 
        ///Error Passive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep{}; 
        ///Warning Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ew{}; 
        ///Bus_Off Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bo{}; 
        ///Data Last Error Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> dlec{}; 
        ///ESI flag of last received FDCAN              Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> resi{}; 
        ///BRS flag of last received FDCAN              Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rbrs{}; 
        ///Received FDCAN Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> redl{}; 
        ///Protocol Exception Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pxe{}; 
        ///Transmitter Delay Compensation              Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> tdcv{}; 
    }
    namespace Fdcan1FdcanTdcr{    ///<FDCAN Transmitter Delay Compensation          Register
        using Addr = Register::Address<0x4000a048,0xffff8080,0x00000000,std::uint32_t>;
        ///Transmitter Delay Compensation Filter              Window Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tdcf{}; 
        ///Transmitter Delay Compensation              Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> tdco{}; 
    }
    namespace Fdcan1FdcanIr{    ///<FDCAN Interrupt Register
        using Addr = Register::Address<0x4000a050,0xc0300000,0x00000000,std::uint32_t>;
        ///Rx FIFO 0 New Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rf0n{}; 
        ///Rx FIFO 0 Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rf0w{}; 
        ///Rx FIFO 0 Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rf0f{}; 
        ///Rx FIFO 0 Message Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rf0l{}; 
        ///Rx FIFO 1 New Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rf1n{}; 
        ///Rx FIFO 1 Watermark              Reached
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rf1w{}; 
        ///Rx FIFO 1 Watermark              Reached
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rf1f{}; 
        ///Rx FIFO 1 Message Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rf1l{}; 
        ///High Priority Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hpm{}; 
        ///Transmission Completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tc{}; 
        ///Transmission Cancellation              Finished
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tcf{}; 
        ///Tx FIFO Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tef{}; 
        ///Tx Event FIFO New Entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tefn{}; 
        ///Tx Event FIFO Watermark              Reached
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tefw{}; 
        ///Tx Event FIFO Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teff{}; 
        ///Tx Event FIFO Element Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tefl{}; 
        ///Timestamp Wraparound
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tsw{}; 
        ///Message RAM Access Failure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mraf{}; 
        ///Timeout Occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> too{}; 
        ///Message stored to Dedicated Rx              Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> drx{}; 
        ///Error Logging Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> elo{}; 
        ///Error Passive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ep{}; 
        ///Warning Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ew{}; 
        ///Bus_Off Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> bo{}; 
        ///Watchdog Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> wdi{}; 
        ///Protocol Error in Arbitration Phase              (Nominal Bit Time is used)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pea{}; 
        ///Protocol Error in Data Phase (Data Bit              Time is used)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ped{}; 
        ///Access to Reserved Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ara{}; 
    }
    namespace Fdcan1FdcanIe{    ///<FDCAN Interrupt Enable          Register
        using Addr = Register::Address<0x4000a054,0xc0000000,0x00000000,std::uint32_t>;
        ///Rx FIFO 0 New Message              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rf0ne{}; 
        ///Rx FIFO 0 Full Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rf0we{}; 
        ///Rx FIFO 0 Full Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rf0fe{}; 
        ///Rx FIFO 0 Message Lost              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rf0le{}; 
        ///Rx FIFO 1 New Message              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rf1ne{}; 
        ///Rx FIFO 1 Watermark Reached              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rf1we{}; 
        ///Rx FIFO 1 Watermark Reached              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rf1fe{}; 
        ///Rx FIFO 1 Message Lost              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rf1le{}; 
        ///High Priority Message              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hpme{}; 
        ///Transmission Completed              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tce{}; 
        ///Transmission Cancellation Finished              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tcfe{}; 
        ///Tx FIFO Empty Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tefe{}; 
        ///Tx Event FIFO New Entry              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tefne{}; 
        ///Tx Event FIFO Watermark Reached              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tefwe{}; 
        ///Tx Event FIFO Full Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teffe{}; 
        ///Tx Event FIFO Element Lost              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tefle{}; 
        ///Timestamp Wraparound              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tswe{}; 
        ///Message RAM Access Failure              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mrafe{}; 
        ///Timeout Occurred Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tooe{}; 
        ///Message stored to Dedicated Rx Buffer              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> drxe{}; 
        ///Bit Error Corrected Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> bece{}; 
        ///Bit Error Uncorrected Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beue{}; 
        ///Error Logging Overflow              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eloe{}; 
        ///Error Passive Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epe{}; 
        ///Warning Status Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ewe{}; 
        ///Bus_Off Status Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> boe{}; 
        ///Watchdog Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> wdie{}; 
        ///Protocol Error in Arbitration Phase              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> peae{}; 
        ///Protocol Error in Data Phase              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pede{}; 
        ///Access to Reserved Address              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> arae{}; 
    }
    namespace Fdcan1FdcanIls{    ///<FDCAN Interrupt Line Select          Register
        using Addr = Register::Address<0x4000a058,0xc0000000,0x00000000,std::uint32_t>;
        ///Rx FIFO 0 New Message Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rf0nl{}; 
        ///Rx FIFO 0 Watermark Reached Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rf0wl{}; 
        ///Rx FIFO 0 Full Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rf0fl{}; 
        ///Rx FIFO 0 Message Lost Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rf0ll{}; 
        ///Rx FIFO 1 New Message Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rf1nl{}; 
        ///Rx FIFO 1 Watermark Reached Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rf1wl{}; 
        ///Rx FIFO 1 Full Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rf1fl{}; 
        ///Rx FIFO 1 Message Lost Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rf1ll{}; 
        ///High Priority Message Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hpml{}; 
        ///Transmission Completed Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tcl{}; 
        ///Transmission Cancellation Finished              Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tcfl{}; 
        ///Tx FIFO Empty Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tefl{}; 
        ///Tx Event FIFO New Entry Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tefnl{}; 
        ///Tx Event FIFO Watermark Reached              Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tefwl{}; 
        ///Tx Event FIFO Full Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teffl{}; 
        ///Tx Event FIFO Element Lost Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tefll{}; 
        ///Timestamp Wraparound Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tswl{}; 
        ///Message RAM Access Failure Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mrafl{}; 
        ///Timeout Occurred Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tool{}; 
        ///Message stored to Dedicated Rx Buffer              Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> drxl{}; 
        ///Bit Error Corrected Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> becl{}; 
        ///Bit Error Uncorrected Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beul{}; 
        ///Error Logging Overflow Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> elol{}; 
        ///Error Passive Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> epl{}; 
        ///Warning Status Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ewl{}; 
        ///Bus_Off Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> bol{}; 
        ///Watchdog Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> wdil{}; 
        ///Protocol Error in Arbitration Phase              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> peal{}; 
        ///Protocol Error in Data Phase              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pedl{}; 
        ///Access to Reserved Address              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> aral{}; 
    }
    namespace Fdcan1FdcanIle{    ///<FDCAN Interrupt Line Enable          Register
        using Addr = Register::Address<0x4000a05c,0xfffffffc,0x00000000,std::uint32_t>;
        ///Enable Interrupt Line 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eint0{}; 
        ///Enable Interrupt Line 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eint1{}; 
    }
    namespace Fdcan1FdcanGfc{    ///<FDCAN Global Filter Configuration          Register
        using Addr = Register::Address<0x4000a080,0xffffffc0,0x00000000,std::uint32_t>;
        ///Reject Remote Frames              Extended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rrfe{}; 
        ///Reject Remote Frames              Standard
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rrfs{}; 
        ///Accept Non-matching Frames              Extended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> anfe{}; 
        ///Accept Non-matching Frames              Standard
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> anfs{}; 
    }
    namespace Fdcan1FdcanSidfc{    ///<FDCAN Standard ID Filter Configuration          Register
        using Addr = Register::Address<0x4000a084,0xff000003,0x00000000,std::uint32_t>;
        ///Filter List Standard Start              Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> flssa{}; 
        ///List Size Standard
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> lss{}; 
    }
    namespace Fdcan1FdcanXidfc{    ///<FDCAN Extended ID Filter Configuration          Register
        using Addr = Register::Address<0x4000a088,0xff000003,0x00000000,std::uint32_t>;
        ///Filter List Standard Start              Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> flesa{}; 
        ///List Size Extended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> lse{}; 
    }
    namespace Fdcan1FdcanXidam{    ///<FDCAN Extended ID and Mask          Register
        using Addr = Register::Address<0x4000a090,0xe0000000,0x00000000,std::uint32_t>;
        ///Extended ID Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> eidm{}; 
    }
    namespace Fdcan1FdcanHpms{    ///<FDCAN High Priority Message Status          Register
        using Addr = Register::Address<0x4000a094,0xffff0000,0x00000000,std::uint32_t>;
        ///Buffer Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> bidx{}; 
        ///Message Storage Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> msi{}; 
        ///Filter Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fidx{}; 
        ///Filter List
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> flst{}; 
    }
    namespace Fdcan1FdcanNdat1{    ///<FDCAN New Data 1 Register
        using Addr = Register::Address<0x4000a098,0x00000000,0x00000000,std::uint32_t>;
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nd0{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nd1{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nd2{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nd3{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nd4{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nd5{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nd6{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nd7{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nd8{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> nd9{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nd10{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> nd11{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nd12{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nd13{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nd14{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nd15{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nd16{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nd17{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> nd18{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nd19{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> nd20{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> nd21{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> nd22{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nd23{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> nd24{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> nd25{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> nd26{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> nd27{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> nd28{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> nd29{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nd30{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nd31{}; 
    }
    namespace Fdcan1FdcanNdat2{    ///<FDCAN New Data 2 Register
        using Addr = Register::Address<0x4000a09c,0x00000000,0x00000000,std::uint32_t>;
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nd32{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nd33{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nd34{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nd35{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nd36{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nd37{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nd38{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nd39{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nd40{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> nd41{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nd42{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> nd43{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nd44{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nd45{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nd46{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nd47{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nd48{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nd49{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> nd50{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nd51{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> nd52{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> nd53{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> nd54{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nd55{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> nd56{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> nd57{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> nd58{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> nd59{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> nd60{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> nd61{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nd62{}; 
        ///New data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nd63{}; 
    }
    namespace Fdcan1FdcanRxf0c{    ///<FDCAN Rx FIFO 0 Configuration          Register
        using Addr = Register::Address<0x4000a0a0,0x00000003,0x00000000,std::uint32_t>;
        ///Rx FIFO 0 Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> f0sa{}; 
        ///Rx FIFO 0 Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> f0s{}; 
        ///FIFO 0 Watermark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> f0wm{}; 
    }
    namespace Fdcan1FdcanRxf0s{    ///<FDCAN Rx FIFO 0 Status          Register
        using Addr = Register::Address<0x4000a0a4,0xfcc0c080,0x00000000,std::uint32_t>;
        ///Rx FIFO 0 Fill Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> f0fl{}; 
        ///Rx FIFO 0 Get Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> f0g{}; 
        ///Rx FIFO 0 Put Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> f0p{}; 
        ///Rx FIFO 0 Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> f0f{}; 
        ///Rx FIFO 0 Message Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rf0l{}; 
    }
    namespace Fdcan1FdcanRxf0a{    ///<CAN Rx FIFO 0 Acknowledge          Register
        using Addr = Register::Address<0x4000a0a8,0xffffffc0,0x00000000,std::uint32_t>;
        ///Rx FIFO 0 Acknowledge              Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> fa01{}; 
    }
    namespace Fdcan1FdcanRxbc{    ///<FDCAN Rx Buffer Configuration          Register
        using Addr = Register::Address<0x4000a0ac,0xffff0003,0x00000000,std::uint32_t>;
        ///Rx Buffer Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> rbsa{}; 
    }
    namespace Fdcan1FdcanRxf1c{    ///<FDCAN Rx FIFO 1 Configuration          Register
        using Addr = Register::Address<0x4000a0b0,0x80800003,0x00000000,std::uint32_t>;
        ///Rx FIFO 1 Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> f1sa{}; 
        ///Rx FIFO 1 Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> f1s{}; 
        ///Rx FIFO 1 Watermark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> f1wm{}; 
    }
    namespace Fdcan1FdcanRxf1s{    ///<FDCAN Rx FIFO 1 Status          Register
        using Addr = Register::Address<0x4000a0b4,0x3c808080,0x00000000,std::uint32_t>;
        ///Rx FIFO 1 Fill Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> f1fl{}; 
        ///Rx FIFO 1 Get Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> f1gi{}; 
        ///Rx FIFO 1 Put Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> f1pi{}; 
        ///Rx FIFO 1 Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> f1f{}; 
        ///Rx FIFO 1 Message Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rf1l{}; 
        ///Debug Message Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> dms{}; 
    }
    namespace Fdcan1FdcanRxf1a{    ///<FDCAN Rx FIFO 1 Acknowledge          Register
        using Addr = Register::Address<0x4000a0b8,0xffffffc0,0x00000000,std::uint32_t>;
        ///Rx FIFO 1 Acknowledge              Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> f1ai{}; 
    }
    namespace Fdcan1FdcanRxesc{    ///<FDCAN Rx Buffer Element Size Configuration          Register
        using Addr = Register::Address<0x4000a0bc,0xfffff888,0x00000000,std::uint32_t>;
        ///Rx FIFO 1 Data Field Size:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> f0ds{}; 
        ///Rx FIFO 0 Data Field Size:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> f1ds{}; 
        ///Rx Buffer Data Field Size:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> rbds{}; 
    }
    namespace Fdcan1FdcanTxbc{    ///<FDCAN Tx Buffer Configuration          Register
        using Addr = Register::Address<0x4000a0c0,0x80c00003,0x00000000,std::uint32_t>;
        ///Tx Buffers Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> tbsa{}; 
        ///Number of Dedicated Transmit              Buffers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> ndtb{}; 
        ///Transmit FIFO/Queue Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> tfqs{}; 
        ///Tx FIFO/Queue Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> tfqm{}; 
    }
    namespace Fdcan1FdcanTxfqs{    ///<FDCAN Tx FIFO/Queue Status          Register
        using Addr = Register::Address<0x4000a0c4,0xffc0e0c0,0x00000000,std::uint32_t>;
        ///Tx FIFO Free Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tffl{}; 
        ///TFGI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> tfgi{}; 
        ///Tx FIFO/Queue Put Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> tfqpi{}; 
        ///Tx FIFO/Queue Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tfqf{}; 
    }
    namespace Fdcan1FdcanTxesc{    ///<FDCAN Tx Buffer Element Size Configuration          Register
        using Addr = Register::Address<0x4000a0c8,0xfffffff8,0x00000000,std::uint32_t>;
        ///Tx Buffer Data Field Size:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> tbds{}; 
    }
    namespace Fdcan1FdcanTxbrp{    ///<FDCAN Tx Buffer Request Pending          Register
        using Addr = Register::Address<0x4000a0cc,0x00000000,0x00000000,std::uint32_t>;
        ///Transmission Request              Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> trp{}; 
    }
    namespace Fdcan1FdcanTxbar{    ///<FDCAN Tx Buffer Add Request          Register
        using Addr = Register::Address<0x4000a0d0,0x00000000,0x00000000,std::uint32_t>;
        ///Add Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ar{}; 
    }
    namespace Fdcan1FdcanTxbcr{    ///<FDCAN Tx Buffer Cancellation Request          Register
        using Addr = Register::Address<0x4000a0d4,0x00000000,0x00000000,std::uint32_t>;
        ///Cancellation Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cr{}; 
    }
    namespace Fdcan1FdcanTxbto{    ///<FDCAN Tx Buffer Transmission Occurred          Register
        using Addr = Register::Address<0x4000a0d8,0x00000000,0x00000000,std::uint32_t>;
        ///Transmission Occurred.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> to{}; 
    }
    namespace Fdcan1FdcanTxbcf{    ///<FDCAN Tx Buffer Cancellation Finished          Register
        using Addr = Register::Address<0x4000a0dc,0x00000000,0x00000000,std::uint32_t>;
        ///Cancellation Finished
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cf{}; 
    }
    namespace Fdcan1FdcanTxbtie{    ///<FDCAN Tx Buffer Transmission Interrupt          Enable Register
        using Addr = Register::Address<0x4000a0e0,0x00000000,0x00000000,std::uint32_t>;
        ///Transmission Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tie{}; 
    }
    namespace Fdcan1FdcanTxbcie{    ///<FDCAN Tx Buffer Cancellation Finished          Interrupt Enable Register
        using Addr = Register::Address<0x4000a0e4,0x00000000,0x00000000,std::uint32_t>;
        ///Cancellation Finished Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cf{}; 
    }
    namespace Fdcan1FdcanTxefc{    ///<FDCAN Tx Event FIFO Configuration          Register
        using Addr = Register::Address<0x4000a0f0,0xc0c00003,0x00000000,std::uint32_t>;
        ///Event FIFO Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> efsa{}; 
        ///Event FIFO Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> efs{}; 
        ///Event FIFO Watermark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> efwm{}; 
    }
    namespace Fdcan1FdcanTxefs{    ///<FDCAN Tx Event FIFO Status          Register
        using Addr = Register::Address<0x4000a0f4,0xfcffe0c0,0x00000000,std::uint32_t>;
        ///Event FIFO Fill Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> effl{}; 
        ///Event FIFO Get Index.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> efgi{}; 
        ///Event FIFO Full.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eff{}; 
        ///Tx Event FIFO Element              Lost.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> tefl{}; 
    }
    namespace Fdcan1FdcanTxefa{    ///<FDCAN Tx Event FIFO Acknowledge          Register
        using Addr = Register::Address<0x4000a0f8,0xffffffe0,0x00000000,std::uint32_t>;
        ///Event FIFO Acknowledge              Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> efai{}; 
    }
    namespace Fdcan1FdcanTttmc{    ///<FDCAN TT Trigger Memory Configuration          Register
        using Addr = Register::Address<0x4000a100,0xff800003,0x00000000,std::uint32_t>;
        ///Trigger Memory Start              Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,2),Register::ReadWriteAccess,unsigned> tmsa{}; 
        ///Trigger Memory Elements
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> tme{}; 
    }
    namespace Fdcan1FdcanTtrmc{    ///<FDCAN TT Reference Message Configuration          Register
        using Addr = Register::Address<0x4000a104,0x20000000,0x00000000,std::uint32_t>;
        ///Reference Identifier.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> rid{}; 
        ///Extended Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> xtd{}; 
        ///Reference Message Payload              Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> rmps{}; 
    }
    namespace Fdcan1FdcanTtocf{    ///<FDCAN TT Operation Configuration          Register
        using Addr = Register::Address<0x4000a108,0xf8000004,0x00000000,std::uint32_t>;
        ///Operation Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> om{}; 
        ///Gap Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gen{}; 
        ///Time Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tm{}; 
        ///LD of Synchronization Deviation              Limit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> ldsdl{}; 
        ///Initial Reference Trigger              Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> irto{}; 
        ///Enable External Clock              Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eecs{}; 
        ///Application Watchdog Limit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> awl{}; 
        ///Enable Global Time              Filtering
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> egtf{}; 
        ///Enable Clock Calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ecc{}; 
        ///Event Trigger Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> evtp{}; 
    }
    namespace Fdcan1FdcanTtmlm{    ///<FDCAN TT Matrix Limits          Register
        using Addr = Register::Address<0x4000a10c,0xf000f000,0x00000000,std::uint32_t>;
        ///Cycle Count Max
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> ccm{}; 
        ///Cycle Start              Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> css{}; 
        ///Tx Enable Window
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> txew{}; 
        ///Expected Number of Tx              Triggers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> entt{}; 
    }
    namespace Fdcan1FdcanTurcf{    ///<FDCAN TUR Configuration          Register
        using Addr = Register::Address<0x4000a110,0x40000000,0x00000000,std::uint32_t>;
        ///Numerator Configuration              Low.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ncl{}; 
        ///Denominator Configuration.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> dc{}; 
        ///Enable Local Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> elt{}; 
    }
    namespace Fdcan1FdcanTtocn{    ///<FDCAN TT Operation Control          Register
        using Addr = Register::Address<0x4000a114,0xffff4000,0x00000000,std::uint32_t>;
        ///Set Global time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sgt{}; 
        ///External Clock              Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ecs{}; 
        ///Stop Watch Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swp{}; 
        ///Stop Watch Source.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> sws{}; 
        ///Register Time Mark Interrupt Pulse              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtie{}; 
        ///Register Time Mark Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> tmc{}; 
        ///Trigger Time Mark Interrupt Pulse              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ttie{}; 
        ///Gap Control Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gcs{}; 
        ///Finish Gap.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fgp{}; 
        ///Time Mark Gap
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tmg{}; 
        ///Next is Gap
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nig{}; 
        ///External Synchronization              Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> escn{}; 
        ///TT Operation Control Register              Locked
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lckc{}; 
    }
    namespace Fdcan1CanTtgtp{    ///<FDCAN TT Global Time Preset          Register
        using Addr = Register::Address<0x4000a118,0x00000000,0x00000000,std::uint32_t>;
        ///Time Preset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ncl{}; 
        ///Cycle Time Target Phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctp{}; 
    }
    namespace Fdcan1FdcanTttmk{    ///<FDCAN TT Time Mark Register
        using Addr = Register::Address<0x4000a11c,0x7f800000,0x00000000,std::uint32_t>;
        ///Time Mark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tm{}; 
        ///Time Mark Cycle Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> ticc{}; 
        ///TT Time Mark Register              Locked
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lckm{}; 
    }
    namespace Fdcan1FdcanTtir{    ///<FDCAN TT Interrupt Register
        using Addr = Register::Address<0x4000a120,0xfff80000,0x00000000,std::uint32_t>;
        ///Start of Basic Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sbc{}; 
        ///Start of Matrix Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> smc{}; 
        ///Change of Synchronization              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> csm{}; 
        ///Start of Gap
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sog{}; 
        ///Register Time Mark              Interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rtmi{}; 
        ///Trigger Time Mark Event              Internal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ttmi{}; 
        ///Stop Watch Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> swe{}; 
        ///Global Time Wrap
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gtw{}; 
        ///Global Time Discontinuity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gtd{}; 
        ///Global Time Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gte{}; 
        ///Tx Count Underflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txu{}; 
        ///Tx Count Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txo{}; 
        ///Scheduling Error 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> se1{}; 
        ///Scheduling Error 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> se2{}; 
        ///Error Level Changed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> elc{}; 
        ///Initialization Watch              Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> iwtg{}; 
        ///Watch Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> wt{}; 
        ///Application Watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> aw{}; 
        ///Configuration Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cer{}; 
    }
    namespace Fdcan1FdcanTtie{    ///<FDCAN TT Interrupt Enable          Register
        using Addr = Register::Address<0x4000a124,0xfff80000,0x00000000,std::uint32_t>;
        ///Start of Basic Cycle Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sbce{}; 
        ///Start of Matrix Cycle Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> smce{}; 
        ///Change of Synchronization Mode Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> csme{}; 
        ///Start of Gap Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> soge{}; 
        ///Register Time Mark Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rtmie{}; 
        ///Trigger Time Mark Event Internal              Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ttmie{}; 
        ///Stop Watch Event Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> swee{}; 
        ///Global Time Wrap Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gtwe{}; 
        ///Global Time Discontinuity Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gtde{}; 
        ///Global Time Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gtee{}; 
        ///Tx Count Underflow Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txue{}; 
        ///Tx Count Overflow Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txoe{}; 
        ///Scheduling Error 1 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> se1e{}; 
        ///Scheduling Error 2 Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> se2e{}; 
        ///Change Error Level Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> elce{}; 
        ///Initialization Watch Trigger Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> iwtge{}; 
        ///Watch Trigger Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> wte{}; 
        ///Application Watchdog Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> awe{}; 
        ///Configuration Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cere{}; 
    }
    namespace Fdcan1FdcanTtils{    ///<FDCAN TT Interrupt Line Select          Register
        using Addr = Register::Address<0x4000a128,0xfff80000,0x00000000,std::uint32_t>;
        ///Start of Basic Cycle Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sbcl{}; 
        ///Start of Matrix Cycle Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> smcl{}; 
        ///Change of Synchronization Mode Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> csml{}; 
        ///Start of Gap Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sogl{}; 
        ///Register Time Mark Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rtmil{}; 
        ///Trigger Time Mark Event Internal              Interrupt Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ttmil{}; 
        ///Stop Watch Event Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> swel{}; 
        ///Global Time Wrap Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gtwl{}; 
        ///Global Time Discontinuity Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gtdl{}; 
        ///Global Time Error Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gtel{}; 
        ///Tx Count Underflow Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txul{}; 
        ///Tx Count Overflow Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txol{}; 
        ///Scheduling Error 1 Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> se1l{}; 
        ///Scheduling Error 2 Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> se2l{}; 
        ///Change Error Level Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> elcl{}; 
        ///Initialization Watch Trigger Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> iwtgl{}; 
        ///Watch Trigger Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> wtl{}; 
        ///Application Watchdog Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> awl{}; 
        ///Configuration Error Interrupt              Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cerl{}; 
    }
    namespace Fdcan1FdcanTtost{    ///<FDCAN TT Operation Status          Register
        using Addr = Register::Address<0x4000a12c,0x003f0000,0x00000000,std::uint32_t>;
        ///Error Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> el{}; 
        ///Master State.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ms{}; 
        ///Synchronization State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sys{}; 
        ///Quality of Global Time              Phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gtp{}; 
        ///Quality of Clock Speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> qcs{}; 
        ///Reference Trigger Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rto{}; 
        ///Wait for Global Time              Discontinuity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> wgtd{}; 
        ///Gap Finished Indicator.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> gfi{}; 
        ///Time Master Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> tmp{}; 
        ///Gap Started Indicator.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> gsi{}; 
        ///Wait for Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> wfe{}; 
        ///Application Watchdog Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> awe{}; 
        ///Wait for External Clock              Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wecs{}; 
        ///Schedule Phase Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spl{}; 
    }
    namespace Fdcan1FdcanTurna{    ///<FDCAN TUR Numerator Actual          Register
        using Addr = Register::Address<0x4000a130,0xfffc0000,0x00000000,std::uint32_t>;
        ///Numerator Actual Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> nav{}; 
    }
    namespace Fdcan1FdcanTtlgt{    ///<FDCAN TT Local and Global Time          Register
        using Addr = Register::Address<0x4000a134,0x00000000,0x00000000,std::uint32_t>;
        ///Local Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lt{}; 
        ///Global Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gt{}; 
    }
    namespace Fdcan1FdcanTtctc{    ///<FDCAN TT Cycle Time and Count          Register
        using Addr = Register::Address<0x4000a138,0xffc00000,0x00000000,std::uint32_t>;
        ///Cycle Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Cycle Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace Fdcan1FdcanTtcpt{    ///<FDCAN TT Capture Time Register
        using Addr = Register::Address<0x4000a13c,0x0000ffc0,0x00000000,std::uint32_t>;
        ///Cycle Count Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Stop Watch Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> swv{}; 
    }
    namespace Fdcan1FdcanTtcsm{    ///<FDCAN TT Cycle Sync Mark          Register
        using Addr = Register::Address<0x4000a140,0xffff0000,0x00000000,std::uint32_t>;
        ///Cycle Sync Mark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> csm{}; 
    }
    namespace Fdcan1FdcanTtts{    ///<FDCAN TT Trigger Select          Register
        using Addr = Register::Address<0x4000a300,0xffffffcc,0x00000000,std::uint32_t>;
        ///Stop watch trigger input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> swtdel{}; 
        ///Event trigger input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> evtsel{}; 
    }
}
