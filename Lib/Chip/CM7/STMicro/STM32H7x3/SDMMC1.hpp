#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//SDMMC1
    namespace Sdmmc1SdmmcPower{    ///<SDMMC power control register
        using Addr = Register::Address<0x52007000,0xffffffe0,0x00000000,std::uint32_t>;
        ///SDMMC state control bits. These bits can              only be written when the SDMMC is not in the power-on              state (PWRCTRL?11). These bits are used to define the              functional state of the SDMMC signals: Any further              write will be ignored, PWRCTRL value will keep              11.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pwrctrl{}; 
        ///Voltage switch sequence start. This bit              is used to start the timing critical section of the              voltage switch sequence:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vswitch{}; 
        ///Voltage switch procedure enable. This              bit can only be written by firmware when CPSM is              disabled (CPSMEN = 0). This bit is used to stop the              SDMMC_CK after the voltage switch command              response:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vswitchen{}; 
        ///Data and command direction signals              polarity selection. This bit can only be written when              the SDMMC is in the power-off state (PWRCTRL =              00).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dirpol{}; 
    }
    namespace Sdmmc1SdmmcClkcr{    ///<The SDMMC_CLKCR register controls the          SDMMC_CK output clock, the SDMMC_RX_CLK receive clock,          and the bus width.
        using Addr = Register::Address<0x52007004,0xffc02c00,0x00000000,std::uint32_t>;
        ///Clock divide factor This bit can only be              written when the CPSM and DPSM are not active              (CPSMACT = 0 and DPSMACT = 0). This field defines the              divide factor between the input clock (SDMMCCLK) and              the output clock (SDMMC_CK): SDMMC_CK frequency =              SDMMCCLK / [2 * CLKDIV]. 0xx: etc.. xxx:              etc..
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Power saving configuration bit This bit              can only be written when the CPSM and DPSM are not              active (CPSMACT = 0 and DPSMACT = 0) For power              saving, the SDMMC_CK clock output can be disabled              when the bus is idle by setting PWRSAV:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pwrsav{}; 
        ///Wide bus mode enable bit This bit can              only be written when the CPSM and DPSM are not active              (CPSMACT = 0 and DPSMACT = 0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> widbus{}; 
        ///SDMMC_CK dephasing selection bit for              data and Command. This bit can only be written when              the CPSM and DPSM are not active (CPSMACT = 0 and              DPSMACT = 0). When clock division = 1 (CLKDIV = 0),              this bit has no effect. Data and Command change on              SDMMC_CK falling edge. When clock division &gt;1              (CLKDIV &gt; 0) &amp; DDR = 0: - SDMMC_CK              edge occurs on SDMMCCLK rising edge. When clock              division >1 (CLKDIV > 0) & DDR = 1: - Data              changed on the SDMMCCLK falling edge succeeding a              SDMMC_CK edge. - SDMMC_CK edge occurs on SDMMCCLK              rising edge. - Data changed on the SDMMC_CK falling              edge succeeding a SDMMC_CK edge. - SDMMC_CK edge              occurs on SDMMCCLK rising edge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> negedge{}; 
        ///Hardware flow control enable This bit              can only be written when the CPSM and DPSM are not              active (CPSMACT = 0 and DPSMACT = 0) When Hardware              flow control is enabled, the meaning of the TXFIFOE              and RXFIFOF flags change, please see SDMMC status              register definition in Section56.8.11.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> hwfcEn{}; 
        ///Data rate signaling selection This bit              can only be written when the CPSM and DPSM are not              active (CPSMACT = 0 and DPSMACT = 0) DDR rate shall              only be selected with 4-bit or 8-bit wide bus mode.              (WIDBUS &gt; 00). DDR = 1 has no effect when              WIDBUS = 00 (1-bit wide bus). DDR rate shall only be              selected with clock division &gt;1. (CLKDIV              &gt; 0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ddr{}; 
        ///Bus speed mode selection between DS, HS,              SDR12, SDR25 and SDR50, DDR50, SDR104. This bit can              only be written when the CPSM and DPSM are not active              (CPSMACT = 0 and DPSMACT = 0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> busspeed{}; 
        ///Receive clock selection. These bits can              only be written when the CPSM and DPSM are not active              (CPSMACT = 0 and DPSMACT = 0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> selclkrx{}; 
    }
    namespace Sdmmc1SdmmcArgr{    ///<The SDMMC_ARGR register contains a 32-bit          command argument, which is sent to a card as part of a          command message.
        using Addr = Register::Address<0x52007008,0x00000000,0x00000000,std::uint32_t>;
        ///Command argument. These bits can only be              written by firmware when CPSM is disabled (CPSMEN =              0). Command argument sent to a card as part of a              command message. If a command contains an argument,              it must be loaded into this register before writing a              command to the command register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdarg{}; 
    }
    namespace Sdmmc1SdmmcCmdr{    ///<The SDMMC_CMDR register contains the command          index and command type bits. The command index is sent to          a card as part of a command message. The command type          bits control the command path state machine          (CPSM).
        using Addr = Register::Address<0x5200700c,0xfffe0000,0x00000000,std::uint32_t>;
        ///Command index. This bit can only be              written by firmware when CPSM is disabled (CPSMEN =              0). The command index is sent to the card as part of              a command message.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmdindex{}; 
        ///The CPSM treats the command as a data              transfer command, stops the interrupt period, and              signals DataEnable to the DPSM This bit can only be              written by firmware when CPSM is disabled (CPSMEN =              0). If this bit is set, the CPSM issues an end of              interrupt period and issues DataEnable signal to the              DPSM when the command is sent.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdtrans{}; 
        ///The CPSM treats the command as a Stop              Transmission command and signals Abort to the DPSM.              This bit can only be written by firmware when CPSM is              disabled (CPSMEN = 0). If this bit is set, the CPSM              issues the Abort signal to the DPSM when the command              is sent.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdstop{}; 
        ///Wait for response bits. This bit can              only be written by firmware when CPSM is disabled              (CPSMEN = 0). They are used to configure whether the              CPSM is to wait for a response, and if yes, which              kind of response.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> waitresp{}; 
        ///CPSM waits for interrupt request. If              this bit is set, the CPSM disables command timeout              and waits for an card interrupt request (Response).              If this bit is cleared in the CPSM Wait state, will              cause the abort of the interrupt mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> waitint{}; 
        ///CPSM Waits for end of data transfer              (CmdPend internal signal) from DPSM. This bit when              set, the CPSM waits for the end of data transfer              trigger before it starts sending a command. WAITPEND              is only taken into account when DTMODE = MMC stream              data transfer, WIDBUS = 1-bit wide bus mode, DPSMACT              = 1 and DTDIR = from host to card.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitpend{}; 
        ///Command path state machine (CPSM) Enable              bit This bit is written 1 by firmware, and cleared by              hardware when the CPSM enters the Idle state. If this              bit is set, the CPSM is enabled. When DTEN = 1, no              command will be transfered nor boot procedure will be              started. CPSMEN is cleared to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cpsmen{}; 
        ///Hold new data block transmission and              reception in the DPSM. If this bit is set, the DPSM              will not move from the Wait_S state to the Send state              or from the Wait_R state to the Receive              state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dthold{}; 
        ///Select the boot mode procedure to be              used. This bit can only be written by firmware when              CPSM is disabled (CPSMEN = 0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> bootmode{}; 
        ///Enable boot mode              procedure.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> booten{}; 
        ///The CPSM treats the command as a Suspend              or Resume command and signals interrupt period              start/end. This bit can only be written by firmware              when CPSM is disabled (CPSMEN = 0). CMDSUSPEND = 1              and CMDTRANS = 0 Suspend command, start interrupt              period when response bit BS=0. CMDSUSPEND = 1 and              CMDTRANS = 1 Resume command with data, end interrupt              period when response bit DF=1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cmdsuspend{}; 
    }
    namespace Sdmmc1SdmmcResp1r{    ///<The SDMMC_RESP1/2/3/4R registers contain the          status of a card, which is part of the received          response.
        using Addr = Register::Address<0x52007014,0x00000000,0x00000000,std::uint32_t>;
        ///see Table 432
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus1{}; 
    }
    namespace Sdmmc1SdmmcResp2r{    ///<The SDMMC_RESP1/2/3/4R registers contain the          status of a card, which is part of the received          response.
        using Addr = Register::Address<0x52007018,0x00000000,0x00000000,std::uint32_t>;
        ///see Table404.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus2{}; 
    }
    namespace Sdmmc1SdmmcResp3r{    ///<The SDMMC_RESP1/2/3/4R registers contain the          status of a card, which is part of the received          response.
        using Addr = Register::Address<0x5200701c,0x00000000,0x00000000,std::uint32_t>;
        ///see Table404.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus3{}; 
    }
    namespace Sdmmc1SdmmcResp4r{    ///<The SDMMC_RESP1/2/3/4R registers contain the          status of a card, which is part of the received          response.
        using Addr = Register::Address<0x52007020,0x00000000,0x00000000,std::uint32_t>;
        ///see Table404.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus4{}; 
    }
    namespace Sdmmc1SdmmcDtimer{    ///<The SDMMC_DTIMER register contains the data          timeout period, in card bus clock periods. A counter          loads the value from the SDMMC_DTIMER register, and          starts decrementing when the data path state machine          (DPSM) enters the Wait_R or Busy state. If the timer          reaches 0 while the DPSM is in either of these states,          the timeout status flag is set.
        using Addr = Register::Address<0x52007024,0x00000000,0x00000000,std::uint32_t>;
        ///Data and R1b busy timeout period This              bit can only be written when the CPSM and DPSM are              not active (CPSMACT = 0 and DPSMACT = 0). Data and              R1b busy timeout period expressed in card bus clock              periods.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datatime{}; 
    }
    namespace Sdmmc1SdmmcDlenr{    ///<The SDMMC_DLENR register contains the number          of data bytes to be transferred. The value is loaded into          the data counter when data transfer starts.
        using Addr = Register::Address<0x52007028,0xfe000000,0x00000000,std::uint32_t>;
        ///Data length value This register can only              be written by firmware when DPSM is inactive (DPSMACT              = 0). Number of data bytes to be transferred. When              DDR = 1 DATALENGTH is truncated to a multiple of 2.              (The last odd byte is not transfered) When DATALENGTH              = 0 no data will be transfered, when requested by a              CPSMEN and CMDTRANS = 1 also no command will be              transfered. DTEN and CPSMEN are cleared to              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,0),Register::ReadWriteAccess,unsigned> datalength{}; 
    }
    namespace Sdmmc1SdmmcDctrl{    ///<The SDMMC_DCTRL register control the data          path state machine (DPSM).
        using Addr = Register::Address<0x5200702c,0xffffc000,0x00000000,std::uint32_t>;
        ///Data transfer enable bit This bit can              only be written by firmware when DPSM is inactive              (DPSMACT = 0). This bit is cleared by Hardware when              data transfer completes. This bit shall only be used              to transfer data when no associated data transfer              command is used, i.e. shall not be used with SD or              eMMC cards.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dten{}; 
        ///Data transfer direction selection This              bit can only be written by firmware when DPSM is              inactive (DPSMACT = 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dtdir{}; 
        ///Data transfer mode selection. This bit              can only be written by firmware when DPSM is inactive              (DPSMACT = 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dtmode{}; 
        ///Data block size This bit can only be              written by firmware when DPSM is inactive (DPSMACT =              0). Define the data block length when the block data              transfer mode is selected: When DATALENGTH is not a              multiple of DBLOCKSIZE, the transfered data is              truncated at a multiple of DBLOCKSIZE. (Any remain              data will not be transfered.) When DDR = 1,              DBLOCKSIZE = 0000 shall not be used. (No data will be              transfered)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dblocksize{}; 
        ///Read wait start. If this bit is set,              read wait operation starts.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rwstart{}; 
        ///Read wait stop This bit is written by              firmware and auto cleared by hardware when the DPSM              moves from the READ_WAIT state to the WAIT_R or IDLE              state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rwstop{}; 
        ///Read wait mode. This bit can only be              written by firmware when DPSM is inactive (DPSMACT =              0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rwmod{}; 
        ///SD I/O interrupt enable functions This              bit can only be written by firmware when DPSM is              inactive (DPSMACT = 0). If this bit is set, the DPSM              enables the SD I/O card specific interrupt              operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sdioen{}; 
        ///Enable the reception of the boot              acknowledgment. This bit can only be written by              firmware when DPSM is inactive (DPSMACT =              0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bootacken{}; 
        ///FIFO reset, will flush any remaining              data. This bit can only be written by firmware when              IDMAEN= 0 and DPSM is active (DPSMACT = 1). This bit              will only take effect when a transfer error or              transfer hold occurs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fiforst{}; 
    }
    namespace Sdmmc1SdmmcDcntr{    ///<The SDMMC_DCNTR register loads the value          from the data length register (see SDMMC_DLENR) when the          DPSM moves from the Idle state to the Wait_R or Wait_S          state. As data is transferred, the counter decrements the          value until it reaches 0. The DPSM then moves to the Idle          state and when there has been no error, the data status          end flag (DATAEND) is set.
        using Addr = Register::Address<0x52007030,0xfe000000,0x00000000,std::uint32_t>;
        ///Data count value When read, the number              of remaining data bytes to be transferred is              returned. Write has no effect.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,0),Register::ReadWriteAccess,unsigned> datacount{}; 
    }
    namespace Sdmmc1SdmmcStar{    ///<The SDMMC_STAR register is a read-only          register. It contains two types of flag:Static flags          (bits [29,21,11:0]): these bits remain asserted until          they are cleared by writing to the SDMMC interrupt Clear          register (see SDMMC_ICR)Dynamic flags (bits [20:12]):          these bits change state depending on the state of the          underlying logic (for example, FIFO full and empty flags          are asserted and de-asserted as data while written to the          FIFO)
        using Addr = Register::Address<0x52007034,0xe0000000,0x00000000,std::uint32_t>;
        ///Command response received (CRC check              failed). Interrupt flag is cleared by writing              corresponding interrupt clear bit in              SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccrcfail{}; 
        ///Data block sent/received (CRC check              failed). Interrupt flag is cleared by writing              corresponding interrupt clear bit in              SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcrcfail{}; 
        ///Command response timeout. Interrupt flag              is cleared by writing corresponding interrupt clear              bit in SDMMC_ICR. The Command Timeout period has a              fixed value of 64 SDMMC_CK clock              periods.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctimeout{}; 
        ///Data timeout. Interrupt flag is cleared              by writing corresponding interrupt clear bit in              SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtimeout{}; 
        ///Transmit FIFO underrun error or IDMA              read transfer error. Interrupt flag is cleared by              writing corresponding interrupt clear bit in              SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderr{}; 
        ///Received FIFO overrun error or IDMA              write transfer error. Interrupt flag is cleared by              writing corresponding interrupt clear bit in              SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxoverr{}; 
        ///Command response received (CRC check              passed, or no CRC). Interrupt flag is cleared by              writing corresponding interrupt clear bit in              SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdrend{}; 
        ///Command sent (no response required).              Interrupt flag is cleared by writing corresponding              interrupt clear bit in SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdsent{}; 
        ///Data transfer ended correctly. (data              counter, DATACOUNT is zero and no errors occur).              Interrupt flag is cleared by writing corresponding              interrupt clear bit in SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataend{}; 
        ///Data transfer Hold. Interrupt flag is              cleared by writing corresponding interrupt clear bit              in SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dhold{}; 
        ///Data block sent/received. (CRC check              passed) and DPSM moves to the READWAIT state.              Interrupt flag is cleared by writing corresponding              interrupt clear bit in SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbckend{}; 
        ///Data transfer aborted by CMD12.              Interrupt flag is cleared by writing corresponding              interrupt clear bit in SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dabort{}; 
        ///Data path state machine active, i.e. not              in Idle state. This is a hardware status flag only,              does not generate an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dpsmact{}; 
        ///Command path state machine active, i.e.              not in Idle state. This is a hardware status flag              only, does not generate an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cpsmact{}; 
        ///Transmit FIFO half empty At least half              the number of words can be written into the FIFO.              This bit is cleared when the FIFO becomes half+1              full.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txfifohe{}; 
        ///Receive FIFO half full There are at              least half the number of words in the FIFO. This bit              is cleared when the FIFO becomes half+1              empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxfifohf{}; 
        ///Transmit FIFO full This is a hardware              status flag only, does not generate an interrupt.              This bit is cleared when one FIFO location becomes              empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txfifof{}; 
        ///Receive FIFO full This bit is cleared              when one FIFO location becomes empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxfifof{}; 
        ///Transmit FIFO empty This bit is cleared              when one FIFO location becomes full.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> txfifoe{}; 
        ///Receive FIFO empty This is a hardware              status flag only, does not generate an interrupt.              This bit is cleared when one FIFO location becomes              full.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxfifoe{}; 
        ///Inverted value of SDMMC_D0 line (Busy),              sampled at the end of a CMD response and a second              time 2 SDMMC_CK cycles after the CMD response. This              bit is reset to not busy when the SDMMCD0 line              changes from busy to not busy. This bit does not              signal busy due to data transfer. This is a hardware              status flag only, it does not generate an              interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> busyd0{}; 
        ///end of SDMMC_D0 Busy following a CMD              response detected. This indicates only end of busy              following a CMD response. This bit does not signal              busy due to data transfer. Interrupt flag is cleared              by writing corresponding interrupt clear bit in              SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> busyd0end{}; 
        ///SDIO interrupt received. Interrupt flag              is cleared by writing corresponding interrupt clear              bit in SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sdioit{}; 
        ///Boot acknowledgment received (boot              acknowledgment check fail). Interrupt flag is cleared              by writing corresponding interrupt clear bit in              SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ackfail{}; 
        ///Boot acknowledgment timeout. Interrupt              flag is cleared by writing corresponding interrupt              clear bit in SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> acktimeout{}; 
        ///Voltage switch critical timing section              completion. Interrupt flag is cleared by writing              corresponding interrupt clear bit in              SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> vswend{}; 
        ///SDMMC_CK stopped in Voltage switch              procedure. Interrupt flag is cleared by writing              corresponding interrupt clear bit in              SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ckstop{}; 
        ///IDMA transfer error. Interrupt flag is              cleared by writing corresponding interrupt clear bit              in SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> idmate{}; 
        ///IDMA buffer transfer complete. interrupt              flag is cleared by writing corresponding interrupt              clear bit in SDMMC_ICR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> idmabtc{}; 
    }
    namespace Sdmmc1SdmmcIcr{    ///<The SDMMC_ICR register is a write-only          register. Writing a bit with 1 clears the corresponding          bit in the SDMMC_STAR status register.
        using Addr = Register::Address<0x52007038,0xe01ff000,0x00000000,std::uint32_t>;
        ///CCRCFAIL flag clear bit Set by software              to clear the CCRCFAIL flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccrcfailc{}; 
        ///DCRCFAIL flag clear bit Set by software              to clear the DCRCFAIL flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcrcfailc{}; 
        ///CTIMEOUT flag clear bit Set by software              to clear the CTIMEOUT flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctimeoutc{}; 
        ///DTIMEOUT flag clear bit Set by software              to clear the DTIMEOUT flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtimeoutc{}; 
        ///TXUNDERR flag clear bit Set by software              to clear TXUNDERR flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderrc{}; 
        ///RXOVERR flag clear bit Set by software              to clear the RXOVERR flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxoverrc{}; 
        ///CMDREND flag clear bit Set by software              to clear the CMDREND flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdrendc{}; 
        ///CMDSENT flag clear bit Set by software              to clear the CMDSENT flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdsentc{}; 
        ///DATAEND flag clear bit Set by software              to clear the DATAEND flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataendc{}; 
        ///DHOLD flag clear bit Set by software to              clear the DHOLD flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dholdc{}; 
        ///DBCKEND flag clear bit Set by software              to clear the DBCKEND flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbckendc{}; 
        ///DABORT flag clear bit Set by software to              clear the DABORT flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dabortc{}; 
        ///BUSYD0END flag clear bit Set by software              to clear the BUSYD0END flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> busyd0endc{}; 
        ///SDIOIT flag clear bit Set by software to              clear the SDIOIT flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sdioitc{}; 
        ///ACKFAIL flag clear bit Set by software              to clear the ACKFAIL flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ackfailc{}; 
        ///ACKTIMEOUT flag clear bit Set by              software to clear the ACKTIMEOUT flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> acktimeoutc{}; 
        ///VSWEND flag clear bit Set by software to              clear the VSWEND flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> vswendc{}; 
        ///CKSTOP flag clear bit Set by software to              clear the CKSTOP flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ckstopc{}; 
        ///IDMA transfer error clear bit Set by              software to clear the IDMATE flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> idmatec{}; 
        ///IDMA buffer transfer complete clear bit              Set by software to clear the IDMABTC              flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> idmabtcc{}; 
    }
    namespace Sdmmc1SdmmcMaskr{    ///<The interrupt mask register determines which          status flags generate an interrupt request by setting the          corresponding bit to 1.
        using Addr = Register::Address<0x5200703c,0xe8193000,0x00000000,std::uint32_t>;
        ///Command CRC fail interrupt enable Set              and cleared by software to enable/disable interrupt              caused by command CRC failure.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccrcfailie{}; 
        ///Data CRC fail interrupt enable Set and              cleared by software to enable/disable interrupt              caused by data CRC failure.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcrcfailie{}; 
        ///Command timeout interrupt enable Set and              cleared by software to enable/disable interrupt              caused by command timeout.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctimeoutie{}; 
        ///Data timeout interrupt enable Set and              cleared by software to enable/disable interrupt              caused by data timeout.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtimeoutie{}; 
        ///Tx FIFO underrun error interrupt enable              Set and cleared by software to enable/disable              interrupt caused by Tx FIFO underrun              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderrie{}; 
        ///Rx FIFO overrun error interrupt enable              Set and cleared by software to enable/disable              interrupt caused by Rx FIFO overrun              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxoverrie{}; 
        ///Command response received interrupt              enable Set and cleared by software to enable/disable              interrupt caused by receiving command              response.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdrendie{}; 
        ///Command sent interrupt enable Set and              cleared by software to enable/disable interrupt              caused by sending command.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdsentie{}; 
        ///Data end interrupt enable Set and              cleared by software to enable/disable interrupt              caused by data end.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataendie{}; 
        ///Data hold interrupt enable Set and              cleared by software to enable/disable the interrupt              generated when sending new data is hold in the DPSM              Wait_S state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dholdie{}; 
        ///Data block end interrupt enable Set and              cleared by software to enable/disable interrupt              caused by data block end.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbckendie{}; 
        ///Data transfer aborted interrupt enable              Set and cleared by software to enable/disable              interrupt caused by a data transfer being              aborted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dabortie{}; 
        ///Tx FIFO half empty interrupt enable Set              and cleared by software to enable/disable interrupt              caused by Tx FIFO half empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txfifoheie{}; 
        ///Rx FIFO half full interrupt enable Set              and cleared by software to enable/disable interrupt              caused by Rx FIFO half full.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxfifohfie{}; 
        ///Rx FIFO full interrupt enable Set and              cleared by software to enable/disable interrupt              caused by Rx FIFO full.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxfifofie{}; 
        ///Tx FIFO empty interrupt enable Set and              cleared by software to enable/disable interrupt              caused by Tx FIFO empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> txfifoeie{}; 
        ///BUSYD0END interrupt enable Set and              cleared by software to enable/disable the interrupt              generated when SDMMC_D0 signal changes from busy to              NOT busy following a CMD response.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> busyd0endie{}; 
        ///SDIO mode interrupt received interrupt              enable Set and cleared by software to enable/disable              the interrupt generated when receiving the SDIO mode              interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sdioitie{}; 
        ///Acknowledgment Fail interrupt enable Set              and cleared by software to enable/disable interrupt              caused by acknowledgment Fail.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ackfailie{}; 
        ///Acknowledgment timeout interrupt enable              Set and cleared by software to enable/disable              interrupt caused by acknowledgment              timeout.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> acktimeoutie{}; 
        ///Voltage switch critical timing section              completion interrupt enable Set and cleared by              software to enable/disable the interrupt generated              when voltage switch critical timing section              completion.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> vswendie{}; 
        ///Voltage Switch clock stopped interrupt              enable Set and cleared by software to enable/disable              interrupt caused by Voltage Switch clock              stopped.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ckstopie{}; 
        ///IDMA buffer transfer complete interrupt              enable Set and cleared by software to enable/disable              the interrupt generated when the IDMA has transferred              all data belonging to a memory buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> idmabtcie{}; 
    }
    namespace Sdmmc1SdmmcAcktimer{    ///<The SDMMC_ACKTIMER register contains the          acknowledgment timeout period, in SDMMC_CK bus clock          periods. A counter loads the value from the          SDMMC_ACKTIMER register, and starts decrementing when the          data path state machine (DPSM) enters the Wait_Ack state.          If the timer reaches 0 while the DPSM is in this states,          the acknowledgment timeout status flag is          set.
        using Addr = Register::Address<0x52007040,0xfe000000,0x00000000,std::uint32_t>;
        ///Boot acknowledgment timeout period This              bit can only be written by firmware when CPSM is              disabled (CPSMEN = 0). Boot acknowledgment timeout              period expressed in card bus clock              periods.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,0),Register::ReadWriteAccess,unsigned> acktime{}; 
    }
    namespace Sdmmc1SdmmcIdmactrlr{    ///<The receive and transmit FIFOs can be read          or written as 32-bit wide registers. The FIFOs contain 32          entries on 32 sequential addresses. This allows the CPU          to use its load and store multiple operands to read          from/write to the FIFO.
        using Addr = Register::Address<0x52007050,0xfffffff8,0x00000000,std::uint32_t>;
        ///IDMA enable This bit can only be written              by firmware when DPSM is inactive (DPSMACT =              0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idmaen{}; 
        ///Buffer mode selection. This bit can only              be written by firmware when DPSM is inactive (DPSMACT              = 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> idmabmode{}; 
        ///Double buffer mode active buffer              indication This bit can only be written by firmware              when DPSM is inactive (DPSMACT = 0). When IDMA is              enabled this bit is toggled by              hardware.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> idmabact{}; 
    }
    namespace Sdmmc1SdmmcIdmabsizer{    ///<The SDMMC_IDMABSIZER register contains the          buffers size when in double buffer          configuration.
        using Addr = Register::Address<0x52007054,0xffffe01f,0x00000000,std::uint32_t>;
        ///Number of transfers per buffer. This              8-bit value shall be multiplied by 8 to get the size              of the buffer in 32-bit words and by 32 to get the              size of the buffer in bytes. Example: IDMABNDT =              0x01: buffer size = 8 words = 32 bytes. These bits              can only be written by firmware when DPSM is inactive              (DPSMACT = 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,5),Register::ReadWriteAccess,unsigned> idmabndt{}; 
    }
    namespace Sdmmc1SdmmcIdmabase0r{    ///<The SDMMC_IDMABASE0R register contains the          memory buffer base address in single buffer configuration          and the buffer 0 base address in double buffer          configuration.
        using Addr = Register::Address<0x52007058,0x00000000,0x00000000,std::uint32_t>;
        ///Buffer 0 memory base address bits              [31:2], shall be word aligned (bit [1:0] are always 0              and read only). This register can be written by              firmware when DPSM is inactive (DPSMACT = 0), and can              dynamically be written by firmware when DPSM active              (DPSMACT = 1) and memory buffer 0 is inactive              (IDMABACT = 1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idmabase0{}; 
    }
    namespace Sdmmc1SdmmcIdmabase1r{    ///<The SDMMC_IDMABASE1R register contains the          double buffer configuration second buffer memory base          address.
        using Addr = Register::Address<0x5200705c,0x00000000,0x00000000,std::uint32_t>;
        ///Buffer 1 memory base address, shall be              word aligned (bit [1:0] are always 0 and read only).              This register can be written by firmware when DPSM is              inactive (DPSMACT = 0), and can dynamically be              written by firmware when DPSM active (DPSMACT = 1)              and memory buffer 1 is inactive (IDMABACT =              0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idmabase1{}; 
    }
    namespace Sdmmc1SdmmcFifor{    ///<The receive and transmit FIFOs can be only          read or written as word (32-bit) wide registers. The          FIFOs contain 16 entries on sequential addresses. This          allows the CPU to use its load and store multiple          operands to read from/write to the FIFO.When accessing          SDMMC_FIFOR with half word or byte access an AHB bus          fault is generated.
        using Addr = Register::Address<0x52007080,0x00000000,0x00000000,std::uint32_t>;
        ///Receive and transmit FIFO data This              register can only be read or written by firmware when              the DPSM is active (DPSMACT=1). The FIFO data              occupies 16 entries of 32-bit words.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
    }
    namespace Sdmmc1SdmmcVer{    ///<SDMMC IP version register
        using Addr = Register::Address<0x520073f4,0xffffff00,0x00000000,std::uint32_t>;
        ///IP minor revision number.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> minrev{}; 
        ///IP major revision number.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> majrev{}; 
    }
    namespace Sdmmc1SdmmcId{    ///<SDMMC IP identification          register
        using Addr = Register::Address<0x520073f8,0x00000000,0x00000000,std::uint32_t>;
        ///SDMMC IP identification.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ipId{}; 
    }
    namespace Sdmmc1SdmmcRespcmdr{    ///<SDMMC command response          register
        using Addr = Register::Address<0x52007010,0xffffffc0,0x00000000,std::uint32_t>;
        ///Response command index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> respcmd{}; 
    }
}
