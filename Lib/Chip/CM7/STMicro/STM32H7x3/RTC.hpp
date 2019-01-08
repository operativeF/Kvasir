#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//RTC
    namespace RtcRtcTr{    ///<The RTC_TR is the calendar time shadow          register. This register must be written in initialization          mode only. Refer to Calendar initialization and          configuration on page9 and Reading the calendar on          page10.This register is write protected. The write access          procedure is described in RTC register write protection          on page9.
        using Addr = Register::Address<0x58004000,0xff808080,0x00000000,std::uint32_t>;
        ///Second units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
        ///Second tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        ///Minute units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        ///Minute tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        ///Hour units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        ///Hour tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        ///AM/PM notation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
    }
    namespace RtcRtcDr{    ///<The RTC_DR is the calendar date shadow          register. This register must be written in initialization          mode only. Refer to Calendar initialization and          configuration on page9 and Reading the calendar on          page10.This register is write protected. The write access          procedure is described in RTC register write protection          on page9.
        using Addr = Register::Address<0x58004004,0xff0000c0,0x00000000,std::uint32_t>;
        ///Date units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> du{}; 
        ///Date tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Month units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mu{}; 
        ///Month tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mt{}; 
        ///Week day units
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> wdu{}; 
        ///Year units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> yu{}; 
        ///Year tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> yt{}; 
    }
    namespace RtcRtcCr{    ///<RTC control register
        using Addr = Register::Address<0x58004008,0xfe000080,0x00000000,std::uint32_t>;
        ///Wakeup clock selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> wucksel{}; 
        ///Time-stamp event active edge TSE must be              reset when TSEDGE is changed to avoid unwanted TSF              setting.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsedge{}; 
        ///RTC_REFIN reference clock detection              enable (50 or 60Hz) Note: PREDIV_S must be              0x00FF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> refckon{}; 
        ///Bypass the shadow registers Note: If the              frequency of the APB clock is less than seven times              the frequency of RTCCLK, BYPSHAD must be set to              1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bypshad{}; 
        ///Hour format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fmt{}; 
        ///Alarm A enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> alrae{}; 
        ///Alarm B enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> alrbe{}; 
        ///Wakeup timer enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wute{}; 
        ///timestamp enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tse{}; 
        ///Alarm A interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> alraie{}; 
        ///Alarm B interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> alrbie{}; 
        ///Wakeup timer interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wutie{}; 
        ///Time-stamp interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tsie{}; 
        ///Add 1 hour (summer time change) When              this bit is set outside initialization mode, 1 hour              is added to the calendar time. This bit is always              read as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> add1h{}; 
        ///Subtract 1 hour (winter time change)              When this bit is set outside initialization mode, 1              hour is subtracted to the calendar time if the              current hour is not 0. This bit is always read as 0.              Setting this bit has no effect when current hour is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sub1h{}; 
        ///Backup This bit can be written by the              user to memorize whether the daylight saving time              change has been performed or not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> bkp{}; 
        ///Calibration output selection When COE=1,              this bit selects which signal is output on RTC_CALIB.              These frequencies are valid for RTCCLK at 32.768 kHz              and prescalers at their default values (PREDIV_A=127              and PREDIV_S=255). Refer to Section24.3.15:              Calibration clock output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cosel{}; 
        ///Output polarity This bit is used to              configure the polarity of RTC_ALARM              output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pol{}; 
        ///Output selection These bits are used to              select the flag to be routed to RTC_ALARM              output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> osel{}; 
        ///Calibration output enable This bit              enables the RTC_CALIB output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> coe{}; 
        ///timestamp on internal event              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> itse{}; 
    }
    namespace RtcRtcIsr{    ///<This register is write protected (except for          RTC_ISR[13:8] bits). The write access procedure is          described in RTC register write protection on          page9.
        using Addr = Register::Address<0x5800400c,0xfffc0000,0x00000000,std::uint32_t>;
        ///Alarm A write flag This bit is set by              hardware when Alarm A values can be changed, after              the ALRAE bit has been set to 0 in RTC_CR. It is              cleared by hardware in initialization              mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> alrawf{}; 
        ///Alarm B write flag This bit is set by              hardware when Alarm B values can be changed, after              the ALRBE bit has been set to 0 in RTC_CR. It is              cleared by hardware in initialization              mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> alrbwf{}; 
        ///Wakeup timer write flag This bit is set              by hardware up to 2 RTCCLK cycles after the WUTE bit              has been set to 0 in RTC_CR, and is cleared up to 2              RTCCLK cycles after the WUTE bit has been set to 1.              The wakeup timer values can be changed when WUTE bit              is cleared and WUTWF is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wutwf{}; 
        ///Shift operation pending This flag is set              by hardware as soon as a shift operation is initiated              by a write to the RTC_SHIFTR register. It is cleared              by hardware when the corresponding shift operation              has been executed. Writing to the SHPF bit has no              effect.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shpf{}; 
        ///Initialization status flag This bit is              set by hardware when the calendar year field is              different from 0 (Backup domain reset              state).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> inits{}; 
        ///Registers synchronization flag This bit              is set by hardware each time the calendar registers              are copied into the shadow registers (RTC_SSRx,              RTC_TRx and RTC_DRx). This bit is cleared by hardware              in initialization mode, while a shift operation is              pending (SHPF=1), or when in bypass shadow register              mode (BYPSHAD=1). This bit can also be cleared by              software. It is cleared either by software or by              hardware in initialization mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsf{}; 
        ///Initialization flag When this bit is set              to 1, the RTC is in initialization state, and the              time, date and prescaler registers can be              updated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> initf{}; 
        ///Initialization mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> init{}; 
        ///Alarm A flag This flag is set by              hardware when the time/date registers (RTC_TR and              RTC_DR) match the Alarm A register (RTC_ALRMAR). This              flag is cleared by software by writing              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> alraf{}; 
        ///Alarm B flag This flag is set by              hardware when the time/date registers (RTC_TR and              RTC_DR) match the Alarm B register (RTC_ALRMBR). This              flag is cleared by software by writing              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> alrbf{}; 
        ///Wakeup timer flag This flag is set by              hardware when the wakeup auto-reload counter reaches              0. This flag is cleared by software by writing 0.              This flag must be cleared by software at least 1.5              RTCCLK periods before WUTF is set to 1              again.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wutf{}; 
        ///Time-stamp flag This flag is set by              hardware when a time-stamp event occurs. This flag is              cleared by software by writing 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tsf{}; 
        ///Time-stamp overflow flag This flag is              set by hardware when a time-stamp event occurs while              TSF is already set. This flag is cleared by software              by writing 0. It is recommended to check and then              clear TSOVF only after clearing the TSF bit.              Otherwise, an overflow might not be noticed if a              time-stamp event occurs immediately before the TSF              bit is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tsovf{}; 
        ///RTC_TAMP1 detection flag This flag is              set by hardware when a tamper detection event is              detected on the RTC_TAMP1 input. It is cleared by              software writing 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tamp1f{}; 
        ///RTC_TAMP2 detection flag This flag is              set by hardware when a tamper detection event is              detected on the RTC_TAMP2 input. It is cleared by              software writing 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tamp2f{}; 
        ///RTC_TAMP3 detection flag This flag is              set by hardware when a tamper detection event is              detected on the RTC_TAMP3 input. It is cleared by              software writing 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tamp3f{}; 
        ///Recalibration pending Flag The RECALPF              status flag is automatically set to 1 when software              writes to the RTC_CALR register, indicating that the              RTC_CALR register is blocked. When the new              calibration settings are taken into account, this bit              returns to 0. Refer to Re-calibration              on-the-fly.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recalpf{}; 
        ///Internal tTime-stamp flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> itsf{}; 
    }
    namespace RtcRtcPrer{    ///<This register must be written in          initialization mode only. The initialization must be          performed in two separate write accesses. Refer to          Calendar initialization and configuration on page9.This          register is write protected. The write access procedure          is described in RTC register write protection on          page9.
        using Addr = Register::Address<0x58004010,0xff808000,0x00000000,std::uint32_t>;
        ///Synchronous prescaler factor This is the              synchronous division factor: ck_spre frequency =              ck_apre frequency/(PREDIV_S+1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> predivS{}; 
        ///Asynchronous prescaler factor This is              the asynchronous division factor: ck_apre frequency =              RTCCLK frequency/(PREDIV_A+1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> predivA{}; 
    }
    namespace RtcRtcWutr{    ///<This register can be written only when WUTWF          is set to 1 in RTC_ISR.This register is write protected.          The write access procedure is described in RTC register          write protection on page9.
        using Addr = Register::Address<0x58004014,0xffff0000,0x00000000,std::uint32_t>;
        ///Wakeup auto-reload value bits When the              wakeup timer is enabled (WUTE set to 1), the WUTF              flag is set every (WUT[15:0] + 1) ck_wut cycles. The              ck_wut period is selected through WUCKSEL[2:0] bits              of the RTC_CR register When WUCKSEL[2] = 1, the              wakeup timer becomes 17-bits and WUCKSEL[1]              effectively becomes WUT[16] the most-significant bit              to be reloaded into the timer. The first assertion of              WUTF occurs (WUT+1) ck_wut cycles after WUTE is set.              Setting WUT[15:0] to 0x0000 with WUCKSEL[2:0] =011              (RTCCLK/2) is forbidden.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wut{}; 
    }
    namespace RtcRtcAlrmar{    ///<This register can be written only when          ALRAWF is set to 1 in RTC_ISR, or in initialization          mode.This register is write protected. The write access          procedure is described in RTC register write protection          on page9.
        using Addr = Register::Address<0x5800401c,0x00000000,0x00000000,std::uint32_t>;
        ///Second units in BCD              format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
        ///Second tens in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        ///Alarm A seconds mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk1{}; 
        ///Minute units in BCD              format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        ///Minute tens in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        ///Alarm A minutes mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msk2{}; 
        ///Hour units in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        ///Hour tens in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        ///AM/PM notation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
        ///Alarm A hours mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> msk3{}; 
        ///Date units or day in BCD              format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> du{}; 
        ///Date tens in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Week day selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wdsel{}; 
        ///Alarm A date mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> msk4{}; 
    }
    namespace RtcRtcAlrmbr{    ///<This register can be written only when          ALRBWF is set to 1 in RTC_ISR, or in initialization          mode.This register is write protected. The write access          procedure is described in RTC register write protection          on page9.
        using Addr = Register::Address<0x58004020,0x00000000,0x00000000,std::uint32_t>;
        ///Second units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
        ///Second tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        ///Alarm B seconds mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk1{}; 
        ///Minute units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        ///Minute tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        ///Alarm B minutes mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msk2{}; 
        ///Hour units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        ///Hour tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        ///AM/PM notation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
        ///Alarm B hours mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> msk3{}; 
        ///Date units or day in BCD              format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> du{}; 
        ///Date tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Week day selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wdsel{}; 
        ///Alarm B date mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> msk4{}; 
    }
    namespace RtcRtcWpr{    ///<RTC write protection register
        using Addr = Register::Address<0x58004024,0xffffff00,0x00000000,std::uint32_t>;
        ///Write protection key This byte is              written by software. Reading this byte always returns              0x00. Refer to RTC register write protection for a              description of how to unlock RTC register write              protection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace RtcRtcSsr{    ///<RTC sub second register
        using Addr = Register::Address<0x58004028,0xffff0000,0x00000000,std::uint32_t>;
        ///Sub second value SS[15:0] is the value              in the synchronous prescaler counter. The fraction of              a second is given by the formula below: Second              fraction = (PREDIV_S - SS) / (PREDIV_S + 1) Note: SS              can be larger than PREDIV_S only after a shift              operation. In that case, the correct time/date is one              second less than as indicated by              RTC_TR/RTC_DR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ss{}; 
    }
    namespace RtcRtcShiftr{    ///<This register is write protected. The write          access procedure is described in RTC register write          protection on page9.
        using Addr = Register::Address<0x5800402c,0x7fff8000,0x00000000,std::uint32_t>;
        ///Subtract a fraction of a second These              bits are write only and is always read as zero.              Writing to this bit has no effect when a shift              operation is pending (when SHPF=1, in RTC_ISR). The              value which is written to SUBFS is added to the              synchronous prescaler counter. Since this counter              counts down, this operation effectively subtracts              from (delays) the clock by: Delay (seconds) = SUBFS /              (PREDIV_S + 1) A fraction of a second can effectively              be added to the clock (advancing the clock) when the              ADD1S function is used in conjunction with SUBFS,              effectively advancing the clock by: Advance (seconds)              = (1 - (SUBFS / (PREDIV_S + 1))). Note: Writing to              SUBFS causes RSF to be cleared. Software can then              wait until RSF=1 to be sure that the shadow registers              have been updated with the shifted              time.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> subfs{}; 
        ///Add one second This bit is write only              and is always read as zero. Writing to this bit has              no effect when a shift operation is pending (when              SHPF=1, in RTC_ISR). This function is intended to be              used with SUBFS (see description below) in order to              effectively add a fraction of a second to the clock              in an atomic operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> add1s{}; 
    }
    namespace RtcRtcTstr{    ///<The content of this register is valid only          when TSF is set to 1 in RTC_ISR. It is cleared when TSF          bit is reset.
        using Addr = Register::Address<0x58004030,0xff808080,0x00000000,std::uint32_t>;
        ///Second units in BCD              format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
        ///Second tens in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        ///Minute units in BCD              format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        ///Minute tens in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        ///Hour units in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        ///Hour tens in BCD format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        ///AM/PM notation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
    }
    namespace RtcRtcTsdr{    ///<The content of this register is valid only          when TSF is set to 1 in RTC_ISR. It is cleared when TSF          bit is reset.
        using Addr = Register::Address<0x58004034,0xffff00c0,0x00000000,std::uint32_t>;
        ///Date units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> du{}; 
        ///Date tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Month units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mu{}; 
        ///Month tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mt{}; 
        ///Week day units
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> wdu{}; 
    }
    namespace RtcRtcTsssr{    ///<The content of this register is valid only          when RTC_ISR/TSF is set. It is cleared when the          RTC_ISR/TSF bit is reset.
        using Addr = Register::Address<0x58004038,0xffff0000,0x00000000,std::uint32_t>;
        ///Sub second value SS[15:0] is the value              of the synchronous prescaler counter when the              timestamp event occurred.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ss{}; 
    }
    namespace RtcRtcCalr{    ///<This register is write protected. The write          access procedure is described in RTC register write          protection on page9.
        using Addr = Register::Address<0x5800403c,0xffff1e00,0x00000000,std::uint32_t>;
        ///Calibration minus The frequency of the              calendar is reduced by masking CALM out of 220 RTCCLK              pulses (32 seconds if the input frequency is 32768              Hz). This decreases the frequency of the calendar              with a resolution of 0.9537 ppm. To increase the              frequency of the calendar, this feature should be              used in conjunction with CALP. See Section24.3.12:              RTC smooth digital calibration on              page13.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> calm{}; 
        ///Use a 16-second calibration cycle period              When CALW16 is set to 1, the 16-second calibration              cycle period is selected.This bit must not be set to              1 if CALW8=1. Note: CALM[0] is stuck at 0 when              CALW16= 1. Refer to Section24.3.12: RTC smooth              digital calibration.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> calw16{}; 
        ///Use an 8-second calibration cycle period              When CALW8 is set to 1, the 8-second calibration              cycle period is selected. Note: CALM[1:0] are stuck              at 00; when CALW8= 1. Refer to Section24.3.12: RTC              smooth digital calibration.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> calw8{}; 
        ///Increase frequency of RTC by 488.5 ppm              This feature is intended to be used in conjunction              with CALM, which lowers the frequency of the calendar              with a fine resolution. if the input frequency is              32768 Hz, the number of RTCCLK pulses added during a              32-second window is calculated as follows: (512 *              CALP) - CALM. Refer to Section24.3.12: RTC smooth              digital calibration.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> calp{}; 
    }
    namespace RtcRtcTampcr{    ///<RTC tamper and alternate function          configuration register
        using Addr = Register::Address<0x58004040,0xfe000000,0x00000000,std::uint32_t>;
        ///RTC_TAMP1 input detection              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tamp1e{}; 
        ///Active level for RTC_TAMP1 input If              TAMPFLT != 00 if TAMPFLT = 00:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tamp1trg{}; 
        ///Tamper interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tampie{}; 
        ///RTC_TAMP2 input detection              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tamp2e{}; 
        ///Active level for RTC_TAMP2 input if              TAMPFLT != 00: if TAMPFLT = 00:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tamp2trg{}; 
        ///RTC_TAMP3 detection enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tamp3e{}; 
        ///Active level for RTC_TAMP3 input if              TAMPFLT != 00: if TAMPFLT = 00:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tamp3trg{}; 
        ///Activate timestamp on tamper detection              event TAMPTS is valid even if TSE=0 in the RTC_CR              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tampts{}; 
        ///Tamper sampling frequency Determines the              frequency at which each of the RTC_TAMPx inputs are              sampled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> tampfreq{}; 
        ///RTC_TAMPx filter count These bits              determines the number of consecutive samples at the              specified level (TAMP*TRG) needed to activate a              Tamper event. TAMPFLT is valid for each of the              RTC_TAMPx inputs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> tampflt{}; 
        ///RTC_TAMPx precharge duration These bit              determines the duration of time during which the              pull-up/is activated before each sample. TAMPPRCH is              valid for each of the RTC_TAMPx inputs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> tampprch{}; 
        ///RTC_TAMPx pull-up disable This bit              determines if each of the RTC_TAMPx pins are              pre-charged before each sample.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tamppudis{}; 
        ///Tamper 1 interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tamp1ie{}; 
        ///Tamper 1 no erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tamp1noerase{}; 
        ///Tamper 1 mask flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tamp1mf{}; 
        ///Tamper 2 interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tamp2ie{}; 
        ///Tamper 2 no erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tamp2noerase{}; 
        ///Tamper 2 mask flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tamp2mf{}; 
        ///Tamper 3 interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tamp3ie{}; 
        ///Tamper 3 no erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tamp3noerase{}; 
        ///Tamper 3 mask flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tamp3mf{}; 
    }
    namespace RtcRtcAlrmassr{    ///<This register can be written only when ALRAE          is reset in RTC_CR register, or in initialization          mode.This register is write protected. The write access          procedure is described in RTC register write protection          on page9
        using Addr = Register::Address<0x58004044,0xf0ff8000,0x00000000,std::uint32_t>;
        ///Sub seconds value This value is compared              with the contents of the synchronous prescaler              counter to determine if Alarm A is to be activated.              Only bits 0 up MASKSS-1 are compared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> ss{}; 
        ///Mask the most-significant bits starting              at this bit ... The overflow bits of the synchronous              counter (bits 15) is never compared. This bit can be              different from 0 only after a shift              operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> maskss{}; 
    }
    namespace RtcRtcAlrmbssr{    ///<This register can be written only when ALRBE          is reset in RTC_CR register, or in initialization          mode.This register is write protected.The write access          procedure is described in Section: RTC register write          protection.
        using Addr = Register::Address<0x58004048,0xf0ff8000,0x00000000,std::uint32_t>;
        ///Sub seconds value This value is compared              with the contents of the synchronous prescaler              counter to determine if Alarm B is to be activated.              Only bits 0 up to MASKSS-1 are              compared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> ss{}; 
        ///Mask the most-significant bits starting              at this bit ... The overflow bits of the synchronous              counter (bits 15) is never compared. This bit can be              different from 0 only after a shift              operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> maskss{}; 
    }
    namespace RtcRtcBkp0r{    ///<RTC backup registers
        using Addr = Register::Address<0x58004050,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp1r{    ///<RTC backup registers
        using Addr = Register::Address<0x58004054,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp2r{    ///<RTC backup registers
        using Addr = Register::Address<0x58004058,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp3r{    ///<RTC backup registers
        using Addr = Register::Address<0x5800405c,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp4r{    ///<RTC backup registers
        using Addr = Register::Address<0x58004060,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp5r{    ///<RTC backup registers
        using Addr = Register::Address<0x58004064,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp6r{    ///<RTC backup registers
        using Addr = Register::Address<0x58004068,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp7r{    ///<RTC backup registers
        using Addr = Register::Address<0x5800406c,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp8r{    ///<RTC backup registers
        using Addr = Register::Address<0x58004070,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp9r{    ///<RTC backup registers
        using Addr = Register::Address<0x58004074,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp10r{    ///<RTC backup registers
        using Addr = Register::Address<0x58004078,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp11r{    ///<RTC backup registers
        using Addr = Register::Address<0x5800407c,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp12r{    ///<RTC backup registers
        using Addr = Register::Address<0x58004080,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp13r{    ///<RTC backup registers
        using Addr = Register::Address<0x58004084,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp14r{    ///<RTC backup registers
        using Addr = Register::Address<0x58004088,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp15r{    ///<RTC backup registers
        using Addr = Register::Address<0x5800408c,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcOr{    ///<RTC option register
        using Addr = Register::Address<0x5800404c,0xfffffffc,0x00000000,std::uint32_t>;
        ///RTC_ALARM output type on              PC13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtcAlarmType{}; 
        ///RTC_OUT remap
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtcOutRmp{}; 
    }
    namespace RtcRtcBkp16r{    ///<RTC backup registers
        using Addr = Register::Address<0x58004090,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp17r{    ///<RTC backup registers
        using Addr = Register::Address<0x58004094,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp18r{    ///<RTC backup registers
        using Addr = Register::Address<0x58004098,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp19r{    ///<RTC backup registers
        using Addr = Register::Address<0x5800409c,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp20r{    ///<RTC backup registers
        using Addr = Register::Address<0x580040a0,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp21r{    ///<RTC backup registers
        using Addr = Register::Address<0x580040a4,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp22r{    ///<RTC backup registers
        using Addr = Register::Address<0x580040a8,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp23r{    ///<RTC backup registers
        using Addr = Register::Address<0x580040ac,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp24r{    ///<RTC backup registers
        using Addr = Register::Address<0x580040b0,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp25r{    ///<RTC backup registers
        using Addr = Register::Address<0x580040b4,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp26r{    ///<RTC backup registers
        using Addr = Register::Address<0x580040b8,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp27r{    ///<RTC backup registers
        using Addr = Register::Address<0x580040bc,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp28r{    ///<RTC backup registers
        using Addr = Register::Address<0x580040c0,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp29r{    ///<RTC backup registers
        using Addr = Register::Address<0x580040c4,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp30r{    ///<RTC backup registers
        using Addr = Register::Address<0x580040c8,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
    namespace RtcRtcBkp31r{    ///<RTC backup registers
        using Addr = Register::Address<0x580040cc,0x00000000,0x00000000,std::uint32_t>;
        ///The application can write or read data              to and from these registers. They are powered-on by              VBAT when VDD is switched off, so that they are not              reset by System reset, and their contents remain              valid when the device operates in low-power mode.              This register is reset on a tamper detection event,              as long as TAMPxF=1. or when the Flash readout              protection is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
    }
}
