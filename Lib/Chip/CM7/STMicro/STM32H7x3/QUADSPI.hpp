#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//QUADSPI
    namespace QuadspiQuadspiCr{    ///<QUADSPI control register
        using Addr = Register::Address<0x52005000,0x0020e020,0x00000000,std::uint32_t>;
        ///Enable Enable the QUADSPI.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Abort request This bit aborts the              on-going command sequence. It is automatically reset              once the abort is complete. This bit stops the              current transfer. In polling mode or memory-mapped              mode, this bit also reset the APM bit or the DM              bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> abort{}; 
        ///DMA enable In indirect mode, DMA can be              used to input or output data via the QUADSPI_DR              register. DMA transfers are initiated when the FIFO              threshold flag, FTF, is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///Timeout counter enable This bit is valid              only when memory-mapped mode (FMODE = 11) is              selected. Activating this bit causes the chip select              (nCS) to be released (and thus reduces consumption)              if there has not been an access after a certain              amount of time, where this time is defined by              TIMEOUT[15:0] (QUADSPI_LPTR). Enable the timeout              counter. By default, the QUADSPI never stops its              prefetch operation, keeping the previous read              operation active with nCS maintained low, even if no              access to the Flash memory occurs for a long time.              Since Flash memories tend to consume more when nCS is              held low, the application might want to activate the              timeout counter (TCEN = 1, QUADSPI_CR[3]) so that nCS              is released after a period of TIMEOUT[15:0]              (QUADSPI_LPTR) cycles have elapsed without an access              since when the FIFO becomes full with prefetch data.              This bit can be modified only when BUSY =              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcen{}; 
        ///Sample shift By default, the QUADSPI              samples data 1/2 of a CLK cycle after the data is              driven by the Flash memory. This bit allows the data              is to be sampled later in order to account for              external signal delays. Firmware must assure that              SSHIFT = 0 when in DDR mode (when DDRM = 1). This              field can be modified only when BUSY =              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sshift{}; 
        ///Dual-flash mode This bit activates              dual-flash mode, where two external Flash memories              are used simultaneously to double throughput and              capacity. This bit can be modified only when BUSY =              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dfm{}; 
        ///Flash memory selection This bit selects              the Flash memory to be addressed in single flash mode              (when DFM = 0). This bit can be modified only when              BUSY = 0. This bit is ignored when DFM =              1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fsel{}; 
        ///FIFO threshold level Defines, in              indirect mode, the threshold number of bytes in the              FIFO that will cause the FIFO threshold flag (FTF,              QUADSPI_SR[2]) to be set. In indirect write mode              (FMODE = 00): ... In indirect read mode (FMODE = 01):              ... If DMAEN = 1, then the DMA controller for the              corresponding channel must be disabled before              changing the FTHRES value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> fthres{}; 
        ///Transfer error interrupt enable This bit              enables the transfer error interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Transfer complete interrupt enable This              bit enables the transfer complete              interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///FIFO threshold interrupt enable This bit              enables the FIFO threshold interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ftie{}; 
        ///Status match interrupt enable This bit              enables the status match interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> smie{}; 
        ///TimeOut interrupt enable This bit              enables the TimeOut interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> toie{}; 
        ///Automatic poll mode stop This bit              determines if automatic polling is stopped after a              match. This bit can be modified only when BUSY =              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> apms{}; 
        ///Polling match mode This bit indicates              which method should be used for determining a match              during automatic polling mode. This bit can be              modified only when BUSY = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pmm{}; 
        ///clock prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> prescaler{}; 
    }
    namespace QuadspiQuadspiDcr{    ///<QUADSPI device configuration          register
        using Addr = Register::Address<0x52005004,0xffe0f8fe,0x00000000,std::uint32_t>;
        ///indicates the level that clk takes              between command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ckmode{}; 
        ///Chip select high time CSHT+1 defines the              minimum number of CLK cycles which the chip select              (nCS) must remain high between commands issued to the              Flash memory. ... This field can be modified only              when BUSY = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> csht{}; 
        ///Flash memory size This field defines the              size of external memory using the following formula:              Number of bytes in Flash memory = 2[FSIZE+1] FSIZE+1              is effectively the number of address bits required to              address the Flash memory. The Flash memory capacity              can be up to 4GB (addressed using 32 bits) in              indirect mode, but the addressable space in              memory-mapped mode is limited to 256MB. If DFM = 1,              FSIZE indicates the total capacity of the two Flash              memories together. This field can be modified only              when BUSY = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> fsize{}; 
    }
    namespace QuadspiQuadspiSr{    ///<QUADSPI status register
        using Addr = Register::Address<0x52005008,0xffffc0c0,0x00000000,std::uint32_t>;
        ///Transfer error flag This bit is set in              indirect mode when an invalid address is being              accessed in indirect mode. It is cleared by writing 1              to CTEF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tef{}; 
        ///Transfer complete flag This bit is set              in indirect mode when the programmed number of data              has been transferred or in any mode when the transfer              has been aborted.It is cleared by writing 1 to              CTCF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcf{}; 
        ///FIFO threshold flag In indirect mode,              this bit is set when the FIFO threshold has been              reached, or if there is any data left in the FIFO              after reads from the Flash memory are complete. It is              cleared automatically as soon as threshold condition              is no longer true. In automatic polling mode this bit              is set every time the status register is read, and              the bit is cleared when the data register is              read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ftf{}; 
        ///Status match flag This bit is set in              automatic polling mode when the unmasked received              data matches the corresponding bits in the match              register (QUADSPI_PSMAR). It is cleared by writing 1              to CSMF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> smf{}; 
        ///Timeout flag This bit is set when              timeout occurs. It is cleared by writing 1 to              CTOF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tof{}; 
        ///Busy This bit is set when an operation              is on going. This bit clears automatically when the              operation with the Flash memory is finished and the              FIFO is empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> busy{}; 
        ///FIFO level This field gives the number              of valid bytes which are being held in the FIFO.              FLEVEL = 0 when the FIFO is empty, and 16 when it is              full. In memory-mapped mode and in automatic status              polling mode, FLEVEL is zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> flevel{}; 
    }
    namespace QuadspiQuadspiFcr{    ///<QUADSPI flag clear register
        using Addr = Register::Address<0x5200500c,0xffffffe4,0x00000000,std::uint32_t>;
        ///Clear transfer error flag Writing 1              clears the TEF flag in the QUADSPI_SR              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctef{}; 
        ///Clear transfer complete flag Writing 1              clears the TCF flag in the QUADSPI_SR              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcf{}; 
        ///Clear status match flag Writing 1 clears              the SMF flag in the QUADSPI_SR register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csmf{}; 
        ///Clear timeout flag Writing 1 clears the              TOF flag in the QUADSPI_SR register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctof{}; 
    }
    namespace QuadspiQuadspiDlr{    ///<QUADSPI data length register
        using Addr = Register::Address<0x52005010,0x00000000,0x00000000,std::uint32_t>;
        ///Data length Number of data to be              retrieved (value+1) in indirect and status-polling              modes. A value no greater than 3 (indicating 4 bytes)              should be used for status-polling mode. All 1s in              indirect mode means undefined length, where QUADSPI              will continue until the end of memory, as defined by              FSIZE. 0x0000_0000: 1 byte is to be transferred              0x0000_0001: 2 bytes are to be transferred              0x0000_0002: 3 bytes are to be transferred              0x0000_0003: 4 bytes are to be transferred ...              0xFFFF_FFFD: 4,294,967,294 (4G-2) bytes are to be              transferred 0xFFFF_FFFE: 4,294,967,295 (4G-1) bytes              are to be transferred 0xFFFF_FFFF: undefined length              -- all bytes until the end of Flash memory (as              defined by FSIZE) are to be transferred. Continue              reading indefinitely if FSIZE = 0x1F. DL[0] is stuck              at 1 in dual-flash mode (DFM = 1) even when 0 is              written to this bit, thus assuring that each access              transfers an even number of bytes. This field has no              effect when in memory-mapped mode (FMODE = 10). This              field can be written only when BUSY =              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dl{}; 
    }
    namespace QuadspiQuadspiCcr{    ///<QUADSPI communication configuration          register
        using Addr = Register::Address<0x52005014,0x20800000,0x00000000,std::uint32_t>;
        ///Instruction Instruction to be send to              the external SPI device. This field can be written              only when BUSY = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> instruction{}; 
        ///Instruction mode This field defines the              instruction phase mode of operation: This field can              be written only when BUSY = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> imode{}; 
        ///Address mode This field defines the              address phase mode of operation: This field can be              written only when BUSY = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> admode{}; 
        ///Address size This bit defines address              size: This field can be written only when BUSY =              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> adsize{}; 
        ///Alternate bytes mode This field defines              the alternate-bytes phase mode of operation: This              field can be written only when BUSY =              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> abmode{}; 
        ///Alternate bytes size This bit defines              alternate bytes size: This field can be written only              when BUSY = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> absize{}; 
        ///Number of dummy cycles This field              defines the duration of the dummy phase. In both SDR              and DDR modes, it specifies a number of CLK cycles              (0-31). This field can be written only when BUSY =              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> dcyc{}; 
        ///Data mode This field defines the data              phases mode of operation: This field also determines              the dummy phase mode of operation. This field can be              written only when BUSY = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> dmode{}; 
        ///Functional mode This field defines the              QUADSPI functional mode of operation. If DMAEN = 1              already, then the DMA controller for the              corresponding channel must be disabled before              changing the FMODE value. This field can be written              only when BUSY = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> fmode{}; 
        ///Send instruction only once mode See              Section15.3.11: Sending the instruction only once on              page13. This bit has no effect when IMODE = 00. This              field can be written only when BUSY =              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sioo{}; 
        ///DDR hold Delay the data output by 1/4 of              the QUADSPI output clock cycle in DDR mode: This              feature is only active in DDR mode. This field can be              written only when BUSY = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dhhc{}; 
        ///Double data rate mode This bit sets the              DDR mode for the address, alternate byte and data              phase: This field can be written only when BUSY =              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ddrm{}; 
    }
    namespace QuadspiQuadspiAr{    ///<QUADSPI address register
        using Addr = Register::Address<0x52005018,0x00000000,0x00000000,std::uint32_t>;
        ///[31 0]: Address Address to be send to              the external Flash memory Writes to this field are              ignored when BUSY = 0 or when FMODE = 11              (memory-mapped mode). In dual flash mode, ADDRESS[0]              is automatically stuck to 0 as the address should              always be even
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace QuadspiQuadspiAbr{    ///<QUADSPI alternate bytes          registers
        using Addr = Register::Address<0x5200501c,0x00000000,0x00000000,std::uint32_t>;
        ///Alternate Bytes Optional data to be send              to the external SPI device right after the address.              This field can be written only when BUSY =              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> alternate{}; 
    }
    namespace QuadspiQuadspiDr{    ///<QUADSPI data register
        using Addr = Register::Address<0x52005020,0x00000000,0x00000000,std::uint32_t>;
        ///Data Data to be sent/received to/from              the external SPI device. In indirect write mode, data              written to this register is stored on the FIFO before              it is sent to the Flash memory during the data phase.              If the FIFO is too full, a write operation is stalled              until the FIFO has enough space to accept the amount              of data being written. In indirect read mode, reading              this register gives (via the FIFO) the data which was              received from the Flash memory. If the FIFO does not              have as many bytes as requested by the read operation              and if BUSY=1, the read operation is stalled until              enough data is present or until the transfer is              complete, whichever happens first. In automatic              polling mode, this register contains the last data              read from the Flash memory (without masking). Word,              halfword, and byte accesses to this register are              supported. In indirect write mode, a byte write adds              1 byte to the FIFO, a halfword write 2, and a word              write 4. Similarly, in indirect read mode, a byte              read removes 1 byte from the FIFO, a halfword read 2,              and a word read 4. Accesses in indirect mode must be              aligned to the bottom of this register: a byte read              must read DATA[7:0] and a halfword read must read              DATA[15:0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace QuadspiQuadspiPsmkr{    ///<QUADSPI polling status mask          register
        using Addr = Register::Address<0x52005024,0x00000000,0x00000000,std::uint32_t>;
        ///Status mask Mask to be applied to the              status bytes received in polling mode. For bit n:              This field can be written only when BUSY =              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace QuadspiQuadspiPsmar{    ///<QUADSPI polling status match          register
        using Addr = Register::Address<0x52005028,0x00000000,0x00000000,std::uint32_t>;
        ///Status match Value to be compared with              the masked status register to get a match. This field              can be written only when BUSY = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace QuadspiQuadspiPir{    ///<QUADSPI polling interval          register
        using Addr = Register::Address<0x5200502c,0xffff0000,0x00000000,std::uint32_t>;
        ///Polling interval Number of CLK cycles              between to read during automatic polling phases. This              field can be written only when BUSY =              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> interval{}; 
    }
    namespace QuadspiQuadspiLptr{    ///<QUADSPI low-power timeout          register
        using Addr = Register::Address<0x52005030,0xffff0000,0x00000000,std::uint32_t>;
        ///Timeout period After each access in              memory-mapped mode, the QUADSPI prefetches the              subsequent bytes and holds these bytes in the FIFO.              This field indicates how many CLK cycles the QUADSPI              waits after the FIFO becomes full until it raises              nCS, putting the Flash memory in a lower-consumption              state. This field can be written only when BUSY =              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeout{}; 
    }
}
