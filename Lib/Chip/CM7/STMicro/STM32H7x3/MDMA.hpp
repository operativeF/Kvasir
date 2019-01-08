#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//MDMA
    namespace MdmaMdmaGisr0{    ///<MDMA Global Interrupt/Status          Register
        using Addr = Register::Address<0x52000000,0xffff0000,0x00000000,std::uint32_t>;
        ///Channel x global interrupt flag (x=...)              This bit is set and reset by hardware. It is a              logical OR of all the Channel x interrupt flags              (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in              the interrupt mask register (CTCIEx, BTIEx, BRTIEx,              TEIEx)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gif0{}; 
        ///Channel x global interrupt flag (x=...)              This bit is set and reset by hardware. It is a              logical OR of all the Channel x interrupt flags              (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in              the interrupt mask register (CTCIEx, BTIEx, BRTIEx,              TEIEx)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gif1{}; 
        ///Channel x global interrupt flag (x=...)              This bit is set and reset by hardware. It is a              logical OR of all the Channel x interrupt flags              (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in              the interrupt mask register (CTCIEx, BTIEx, BRTIEx,              TEIEx)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gif2{}; 
        ///Channel x global interrupt flag (x=...)              This bit is set and reset by hardware. It is a              logical OR of all the Channel x interrupt flags              (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in              the interrupt mask register (CTCIEx, BTIEx, BRTIEx,              TEIEx)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gif3{}; 
        ///Channel x global interrupt flag (x=...)              This bit is set and reset by hardware. It is a              logical OR of all the Channel x interrupt flags              (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in              the interrupt mask register (CTCIEx, BTIEx, BRTIEx,              TEIEx)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gif4{}; 
        ///Channel x global interrupt flag (x=...)              This bit is set and reset by hardware. It is a              logical OR of all the Channel x interrupt flags              (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in              the interrupt mask register (CTCIEx, BTIEx, BRTIEx,              TEIEx)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gif5{}; 
        ///Channel x global interrupt flag (x=...)              This bit is set and reset by hardware. It is a              logical OR of all the Channel x interrupt flags              (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in              the interrupt mask register (CTCIEx, BTIEx, BRTIEx,              TEIEx)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gif6{}; 
        ///Channel x global interrupt flag (x=...)              This bit is set and reset by hardware. It is a              logical OR of all the Channel x interrupt flags              (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in              the interrupt mask register (CTCIEx, BTIEx, BRTIEx,              TEIEx)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gif7{}; 
        ///Channel x global interrupt flag (x=...)              This bit is set and reset by hardware. It is a              logical OR of all the Channel x interrupt flags              (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in              the interrupt mask register (CTCIEx, BTIEx, BRTIEx,              TEIEx)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gif8{}; 
        ///Channel x global interrupt flag (x=...)              This bit is set and reset by hardware. It is a              logical OR of all the Channel x interrupt flags              (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in              the interrupt mask register (CTCIEx, BTIEx, BRTIEx,              TEIEx)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gif9{}; 
        ///Channel x global interrupt flag (x=...)              This bit is set and reset by hardware. It is a              logical OR of all the Channel x interrupt flags              (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in              the interrupt mask register (CTCIEx, BTIEx, BRTIEx,              TEIEx)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gif10{}; 
        ///Channel x global interrupt flag (x=...)              This bit is set and reset by hardware. It is a              logical OR of all the Channel x interrupt flags              (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in              the interrupt mask register (CTCIEx, BTIEx, BRTIEx,              TEIEx)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gif11{}; 
        ///Channel x global interrupt flag (x=...)              This bit is set and reset by hardware. It is a              logical OR of all the Channel x interrupt flags              (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in              the interrupt mask register (CTCIEx, BTIEx, BRTIEx,              TEIEx)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gif12{}; 
        ///Channel x global interrupt flag (x=...)              This bit is set and reset by hardware. It is a              logical OR of all the Channel x interrupt flags              (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in              the interrupt mask register (CTCIEx, BTIEx, BRTIEx,              TEIEx)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> gif13{}; 
        ///Channel x global interrupt flag (x=...)              This bit is set and reset by hardware. It is a              logical OR of all the Channel x interrupt flags              (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in              the interrupt mask register (CTCIEx, BTIEx, BRTIEx,              TEIEx)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> gif14{}; 
        ///Channel x global interrupt flag (x=...)              This bit is set and reset by hardware. It is a              logical OR of all the Channel x interrupt flags              (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in              the interrupt mask register (CTCIEx, BTIEx, BRTIEx,              TEIEx)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> gif15{}; 
    }
    namespace MdmaMdmaC0isr{    ///<MDMA channel x interrupt/status          register
        using Addr = Register::Address<0x52000040,0xfffeffe0,0x00000000,std::uint32_t>;
        ///Channel x transfer error interrupt flag              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif0{}; 
        ///Channel x Channel Transfer Complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register. CTC is set when the              last block was transferred and the channel has been              automatically disabled. CTC is also set when the              channel is suspended, as a result of writing EN bit              to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif0{}; 
        ///Channel x block repeat transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brtif0{}; 
        ///Channel x block transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btif0{}; 
        ///channel x buffer transfer              complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcif0{}; 
        ///channel x request active              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> crqa0{}; 
    }
    namespace MdmaMdmaC0ifcr{    ///<MDMA channel x interrupt flag clear          register
        using Addr = Register::Address<0x52000044,0xffffffe0,0x00000000,std::uint32_t>;
        ///Channel x clear transfer error interrupt              flag Writing a 1 into this bit clears TEIFx in the              MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif0{}; 
        ///Clear Channel transfer complete              interrupt flag for channel x Writing a 1 into this              bit clears CTCIFx in the MDMA_ISRy              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cctcif0{}; 
        ///Channel x clear block repeat transfer              complete interrupt flag Writing a 1 into this bit              clears BRTIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cbrtif0{}; 
        ///Channel x Clear block transfer complete              interrupt flag Writing a 1 into this bit clears BTIFx              in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cbtif0{}; 
        ///CLear buffer Transfer Complete Interrupt              Flag for channel x Writing a 1 into this bit clears              TCIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cltcif0{}; 
    }
    namespace MdmaMdmaC0esr{    ///<MDMA Channel x error status          register
        using Addr = Register::Address<0x52000048,0xfffff000,0x00000000,std::uint32_t>;
        ///Transfer Error Address These bits are              set and cleared by HW, in case of an MDMA data              transfer error. It is used in conjunction with TED.              This field indicates the 7 LSBits of the address              which generated a transfer/access error. It may be              used by SW to retrieve the failing address, by adding              this value (truncated to the buffer transfer length              size) to the current SAR/DAR value. Note: The SAR/DAR              current value doesnt reflect this last address due to              the FIFO management system. The SAR/DAR are only              updated at the end of a (buffer) transfer (of TLEN+1              bytes). Note: It is not set in case of a link data              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tea{}; 
        ///Transfer Error Direction These bit is              set and cleared by HW, in case of an MDMA data              transfer error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ted{}; 
        ///Transfer Error Link Data These bit is              set by HW, in case of a transfer error while reading              the block link data structure. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teld{}; 
        ///Transfer Error Mask Data These bit is              set by HW, in case of a transfer error while writing              the Mask Data. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> temd{}; 
        ///Address/Size Error These bit is set by              HW, when the programmed address is not aligned with              the data size. TED will indicate whether the problem              is on the source or destination. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ase{}; 
        ///Block Size Error These bit is set by HW,              when the block size is not an integer multiple of the              data size either for source or destination. TED will              indicate whether the problem is on the source or              destination. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bse{}; 
    }
    namespace MdmaMdmaC0cr{    ///<This register is used to control the          concerned channel.
        using Addr = Register::Address<0x5200004c,0xfffe8f00,0x00000000,std::uint32_t>;
        ///channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Channel Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///Block Repeat transfer interrupt enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brtie{}; 
        ///Block Transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btie{}; 
        ///buffer Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Priority level These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pl{}; 
        ///byte Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bex{}; 
        ///Half word Endianes              exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> hex{}; 
        ///Word Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wex{}; 
        ///SW ReQuest Writing a 1 into this bit              sets the CRQAx in MDMA_ISRy register, activating the              request on Channel x Note: Either the whole CxCR              register or the 8-bit/16-bit register @ Address              offset: 0x4E + 0x40 chn may be used for SWRQ              activation. In case of a SW request, acknowledge is              not generated (neither HW signal, nor CxMAR write              access).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrq{}; 
    }
    namespace MdmaMdmaC0tcr{    ///<This register is used to configure the          concerned channel.
        using Addr = Register::Address<0x52000050,0x00000000,0x00000000,std::uint32_t>;
        ///Source increment mode These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0 Note: When source is              AHB (SBUS=1), SINC = 00 is forbidden. In Linked List              Mode, at the end of a block (single or last block in              repeated block transfer mode), this register will be              loaded from memory (from address given by current              LAR[31:0] + 0x00).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sinc{}; 
        ///Destination increment mode These bits              are set and cleared by software. These bits are              protected and can be written only if EN is 0 Note:              When destination is AHB (DBUS=1), DINC = 00 is              forbidden.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dinc{}; 
        ///Source data size These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0 Note: If a value of 11 is              programmed for the TCM access/AHB port, a transfer              error will occur (TEIF bit set) If SINCOS &lt;              SSIZE and SINC &#8800; 00, the result will be              unpredictable. Note: SSIZE = 11 (double-word) is              forbidden when source is TCM/AHB bus              (SBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Destination data size These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0. Note: If a value of              11 is programmed for the TCM access/AHB port, a              transfer error will occur (TEIF bit set) If DINCOS              &lt; DSIZE and DINC &#8800; 00, the result              will be unpredictable. Note: DSIZE = 11 (double-word)              is forbidden when destination is TCM/AHB bus              (DBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///source increment offset              size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sincos{}; 
        ///Destination increment              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> dincos{}; 
        ///source burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sburst{}; 
        ///Destination burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dburst{}; 
        ///buffer transfer lengh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,18),Register::ReadWriteAccess,unsigned> tlen{}; 
        ///PacK Enable These bit is set and cleared              by software. If the Source Size is smaller than the              destination, it will be padded according to the PAM              value. If the Source data size is larger than the              destination one, it will be truncated. The alignment              will be done according to the PAM[0] value. This bit              is protected and can be written only if EN is              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pke{}; 
        ///Padding/Alignement Mode These bits are              set and cleared by software. Case 1: Source data size              smaller than destination data size - 3 options are              valid. Case 2: Source data size larger than              destination data size. The remainder part is              discarded. When PKE = 1 or DSIZE=SSIZE, these bits              are ignored. These bits are protected and can be              written only if EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pam{}; 
        ///Trigger Mode These bits are set and              cleared by software. Note: If TRGM is 11 for the              current block, all the values loaded at the end of              the current block through the linked list mechanism              must keep the same value (TRGM=11) and the same SWRM              value, otherwise the result is undefined. These bits              are protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> trgm{}; 
        ///SW Request Mode This bit is set and              cleared by software. If a HW or SW request is              currently active, the bit change will be delayed              until the current transfer is completed. If the CxMAR              contains a valid address, the CxMDR value will also              be written @ CxMAR address. This bit is protected and              can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swrm{}; 
        ///Bufferable Write Mode This bit is set              and cleared by software. This bit is protected and              can be written only if EN is 0. Note: All MDMA              destination accesses are non-cacheable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bwm{}; 
    }
    namespace MdmaMdmaC0bndtr{    ///<MDMA Channel x block number of data          register
        using Addr = Register::Address<0x52000054,0x00020000,0x00000000,std::uint32_t>;
        ///block number of data to              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> bndt{}; 
        ///Block Repeat Source address Update Mode              These bits are protected and can be written only if              EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> brsum{}; 
        ///Block Repeat Destination address Update              Mode These bits are protected and can be written only              if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> brdum{}; 
        ///Block Repeat Count This field contains              the number of repetitions of the current block (0 to              4095). When the channel is enabled, this register is              read-only, indicating the remaining number of blocks,              excluding the current one. This register decrements              after each complete block transfer. Once the last              block transfer has completed, this register can              either stay at zero or be reloaded automatically from              memory (in Linked List mode - i.e. Link Address              valid). These bits are protected and can be written              only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> brc{}; 
    }
    namespace MdmaMdmaC0sar{    ///<MDMA channel x source address          register
        using Addr = Register::Address<0x52000058,0x00000000,0x00000000,std::uint32_t>;
        ///source adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace MdmaMdmaC0dar{    ///<MDMA channel x destination address          register
        using Addr = Register::Address<0x5200005c,0x00000000,0x00000000,std::uint32_t>;
        ///Destination adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace MdmaMdmaC0brur{    ///<MDMA channel x Block Repeat address Update          register
        using Addr = Register::Address<0x52000060,0x00000000,0x00000000,std::uint32_t>;
        ///source adresse update              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> suv{}; 
        ///destination address update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> duv{}; 
    }
    namespace MdmaMdmaC0lar{    ///<MDMA channel x Link Address          register
        using Addr = Register::Address<0x52000064,0x00000000,0x00000000,std::uint32_t>;
        ///Link address register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lar{}; 
    }
    namespace MdmaMdmaC0tbr{    ///<MDMA channel x Trigger and Bus selection          Register
        using Addr = Register::Address<0x52000068,0xfffcffc0,0x00000000,std::uint32_t>;
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tsel{}; 
        ///Source BUS select This bit is protected              and can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbus{}; 
        ///Destination BUS slect This bit is              protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbus{}; 
    }
    namespace MdmaMdmaC0mar{    ///<MDMA channel x Mask address          register
        using Addr = Register::Address<0x52000070,0x00000000,0x00000000,std::uint32_t>;
        ///Mask address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mar{}; 
    }
    namespace MdmaMdmaC0mdr{    ///<MDMA channel x Mask Data          register
        using Addr = Register::Address<0x52000074,0x00000000,0x00000000,std::uint32_t>;
        ///Mask data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdr{}; 
    }
    namespace MdmaMdmaC1isr{    ///<MDMA channel x interrupt/status          register
        using Addr = Register::Address<0x52000080,0xfffeffe0,0x00000000,std::uint32_t>;
        ///Channel x transfer error interrupt flag              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif1{}; 
        ///Channel x Channel Transfer Complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register. CTC is set when the              last block was transferred and the channel has been              automatically disabled. CTC is also set when the              channel is suspended, as a result of writing EN bit              to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif1{}; 
        ///Channel x block repeat transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brtif1{}; 
        ///Channel x block transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btif1{}; 
        ///channel x buffer transfer              complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcif1{}; 
        ///channel x request active              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> crqa1{}; 
    }
    namespace MdmaMdmaC1ifcr{    ///<MDMA channel x interrupt flag clear          register
        using Addr = Register::Address<0x52000084,0xffffffe0,0x00000000,std::uint32_t>;
        ///Channel x clear transfer error interrupt              flag Writing a 1 into this bit clears TEIFx in the              MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif1{}; 
        ///Clear Channel transfer complete              interrupt flag for channel x Writing a 1 into this              bit clears CTCIFx in the MDMA_ISRy              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cctcif1{}; 
        ///Channel x clear block repeat transfer              complete interrupt flag Writing a 1 into this bit              clears BRTIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cbrtif1{}; 
        ///Channel x Clear block transfer complete              interrupt flag Writing a 1 into this bit clears BTIFx              in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cbtif1{}; 
        ///CLear buffer Transfer Complete Interrupt              Flag for channel x Writing a 1 into this bit clears              TCIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cltcif1{}; 
    }
    namespace MdmaMdmaC1esr{    ///<MDMA Channel x error status          register
        using Addr = Register::Address<0x52000088,0xfffff000,0x00000000,std::uint32_t>;
        ///Transfer Error Address These bits are              set and cleared by HW, in case of an MDMA data              transfer error. It is used in conjunction with TED.              This field indicates the 7 LSBits of the address              which generated a transfer/access error. It may be              used by SW to retrieve the failing address, by adding              this value (truncated to the buffer transfer length              size) to the current SAR/DAR value. Note: The SAR/DAR              current value doesnt reflect this last address due to              the FIFO management system. The SAR/DAR are only              updated at the end of a (buffer) transfer (of TLEN+1              bytes). Note: It is not set in case of a link data              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tea{}; 
        ///Transfer Error Direction These bit is              set and cleared by HW, in case of an MDMA data              transfer error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ted{}; 
        ///Transfer Error Link Data These bit is              set by HW, in case of a transfer error while reading              the block link data structure. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teld{}; 
        ///Transfer Error Mask Data These bit is              set by HW, in case of a transfer error while writing              the Mask Data. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> temd{}; 
        ///Address/Size Error These bit is set by              HW, when the programmed address is not aligned with              the data size. TED will indicate whether the problem              is on the source or destination. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ase{}; 
        ///Block Size Error These bit is set by HW,              when the block size is not an integer multiple of the              data size either for source or destination. TED will              indicate whether the problem is on the source or              destination. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bse{}; 
    }
    namespace MdmaMdmaC1cr{    ///<This register is used to control the          concerned channel.
        using Addr = Register::Address<0x5200008c,0xfffe8f00,0x00000000,std::uint32_t>;
        ///channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Channel Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///Block Repeat transfer interrupt enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brtie{}; 
        ///Block Transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btie{}; 
        ///buffer Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Priority level These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pl{}; 
        ///byte Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bex{}; 
        ///Half word Endianes              exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> hex{}; 
        ///Word Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wex{}; 
        ///SW ReQuest Writing a 1 into this bit              sets the CRQAx in MDMA_ISRy register, activating the              request on Channel x Note: Either the whole CxCR              register or the 8-bit/16-bit register @ Address              offset: 0x4E + 0x40 chn may be used for SWRQ              activation. In case of a SW request, acknowledge is              not generated (neither HW signal, nor CxMAR write              access).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrq{}; 
    }
    namespace MdmaMdmaC1tcr{    ///<This register is used to configure the          concerned channel.
        using Addr = Register::Address<0x52000090,0x00000000,0x00000000,std::uint32_t>;
        ///Source increment mode These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0 Note: When source is              AHB (SBUS=1), SINC = 00 is forbidden. In Linked List              Mode, at the end of a block (single or last block in              repeated block transfer mode), this register will be              loaded from memory (from address given by current              LAR[31:0] + 0x00).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sinc{}; 
        ///Destination increment mode These bits              are set and cleared by software. These bits are              protected and can be written only if EN is 0 Note:              When destination is AHB (DBUS=1), DINC = 00 is              forbidden.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dinc{}; 
        ///Source data size These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0 Note: If a value of 11 is              programmed for the TCM access/AHB port, a transfer              error will occur (TEIF bit set) If SINCOS &lt;              SSIZE and SINC &#8800; 00, the result will be              unpredictable. Note: SSIZE = 11 (double-word) is              forbidden when source is TCM/AHB bus              (SBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Destination data size These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0. Note: If a value of              11 is programmed for the TCM access/AHB port, a              transfer error will occur (TEIF bit set) If DINCOS              &lt; DSIZE and DINC &#8800; 00, the result              will be unpredictable. Note: DSIZE = 11 (double-word)              is forbidden when destination is TCM/AHB bus              (DBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///source increment offset              size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sincos{}; 
        ///Destination increment              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> dincos{}; 
        ///source burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sburst{}; 
        ///Destination burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dburst{}; 
        ///buffer transfer lengh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,18),Register::ReadWriteAccess,unsigned> tlen{}; 
        ///PacK Enable These bit is set and cleared              by software. If the Source Size is smaller than the              destination, it will be padded according to the PAM              value. If the Source data size is larger than the              destination one, it will be truncated. The alignment              will be done according to the PAM[0] value. This bit              is protected and can be written only if EN is              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pke{}; 
        ///Padding/Alignement Mode These bits are              set and cleared by software. Case 1: Source data size              smaller than destination data size - 3 options are              valid. Case 2: Source data size larger than              destination data size. The remainder part is              discarded. When PKE = 1 or DSIZE=SSIZE, these bits              are ignored. These bits are protected and can be              written only if EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pam{}; 
        ///Trigger Mode These bits are set and              cleared by software. Note: If TRGM is 11 for the              current block, all the values loaded at the end of              the current block through the linked list mechanism              must keep the same value (TRGM=11) and the same SWRM              value, otherwise the result is undefined. These bits              are protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> trgm{}; 
        ///SW Request Mode This bit is set and              cleared by software. If a HW or SW request is              currently active, the bit change will be delayed              until the current transfer is completed. If the CxMAR              contains a valid address, the CxMDR value will also              be written @ CxMAR address. This bit is protected and              can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swrm{}; 
        ///Bufferable Write Mode This bit is set              and cleared by software. This bit is protected and              can be written only if EN is 0. Note: All MDMA              destination accesses are non-cacheable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bwm{}; 
    }
    namespace MdmaMdmaC1bndtr{    ///<MDMA Channel x block number of data          register
        using Addr = Register::Address<0x52000094,0x00020000,0x00000000,std::uint32_t>;
        ///block number of data to              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> bndt{}; 
        ///Block Repeat Source address Update Mode              These bits are protected and can be written only if              EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> brsum{}; 
        ///Block Repeat Destination address Update              Mode These bits are protected and can be written only              if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> brdum{}; 
        ///Block Repeat Count This field contains              the number of repetitions of the current block (0 to              4095). When the channel is enabled, this register is              read-only, indicating the remaining number of blocks,              excluding the current one. This register decrements              after each complete block transfer. Once the last              block transfer has completed, this register can              either stay at zero or be reloaded automatically from              memory (in Linked List mode - i.e. Link Address              valid). These bits are protected and can be written              only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> brc{}; 
    }
    namespace MdmaMdmaC1sar{    ///<MDMA channel x source address          register
        using Addr = Register::Address<0x52000098,0x00000000,0x00000000,std::uint32_t>;
        ///source adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace MdmaMdmaC1dar{    ///<MDMA channel x destination address          register
        using Addr = Register::Address<0x5200009c,0x00000000,0x00000000,std::uint32_t>;
        ///Destination adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace MdmaMdmaC1brur{    ///<MDMA channel x Block Repeat address Update          register
        using Addr = Register::Address<0x520000a0,0x00000000,0x00000000,std::uint32_t>;
        ///source adresse update              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> suv{}; 
        ///destination address update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> duv{}; 
    }
    namespace MdmaMdmaC1lar{    ///<MDMA channel x Link Address          register
        using Addr = Register::Address<0x520000a4,0x00000000,0x00000000,std::uint32_t>;
        ///Link address register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lar{}; 
    }
    namespace MdmaMdmaC1tbr{    ///<MDMA channel x Trigger and Bus selection          Register
        using Addr = Register::Address<0x520000a8,0xfffcffc0,0x00000000,std::uint32_t>;
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tsel{}; 
        ///Source BUS select This bit is protected              and can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbus{}; 
        ///Destination BUS slect This bit is              protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbus{}; 
    }
    namespace MdmaMdmaC1mar{    ///<MDMA channel x Mask address          register
        using Addr = Register::Address<0x520000b0,0x00000000,0x00000000,std::uint32_t>;
        ///Mask address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mar{}; 
    }
    namespace MdmaMdmaC1mdr{    ///<MDMA channel x Mask Data          register
        using Addr = Register::Address<0x520000b4,0x00000000,0x00000000,std::uint32_t>;
        ///Mask data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdr{}; 
    }
    namespace MdmaMdmaC2isr{    ///<MDMA channel x interrupt/status          register
        using Addr = Register::Address<0x520000c0,0xfffeffe0,0x00000000,std::uint32_t>;
        ///Channel x transfer error interrupt flag              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif2{}; 
        ///Channel x Channel Transfer Complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register. CTC is set when the              last block was transferred and the channel has been              automatically disabled. CTC is also set when the              channel is suspended, as a result of writing EN bit              to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif2{}; 
        ///Channel x block repeat transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brtif2{}; 
        ///Channel x block transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btif2{}; 
        ///channel x buffer transfer              complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcif2{}; 
        ///channel x request active              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> crqa2{}; 
    }
    namespace MdmaMdmaC2ifcr{    ///<MDMA channel x interrupt flag clear          register
        using Addr = Register::Address<0x520000c4,0xffffffe0,0x00000000,std::uint32_t>;
        ///Channel x clear transfer error interrupt              flag Writing a 1 into this bit clears TEIFx in the              MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif2{}; 
        ///Clear Channel transfer complete              interrupt flag for channel x Writing a 1 into this              bit clears CTCIFx in the MDMA_ISRy              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cctcif2{}; 
        ///Channel x clear block repeat transfer              complete interrupt flag Writing a 1 into this bit              clears BRTIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cbrtif2{}; 
        ///Channel x Clear block transfer complete              interrupt flag Writing a 1 into this bit clears BTIFx              in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cbtif2{}; 
        ///CLear buffer Transfer Complete Interrupt              Flag for channel x Writing a 1 into this bit clears              TCIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cltcif2{}; 
    }
    namespace MdmaMdmaC2esr{    ///<MDMA Channel x error status          register
        using Addr = Register::Address<0x520000c8,0xfffff000,0x00000000,std::uint32_t>;
        ///Transfer Error Address These bits are              set and cleared by HW, in case of an MDMA data              transfer error. It is used in conjunction with TED.              This field indicates the 7 LSBits of the address              which generated a transfer/access error. It may be              used by SW to retrieve the failing address, by adding              this value (truncated to the buffer transfer length              size) to the current SAR/DAR value. Note: The SAR/DAR              current value doesnt reflect this last address due to              the FIFO management system. The SAR/DAR are only              updated at the end of a (buffer) transfer (of TLEN+1              bytes). Note: It is not set in case of a link data              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tea{}; 
        ///Transfer Error Direction These bit is              set and cleared by HW, in case of an MDMA data              transfer error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ted{}; 
        ///Transfer Error Link Data These bit is              set by HW, in case of a transfer error while reading              the block link data structure. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teld{}; 
        ///Transfer Error Mask Data These bit is              set by HW, in case of a transfer error while writing              the Mask Data. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> temd{}; 
        ///Address/Size Error These bit is set by              HW, when the programmed address is not aligned with              the data size. TED will indicate whether the problem              is on the source or destination. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ase{}; 
        ///Block Size Error These bit is set by HW,              when the block size is not an integer multiple of the              data size either for source or destination. TED will              indicate whether the problem is on the source or              destination. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bse{}; 
    }
    namespace MdmaMdmaC2cr{    ///<This register is used to control the          concerned channel.
        using Addr = Register::Address<0x520000cc,0xfffe8f00,0x00000000,std::uint32_t>;
        ///channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Channel Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///Block Repeat transfer interrupt enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brtie{}; 
        ///Block Transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btie{}; 
        ///buffer Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Priority level These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pl{}; 
        ///byte Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bex{}; 
        ///Half word Endianes              exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> hex{}; 
        ///Word Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wex{}; 
        ///SW ReQuest Writing a 1 into this bit              sets the CRQAx in MDMA_ISRy register, activating the              request on Channel x Note: Either the whole CxCR              register or the 8-bit/16-bit register @ Address              offset: 0x4E + 0x40 chn may be used for SWRQ              activation. In case of a SW request, acknowledge is              not generated (neither HW signal, nor CxMAR write              access).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrq{}; 
    }
    namespace MdmaMdmaC2tcr{    ///<This register is used to configure the          concerned channel.
        using Addr = Register::Address<0x520000d0,0x00000000,0x00000000,std::uint32_t>;
        ///Source increment mode These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0 Note: When source is              AHB (SBUS=1), SINC = 00 is forbidden. In Linked List              Mode, at the end of a block (single or last block in              repeated block transfer mode), this register will be              loaded from memory (from address given by current              LAR[31:0] + 0x00).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sinc{}; 
        ///Destination increment mode These bits              are set and cleared by software. These bits are              protected and can be written only if EN is 0 Note:              When destination is AHB (DBUS=1), DINC = 00 is              forbidden.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dinc{}; 
        ///Source data size These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0 Note: If a value of 11 is              programmed for the TCM access/AHB port, a transfer              error will occur (TEIF bit set) If SINCOS &lt;              SSIZE and SINC &#8800; 00, the result will be              unpredictable. Note: SSIZE = 11 (double-word) is              forbidden when source is TCM/AHB bus              (SBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Destination data size These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0. Note: If a value of              11 is programmed for the TCM access/AHB port, a              transfer error will occur (TEIF bit set) If DINCOS              &lt; DSIZE and DINC &#8800; 00, the result              will be unpredictable. Note: DSIZE = 11 (double-word)              is forbidden when destination is TCM/AHB bus              (DBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///source increment offset              size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sincos{}; 
        ///Destination increment              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> dincos{}; 
        ///source burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sburst{}; 
        ///Destination burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dburst{}; 
        ///buffer transfer lengh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,18),Register::ReadWriteAccess,unsigned> tlen{}; 
        ///PacK Enable These bit is set and cleared              by software. If the Source Size is smaller than the              destination, it will be padded according to the PAM              value. If the Source data size is larger than the              destination one, it will be truncated. The alignment              will be done according to the PAM[0] value. This bit              is protected and can be written only if EN is              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pke{}; 
        ///Padding/Alignement Mode These bits are              set and cleared by software. Case 1: Source data size              smaller than destination data size - 3 options are              valid. Case 2: Source data size larger than              destination data size. The remainder part is              discarded. When PKE = 1 or DSIZE=SSIZE, these bits              are ignored. These bits are protected and can be              written only if EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pam{}; 
        ///Trigger Mode These bits are set and              cleared by software. Note: If TRGM is 11 for the              current block, all the values loaded at the end of              the current block through the linked list mechanism              must keep the same value (TRGM=11) and the same SWRM              value, otherwise the result is undefined. These bits              are protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> trgm{}; 
        ///SW Request Mode This bit is set and              cleared by software. If a HW or SW request is              currently active, the bit change will be delayed              until the current transfer is completed. If the CxMAR              contains a valid address, the CxMDR value will also              be written @ CxMAR address. This bit is protected and              can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swrm{}; 
        ///Bufferable Write Mode This bit is set              and cleared by software. This bit is protected and              can be written only if EN is 0. Note: All MDMA              destination accesses are non-cacheable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bwm{}; 
    }
    namespace MdmaMdmaC2bndtr{    ///<MDMA Channel x block number of data          register
        using Addr = Register::Address<0x520000d4,0x00020000,0x00000000,std::uint32_t>;
        ///block number of data to              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> bndt{}; 
        ///Block Repeat Source address Update Mode              These bits are protected and can be written only if              EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> brsum{}; 
        ///Block Repeat Destination address Update              Mode These bits are protected and can be written only              if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> brdum{}; 
        ///Block Repeat Count This field contains              the number of repetitions of the current block (0 to              4095). When the channel is enabled, this register is              read-only, indicating the remaining number of blocks,              excluding the current one. This register decrements              after each complete block transfer. Once the last              block transfer has completed, this register can              either stay at zero or be reloaded automatically from              memory (in Linked List mode - i.e. Link Address              valid). These bits are protected and can be written              only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> brc{}; 
    }
    namespace MdmaMdmaC2sar{    ///<MDMA channel x source address          register
        using Addr = Register::Address<0x520000d8,0x00000000,0x00000000,std::uint32_t>;
        ///source adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace MdmaMdmaC2dar{    ///<MDMA channel x destination address          register
        using Addr = Register::Address<0x520000dc,0x00000000,0x00000000,std::uint32_t>;
        ///Destination adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace MdmaMdmaC2brur{    ///<MDMA channel x Block Repeat address Update          register
        using Addr = Register::Address<0x520000e0,0x00000000,0x00000000,std::uint32_t>;
        ///source adresse update              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> suv{}; 
        ///destination address update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> duv{}; 
    }
    namespace MdmaMdmaC2lar{    ///<MDMA channel x Link Address          register
        using Addr = Register::Address<0x520000e4,0x00000000,0x00000000,std::uint32_t>;
        ///Link address register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lar{}; 
    }
    namespace MdmaMdmaC2tbr{    ///<MDMA channel x Trigger and Bus selection          Register
        using Addr = Register::Address<0x520000e8,0xfffcffc0,0x00000000,std::uint32_t>;
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tsel{}; 
        ///Source BUS select This bit is protected              and can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbus{}; 
        ///Destination BUS slect This bit is              protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbus{}; 
    }
    namespace MdmaMdmaC2mar{    ///<MDMA channel x Mask address          register
        using Addr = Register::Address<0x520000f0,0x00000000,0x00000000,std::uint32_t>;
        ///Mask address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mar{}; 
    }
    namespace MdmaMdmaC2mdr{    ///<MDMA channel x Mask Data          register
        using Addr = Register::Address<0x520000f4,0x00000000,0x00000000,std::uint32_t>;
        ///Mask data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdr{}; 
    }
    namespace MdmaMdmaC3isr{    ///<MDMA channel x interrupt/status          register
        using Addr = Register::Address<0x52000100,0xfffeffe0,0x00000000,std::uint32_t>;
        ///Channel x transfer error interrupt flag              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif3{}; 
        ///Channel x Channel Transfer Complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register. CTC is set when the              last block was transferred and the channel has been              automatically disabled. CTC is also set when the              channel is suspended, as a result of writing EN bit              to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif3{}; 
        ///Channel x block repeat transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brtif3{}; 
        ///Channel x block transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btif3{}; 
        ///channel x buffer transfer              complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcif3{}; 
        ///channel x request active              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> crqa3{}; 
    }
    namespace MdmaMdmaC3ifcr{    ///<MDMA channel x interrupt flag clear          register
        using Addr = Register::Address<0x52000104,0xffffffe0,0x00000000,std::uint32_t>;
        ///Channel x clear transfer error interrupt              flag Writing a 1 into this bit clears TEIFx in the              MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif3{}; 
        ///Clear Channel transfer complete              interrupt flag for channel x Writing a 1 into this              bit clears CTCIFx in the MDMA_ISRy              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cctcif3{}; 
        ///Channel x clear block repeat transfer              complete interrupt flag Writing a 1 into this bit              clears BRTIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cbrtif3{}; 
        ///Channel x Clear block transfer complete              interrupt flag Writing a 1 into this bit clears BTIFx              in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cbtif3{}; 
        ///CLear buffer Transfer Complete Interrupt              Flag for channel x Writing a 1 into this bit clears              TCIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cltcif3{}; 
    }
    namespace MdmaMdmaC3esr{    ///<MDMA Channel x error status          register
        using Addr = Register::Address<0x52000108,0xfffff000,0x00000000,std::uint32_t>;
        ///Transfer Error Address These bits are              set and cleared by HW, in case of an MDMA data              transfer error. It is used in conjunction with TED.              This field indicates the 7 LSBits of the address              which generated a transfer/access error. It may be              used by SW to retrieve the failing address, by adding              this value (truncated to the buffer transfer length              size) to the current SAR/DAR value. Note: The SAR/DAR              current value doesnt reflect this last address due to              the FIFO management system. The SAR/DAR are only              updated at the end of a (buffer) transfer (of TLEN+1              bytes). Note: It is not set in case of a link data              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tea{}; 
        ///Transfer Error Direction These bit is              set and cleared by HW, in case of an MDMA data              transfer error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ted{}; 
        ///Transfer Error Link Data These bit is              set by HW, in case of a transfer error while reading              the block link data structure. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teld{}; 
        ///Transfer Error Mask Data These bit is              set by HW, in case of a transfer error while writing              the Mask Data. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> temd{}; 
        ///Address/Size Error These bit is set by              HW, when the programmed address is not aligned with              the data size. TED will indicate whether the problem              is on the source or destination. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ase{}; 
        ///Block Size Error These bit is set by HW,              when the block size is not an integer multiple of the              data size either for source or destination. TED will              indicate whether the problem is on the source or              destination. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bse{}; 
    }
    namespace MdmaMdmaC3cr{    ///<This register is used to control the          concerned channel.
        using Addr = Register::Address<0x5200010c,0xfffe8f00,0x00000000,std::uint32_t>;
        ///channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Channel Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///Block Repeat transfer interrupt enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brtie{}; 
        ///Block Transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btie{}; 
        ///buffer Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Priority level These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pl{}; 
        ///byte Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bex{}; 
        ///Half word Endianes              exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> hex{}; 
        ///Word Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wex{}; 
        ///SW ReQuest Writing a 1 into this bit              sets the CRQAx in MDMA_ISRy register, activating the              request on Channel x Note: Either the whole CxCR              register or the 8-bit/16-bit register @ Address              offset: 0x4E + 0x40 chn may be used for SWRQ              activation. In case of a SW request, acknowledge is              not generated (neither HW signal, nor CxMAR write              access).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrq{}; 
    }
    namespace MdmaMdmaC3tcr{    ///<This register is used to configure the          concerned channel.
        using Addr = Register::Address<0x52000110,0x00000000,0x00000000,std::uint32_t>;
        ///Source increment mode These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0 Note: When source is              AHB (SBUS=1), SINC = 00 is forbidden. In Linked List              Mode, at the end of a block (single or last block in              repeated block transfer mode), this register will be              loaded from memory (from address given by current              LAR[31:0] + 0x00).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sinc{}; 
        ///Destination increment mode These bits              are set and cleared by software. These bits are              protected and can be written only if EN is 0 Note:              When destination is AHB (DBUS=1), DINC = 00 is              forbidden.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dinc{}; 
        ///Source data size These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0 Note: If a value of 11 is              programmed for the TCM access/AHB port, a transfer              error will occur (TEIF bit set) If SINCOS &lt;              SSIZE and SINC &#8800; 00, the result will be              unpredictable. Note: SSIZE = 11 (double-word) is              forbidden when source is TCM/AHB bus              (SBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Destination data size These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0. Note: If a value of              11 is programmed for the TCM access/AHB port, a              transfer error will occur (TEIF bit set) If DINCOS              &lt; DSIZE and DINC &#8800; 00, the result              will be unpredictable. Note: DSIZE = 11 (double-word)              is forbidden when destination is TCM/AHB bus              (DBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///source increment offset              size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sincos{}; 
        ///Destination increment              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> dincos{}; 
        ///source burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sburst{}; 
        ///Destination burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dburst{}; 
        ///buffer transfer lengh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,18),Register::ReadWriteAccess,unsigned> tlen{}; 
        ///PacK Enable These bit is set and cleared              by software. If the Source Size is smaller than the              destination, it will be padded according to the PAM              value. If the Source data size is larger than the              destination one, it will be truncated. The alignment              will be done according to the PAM[0] value. This bit              is protected and can be written only if EN is              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pke{}; 
        ///Padding/Alignement Mode These bits are              set and cleared by software. Case 1: Source data size              smaller than destination data size - 3 options are              valid. Case 2: Source data size larger than              destination data size. The remainder part is              discarded. When PKE = 1 or DSIZE=SSIZE, these bits              are ignored. These bits are protected and can be              written only if EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pam{}; 
        ///Trigger Mode These bits are set and              cleared by software. Note: If TRGM is 11 for the              current block, all the values loaded at the end of              the current block through the linked list mechanism              must keep the same value (TRGM=11) and the same SWRM              value, otherwise the result is undefined. These bits              are protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> trgm{}; 
        ///SW Request Mode This bit is set and              cleared by software. If a HW or SW request is              currently active, the bit change will be delayed              until the current transfer is completed. If the CxMAR              contains a valid address, the CxMDR value will also              be written @ CxMAR address. This bit is protected and              can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swrm{}; 
        ///Bufferable Write Mode This bit is set              and cleared by software. This bit is protected and              can be written only if EN is 0. Note: All MDMA              destination accesses are non-cacheable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bwm{}; 
    }
    namespace MdmaMdmaC3bndtr{    ///<MDMA Channel x block number of data          register
        using Addr = Register::Address<0x52000114,0x00020000,0x00000000,std::uint32_t>;
        ///block number of data to              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> bndt{}; 
        ///Block Repeat Source address Update Mode              These bits are protected and can be written only if              EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> brsum{}; 
        ///Block Repeat Destination address Update              Mode These bits are protected and can be written only              if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> brdum{}; 
        ///Block Repeat Count This field contains              the number of repetitions of the current block (0 to              4095). When the channel is enabled, this register is              read-only, indicating the remaining number of blocks,              excluding the current one. This register decrements              after each complete block transfer. Once the last              block transfer has completed, this register can              either stay at zero or be reloaded automatically from              memory (in Linked List mode - i.e. Link Address              valid). These bits are protected and can be written              only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> brc{}; 
    }
    namespace MdmaMdmaC3sar{    ///<MDMA channel x source address          register
        using Addr = Register::Address<0x52000118,0x00000000,0x00000000,std::uint32_t>;
        ///source adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace MdmaMdmaC3dar{    ///<MDMA channel x destination address          register
        using Addr = Register::Address<0x5200011c,0x00000000,0x00000000,std::uint32_t>;
        ///Destination adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace MdmaMdmaC3brur{    ///<MDMA channel x Block Repeat address Update          register
        using Addr = Register::Address<0x52000120,0x00000000,0x00000000,std::uint32_t>;
        ///source adresse update              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> suv{}; 
        ///destination address update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> duv{}; 
    }
    namespace MdmaMdmaC3lar{    ///<MDMA channel x Link Address          register
        using Addr = Register::Address<0x52000124,0x00000000,0x00000000,std::uint32_t>;
        ///Link address register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lar{}; 
    }
    namespace MdmaMdmaC3tbr{    ///<MDMA channel x Trigger and Bus selection          Register
        using Addr = Register::Address<0x52000128,0xfffcffc0,0x00000000,std::uint32_t>;
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tsel{}; 
        ///Source BUS select This bit is protected              and can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbus{}; 
        ///Destination BUS slect This bit is              protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbus{}; 
    }
    namespace MdmaMdmaC3mar{    ///<MDMA channel x Mask address          register
        using Addr = Register::Address<0x52000130,0x00000000,0x00000000,std::uint32_t>;
        ///Mask address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mar{}; 
    }
    namespace MdmaMdmaC3mdr{    ///<MDMA channel x Mask Data          register
        using Addr = Register::Address<0x52000134,0x00000000,0x00000000,std::uint32_t>;
        ///Mask data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdr{}; 
    }
    namespace MdmaMdmaC4isr{    ///<MDMA channel x interrupt/status          register
        using Addr = Register::Address<0x52000140,0xfffeffe0,0x00000000,std::uint32_t>;
        ///Channel x transfer error interrupt flag              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif4{}; 
        ///Channel x Channel Transfer Complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register. CTC is set when the              last block was transferred and the channel has been              automatically disabled. CTC is also set when the              channel is suspended, as a result of writing EN bit              to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif4{}; 
        ///Channel x block repeat transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brtif4{}; 
        ///Channel x block transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btif4{}; 
        ///channel x buffer transfer              complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcif4{}; 
        ///channel x request active              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> crqa4{}; 
    }
    namespace MdmaMdmaC4ifcr{    ///<MDMA channel x interrupt flag clear          register
        using Addr = Register::Address<0x52000144,0xffffffe0,0x00000000,std::uint32_t>;
        ///Channel x clear transfer error interrupt              flag Writing a 1 into this bit clears TEIFx in the              MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif4{}; 
        ///Clear Channel transfer complete              interrupt flag for channel x Writing a 1 into this              bit clears CTCIFx in the MDMA_ISRy              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cctcif4{}; 
        ///Channel x clear block repeat transfer              complete interrupt flag Writing a 1 into this bit              clears BRTIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cbrtif4{}; 
        ///Channel x Clear block transfer complete              interrupt flag Writing a 1 into this bit clears BTIFx              in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cbtif4{}; 
        ///CLear buffer Transfer Complete Interrupt              Flag for channel x Writing a 1 into this bit clears              TCIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cltcif4{}; 
    }
    namespace MdmaMdmaC4esr{    ///<MDMA Channel x error status          register
        using Addr = Register::Address<0x52000148,0xfffff000,0x00000000,std::uint32_t>;
        ///Transfer Error Address These bits are              set and cleared by HW, in case of an MDMA data              transfer error. It is used in conjunction with TED.              This field indicates the 7 LSBits of the address              which generated a transfer/access error. It may be              used by SW to retrieve the failing address, by adding              this value (truncated to the buffer transfer length              size) to the current SAR/DAR value. Note: The SAR/DAR              current value doesnt reflect this last address due to              the FIFO management system. The SAR/DAR are only              updated at the end of a (buffer) transfer (of TLEN+1              bytes). Note: It is not set in case of a link data              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tea{}; 
        ///Transfer Error Direction These bit is              set and cleared by HW, in case of an MDMA data              transfer error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ted{}; 
        ///Transfer Error Link Data These bit is              set by HW, in case of a transfer error while reading              the block link data structure. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teld{}; 
        ///Transfer Error Mask Data These bit is              set by HW, in case of a transfer error while writing              the Mask Data. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> temd{}; 
        ///Address/Size Error These bit is set by              HW, when the programmed address is not aligned with              the data size. TED will indicate whether the problem              is on the source or destination. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ase{}; 
        ///Block Size Error These bit is set by HW,              when the block size is not an integer multiple of the              data size either for source or destination. TED will              indicate whether the problem is on the source or              destination. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bse{}; 
    }
    namespace MdmaMdmaC4cr{    ///<This register is used to control the          concerned channel.
        using Addr = Register::Address<0x5200014c,0xfffe8f00,0x00000000,std::uint32_t>;
        ///channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Channel Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///Block Repeat transfer interrupt enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brtie{}; 
        ///Block Transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btie{}; 
        ///buffer Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Priority level These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pl{}; 
        ///byte Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bex{}; 
        ///Half word Endianes              exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> hex{}; 
        ///Word Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wex{}; 
        ///SW ReQuest Writing a 1 into this bit              sets the CRQAx in MDMA_ISRy register, activating the              request on Channel x Note: Either the whole CxCR              register or the 8-bit/16-bit register @ Address              offset: 0x4E + 0x40 chn may be used for SWRQ              activation. In case of a SW request, acknowledge is              not generated (neither HW signal, nor CxMAR write              access).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrq{}; 
    }
    namespace MdmaMdmaC4tcr{    ///<This register is used to configure the          concerned channel.
        using Addr = Register::Address<0x52000150,0x00000000,0x00000000,std::uint32_t>;
        ///Source increment mode These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0 Note: When source is              AHB (SBUS=1), SINC = 00 is forbidden. In Linked List              Mode, at the end of a block (single or last block in              repeated block transfer mode), this register will be              loaded from memory (from address given by current              LAR[31:0] + 0x00).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sinc{}; 
        ///Destination increment mode These bits              are set and cleared by software. These bits are              protected and can be written only if EN is 0 Note:              When destination is AHB (DBUS=1), DINC = 00 is              forbidden.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dinc{}; 
        ///Source data size These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0 Note: If a value of 11 is              programmed for the TCM access/AHB port, a transfer              error will occur (TEIF bit set) If SINCOS &lt;              SSIZE and SINC &#8800; 00, the result will be              unpredictable. Note: SSIZE = 11 (double-word) is              forbidden when source is TCM/AHB bus              (SBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Destination data size These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0. Note: If a value of              11 is programmed for the TCM access/AHB port, a              transfer error will occur (TEIF bit set) If DINCOS              &lt; DSIZE and DINC &#8800; 00, the result              will be unpredictable. Note: DSIZE = 11 (double-word)              is forbidden when destination is TCM/AHB bus              (DBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///source increment offset              size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sincos{}; 
        ///Destination increment              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> dincos{}; 
        ///source burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sburst{}; 
        ///Destination burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dburst{}; 
        ///buffer transfer lengh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,18),Register::ReadWriteAccess,unsigned> tlen{}; 
        ///PacK Enable These bit is set and cleared              by software. If the Source Size is smaller than the              destination, it will be padded according to the PAM              value. If the Source data size is larger than the              destination one, it will be truncated. The alignment              will be done according to the PAM[0] value. This bit              is protected and can be written only if EN is              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pke{}; 
        ///Padding/Alignement Mode These bits are              set and cleared by software. Case 1: Source data size              smaller than destination data size - 3 options are              valid. Case 2: Source data size larger than              destination data size. The remainder part is              discarded. When PKE = 1 or DSIZE=SSIZE, these bits              are ignored. These bits are protected and can be              written only if EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pam{}; 
        ///Trigger Mode These bits are set and              cleared by software. Note: If TRGM is 11 for the              current block, all the values loaded at the end of              the current block through the linked list mechanism              must keep the same value (TRGM=11) and the same SWRM              value, otherwise the result is undefined. These bits              are protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> trgm{}; 
        ///SW Request Mode This bit is set and              cleared by software. If a HW or SW request is              currently active, the bit change will be delayed              until the current transfer is completed. If the CxMAR              contains a valid address, the CxMDR value will also              be written @ CxMAR address. This bit is protected and              can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swrm{}; 
        ///Bufferable Write Mode This bit is set              and cleared by software. This bit is protected and              can be written only if EN is 0. Note: All MDMA              destination accesses are non-cacheable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bwm{}; 
    }
    namespace MdmaMdmaC4bndtr{    ///<MDMA Channel x block number of data          register
        using Addr = Register::Address<0x52000154,0x00020000,0x00000000,std::uint32_t>;
        ///block number of data to              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> bndt{}; 
        ///Block Repeat Source address Update Mode              These bits are protected and can be written only if              EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> brsum{}; 
        ///Block Repeat Destination address Update              Mode These bits are protected and can be written only              if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> brdum{}; 
        ///Block Repeat Count This field contains              the number of repetitions of the current block (0 to              4095). When the channel is enabled, this register is              read-only, indicating the remaining number of blocks,              excluding the current one. This register decrements              after each complete block transfer. Once the last              block transfer has completed, this register can              either stay at zero or be reloaded automatically from              memory (in Linked List mode - i.e. Link Address              valid). These bits are protected and can be written              only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> brc{}; 
    }
    namespace MdmaMdmaC4sar{    ///<MDMA channel x source address          register
        using Addr = Register::Address<0x52000158,0x00000000,0x00000000,std::uint32_t>;
        ///source adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace MdmaMdmaC4dar{    ///<MDMA channel x destination address          register
        using Addr = Register::Address<0x5200015c,0x00000000,0x00000000,std::uint32_t>;
        ///Destination adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace MdmaMdmaC4brur{    ///<MDMA channel x Block Repeat address Update          register
        using Addr = Register::Address<0x52000160,0x00000000,0x00000000,std::uint32_t>;
        ///source adresse update              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> suv{}; 
        ///destination address update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> duv{}; 
    }
    namespace MdmaMdmaC4lar{    ///<MDMA channel x Link Address          register
        using Addr = Register::Address<0x52000164,0x00000000,0x00000000,std::uint32_t>;
        ///Link address register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lar{}; 
    }
    namespace MdmaMdmaC4tbr{    ///<MDMA channel x Trigger and Bus selection          Register
        using Addr = Register::Address<0x52000168,0xfffcffc0,0x00000000,std::uint32_t>;
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tsel{}; 
        ///Source BUS select This bit is protected              and can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbus{}; 
        ///Destination BUS slect This bit is              protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbus{}; 
    }
    namespace MdmaMdmaC4mar{    ///<MDMA channel x Mask address          register
        using Addr = Register::Address<0x52000170,0x00000000,0x00000000,std::uint32_t>;
        ///Mask address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mar{}; 
    }
    namespace MdmaMdmaC4mdr{    ///<MDMA channel x Mask Data          register
        using Addr = Register::Address<0x52000174,0x00000000,0x00000000,std::uint32_t>;
        ///Mask data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdr{}; 
    }
    namespace MdmaMdmaC5isr{    ///<MDMA channel x interrupt/status          register
        using Addr = Register::Address<0x52000180,0xfffeffe0,0x00000000,std::uint32_t>;
        ///Channel x transfer error interrupt flag              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif5{}; 
        ///Channel x Channel Transfer Complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register. CTC is set when the              last block was transferred and the channel has been              automatically disabled. CTC is also set when the              channel is suspended, as a result of writing EN bit              to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif5{}; 
        ///Channel x block repeat transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brtif5{}; 
        ///Channel x block transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btif5{}; 
        ///channel x buffer transfer              complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcif5{}; 
        ///channel x request active              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> crqa5{}; 
    }
    namespace MdmaMdmaC5ifcr{    ///<MDMA channel x interrupt flag clear          register
        using Addr = Register::Address<0x52000184,0xffffffe0,0x00000000,std::uint32_t>;
        ///Channel x clear transfer error interrupt              flag Writing a 1 into this bit clears TEIFx in the              MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif5{}; 
        ///Clear Channel transfer complete              interrupt flag for channel x Writing a 1 into this              bit clears CTCIFx in the MDMA_ISRy              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cctcif5{}; 
        ///Channel x clear block repeat transfer              complete interrupt flag Writing a 1 into this bit              clears BRTIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cbrtif5{}; 
        ///Channel x Clear block transfer complete              interrupt flag Writing a 1 into this bit clears BTIFx              in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cbtif5{}; 
        ///CLear buffer Transfer Complete Interrupt              Flag for channel x Writing a 1 into this bit clears              TCIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cltcif5{}; 
    }
    namespace MdmaMdmaC5esr{    ///<MDMA Channel x error status          register
        using Addr = Register::Address<0x52000188,0xfffff000,0x00000000,std::uint32_t>;
        ///Transfer Error Address These bits are              set and cleared by HW, in case of an MDMA data              transfer error. It is used in conjunction with TED.              This field indicates the 7 LSBits of the address              which generated a transfer/access error. It may be              used by SW to retrieve the failing address, by adding              this value (truncated to the buffer transfer length              size) to the current SAR/DAR value. Note: The SAR/DAR              current value doesnt reflect this last address due to              the FIFO management system. The SAR/DAR are only              updated at the end of a (buffer) transfer (of TLEN+1              bytes). Note: It is not set in case of a link data              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tea{}; 
        ///Transfer Error Direction These bit is              set and cleared by HW, in case of an MDMA data              transfer error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ted{}; 
        ///Transfer Error Link Data These bit is              set by HW, in case of a transfer error while reading              the block link data structure. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teld{}; 
        ///Transfer Error Mask Data These bit is              set by HW, in case of a transfer error while writing              the Mask Data. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> temd{}; 
        ///Address/Size Error These bit is set by              HW, when the programmed address is not aligned with              the data size. TED will indicate whether the problem              is on the source or destination. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ase{}; 
        ///Block Size Error These bit is set by HW,              when the block size is not an integer multiple of the              data size either for source or destination. TED will              indicate whether the problem is on the source or              destination. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bse{}; 
    }
    namespace MdmaMdmaC5cr{    ///<This register is used to control the          concerned channel.
        using Addr = Register::Address<0x5200018c,0xfffe8f00,0x00000000,std::uint32_t>;
        ///channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Channel Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///Block Repeat transfer interrupt enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brtie{}; 
        ///Block Transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btie{}; 
        ///buffer Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Priority level These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pl{}; 
        ///byte Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bex{}; 
        ///Half word Endianes              exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> hex{}; 
        ///Word Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wex{}; 
        ///SW ReQuest Writing a 1 into this bit              sets the CRQAx in MDMA_ISRy register, activating the              request on Channel x Note: Either the whole CxCR              register or the 8-bit/16-bit register @ Address              offset: 0x4E + 0x40 chn may be used for SWRQ              activation. In case of a SW request, acknowledge is              not generated (neither HW signal, nor CxMAR write              access).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrq{}; 
    }
    namespace MdmaMdmaC5tcr{    ///<This register is used to configure the          concerned channel.
        using Addr = Register::Address<0x52000190,0x00000000,0x00000000,std::uint32_t>;
        ///Source increment mode These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0 Note: When source is              AHB (SBUS=1), SINC = 00 is forbidden. In Linked List              Mode, at the end of a block (single or last block in              repeated block transfer mode), this register will be              loaded from memory (from address given by current              LAR[31:0] + 0x00).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sinc{}; 
        ///Destination increment mode These bits              are set and cleared by software. These bits are              protected and can be written only if EN is 0 Note:              When destination is AHB (DBUS=1), DINC = 00 is              forbidden.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dinc{}; 
        ///Source data size These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0 Note: If a value of 11 is              programmed for the TCM access/AHB port, a transfer              error will occur (TEIF bit set) If SINCOS &lt;              SSIZE and SINC &#8800; 00, the result will be              unpredictable. Note: SSIZE = 11 (double-word) is              forbidden when source is TCM/AHB bus              (SBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Destination data size These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0. Note: If a value of              11 is programmed for the TCM access/AHB port, a              transfer error will occur (TEIF bit set) If DINCOS              &lt; DSIZE and DINC &#8800; 00, the result              will be unpredictable. Note: DSIZE = 11 (double-word)              is forbidden when destination is TCM/AHB bus              (DBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///source increment offset              size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sincos{}; 
        ///Destination increment              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> dincos{}; 
        ///source burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sburst{}; 
        ///Destination burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dburst{}; 
        ///buffer transfer lengh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,18),Register::ReadWriteAccess,unsigned> tlen{}; 
        ///PacK Enable These bit is set and cleared              by software. If the Source Size is smaller than the              destination, it will be padded according to the PAM              value. If the Source data size is larger than the              destination one, it will be truncated. The alignment              will be done according to the PAM[0] value. This bit              is protected and can be written only if EN is              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pke{}; 
        ///Padding/Alignement Mode These bits are              set and cleared by software. Case 1: Source data size              smaller than destination data size - 3 options are              valid. Case 2: Source data size larger than              destination data size. The remainder part is              discarded. When PKE = 1 or DSIZE=SSIZE, these bits              are ignored. These bits are protected and can be              written only if EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pam{}; 
        ///Trigger Mode These bits are set and              cleared by software. Note: If TRGM is 11 for the              current block, all the values loaded at the end of              the current block through the linked list mechanism              must keep the same value (TRGM=11) and the same SWRM              value, otherwise the result is undefined. These bits              are protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> trgm{}; 
        ///SW Request Mode This bit is set and              cleared by software. If a HW or SW request is              currently active, the bit change will be delayed              until the current transfer is completed. If the CxMAR              contains a valid address, the CxMDR value will also              be written @ CxMAR address. This bit is protected and              can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swrm{}; 
        ///Bufferable Write Mode This bit is set              and cleared by software. This bit is protected and              can be written only if EN is 0. Note: All MDMA              destination accesses are non-cacheable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bwm{}; 
    }
    namespace MdmaMdmaC5bndtr{    ///<MDMA Channel x block number of data          register
        using Addr = Register::Address<0x52000194,0x00020000,0x00000000,std::uint32_t>;
        ///block number of data to              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> bndt{}; 
        ///Block Repeat Source address Update Mode              These bits are protected and can be written only if              EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> brsum{}; 
        ///Block Repeat Destination address Update              Mode These bits are protected and can be written only              if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> brdum{}; 
        ///Block Repeat Count This field contains              the number of repetitions of the current block (0 to              4095). When the channel is enabled, this register is              read-only, indicating the remaining number of blocks,              excluding the current one. This register decrements              after each complete block transfer. Once the last              block transfer has completed, this register can              either stay at zero or be reloaded automatically from              memory (in Linked List mode - i.e. Link Address              valid). These bits are protected and can be written              only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> brc{}; 
    }
    namespace MdmaMdmaC5sar{    ///<MDMA channel x source address          register
        using Addr = Register::Address<0x52000198,0x00000000,0x00000000,std::uint32_t>;
        ///source adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace MdmaMdmaC5dar{    ///<MDMA channel x destination address          register
        using Addr = Register::Address<0x5200019c,0x00000000,0x00000000,std::uint32_t>;
        ///Destination adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace MdmaMdmaC5brur{    ///<MDMA channel x Block Repeat address Update          register
        using Addr = Register::Address<0x520001a0,0x00000000,0x00000000,std::uint32_t>;
        ///source adresse update              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> suv{}; 
        ///destination address update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> duv{}; 
    }
    namespace MdmaMdmaC5lar{    ///<MDMA channel x Link Address          register
        using Addr = Register::Address<0x520001a4,0x00000000,0x00000000,std::uint32_t>;
        ///Link address register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lar{}; 
    }
    namespace MdmaMdmaC5tbr{    ///<MDMA channel x Trigger and Bus selection          Register
        using Addr = Register::Address<0x520001a8,0xfffcffc0,0x00000000,std::uint32_t>;
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tsel{}; 
        ///Source BUS select This bit is protected              and can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbus{}; 
        ///Destination BUS slect This bit is              protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbus{}; 
    }
    namespace MdmaMdmaC5mar{    ///<MDMA channel x Mask address          register
        using Addr = Register::Address<0x520001b0,0x00000000,0x00000000,std::uint32_t>;
        ///Mask address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mar{}; 
    }
    namespace MdmaMdmaC5mdr{    ///<MDMA channel x Mask Data          register
        using Addr = Register::Address<0x520001b4,0x00000000,0x00000000,std::uint32_t>;
        ///Mask data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdr{}; 
    }
    namespace MdmaMdmaC6isr{    ///<MDMA channel x interrupt/status          register
        using Addr = Register::Address<0x520001c0,0xfffeffe0,0x00000000,std::uint32_t>;
        ///Channel x transfer error interrupt flag              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif6{}; 
        ///Channel x Channel Transfer Complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register. CTC is set when the              last block was transferred and the channel has been              automatically disabled. CTC is also set when the              channel is suspended, as a result of writing EN bit              to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif6{}; 
        ///Channel x block repeat transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brtif6{}; 
        ///Channel x block transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btif6{}; 
        ///channel x buffer transfer              complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcif6{}; 
        ///channel x request active              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> crqa6{}; 
    }
    namespace MdmaMdmaC6ifcr{    ///<MDMA channel x interrupt flag clear          register
        using Addr = Register::Address<0x520001c4,0xffffffe0,0x00000000,std::uint32_t>;
        ///Channel x clear transfer error interrupt              flag Writing a 1 into this bit clears TEIFx in the              MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif6{}; 
        ///Clear Channel transfer complete              interrupt flag for channel x Writing a 1 into this              bit clears CTCIFx in the MDMA_ISRy              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cctcif6{}; 
        ///Channel x clear block repeat transfer              complete interrupt flag Writing a 1 into this bit              clears BRTIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cbrtif6{}; 
        ///Channel x Clear block transfer complete              interrupt flag Writing a 1 into this bit clears BTIFx              in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cbtif6{}; 
        ///CLear buffer Transfer Complete Interrupt              Flag for channel x Writing a 1 into this bit clears              TCIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cltcif6{}; 
    }
    namespace MdmaMdmaC6esr{    ///<MDMA Channel x error status          register
        using Addr = Register::Address<0x520001c8,0xfffff000,0x00000000,std::uint32_t>;
        ///Transfer Error Address These bits are              set and cleared by HW, in case of an MDMA data              transfer error. It is used in conjunction with TED.              This field indicates the 7 LSBits of the address              which generated a transfer/access error. It may be              used by SW to retrieve the failing address, by adding              this value (truncated to the buffer transfer length              size) to the current SAR/DAR value. Note: The SAR/DAR              current value doesnt reflect this last address due to              the FIFO management system. The SAR/DAR are only              updated at the end of a (buffer) transfer (of TLEN+1              bytes). Note: It is not set in case of a link data              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tea{}; 
        ///Transfer Error Direction These bit is              set and cleared by HW, in case of an MDMA data              transfer error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ted{}; 
        ///Transfer Error Link Data These bit is              set by HW, in case of a transfer error while reading              the block link data structure. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teld{}; 
        ///Transfer Error Mask Data These bit is              set by HW, in case of a transfer error while writing              the Mask Data. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> temd{}; 
        ///Address/Size Error These bit is set by              HW, when the programmed address is not aligned with              the data size. TED will indicate whether the problem              is on the source or destination. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ase{}; 
        ///Block Size Error These bit is set by HW,              when the block size is not an integer multiple of the              data size either for source or destination. TED will              indicate whether the problem is on the source or              destination. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bse{}; 
    }
    namespace MdmaMdmaC6cr{    ///<This register is used to control the          concerned channel.
        using Addr = Register::Address<0x520001cc,0xfffe8f00,0x00000000,std::uint32_t>;
        ///channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Channel Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///Block Repeat transfer interrupt enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brtie{}; 
        ///Block Transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btie{}; 
        ///buffer Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Priority level These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pl{}; 
        ///byte Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bex{}; 
        ///Half word Endianes              exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> hex{}; 
        ///Word Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wex{}; 
        ///SW ReQuest Writing a 1 into this bit              sets the CRQAx in MDMA_ISRy register, activating the              request on Channel x Note: Either the whole CxCR              register or the 8-bit/16-bit register @ Address              offset: 0x4E + 0x40 chn may be used for SWRQ              activation. In case of a SW request, acknowledge is              not generated (neither HW signal, nor CxMAR write              access).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrq{}; 
    }
    namespace MdmaMdmaC6tcr{    ///<This register is used to configure the          concerned channel.
        using Addr = Register::Address<0x520001d0,0x00000000,0x00000000,std::uint32_t>;
        ///Source increment mode These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0 Note: When source is              AHB (SBUS=1), SINC = 00 is forbidden. In Linked List              Mode, at the end of a block (single or last block in              repeated block transfer mode), this register will be              loaded from memory (from address given by current              LAR[31:0] + 0x00).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sinc{}; 
        ///Destination increment mode These bits              are set and cleared by software. These bits are              protected and can be written only if EN is 0 Note:              When destination is AHB (DBUS=1), DINC = 00 is              forbidden.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dinc{}; 
        ///Source data size These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0 Note: If a value of 11 is              programmed for the TCM access/AHB port, a transfer              error will occur (TEIF bit set) If SINCOS &lt;              SSIZE and SINC &#8800; 00, the result will be              unpredictable. Note: SSIZE = 11 (double-word) is              forbidden when source is TCM/AHB bus              (SBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Destination data size These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0. Note: If a value of              11 is programmed for the TCM access/AHB port, a              transfer error will occur (TEIF bit set) If DINCOS              &lt; DSIZE and DINC &#8800; 00, the result              will be unpredictable. Note: DSIZE = 11 (double-word)              is forbidden when destination is TCM/AHB bus              (DBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///source increment offset              size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sincos{}; 
        ///Destination increment              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> dincos{}; 
        ///source burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sburst{}; 
        ///Destination burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dburst{}; 
        ///buffer transfer lengh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,18),Register::ReadWriteAccess,unsigned> tlen{}; 
        ///PacK Enable These bit is set and cleared              by software. If the Source Size is smaller than the              destination, it will be padded according to the PAM              value. If the Source data size is larger than the              destination one, it will be truncated. The alignment              will be done according to the PAM[0] value. This bit              is protected and can be written only if EN is              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pke{}; 
        ///Padding/Alignement Mode These bits are              set and cleared by software. Case 1: Source data size              smaller than destination data size - 3 options are              valid. Case 2: Source data size larger than              destination data size. The remainder part is              discarded. When PKE = 1 or DSIZE=SSIZE, these bits              are ignored. These bits are protected and can be              written only if EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pam{}; 
        ///Trigger Mode These bits are set and              cleared by software. Note: If TRGM is 11 for the              current block, all the values loaded at the end of              the current block through the linked list mechanism              must keep the same value (TRGM=11) and the same SWRM              value, otherwise the result is undefined. These bits              are protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> trgm{}; 
        ///SW Request Mode This bit is set and              cleared by software. If a HW or SW request is              currently active, the bit change will be delayed              until the current transfer is completed. If the CxMAR              contains a valid address, the CxMDR value will also              be written @ CxMAR address. This bit is protected and              can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swrm{}; 
        ///Bufferable Write Mode This bit is set              and cleared by software. This bit is protected and              can be written only if EN is 0. Note: All MDMA              destination accesses are non-cacheable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bwm{}; 
    }
    namespace MdmaMdmaC6bndtr{    ///<MDMA Channel x block number of data          register
        using Addr = Register::Address<0x520001d4,0x00020000,0x00000000,std::uint32_t>;
        ///block number of data to              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> bndt{}; 
        ///Block Repeat Source address Update Mode              These bits are protected and can be written only if              EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> brsum{}; 
        ///Block Repeat Destination address Update              Mode These bits are protected and can be written only              if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> brdum{}; 
        ///Block Repeat Count This field contains              the number of repetitions of the current block (0 to              4095). When the channel is enabled, this register is              read-only, indicating the remaining number of blocks,              excluding the current one. This register decrements              after each complete block transfer. Once the last              block transfer has completed, this register can              either stay at zero or be reloaded automatically from              memory (in Linked List mode - i.e. Link Address              valid). These bits are protected and can be written              only if EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> brc{}; 
    }
    namespace MdmaMdmaC6sar{    ///<MDMA channel x source address          register
        using Addr = Register::Address<0x520001d8,0x00000000,0x00000000,std::uint32_t>;
        ///source adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace MdmaMdmaC6dar{    ///<MDMA channel x destination address          register
        using Addr = Register::Address<0x520001dc,0x00000000,0x00000000,std::uint32_t>;
        ///Destination adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace MdmaMdmaC6brur{    ///<MDMA channel x Block Repeat address Update          register
        using Addr = Register::Address<0x520001e0,0x00000000,0x00000000,std::uint32_t>;
        ///source adresse update              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> suv{}; 
        ///destination address update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> duv{}; 
    }
    namespace MdmaMdmaC6lar{    ///<MDMA channel x Link Address          register
        using Addr = Register::Address<0x520001e4,0x00000000,0x00000000,std::uint32_t>;
        ///Link address register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lar{}; 
    }
    namespace MdmaMdmaC6tbr{    ///<MDMA channel x Trigger and Bus selection          Register
        using Addr = Register::Address<0x520001e8,0xfffcffc0,0x00000000,std::uint32_t>;
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tsel{}; 
        ///Source BUS select This bit is protected              and can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbus{}; 
        ///Destination BUS slect This bit is              protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbus{}; 
    }
    namespace MdmaMdmaC6mar{    ///<MDMA channel x Mask address          register
        using Addr = Register::Address<0x520001f0,0x00000000,0x00000000,std::uint32_t>;
        ///Mask address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mar{}; 
    }
    namespace MdmaMdmaC6mdr{    ///<MDMA channel x Mask Data          register
        using Addr = Register::Address<0x520001f4,0x00000000,0x00000000,std::uint32_t>;
        ///Mask data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdr{}; 
    }
    namespace MdmaMdmaC7isr{    ///<MDMA channel x interrupt/status          register
        using Addr = Register::Address<0x52000200,0xfffeffe0,0x00000000,std::uint32_t>;
        ///Channel x transfer error interrupt flag              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif7{}; 
        ///Channel x Channel Transfer Complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register. CTC is set when the              last block was transferred and the channel has been              automatically disabled. CTC is also set when the              channel is suspended, as a result of writing EN bit              to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif7{}; 
        ///Channel x block repeat transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brtif7{}; 
        ///Channel x block transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btif7{}; 
        ///channel x buffer transfer              complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcif7{}; 
        ///channel x request active              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> crqa7{}; 
    }
    namespace MdmaMdmaC7ifcr{    ///<MDMA channel x interrupt flag clear          register
        using Addr = Register::Address<0x52000204,0xffffffe0,0x00000000,std::uint32_t>;
        ///Channel x clear transfer error interrupt              flag Writing a 1 into this bit clears TEIFx in the              MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif7{}; 
        ///Clear Channel transfer complete              interrupt flag for channel x Writing a 1 into this              bit clears CTCIFx in the MDMA_ISRy              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cctcif7{}; 
        ///Channel x clear block repeat transfer              complete interrupt flag Writing a 1 into this bit              clears BRTIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cbrtif7{}; 
        ///Channel x Clear block transfer complete              interrupt flag Writing a 1 into this bit clears BTIFx              in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cbtif7{}; 
        ///CLear buffer Transfer Complete Interrupt              Flag for channel x Writing a 1 into this bit clears              TCIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cltcif7{}; 
    }
    namespace MdmaMdmaC7esr{    ///<MDMA Channel x error status          register
        using Addr = Register::Address<0x52000208,0xfffff000,0x00000000,std::uint32_t>;
        ///Transfer Error Address These bits are              set and cleared by HW, in case of an MDMA data              transfer error. It is used in conjunction with TED.              This field indicates the 7 LSBits of the address              which generated a transfer/access error. It may be              used by SW to retrieve the failing address, by adding              this value (truncated to the buffer transfer length              size) to the current SAR/DAR value. Note: The SAR/DAR              current value doesnt reflect this last address due to              the FIFO management system. The SAR/DAR are only              updated at the end of a (buffer) transfer (of TLEN+1              bytes). Note: It is not set in case of a link data              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tea{}; 
        ///Transfer Error Direction These bit is              set and cleared by HW, in case of an MDMA data              transfer error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ted{}; 
        ///Transfer Error Link Data These bit is              set by HW, in case of a transfer error while reading              the block link data structure. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teld{}; 
        ///Transfer Error Mask Data These bit is              set by HW, in case of a transfer error while writing              the Mask Data. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> temd{}; 
        ///Address/Size Error These bit is set by              HW, when the programmed address is not aligned with              the data size. TED will indicate whether the problem              is on the source or destination. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ase{}; 
        ///Block Size Error These bit is set by HW,              when the block size is not an integer multiple of the              data size either for source or destination. TED will              indicate whether the problem is on the source or              destination. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bse{}; 
    }
    namespace MdmaMdmaC7cr{    ///<This register is used to control the          concerned channel.
        using Addr = Register::Address<0x5200020c,0xfffe8f00,0x00000000,std::uint32_t>;
        ///channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Channel Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///Block Repeat transfer interrupt enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brtie{}; 
        ///Block Transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btie{}; 
        ///buffer Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Priority level These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pl{}; 
        ///byte Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bex{}; 
        ///Half word Endianes              exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> hex{}; 
        ///Word Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wex{}; 
        ///SW ReQuest Writing a 1 into this bit              sets the CRQAx in MDMA_ISRy register, activating the              request on Channel x Note: Either the whole CxCR              register or the 8-bit/16-bit register @ Address              offset: 0x4E + 0x40 chn may be used for SWRQ              activation. In case of a SW request, acknowledge is              not generated (neither HW signal, nor CxMAR write              access).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrq{}; 
    }
    namespace MdmaMdmaC7tcr{    ///<This register is used to configure the          concerned channel.
        using Addr = Register::Address<0x52000210,0x00000000,0x00000000,std::uint32_t>;
        ///Source increment mode These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0 Note: When source is              AHB (SBUS=1), SINC = 00 is forbidden. In Linked List              Mode, at the end of a block (single or last block in              repeated block transfer mode), this register will be              loaded from memory (from address given by current              LAR[31:0] + 0x00).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sinc{}; 
        ///Destination increment mode These bits              are set and cleared by software. These bits are              protected and can be written only if EN is 0 Note:              When destination is AHB (DBUS=1), DINC = 00 is              forbidden.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dinc{}; 
        ///Source data size These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0 Note: If a value of 11 is              programmed for the TCM access/AHB port, a transfer              error will occur (TEIF bit set) If SINCOS &lt;              SSIZE and SINC &#8800; 00, the result will be              unpredictable. Note: SSIZE = 11 (double-word) is              forbidden when source is TCM/AHB bus              (SBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Destination data size These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0. Note: If a value of              11 is programmed for the TCM access/AHB port, a              transfer error will occur (TEIF bit set) If DINCOS              &lt; DSIZE and DINC &#8800; 00, the result              will be unpredictable. Note: DSIZE = 11 (double-word)              is forbidden when destination is TCM/AHB bus              (DBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///source increment offset              size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sincos{}; 
        ///Destination increment              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> dincos{}; 
        ///source burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sburst{}; 
        ///Destination burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dburst{}; 
        ///buffer transfer lengh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,18),Register::ReadWriteAccess,unsigned> tlen{}; 
        ///PacK Enable These bit is set and cleared              by software. If the Source Size is smaller than the              destination, it will be padded according to the PAM              value. If the Source data size is larger than the              destination one, it will be truncated. The alignment              will be done according to the PAM[0] value. This bit              is protected and can be written only if EN is              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pke{}; 
        ///Padding/Alignement Mode These bits are              set and cleared by software. Case 1: Source data size              smaller than destination data size - 3 options are              valid. Case 2: Source data size larger than              destination data size. The remainder part is              discarded. When PKE = 1 or DSIZE=SSIZE, these bits              are ignored. These bits are protected and can be              written only if EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pam{}; 
        ///Trigger Mode These bits are set and              cleared by software. Note: If TRGM is 11 for the              current block, all the values loaded at the end of              the current block through the linked list mechanism              must keep the same value (TRGM=11) and the same SWRM              value, otherwise the result is undefined. These bits              are protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> trgm{}; 
        ///SW Request Mode This bit is set and              cleared by software. If a HW or SW request is              currently active, the bit change will be delayed              until the current transfer is completed. If the CxMAR              contains a valid address, the CxMDR value will also              be written @ CxMAR address. This bit is protected and              can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swrm{}; 
        ///Bufferable Write Mode This bit is set              and cleared by software. This bit is protected and              can be written only if EN is 0. Note: All MDMA              destination accesses are non-cacheable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bwm{}; 
    }
    namespace MdmaMdmaC7bndtr{    ///<MDMA Channel x block number of data          register
        using Addr = Register::Address<0x52000214,0x00020000,0x00000000,std::uint32_t>;
        ///block number of data to              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> bndt{}; 
        ///Block Repeat Source address Update Mode              These bits are protected and can be written only if              EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> brsum{}; 
        ///Block Repeat Destination address Update              Mode These bits are protected and can be written only              if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> brdum{}; 
        ///Block Repeat Count This field contains              the number of repetitions of the current block (0 to              4095). When the channel is enabled, this register is              read-only, indicating the remaining number of blocks,              excluding the current one. This register decrements              after each complete block transfer. Once the last              block transfer has completed, this register can              either stay at zero or be reloaded automatically from              memory (in Linked List mode - i.e. Link Address              valid). These bits are protected and can be written              only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> brc{}; 
    }
    namespace MdmaMdmaC7sar{    ///<MDMA channel x source address          register
        using Addr = Register::Address<0x52000218,0x00000000,0x00000000,std::uint32_t>;
        ///source adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace MdmaMdmaC7dar{    ///<MDMA channel x destination address          register
        using Addr = Register::Address<0x5200021c,0x00000000,0x00000000,std::uint32_t>;
        ///Destination adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace MdmaMdmaC7brur{    ///<MDMA channel x Block Repeat address Update          register
        using Addr = Register::Address<0x52000220,0x00000000,0x00000000,std::uint32_t>;
        ///source adresse update              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> suv{}; 
        ///destination address update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> duv{}; 
    }
    namespace MdmaMdmaC7lar{    ///<MDMA channel x Link Address          register
        using Addr = Register::Address<0x52000224,0x00000000,0x00000000,std::uint32_t>;
        ///Link address register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lar{}; 
    }
    namespace MdmaMdmaC7tbr{    ///<MDMA channel x Trigger and Bus selection          Register
        using Addr = Register::Address<0x52000228,0xfffcffc0,0x00000000,std::uint32_t>;
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tsel{}; 
        ///Source BUS select This bit is protected              and can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbus{}; 
        ///Destination BUS slect This bit is              protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbus{}; 
    }
    namespace MdmaMdmaC7mar{    ///<MDMA channel x Mask address          register
        using Addr = Register::Address<0x52000230,0x00000000,0x00000000,std::uint32_t>;
        ///Mask address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mar{}; 
    }
    namespace MdmaMdmaC7mdr{    ///<MDMA channel x Mask Data          register
        using Addr = Register::Address<0x52000234,0x00000000,0x00000000,std::uint32_t>;
        ///Mask data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdr{}; 
    }
    namespace MdmaMdmaC8isr{    ///<MDMA channel x interrupt/status          register
        using Addr = Register::Address<0x52000240,0xfffeffe0,0x00000000,std::uint32_t>;
        ///Channel x transfer error interrupt flag              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif8{}; 
        ///Channel x Channel Transfer Complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register. CTC is set when the              last block was transferred and the channel has been              automatically disabled. CTC is also set when the              channel is suspended, as a result of writing EN bit              to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif8{}; 
        ///Channel x block repeat transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brtif8{}; 
        ///Channel x block transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btif8{}; 
        ///channel x buffer transfer              complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcif8{}; 
        ///channel x request active              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> crqa8{}; 
    }
    namespace MdmaMdmaC8ifcr{    ///<MDMA channel x interrupt flag clear          register
        using Addr = Register::Address<0x52000244,0xffffffe0,0x00000000,std::uint32_t>;
        ///Channel x clear transfer error interrupt              flag Writing a 1 into this bit clears TEIFx in the              MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif8{}; 
        ///Clear Channel transfer complete              interrupt flag for channel x Writing a 1 into this              bit clears CTCIFx in the MDMA_ISRy              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cctcif8{}; 
        ///Channel x clear block repeat transfer              complete interrupt flag Writing a 1 into this bit              clears BRTIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cbrtif8{}; 
        ///Channel x Clear block transfer complete              interrupt flag Writing a 1 into this bit clears BTIFx              in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cbtif8{}; 
        ///CLear buffer Transfer Complete Interrupt              Flag for channel x Writing a 1 into this bit clears              TCIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cltcif8{}; 
    }
    namespace MdmaMdmaC8esr{    ///<MDMA Channel x error status          register
        using Addr = Register::Address<0x52000248,0xfffff000,0x00000000,std::uint32_t>;
        ///Transfer Error Address These bits are              set and cleared by HW, in case of an MDMA data              transfer error. It is used in conjunction with TED.              This field indicates the 7 LSBits of the address              which generated a transfer/access error. It may be              used by SW to retrieve the failing address, by adding              this value (truncated to the buffer transfer length              size) to the current SAR/DAR value. Note: The SAR/DAR              current value doesnt reflect this last address due to              the FIFO management system. The SAR/DAR are only              updated at the end of a (buffer) transfer (of TLEN+1              bytes). Note: It is not set in case of a link data              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tea{}; 
        ///Transfer Error Direction These bit is              set and cleared by HW, in case of an MDMA data              transfer error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ted{}; 
        ///Transfer Error Link Data These bit is              set by HW, in case of a transfer error while reading              the block link data structure. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teld{}; 
        ///Transfer Error Mask Data These bit is              set by HW, in case of a transfer error while writing              the Mask Data. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> temd{}; 
        ///Address/Size Error These bit is set by              HW, when the programmed address is not aligned with              the data size. TED will indicate whether the problem              is on the source or destination. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ase{}; 
        ///Block Size Error These bit is set by HW,              when the block size is not an integer multiple of the              data size either for source or destination. TED will              indicate whether the problem is on the source or              destination. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bse{}; 
    }
    namespace MdmaMdmaC8cr{    ///<This register is used to control the          concerned channel.
        using Addr = Register::Address<0x5200024c,0xfffe8f00,0x00000000,std::uint32_t>;
        ///channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Channel Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///Block Repeat transfer interrupt enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brtie{}; 
        ///Block Transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btie{}; 
        ///buffer Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Priority level These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pl{}; 
        ///byte Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bex{}; 
        ///Half word Endianes              exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> hex{}; 
        ///Word Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wex{}; 
        ///SW ReQuest Writing a 1 into this bit              sets the CRQAx in MDMA_ISRy register, activating the              request on Channel x Note: Either the whole CxCR              register or the 8-bit/16-bit register @ Address              offset: 0x4E + 0x40 chn may be used for SWRQ              activation. In case of a SW request, acknowledge is              not generated (neither HW signal, nor CxMAR write              access).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrq{}; 
    }
    namespace MdmaMdmaC8tcr{    ///<This register is used to configure the          concerned channel.
        using Addr = Register::Address<0x52000250,0x00000000,0x00000000,std::uint32_t>;
        ///Source increment mode These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0 Note: When source is              AHB (SBUS=1), SINC = 00 is forbidden. In Linked List              Mode, at the end of a block (single or last block in              repeated block transfer mode), this register will be              loaded from memory (from address given by current              LAR[31:0] + 0x00).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sinc{}; 
        ///Destination increment mode These bits              are set and cleared by software. These bits are              protected and can be written only if EN is 0 Note:              When destination is AHB (DBUS=1), DINC = 00 is              forbidden.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dinc{}; 
        ///Source data size These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0 Note: If a value of 11 is              programmed for the TCM access/AHB port, a transfer              error will occur (TEIF bit set) If SINCOS &lt;              SSIZE and SINC &#8800; 00, the result will be              unpredictable. Note: SSIZE = 11 (double-word) is              forbidden when source is TCM/AHB bus              (SBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Destination data size These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0. Note: If a value of              11 is programmed for the TCM access/AHB port, a              transfer error will occur (TEIF bit set) If DINCOS              &lt; DSIZE and DINC &#8800; 00, the result              will be unpredictable. Note: DSIZE = 11 (double-word)              is forbidden when destination is TCM/AHB bus              (DBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///source increment offset              size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sincos{}; 
        ///Destination increment              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> dincos{}; 
        ///source burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sburst{}; 
        ///Destination burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dburst{}; 
        ///buffer transfer lengh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,18),Register::ReadWriteAccess,unsigned> tlen{}; 
        ///PacK Enable These bit is set and cleared              by software. If the Source Size is smaller than the              destination, it will be padded according to the PAM              value. If the Source data size is larger than the              destination one, it will be truncated. The alignment              will be done according to the PAM[0] value. This bit              is protected and can be written only if EN is              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pke{}; 
        ///Padding/Alignement Mode These bits are              set and cleared by software. Case 1: Source data size              smaller than destination data size - 3 options are              valid. Case 2: Source data size larger than              destination data size. The remainder part is              discarded. When PKE = 1 or DSIZE=SSIZE, these bits              are ignored. These bits are protected and can be              written only if EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pam{}; 
        ///Trigger Mode These bits are set and              cleared by software. Note: If TRGM is 11 for the              current block, all the values loaded at the end of              the current block through the linked list mechanism              must keep the same value (TRGM=11) and the same SWRM              value, otherwise the result is undefined. These bits              are protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> trgm{}; 
        ///SW Request Mode This bit is set and              cleared by software. If a HW or SW request is              currently active, the bit change will be delayed              until the current transfer is completed. If the CxMAR              contains a valid address, the CxMDR value will also              be written @ CxMAR address. This bit is protected and              can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swrm{}; 
        ///Bufferable Write Mode This bit is set              and cleared by software. This bit is protected and              can be written only if EN is 0. Note: All MDMA              destination accesses are non-cacheable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bwm{}; 
    }
    namespace MdmaMdmaC8bndtr{    ///<MDMA Channel x block number of data          register
        using Addr = Register::Address<0x52000254,0x00020000,0x00000000,std::uint32_t>;
        ///block number of data to              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> bndt{}; 
        ///Block Repeat Source address Update Mode              These bits are protected and can be written only if              EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> brsum{}; 
        ///Block Repeat Destination address Update              Mode These bits are protected and can be written only              if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> brdum{}; 
        ///Block Repeat Count This field contains              the number of repetitions of the current block (0 to              4095). When the channel is enabled, this register is              read-only, indicating the remaining number of blocks,              excluding the current one. This register decrements              after each complete block transfer. Once the last              block transfer has completed, this register can              either stay at zero or be reloaded automatically from              memory (in Linked List mode - i.e. Link Address              valid). These bits are protected and can be written              only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> brc{}; 
    }
    namespace MdmaMdmaC8sar{    ///<MDMA channel x source address          register
        using Addr = Register::Address<0x52000258,0x00000000,0x00000000,std::uint32_t>;
        ///source adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace MdmaMdmaC8dar{    ///<MDMA channel x destination address          register
        using Addr = Register::Address<0x5200025c,0x00000000,0x00000000,std::uint32_t>;
        ///Destination adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace MdmaMdmaC8brur{    ///<MDMA channel x Block Repeat address Update          register
        using Addr = Register::Address<0x52000260,0x00000000,0x00000000,std::uint32_t>;
        ///source adresse update              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> suv{}; 
        ///destination address update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> duv{}; 
    }
    namespace MdmaMdmaC8lar{    ///<MDMA channel x Link Address          register
        using Addr = Register::Address<0x52000264,0x00000000,0x00000000,std::uint32_t>;
        ///Link address register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lar{}; 
    }
    namespace MdmaMdmaC8tbr{    ///<MDMA channel x Trigger and Bus selection          Register
        using Addr = Register::Address<0x52000268,0xfffcffc0,0x00000000,std::uint32_t>;
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tsel{}; 
        ///Source BUS select This bit is protected              and can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbus{}; 
        ///Destination BUS slect This bit is              protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbus{}; 
    }
    namespace MdmaMdmaC8mar{    ///<MDMA channel x Mask address          register
        using Addr = Register::Address<0x52000270,0x00000000,0x00000000,std::uint32_t>;
        ///Mask address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mar{}; 
    }
    namespace MdmaMdmaC8mdr{    ///<MDMA channel x Mask Data          register
        using Addr = Register::Address<0x52000274,0x00000000,0x00000000,std::uint32_t>;
        ///Mask data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdr{}; 
    }
    namespace MdmaMdmaC9isr{    ///<MDMA channel x interrupt/status          register
        using Addr = Register::Address<0x52000280,0xfffeffe0,0x00000000,std::uint32_t>;
        ///Channel x transfer error interrupt flag              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif9{}; 
        ///Channel x Channel Transfer Complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register. CTC is set when the              last block was transferred and the channel has been              automatically disabled. CTC is also set when the              channel is suspended, as a result of writing EN bit              to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif9{}; 
        ///Channel x block repeat transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brtif9{}; 
        ///Channel x block transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btif9{}; 
        ///channel x buffer transfer              complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcif9{}; 
        ///channel x request active              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> crqa9{}; 
    }
    namespace MdmaMdmaC9ifcr{    ///<MDMA channel x interrupt flag clear          register
        using Addr = Register::Address<0x52000284,0xffffffe0,0x00000000,std::uint32_t>;
        ///Channel x clear transfer error interrupt              flag Writing a 1 into this bit clears TEIFx in the              MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif9{}; 
        ///Clear Channel transfer complete              interrupt flag for channel x Writing a 1 into this              bit clears CTCIFx in the MDMA_ISRy              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cctcif9{}; 
        ///Channel x clear block repeat transfer              complete interrupt flag Writing a 1 into this bit              clears BRTIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cbrtif9{}; 
        ///Channel x Clear block transfer complete              interrupt flag Writing a 1 into this bit clears BTIFx              in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cbtif9{}; 
        ///CLear buffer Transfer Complete Interrupt              Flag for channel x Writing a 1 into this bit clears              TCIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cltcif9{}; 
    }
    namespace MdmaMdmaC9esr{    ///<MDMA Channel x error status          register
        using Addr = Register::Address<0x52000288,0xfffff000,0x00000000,std::uint32_t>;
        ///Transfer Error Address These bits are              set and cleared by HW, in case of an MDMA data              transfer error. It is used in conjunction with TED.              This field indicates the 7 LSBits of the address              which generated a transfer/access error. It may be              used by SW to retrieve the failing address, by adding              this value (truncated to the buffer transfer length              size) to the current SAR/DAR value. Note: The SAR/DAR              current value doesnt reflect this last address due to              the FIFO management system. The SAR/DAR are only              updated at the end of a (buffer) transfer (of TLEN+1              bytes). Note: It is not set in case of a link data              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tea{}; 
        ///Transfer Error Direction These bit is              set and cleared by HW, in case of an MDMA data              transfer error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ted{}; 
        ///Transfer Error Link Data These bit is              set by HW, in case of a transfer error while reading              the block link data structure. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teld{}; 
        ///Transfer Error Mask Data These bit is              set by HW, in case of a transfer error while writing              the Mask Data. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> temd{}; 
        ///Address/Size Error These bit is set by              HW, when the programmed address is not aligned with              the data size. TED will indicate whether the problem              is on the source or destination. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ase{}; 
        ///Block Size Error These bit is set by HW,              when the block size is not an integer multiple of the              data size either for source or destination. TED will              indicate whether the problem is on the source or              destination. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bse{}; 
    }
    namespace MdmaMdmaC9cr{    ///<This register is used to control the          concerned channel.
        using Addr = Register::Address<0x5200028c,0xfffe8f00,0x00000000,std::uint32_t>;
        ///channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Channel Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///Block Repeat transfer interrupt enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brtie{}; 
        ///Block Transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btie{}; 
        ///buffer Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Priority level These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pl{}; 
        ///byte Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bex{}; 
        ///Half word Endianes              exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> hex{}; 
        ///Word Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wex{}; 
        ///SW ReQuest Writing a 1 into this bit              sets the CRQAx in MDMA_ISRy register, activating the              request on Channel x Note: Either the whole CxCR              register or the 8-bit/16-bit register @ Address              offset: 0x4E + 0x40 chn may be used for SWRQ              activation. In case of a SW request, acknowledge is              not generated (neither HW signal, nor CxMAR write              access).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrq{}; 
    }
    namespace MdmaMdmaC9tcr{    ///<This register is used to configure the          concerned channel.
        using Addr = Register::Address<0x52000290,0x00000000,0x00000000,std::uint32_t>;
        ///Source increment mode These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0 Note: When source is              AHB (SBUS=1), SINC = 00 is forbidden. In Linked List              Mode, at the end of a block (single or last block in              repeated block transfer mode), this register will be              loaded from memory (from address given by current              LAR[31:0] + 0x00).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sinc{}; 
        ///Destination increment mode These bits              are set and cleared by software. These bits are              protected and can be written only if EN is 0 Note:              When destination is AHB (DBUS=1), DINC = 00 is              forbidden.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dinc{}; 
        ///Source data size These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0 Note: If a value of 11 is              programmed for the TCM access/AHB port, a transfer              error will occur (TEIF bit set) If SINCOS &lt;              SSIZE and SINC &#8800; 00, the result will be              unpredictable. Note: SSIZE = 11 (double-word) is              forbidden when source is TCM/AHB bus              (SBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Destination data size These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0. Note: If a value of              11 is programmed for the TCM access/AHB port, a              transfer error will occur (TEIF bit set) If DINCOS              &lt; DSIZE and DINC &#8800; 00, the result              will be unpredictable. Note: DSIZE = 11 (double-word)              is forbidden when destination is TCM/AHB bus              (DBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///source increment offset              size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sincos{}; 
        ///Destination increment              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> dincos{}; 
        ///source burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sburst{}; 
        ///Destination burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dburst{}; 
        ///buffer transfer lengh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,18),Register::ReadWriteAccess,unsigned> tlen{}; 
        ///PacK Enable These bit is set and cleared              by software. If the Source Size is smaller than the              destination, it will be padded according to the PAM              value. If the Source data size is larger than the              destination one, it will be truncated. The alignment              will be done according to the PAM[0] value. This bit              is protected and can be written only if EN is              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pke{}; 
        ///Padding/Alignement Mode These bits are              set and cleared by software. Case 1: Source data size              smaller than destination data size - 3 options are              valid. Case 2: Source data size larger than              destination data size. The remainder part is              discarded. When PKE = 1 or DSIZE=SSIZE, these bits              are ignored. These bits are protected and can be              written only if EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pam{}; 
        ///Trigger Mode These bits are set and              cleared by software. Note: If TRGM is 11 for the              current block, all the values loaded at the end of              the current block through the linked list mechanism              must keep the same value (TRGM=11) and the same SWRM              value, otherwise the result is undefined. These bits              are protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> trgm{}; 
        ///SW Request Mode This bit is set and              cleared by software. If a HW or SW request is              currently active, the bit change will be delayed              until the current transfer is completed. If the CxMAR              contains a valid address, the CxMDR value will also              be written @ CxMAR address. This bit is protected and              can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swrm{}; 
        ///Bufferable Write Mode This bit is set              and cleared by software. This bit is protected and              can be written only if EN is 0. Note: All MDMA              destination accesses are non-cacheable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bwm{}; 
    }
    namespace MdmaMdmaC9bndtr{    ///<MDMA Channel x block number of data          register
        using Addr = Register::Address<0x52000294,0x00020000,0x00000000,std::uint32_t>;
        ///block number of data to              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> bndt{}; 
        ///Block Repeat Source address Update Mode              These bits are protected and can be written only if              EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> brsum{}; 
        ///Block Repeat Destination address Update              Mode These bits are protected and can be written only              if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> brdum{}; 
        ///Block Repeat Count This field contains              the number of repetitions of the current block (0 to              4095). When the channel is enabled, this register is              read-only, indicating the remaining number of blocks,              excluding the current one. This register decrements              after each complete block transfer. Once the last              block transfer has completed, this register can              either stay at zero or be reloaded automatically from              memory (in Linked List mode - i.e. Link Address              valid). These bits are protected and can be written              only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> brc{}; 
    }
    namespace MdmaMdmaC9sar{    ///<MDMA channel x source address          register
        using Addr = Register::Address<0x52000298,0x00000000,0x00000000,std::uint32_t>;
        ///source adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace MdmaMdmaC9dar{    ///<MDMA channel x destination address          register
        using Addr = Register::Address<0x5200029c,0x00000000,0x00000000,std::uint32_t>;
        ///Destination adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace MdmaMdmaC9brur{    ///<MDMA channel x Block Repeat address Update          register
        using Addr = Register::Address<0x520002a0,0x00000000,0x00000000,std::uint32_t>;
        ///source adresse update              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> suv{}; 
        ///destination address update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> duv{}; 
    }
    namespace MdmaMdmaC9lar{    ///<MDMA channel x Link Address          register
        using Addr = Register::Address<0x520002a4,0x00000000,0x00000000,std::uint32_t>;
        ///Link address register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lar{}; 
    }
    namespace MdmaMdmaC9tbr{    ///<MDMA channel x Trigger and Bus selection          Register
        using Addr = Register::Address<0x520002a8,0xfffcffc0,0x00000000,std::uint32_t>;
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tsel{}; 
        ///Source BUS select This bit is protected              and can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbus{}; 
        ///Destination BUS slect This bit is              protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbus{}; 
    }
    namespace MdmaMdmaC9mar{    ///<MDMA channel x Mask address          register
        using Addr = Register::Address<0x520002b0,0x00000000,0x00000000,std::uint32_t>;
        ///Mask address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mar{}; 
    }
    namespace MdmaMdmaC9mdr{    ///<MDMA channel x Mask Data          register
        using Addr = Register::Address<0x520002b4,0x00000000,0x00000000,std::uint32_t>;
        ///Mask data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdr{}; 
    }
    namespace MdmaMdmaC10isr{    ///<MDMA channel x interrupt/status          register
        using Addr = Register::Address<0x520002c0,0xfffeffe0,0x00000000,std::uint32_t>;
        ///Channel x transfer error interrupt flag              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif10{}; 
        ///Channel x Channel Transfer Complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register. CTC is set when the              last block was transferred and the channel has been              automatically disabled. CTC is also set when the              channel is suspended, as a result of writing EN bit              to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif10{}; 
        ///Channel x block repeat transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brtif10{}; 
        ///Channel x block transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btif10{}; 
        ///channel x buffer transfer              complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcif10{}; 
        ///channel x request active              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> crqa10{}; 
    }
    namespace MdmaMdmaC10ifcr{    ///<MDMA channel x interrupt flag clear          register
        using Addr = Register::Address<0x520002c4,0xffffffe0,0x00000000,std::uint32_t>;
        ///Channel x clear transfer error interrupt              flag Writing a 1 into this bit clears TEIFx in the              MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif10{}; 
        ///Clear Channel transfer complete              interrupt flag for channel x Writing a 1 into this              bit clears CTCIFx in the MDMA_ISRy              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cctcif10{}; 
        ///Channel x clear block repeat transfer              complete interrupt flag Writing a 1 into this bit              clears BRTIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cbrtif10{}; 
        ///Channel x Clear block transfer complete              interrupt flag Writing a 1 into this bit clears BTIFx              in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cbtif10{}; 
        ///CLear buffer Transfer Complete Interrupt              Flag for channel x Writing a 1 into this bit clears              TCIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cltcif10{}; 
    }
    namespace MdmaMdmaC10esr{    ///<MDMA Channel x error status          register
        using Addr = Register::Address<0x520002c8,0xfffff000,0x00000000,std::uint32_t>;
        ///Transfer Error Address These bits are              set and cleared by HW, in case of an MDMA data              transfer error. It is used in conjunction with TED.              This field indicates the 7 LSBits of the address              which generated a transfer/access error. It may be              used by SW to retrieve the failing address, by adding              this value (truncated to the buffer transfer length              size) to the current SAR/DAR value. Note: The SAR/DAR              current value doesnt reflect this last address due to              the FIFO management system. The SAR/DAR are only              updated at the end of a (buffer) transfer (of TLEN+1              bytes). Note: It is not set in case of a link data              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tea{}; 
        ///Transfer Error Direction These bit is              set and cleared by HW, in case of an MDMA data              transfer error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ted{}; 
        ///Transfer Error Link Data These bit is              set by HW, in case of a transfer error while reading              the block link data structure. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teld{}; 
        ///Transfer Error Mask Data These bit is              set by HW, in case of a transfer error while writing              the Mask Data. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> temd{}; 
        ///Address/Size Error These bit is set by              HW, when the programmed address is not aligned with              the data size. TED will indicate whether the problem              is on the source or destination. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ase{}; 
        ///Block Size Error These bit is set by HW,              when the block size is not an integer multiple of the              data size either for source or destination. TED will              indicate whether the problem is on the source or              destination. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bse{}; 
    }
    namespace MdmaMdmaC10cr{    ///<This register is used to control the          concerned channel.
        using Addr = Register::Address<0x520002cc,0xfffe8f00,0x00000000,std::uint32_t>;
        ///channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Channel Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///Block Repeat transfer interrupt enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brtie{}; 
        ///Block Transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btie{}; 
        ///buffer Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Priority level These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pl{}; 
        ///byte Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bex{}; 
        ///Half word Endianes              exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> hex{}; 
        ///Word Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wex{}; 
        ///SW ReQuest Writing a 1 into this bit              sets the CRQAx in MDMA_ISRy register, activating the              request on Channel x Note: Either the whole CxCR              register or the 8-bit/16-bit register @ Address              offset: 0x4E + 0x40 chn may be used for SWRQ              activation. In case of a SW request, acknowledge is              not generated (neither HW signal, nor CxMAR write              access).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrq{}; 
    }
    namespace MdmaMdmaC10tcr{    ///<This register is used to configure the          concerned channel.
        using Addr = Register::Address<0x520002d0,0x00000000,0x00000000,std::uint32_t>;
        ///Source increment mode These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0 Note: When source is              AHB (SBUS=1), SINC = 00 is forbidden. In Linked List              Mode, at the end of a block (single or last block in              repeated block transfer mode), this register will be              loaded from memory (from address given by current              LAR[31:0] + 0x00).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sinc{}; 
        ///Destination increment mode These bits              are set and cleared by software. These bits are              protected and can be written only if EN is 0 Note:              When destination is AHB (DBUS=1), DINC = 00 is              forbidden.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dinc{}; 
        ///Source data size These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0 Note: If a value of 11 is              programmed for the TCM access/AHB port, a transfer              error will occur (TEIF bit set) If SINCOS &lt;              SSIZE and SINC &#8800; 00, the result will be              unpredictable. Note: SSIZE = 11 (double-word) is              forbidden when source is TCM/AHB bus              (SBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Destination data size These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0. Note: If a value of              11 is programmed for the TCM access/AHB port, a              transfer error will occur (TEIF bit set) If DINCOS              &lt; DSIZE and DINC &#8800; 00, the result              will be unpredictable. Note: DSIZE = 11 (double-word)              is forbidden when destination is TCM/AHB bus              (DBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///source increment offset              size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sincos{}; 
        ///Destination increment              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> dincos{}; 
        ///source burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sburst{}; 
        ///Destination burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dburst{}; 
        ///buffer transfer lengh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,18),Register::ReadWriteAccess,unsigned> tlen{}; 
        ///PacK Enable These bit is set and cleared              by software. If the Source Size is smaller than the              destination, it will be padded according to the PAM              value. If the Source data size is larger than the              destination one, it will be truncated. The alignment              will be done according to the PAM[0] value. This bit              is protected and can be written only if EN is              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pke{}; 
        ///Padding/Alignement Mode These bits are              set and cleared by software. Case 1: Source data size              smaller than destination data size - 3 options are              valid. Case 2: Source data size larger than              destination data size. The remainder part is              discarded. When PKE = 1 or DSIZE=SSIZE, these bits              are ignored. These bits are protected and can be              written only if EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pam{}; 
        ///Trigger Mode These bits are set and              cleared by software. Note: If TRGM is 11 for the              current block, all the values loaded at the end of              the current block through the linked list mechanism              must keep the same value (TRGM=11) and the same SWRM              value, otherwise the result is undefined. These bits              are protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> trgm{}; 
        ///SW Request Mode This bit is set and              cleared by software. If a HW or SW request is              currently active, the bit change will be delayed              until the current transfer is completed. If the CxMAR              contains a valid address, the CxMDR value will also              be written @ CxMAR address. This bit is protected and              can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swrm{}; 
        ///Bufferable Write Mode This bit is set              and cleared by software. This bit is protected and              can be written only if EN is 0. Note: All MDMA              destination accesses are non-cacheable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bwm{}; 
    }
    namespace MdmaMdmaC10bndtr{    ///<MDMA Channel x block number of data          register
        using Addr = Register::Address<0x520002d4,0x00020000,0x00000000,std::uint32_t>;
        ///block number of data to              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> bndt{}; 
        ///Block Repeat Source address Update Mode              These bits are protected and can be written only if              EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> brsum{}; 
        ///Block Repeat Destination address Update              Mode These bits are protected and can be written only              if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> brdum{}; 
        ///Block Repeat Count This field contains              the number of repetitions of the current block (0 to              4095). When the channel is enabled, this register is              read-only, indicating the remaining number of blocks,              excluding the current one. This register decrements              after each complete block transfer. Once the last              block transfer has completed, this register can              either stay at zero or be reloaded automatically from              memory (in Linked List mode - i.e. Link Address              valid). These bits are protected and can be written              only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> brc{}; 
    }
    namespace MdmaMdmaC10sar{    ///<MDMA channel x source address          register
        using Addr = Register::Address<0x520002d8,0x00000000,0x00000000,std::uint32_t>;
        ///source adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace MdmaMdmaC10dar{    ///<MDMA channel x destination address          register
        using Addr = Register::Address<0x520002dc,0x00000000,0x00000000,std::uint32_t>;
        ///Destination adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace MdmaMdmaC10brur{    ///<MDMA channel x Block Repeat address Update          register
        using Addr = Register::Address<0x520002e0,0x00000000,0x00000000,std::uint32_t>;
        ///source adresse update              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> suv{}; 
        ///destination address update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> duv{}; 
    }
    namespace MdmaMdmaC10lar{    ///<MDMA channel x Link Address          register
        using Addr = Register::Address<0x520002e4,0x00000000,0x00000000,std::uint32_t>;
        ///Link address register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lar{}; 
    }
    namespace MdmaMdmaC10tbr{    ///<MDMA channel x Trigger and Bus selection          Register
        using Addr = Register::Address<0x520002e8,0xfffcffc0,0x00000000,std::uint32_t>;
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tsel{}; 
        ///Source BUS select This bit is protected              and can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbus{}; 
        ///Destination BUS slect This bit is              protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbus{}; 
    }
    namespace MdmaMdmaC10mar{    ///<MDMA channel x Mask address          register
        using Addr = Register::Address<0x520002f0,0x00000000,0x00000000,std::uint32_t>;
        ///Mask address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mar{}; 
    }
    namespace MdmaMdmaC10mdr{    ///<MDMA channel x Mask Data          register
        using Addr = Register::Address<0x520002f4,0x00000000,0x00000000,std::uint32_t>;
        ///Mask data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdr{}; 
    }
    namespace MdmaMdmaC11isr{    ///<MDMA channel x interrupt/status          register
        using Addr = Register::Address<0x52000300,0xfffeffe0,0x00000000,std::uint32_t>;
        ///Channel x transfer error interrupt flag              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif11{}; 
        ///Channel x Channel Transfer Complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register. CTC is set when the              last block was transferred and the channel has been              automatically disabled. CTC is also set when the              channel is suspended, as a result of writing EN bit              to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif11{}; 
        ///Channel x block repeat transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brtif11{}; 
        ///Channel x block transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btif11{}; 
        ///channel x buffer transfer              complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcif11{}; 
        ///channel x request active              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> crqa11{}; 
    }
    namespace MdmaMdmaC11ifcr{    ///<MDMA channel x interrupt flag clear          register
        using Addr = Register::Address<0x52000304,0xffffffe0,0x00000000,std::uint32_t>;
        ///Channel x clear transfer error interrupt              flag Writing a 1 into this bit clears TEIFx in the              MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif11{}; 
        ///Clear Channel transfer complete              interrupt flag for channel x Writing a 1 into this              bit clears CTCIFx in the MDMA_ISRy              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cctcif11{}; 
        ///Channel x clear block repeat transfer              complete interrupt flag Writing a 1 into this bit              clears BRTIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cbrtif11{}; 
        ///Channel x Clear block transfer complete              interrupt flag Writing a 1 into this bit clears BTIFx              in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cbtif11{}; 
        ///CLear buffer Transfer Complete Interrupt              Flag for channel x Writing a 1 into this bit clears              TCIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cltcif11{}; 
    }
    namespace MdmaMdmaC11esr{    ///<MDMA Channel x error status          register
        using Addr = Register::Address<0x52000308,0xfffff000,0x00000000,std::uint32_t>;
        ///Transfer Error Address These bits are              set and cleared by HW, in case of an MDMA data              transfer error. It is used in conjunction with TED.              This field indicates the 7 LSBits of the address              which generated a transfer/access error. It may be              used by SW to retrieve the failing address, by adding              this value (truncated to the buffer transfer length              size) to the current SAR/DAR value. Note: The SAR/DAR              current value doesnt reflect this last address due to              the FIFO management system. The SAR/DAR are only              updated at the end of a (buffer) transfer (of TLEN+1              bytes). Note: It is not set in case of a link data              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tea{}; 
        ///Transfer Error Direction These bit is              set and cleared by HW, in case of an MDMA data              transfer error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ted{}; 
        ///Transfer Error Link Data These bit is              set by HW, in case of a transfer error while reading              the block link data structure. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teld{}; 
        ///Transfer Error Mask Data These bit is              set by HW, in case of a transfer error while writing              the Mask Data. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> temd{}; 
        ///Address/Size Error These bit is set by              HW, when the programmed address is not aligned with              the data size. TED will indicate whether the problem              is on the source or destination. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ase{}; 
        ///Block Size Error These bit is set by HW,              when the block size is not an integer multiple of the              data size either for source or destination. TED will              indicate whether the problem is on the source or              destination. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bse{}; 
    }
    namespace MdmaMdmaC11cr{    ///<This register is used to control the          concerned channel.
        using Addr = Register::Address<0x5200030c,0xfffe8f00,0x00000000,std::uint32_t>;
        ///channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Channel Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///Block Repeat transfer interrupt enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brtie{}; 
        ///Block Transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btie{}; 
        ///buffer Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Priority level These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pl{}; 
        ///byte Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bex{}; 
        ///Half word Endianes              exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> hex{}; 
        ///Word Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wex{}; 
        ///SW ReQuest Writing a 1 into this bit              sets the CRQAx in MDMA_ISRy register, activating the              request on Channel x Note: Either the whole CxCR              register or the 8-bit/16-bit register @ Address              offset: 0x4E + 0x40 chn may be used for SWRQ              activation. In case of a SW request, acknowledge is              not generated (neither HW signal, nor CxMAR write              access).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrq{}; 
    }
    namespace MdmaMdmaC11tcr{    ///<This register is used to configure the          concerned channel.
        using Addr = Register::Address<0x52000310,0x00000000,0x00000000,std::uint32_t>;
        ///Source increment mode These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0 Note: When source is              AHB (SBUS=1), SINC = 00 is forbidden. In Linked List              Mode, at the end of a block (single or last block in              repeated block transfer mode), this register will be              loaded from memory (from address given by current              LAR[31:0] + 0x00).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sinc{}; 
        ///Destination increment mode These bits              are set and cleared by software. These bits are              protected and can be written only if EN is 0 Note:              When destination is AHB (DBUS=1), DINC = 00 is              forbidden.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dinc{}; 
        ///Source data size These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0 Note: If a value of 11 is              programmed for the TCM access/AHB port, a transfer              error will occur (TEIF bit set) If SINCOS &lt;              SSIZE and SINC &#8800; 00, the result will be              unpredictable. Note: SSIZE = 11 (double-word) is              forbidden when source is TCM/AHB bus              (SBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Destination data size These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0. Note: If a value of              11 is programmed for the TCM access/AHB port, a              transfer error will occur (TEIF bit set) If DINCOS              &lt; DSIZE and DINC &#8800; 00, the result              will be unpredictable. Note: DSIZE = 11 (double-word)              is forbidden when destination is TCM/AHB bus              (DBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///source increment offset              size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sincos{}; 
        ///Destination increment              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> dincos{}; 
        ///source burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sburst{}; 
        ///Destination burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dburst{}; 
        ///buffer transfer lengh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,18),Register::ReadWriteAccess,unsigned> tlen{}; 
        ///PacK Enable These bit is set and cleared              by software. If the Source Size is smaller than the              destination, it will be padded according to the PAM              value. If the Source data size is larger than the              destination one, it will be truncated. The alignment              will be done according to the PAM[0] value. This bit              is protected and can be written only if EN is              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pke{}; 
        ///Padding/Alignement Mode These bits are              set and cleared by software. Case 1: Source data size              smaller than destination data size - 3 options are              valid. Case 2: Source data size larger than              destination data size. The remainder part is              discarded. When PKE = 1 or DSIZE=SSIZE, these bits              are ignored. These bits are protected and can be              written only if EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pam{}; 
        ///Trigger Mode These bits are set and              cleared by software. Note: If TRGM is 11 for the              current block, all the values loaded at the end of              the current block through the linked list mechanism              must keep the same value (TRGM=11) and the same SWRM              value, otherwise the result is undefined. These bits              are protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> trgm{}; 
        ///SW Request Mode This bit is set and              cleared by software. If a HW or SW request is              currently active, the bit change will be delayed              until the current transfer is completed. If the CxMAR              contains a valid address, the CxMDR value will also              be written @ CxMAR address. This bit is protected and              can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swrm{}; 
        ///Bufferable Write Mode This bit is set              and cleared by software. This bit is protected and              can be written only if EN is 0. Note: All MDMA              destination accesses are non-cacheable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bwm{}; 
    }
    namespace MdmaMdmaC11bndtr{    ///<MDMA Channel x block number of data          register
        using Addr = Register::Address<0x52000314,0x00020000,0x00000000,std::uint32_t>;
        ///block number of data to              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> bndt{}; 
        ///Block Repeat Source address Update Mode              These bits are protected and can be written only if              EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> brsum{}; 
        ///Block Repeat Destination address Update              Mode These bits are protected and can be written only              if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> brdum{}; 
        ///Block Repeat Count This field contains              the number of repetitions of the current block (0 to              4095). When the channel is enabled, this register is              read-only, indicating the remaining number of blocks,              excluding the current one. This register decrements              after each complete block transfer. Once the last              block transfer has completed, this register can              either stay at zero or be reloaded automatically from              memory (in Linked List mode - i.e. Link Address              valid). These bits are protected and can be written              only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> brc{}; 
    }
    namespace MdmaMdmaC11sar{    ///<MDMA channel x source address          register
        using Addr = Register::Address<0x52000318,0x00000000,0x00000000,std::uint32_t>;
        ///source adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace MdmaMdmaC11dar{    ///<MDMA channel x destination address          register
        using Addr = Register::Address<0x5200031c,0x00000000,0x00000000,std::uint32_t>;
        ///Destination adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace MdmaMdmaC11brur{    ///<MDMA channel x Block Repeat address Update          register
        using Addr = Register::Address<0x52000320,0x00000000,0x00000000,std::uint32_t>;
        ///source adresse update              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> suv{}; 
        ///destination address update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> duv{}; 
    }
    namespace MdmaMdmaC11lar{    ///<MDMA channel x Link Address          register
        using Addr = Register::Address<0x52000324,0x00000000,0x00000000,std::uint32_t>;
        ///Link address register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lar{}; 
    }
    namespace MdmaMdmaC11tbr{    ///<MDMA channel x Trigger and Bus selection          Register
        using Addr = Register::Address<0x52000328,0xfffcffc0,0x00000000,std::uint32_t>;
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tsel{}; 
        ///Source BUS select This bit is protected              and can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbus{}; 
        ///Destination BUS slect This bit is              protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbus{}; 
    }
    namespace MdmaMdmaC11mar{    ///<MDMA channel x Mask address          register
        using Addr = Register::Address<0x52000330,0x00000000,0x00000000,std::uint32_t>;
        ///Mask address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mar{}; 
    }
    namespace MdmaMdmaC11mdr{    ///<MDMA channel x Mask Data          register
        using Addr = Register::Address<0x52000334,0x00000000,0x00000000,std::uint32_t>;
        ///Mask data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdr{}; 
    }
    namespace MdmaMdmaC12isr{    ///<MDMA channel x interrupt/status          register
        using Addr = Register::Address<0x52000340,0xfffeffe0,0x00000000,std::uint32_t>;
        ///Channel x transfer error interrupt flag              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif12{}; 
        ///Channel x Channel Transfer Complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register. CTC is set when the              last block was transferred and the channel has been              automatically disabled. CTC is also set when the              channel is suspended, as a result of writing EN bit              to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif12{}; 
        ///Channel x block repeat transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brtif12{}; 
        ///Channel x block transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btif12{}; 
        ///channel x buffer transfer              complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcif12{}; 
        ///channel x request active              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> crqa12{}; 
    }
    namespace MdmaMdmaC12ifcr{    ///<MDMA channel x interrupt flag clear          register
        using Addr = Register::Address<0x52000344,0xffffffe0,0x00000000,std::uint32_t>;
        ///Channel x clear transfer error interrupt              flag Writing a 1 into this bit clears TEIFx in the              MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif12{}; 
        ///Clear Channel transfer complete              interrupt flag for channel x Writing a 1 into this              bit clears CTCIFx in the MDMA_ISRy              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cctcif12{}; 
        ///Channel x clear block repeat transfer              complete interrupt flag Writing a 1 into this bit              clears BRTIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cbrtif12{}; 
        ///Channel x Clear block transfer complete              interrupt flag Writing a 1 into this bit clears BTIFx              in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cbtif12{}; 
        ///CLear buffer Transfer Complete Interrupt              Flag for channel x Writing a 1 into this bit clears              TCIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cltcif12{}; 
    }
    namespace MdmaMdmaC12esr{    ///<MDMA Channel x error status          register
        using Addr = Register::Address<0x52000348,0xfffff000,0x00000000,std::uint32_t>;
        ///Transfer Error Address These bits are              set and cleared by HW, in case of an MDMA data              transfer error. It is used in conjunction with TED.              This field indicates the 7 LSBits of the address              which generated a transfer/access error. It may be              used by SW to retrieve the failing address, by adding              this value (truncated to the buffer transfer length              size) to the current SAR/DAR value. Note: The SAR/DAR              current value doesnt reflect this last address due to              the FIFO management system. The SAR/DAR are only              updated at the end of a (buffer) transfer (of TLEN+1              bytes). Note: It is not set in case of a link data              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tea{}; 
        ///Transfer Error Direction These bit is              set and cleared by HW, in case of an MDMA data              transfer error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ted{}; 
        ///Transfer Error Link Data These bit is              set by HW, in case of a transfer error while reading              the block link data structure. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teld{}; 
        ///Transfer Error Mask Data These bit is              set by HW, in case of a transfer error while writing              the Mask Data. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> temd{}; 
        ///Address/Size Error These bit is set by              HW, when the programmed address is not aligned with              the data size. TED will indicate whether the problem              is on the source or destination. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ase{}; 
        ///Block Size Error These bit is set by HW,              when the block size is not an integer multiple of the              data size either for source or destination. TED will              indicate whether the problem is on the source or              destination. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bse{}; 
    }
    namespace MdmaMdmaC12cr{    ///<This register is used to control the          concerned channel.
        using Addr = Register::Address<0x5200034c,0xfffe8f00,0x00000000,std::uint32_t>;
        ///channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Channel Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///Block Repeat transfer interrupt enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brtie{}; 
        ///Block Transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btie{}; 
        ///buffer Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Priority level These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pl{}; 
        ///byte Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bex{}; 
        ///Half word Endianes              exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> hex{}; 
        ///Word Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wex{}; 
        ///SW ReQuest Writing a 1 into this bit              sets the CRQAx in MDMA_ISRy register, activating the              request on Channel x Note: Either the whole CxCR              register or the 8-bit/16-bit register @ Address              offset: 0x4E + 0x40 chn may be used for SWRQ              activation. In case of a SW request, acknowledge is              not generated (neither HW signal, nor CxMAR write              access).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrq{}; 
    }
    namespace MdmaMdmaC12tcr{    ///<This register is used to configure the          concerned channel.
        using Addr = Register::Address<0x52000350,0x00000000,0x00000000,std::uint32_t>;
        ///Source increment mode These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0 Note: When source is              AHB (SBUS=1), SINC = 00 is forbidden. In Linked List              Mode, at the end of a block (single or last block in              repeated block transfer mode), this register will be              loaded from memory (from address given by current              LAR[31:0] + 0x00).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sinc{}; 
        ///Destination increment mode These bits              are set and cleared by software. These bits are              protected and can be written only if EN is 0 Note:              When destination is AHB (DBUS=1), DINC = 00 is              forbidden.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dinc{}; 
        ///Source data size These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0 Note: If a value of 11 is              programmed for the TCM access/AHB port, a transfer              error will occur (TEIF bit set) If SINCOS &lt;              SSIZE and SINC &#8800; 00, the result will be              unpredictable. Note: SSIZE = 11 (double-word) is              forbidden when source is TCM/AHB bus              (SBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Destination data size These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0. Note: If a value of              11 is programmed for the TCM access/AHB port, a              transfer error will occur (TEIF bit set) If DINCOS              &lt; DSIZE and DINC &#8800; 00, the result              will be unpredictable. Note: DSIZE = 11 (double-word)              is forbidden when destination is TCM/AHB bus              (DBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///source increment offset              size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sincos{}; 
        ///Destination increment              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> dincos{}; 
        ///source burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sburst{}; 
        ///Destination burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dburst{}; 
        ///buffer transfer lengh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,18),Register::ReadWriteAccess,unsigned> tlen{}; 
        ///PacK Enable These bit is set and cleared              by software. If the Source Size is smaller than the              destination, it will be padded according to the PAM              value. If the Source data size is larger than the              destination one, it will be truncated. The alignment              will be done according to the PAM[0] value. This bit              is protected and can be written only if EN is              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pke{}; 
        ///Padding/Alignement Mode These bits are              set and cleared by software. Case 1: Source data size              smaller than destination data size - 3 options are              valid. Case 2: Source data size larger than              destination data size. The remainder part is              discarded. When PKE = 1 or DSIZE=SSIZE, these bits              are ignored. These bits are protected and can be              written only if EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pam{}; 
        ///Trigger Mode These bits are set and              cleared by software. Note: If TRGM is 11 for the              current block, all the values loaded at the end of              the current block through the linked list mechanism              must keep the same value (TRGM=11) and the same SWRM              value, otherwise the result is undefined. These bits              are protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> trgm{}; 
        ///SW Request Mode This bit is set and              cleared by software. If a HW or SW request is              currently active, the bit change will be delayed              until the current transfer is completed. If the CxMAR              contains a valid address, the CxMDR value will also              be written @ CxMAR address. This bit is protected and              can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swrm{}; 
        ///Bufferable Write Mode This bit is set              and cleared by software. This bit is protected and              can be written only if EN is 0. Note: All MDMA              destination accesses are non-cacheable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bwm{}; 
    }
    namespace MdmaMdmaC12bndtr{    ///<MDMA Channel x block number of data          register
        using Addr = Register::Address<0x52000354,0x00020000,0x00000000,std::uint32_t>;
        ///block number of data to              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> bndt{}; 
        ///Block Repeat Source address Update Mode              These bits are protected and can be written only if              EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> brsum{}; 
        ///Block Repeat Destination address Update              Mode These bits are protected and can be written only              if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> brdum{}; 
        ///Block Repeat Count This field contains              the number of repetitions of the current block (0 to              4095). When the channel is enabled, this register is              read-only, indicating the remaining number of blocks,              excluding the current one. This register decrements              after each complete block transfer. Once the last              block transfer has completed, this register can              either stay at zero or be reloaded automatically from              memory (in Linked List mode - i.e. Link Address              valid). These bits are protected and can be written              only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> brc{}; 
    }
    namespace MdmaMdmaC12sar{    ///<MDMA channel x source address          register
        using Addr = Register::Address<0x52000358,0x00000000,0x00000000,std::uint32_t>;
        ///source adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace MdmaMdmaC12dar{    ///<MDMA channel x destination address          register
        using Addr = Register::Address<0x5200035c,0x00000000,0x00000000,std::uint32_t>;
        ///Destination adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace MdmaMdmaC12brur{    ///<MDMA channel x Block Repeat address Update          register
        using Addr = Register::Address<0x52000360,0x00000000,0x00000000,std::uint32_t>;
        ///source adresse update              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> suv{}; 
        ///destination address update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> duv{}; 
    }
    namespace MdmaMdmaC12lar{    ///<MDMA channel x Link Address          register
        using Addr = Register::Address<0x52000364,0x00000000,0x00000000,std::uint32_t>;
        ///Link address register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lar{}; 
    }
    namespace MdmaMdmaC12tbr{    ///<MDMA channel x Trigger and Bus selection          Register
        using Addr = Register::Address<0x52000368,0xfffcffc0,0x00000000,std::uint32_t>;
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tsel{}; 
        ///Source BUS select This bit is protected              and can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbus{}; 
        ///Destination BUS slect This bit is              protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbus{}; 
    }
    namespace MdmaMdmaC12mar{    ///<MDMA channel x Mask address          register
        using Addr = Register::Address<0x52000370,0x00000000,0x00000000,std::uint32_t>;
        ///Mask address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mar{}; 
    }
    namespace MdmaMdmaC12mdr{    ///<MDMA channel x Mask Data          register
        using Addr = Register::Address<0x52000374,0x00000000,0x00000000,std::uint32_t>;
        ///Mask data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdr{}; 
    }
    namespace MdmaMdmaC13isr{    ///<MDMA channel x interrupt/status          register
        using Addr = Register::Address<0x52000380,0xfffeffe0,0x00000000,std::uint32_t>;
        ///Channel x transfer error interrupt flag              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif13{}; 
        ///Channel x Channel Transfer Complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register. CTC is set when the              last block was transferred and the channel has been              automatically disabled. CTC is also set when the              channel is suspended, as a result of writing EN bit              to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif13{}; 
        ///Channel x block repeat transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brtif13{}; 
        ///Channel x block transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btif13{}; 
        ///channel x buffer transfer              complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcif13{}; 
        ///channel x request active              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> crqa13{}; 
    }
    namespace MdmaMdmaC13ifcr{    ///<MDMA channel x interrupt flag clear          register
        using Addr = Register::Address<0x52000384,0xffffffe0,0x00000000,std::uint32_t>;
        ///Channel x clear transfer error interrupt              flag Writing a 1 into this bit clears TEIFx in the              MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif13{}; 
        ///Clear Channel transfer complete              interrupt flag for channel x Writing a 1 into this              bit clears CTCIFx in the MDMA_ISRy              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cctcif13{}; 
        ///Channel x clear block repeat transfer              complete interrupt flag Writing a 1 into this bit              clears BRTIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cbrtif13{}; 
        ///Channel x Clear block transfer complete              interrupt flag Writing a 1 into this bit clears BTIFx              in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cbtif13{}; 
        ///CLear buffer Transfer Complete Interrupt              Flag for channel x Writing a 1 into this bit clears              TCIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cltcif13{}; 
    }
    namespace MdmaMdmaC13esr{    ///<MDMA Channel x error status          register
        using Addr = Register::Address<0x52000388,0xfffff000,0x00000000,std::uint32_t>;
        ///Transfer Error Address These bits are              set and cleared by HW, in case of an MDMA data              transfer error. It is used in conjunction with TED.              This field indicates the 7 LSBits of the address              which generated a transfer/access error. It may be              used by SW to retrieve the failing address, by adding              this value (truncated to the buffer transfer length              size) to the current SAR/DAR value. Note: The SAR/DAR              current value doesnt reflect this last address due to              the FIFO management system. The SAR/DAR are only              updated at the end of a (buffer) transfer (of TLEN+1              bytes). Note: It is not set in case of a link data              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tea{}; 
        ///Transfer Error Direction These bit is              set and cleared by HW, in case of an MDMA data              transfer error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ted{}; 
        ///Transfer Error Link Data These bit is              set by HW, in case of a transfer error while reading              the block link data structure. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teld{}; 
        ///Transfer Error Mask Data These bit is              set by HW, in case of a transfer error while writing              the Mask Data. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> temd{}; 
        ///Address/Size Error These bit is set by              HW, when the programmed address is not aligned with              the data size. TED will indicate whether the problem              is on the source or destination. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ase{}; 
        ///Block Size Error These bit is set by HW,              when the block size is not an integer multiple of the              data size either for source or destination. TED will              indicate whether the problem is on the source or              destination. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bse{}; 
    }
    namespace MdmaMdmaC13cr{    ///<This register is used to control the          concerned channel.
        using Addr = Register::Address<0x5200038c,0xfffe8f00,0x00000000,std::uint32_t>;
        ///channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Channel Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///Block Repeat transfer interrupt enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brtie{}; 
        ///Block Transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btie{}; 
        ///buffer Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Priority level These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pl{}; 
        ///byte Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bex{}; 
        ///Half word Endianes              exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> hex{}; 
        ///Word Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wex{}; 
        ///SW ReQuest Writing a 1 into this bit              sets the CRQAx in MDMA_ISRy register, activating the              request on Channel x Note: Either the whole CxCR              register or the 8-bit/16-bit register @ Address              offset: 0x4E + 0x40 chn may be used for SWRQ              activation. In case of a SW request, acknowledge is              not generated (neither HW signal, nor CxMAR write              access).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrq{}; 
    }
    namespace MdmaMdmaC13tcr{    ///<This register is used to configure the          concerned channel.
        using Addr = Register::Address<0x52000390,0x00000000,0x00000000,std::uint32_t>;
        ///Source increment mode These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0 Note: When source is              AHB (SBUS=1), SINC = 00 is forbidden. In Linked List              Mode, at the end of a block (single or last block in              repeated block transfer mode), this register will be              loaded from memory (from address given by current              LAR[31:0] + 0x00).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sinc{}; 
        ///Destination increment mode These bits              are set and cleared by software. These bits are              protected and can be written only if EN is 0 Note:              When destination is AHB (DBUS=1), DINC = 00 is              forbidden.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dinc{}; 
        ///Source data size These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0 Note: If a value of 11 is              programmed for the TCM access/AHB port, a transfer              error will occur (TEIF bit set) If SINCOS &lt;              SSIZE and SINC &#8800; 00, the result will be              unpredictable. Note: SSIZE = 11 (double-word) is              forbidden when source is TCM/AHB bus              (SBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Destination data size These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0. Note: If a value of              11 is programmed for the TCM access/AHB port, a              transfer error will occur (TEIF bit set) If DINCOS              &lt; DSIZE and DINC &#8800; 00, the result              will be unpredictable. Note: DSIZE = 11 (double-word)              is forbidden when destination is TCM/AHB bus              (DBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///source increment offset              size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sincos{}; 
        ///Destination increment              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> dincos{}; 
        ///source burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sburst{}; 
        ///Destination burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dburst{}; 
        ///buffer transfer lengh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,18),Register::ReadWriteAccess,unsigned> tlen{}; 
        ///PacK Enable These bit is set and cleared              by software. If the Source Size is smaller than the              destination, it will be padded according to the PAM              value. If the Source data size is larger than the              destination one, it will be truncated. The alignment              will be done according to the PAM[0] value. This bit              is protected and can be written only if EN is              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pke{}; 
        ///Padding/Alignement Mode These bits are              set and cleared by software. Case 1: Source data size              smaller than destination data size - 3 options are              valid. Case 2: Source data size larger than              destination data size. The remainder part is              discarded. When PKE = 1 or DSIZE=SSIZE, these bits              are ignored. These bits are protected and can be              written only if EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pam{}; 
        ///Trigger Mode These bits are set and              cleared by software. Note: If TRGM is 11 for the              current block, all the values loaded at the end of              the current block through the linked list mechanism              must keep the same value (TRGM=11) and the same SWRM              value, otherwise the result is undefined. These bits              are protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> trgm{}; 
        ///SW Request Mode This bit is set and              cleared by software. If a HW or SW request is              currently active, the bit change will be delayed              until the current transfer is completed. If the CxMAR              contains a valid address, the CxMDR value will also              be written @ CxMAR address. This bit is protected and              can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swrm{}; 
        ///Bufferable Write Mode This bit is set              and cleared by software. This bit is protected and              can be written only if EN is 0. Note: All MDMA              destination accesses are non-cacheable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bwm{}; 
    }
    namespace MdmaMdmaC13bndtr{    ///<MDMA Channel x block number of data          register
        using Addr = Register::Address<0x52000394,0x00020000,0x00000000,std::uint32_t>;
        ///block number of data to              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> bndt{}; 
        ///Block Repeat Source address Update Mode              These bits are protected and can be written only if              EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> brsum{}; 
        ///Block Repeat Destination address Update              Mode These bits are protected and can be written only              if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> brdum{}; 
        ///Block Repeat Count This field contains              the number of repetitions of the current block (0 to              4095). When the channel is enabled, this register is              read-only, indicating the remaining number of blocks,              excluding the current one. This register decrements              after each complete block transfer. Once the last              block transfer has completed, this register can              either stay at zero or be reloaded automatically from              memory (in Linked List mode - i.e. Link Address              valid). These bits are protected and can be written              only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> brc{}; 
    }
    namespace MdmaMdmaC13sar{    ///<MDMA channel x source address          register
        using Addr = Register::Address<0x52000398,0x00000000,0x00000000,std::uint32_t>;
        ///source adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace MdmaMdmaC13dar{    ///<MDMA channel x destination address          register
        using Addr = Register::Address<0x5200039c,0x00000000,0x00000000,std::uint32_t>;
        ///Destination adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace MdmaMdmaC13brur{    ///<MDMA channel x Block Repeat address Update          register
        using Addr = Register::Address<0x520003a0,0x00000000,0x00000000,std::uint32_t>;
        ///source adresse update              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> suv{}; 
        ///destination address update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> duv{}; 
    }
    namespace MdmaMdmaC13lar{    ///<MDMA channel x Link Address          register
        using Addr = Register::Address<0x520003a4,0x00000000,0x00000000,std::uint32_t>;
        ///Link address register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lar{}; 
    }
    namespace MdmaMdmaC13tbr{    ///<MDMA channel x Trigger and Bus selection          Register
        using Addr = Register::Address<0x520003a8,0xfffcffc0,0x00000000,std::uint32_t>;
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tsel{}; 
        ///Source BUS select This bit is protected              and can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbus{}; 
        ///Destination BUS slect This bit is              protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbus{}; 
    }
    namespace MdmaMdmaC13mar{    ///<MDMA channel x Mask address          register
        using Addr = Register::Address<0x520003b0,0x00000000,0x00000000,std::uint32_t>;
        ///Mask address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mar{}; 
    }
    namespace MdmaMdmaC13mdr{    ///<MDMA channel x Mask Data          register
        using Addr = Register::Address<0x520003b4,0x00000000,0x00000000,std::uint32_t>;
        ///Mask data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdr{}; 
    }
    namespace MdmaMdmaC14isr{    ///<MDMA channel x interrupt/status          register
        using Addr = Register::Address<0x520003c0,0xfffeffe0,0x00000000,std::uint32_t>;
        ///Channel x transfer error interrupt flag              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif14{}; 
        ///Channel x Channel Transfer Complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register. CTC is set when the              last block was transferred and the channel has been              automatically disabled. CTC is also set when the              channel is suspended, as a result of writing EN bit              to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif14{}; 
        ///Channel x block repeat transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brtif14{}; 
        ///Channel x block transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btif14{}; 
        ///channel x buffer transfer              complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcif14{}; 
        ///channel x request active              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> crqa14{}; 
    }
    namespace MdmaMdmaC14ifcr{    ///<MDMA channel x interrupt flag clear          register
        using Addr = Register::Address<0x520003c4,0xffffffe0,0x00000000,std::uint32_t>;
        ///Channel x clear transfer error interrupt              flag Writing a 1 into this bit clears TEIFx in the              MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif14{}; 
        ///Clear Channel transfer complete              interrupt flag for channel x Writing a 1 into this              bit clears CTCIFx in the MDMA_ISRy              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cctcif14{}; 
        ///Channel x clear block repeat transfer              complete interrupt flag Writing a 1 into this bit              clears BRTIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cbrtif14{}; 
        ///Channel x Clear block transfer complete              interrupt flag Writing a 1 into this bit clears BTIFx              in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cbtif14{}; 
        ///CLear buffer Transfer Complete Interrupt              Flag for channel x Writing a 1 into this bit clears              TCIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cltcif14{}; 
    }
    namespace MdmaMdmaC14esr{    ///<MDMA Channel x error status          register
        using Addr = Register::Address<0x520003c8,0xfffff000,0x00000000,std::uint32_t>;
        ///Transfer Error Address These bits are              set and cleared by HW, in case of an MDMA data              transfer error. It is used in conjunction with TED.              This field indicates the 7 LSBits of the address              which generated a transfer/access error. It may be              used by SW to retrieve the failing address, by adding              this value (truncated to the buffer transfer length              size) to the current SAR/DAR value. Note: The SAR/DAR              current value doesnt reflect this last address due to              the FIFO management system. The SAR/DAR are only              updated at the end of a (buffer) transfer (of TLEN+1              bytes). Note: It is not set in case of a link data              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tea{}; 
        ///Transfer Error Direction These bit is              set and cleared by HW, in case of an MDMA data              transfer error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ted{}; 
        ///Transfer Error Link Data These bit is              set by HW, in case of a transfer error while reading              the block link data structure. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teld{}; 
        ///Transfer Error Mask Data These bit is              set by HW, in case of a transfer error while writing              the Mask Data. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> temd{}; 
        ///Address/Size Error These bit is set by              HW, when the programmed address is not aligned with              the data size. TED will indicate whether the problem              is on the source or destination. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ase{}; 
        ///Block Size Error These bit is set by HW,              when the block size is not an integer multiple of the              data size either for source or destination. TED will              indicate whether the problem is on the source or              destination. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bse{}; 
    }
    namespace MdmaMdmaC14cr{    ///<This register is used to control the          concerned channel.
        using Addr = Register::Address<0x520003cc,0xfffe8f00,0x00000000,std::uint32_t>;
        ///channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Channel Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///Block Repeat transfer interrupt enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brtie{}; 
        ///Block Transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btie{}; 
        ///buffer Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Priority level These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pl{}; 
        ///byte Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bex{}; 
        ///Half word Endianes              exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> hex{}; 
        ///Word Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wex{}; 
        ///SW ReQuest Writing a 1 into this bit              sets the CRQAx in MDMA_ISRy register, activating the              request on Channel x Note: Either the whole CxCR              register or the 8-bit/16-bit register @ Address              offset: 0x4E + 0x40 chn may be used for SWRQ              activation. In case of a SW request, acknowledge is              not generated (neither HW signal, nor CxMAR write              access).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrq{}; 
    }
    namespace MdmaMdmaC14tcr{    ///<This register is used to configure the          concerned channel.
        using Addr = Register::Address<0x520003d0,0x00000000,0x00000000,std::uint32_t>;
        ///Source increment mode These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0 Note: When source is              AHB (SBUS=1), SINC = 00 is forbidden. In Linked List              Mode, at the end of a block (single or last block in              repeated block transfer mode), this register will be              loaded from memory (from address given by current              LAR[31:0] + 0x00).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sinc{}; 
        ///Destination increment mode These bits              are set and cleared by software. These bits are              protected and can be written only if EN is 0 Note:              When destination is AHB (DBUS=1), DINC = 00 is              forbidden.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dinc{}; 
        ///Source data size These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0 Note: If a value of 11 is              programmed for the TCM access/AHB port, a transfer              error will occur (TEIF bit set) If SINCOS &lt;              SSIZE and SINC &#8800; 00, the result will be              unpredictable. Note: SSIZE = 11 (double-word) is              forbidden when source is TCM/AHB bus              (SBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Destination data size These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0. Note: If a value of              11 is programmed for the TCM access/AHB port, a              transfer error will occur (TEIF bit set) If DINCOS              &lt; DSIZE and DINC &#8800; 00, the result              will be unpredictable. Note: DSIZE = 11 (double-word)              is forbidden when destination is TCM/AHB bus              (DBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///source increment offset              size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sincos{}; 
        ///Destination increment              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> dincos{}; 
        ///source burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sburst{}; 
        ///Destination burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dburst{}; 
        ///buffer transfer lengh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,18),Register::ReadWriteAccess,unsigned> tlen{}; 
        ///PacK Enable These bit is set and cleared              by software. If the Source Size is smaller than the              destination, it will be padded according to the PAM              value. If the Source data size is larger than the              destination one, it will be truncated. The alignment              will be done according to the PAM[0] value. This bit              is protected and can be written only if EN is              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pke{}; 
        ///Padding/Alignement Mode These bits are              set and cleared by software. Case 1: Source data size              smaller than destination data size - 3 options are              valid. Case 2: Source data size larger than              destination data size. The remainder part is              discarded. When PKE = 1 or DSIZE=SSIZE, these bits              are ignored. These bits are protected and can be              written only if EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pam{}; 
        ///Trigger Mode These bits are set and              cleared by software. Note: If TRGM is 11 for the              current block, all the values loaded at the end of              the current block through the linked list mechanism              must keep the same value (TRGM=11) and the same SWRM              value, otherwise the result is undefined. These bits              are protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> trgm{}; 
        ///SW Request Mode This bit is set and              cleared by software. If a HW or SW request is              currently active, the bit change will be delayed              until the current transfer is completed. If the CxMAR              contains a valid address, the CxMDR value will also              be written @ CxMAR address. This bit is protected and              can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swrm{}; 
        ///Bufferable Write Mode This bit is set              and cleared by software. This bit is protected and              can be written only if EN is 0. Note: All MDMA              destination accesses are non-cacheable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bwm{}; 
    }
    namespace MdmaMdmaC14bndtr{    ///<MDMA Channel x block number of data          register
        using Addr = Register::Address<0x520003d4,0x00020000,0x00000000,std::uint32_t>;
        ///block number of data to              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> bndt{}; 
        ///Block Repeat Source address Update Mode              These bits are protected and can be written only if              EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> brsum{}; 
        ///Block Repeat Destination address Update              Mode These bits are protected and can be written only              if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> brdum{}; 
        ///Block Repeat Count This field contains              the number of repetitions of the current block (0 to              4095). When the channel is enabled, this register is              read-only, indicating the remaining number of blocks,              excluding the current one. This register decrements              after each complete block transfer. Once the last              block transfer has completed, this register can              either stay at zero or be reloaded automatically from              memory (in Linked List mode - i.e. Link Address              valid). These bits are protected and can be written              only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> brc{}; 
    }
    namespace MdmaMdmaC14sar{    ///<MDMA channel x source address          register
        using Addr = Register::Address<0x520003d8,0x00000000,0x00000000,std::uint32_t>;
        ///source adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace MdmaMdmaC14dar{    ///<MDMA channel x destination address          register
        using Addr = Register::Address<0x520003dc,0x00000000,0x00000000,std::uint32_t>;
        ///Destination adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace MdmaMdmaC14brur{    ///<MDMA channel x Block Repeat address Update          register
        using Addr = Register::Address<0x520003e0,0x00000000,0x00000000,std::uint32_t>;
        ///source adresse update              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> suv{}; 
        ///destination address update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> duv{}; 
    }
    namespace MdmaMdmaC14lar{    ///<MDMA channel x Link Address          register
        using Addr = Register::Address<0x520003e4,0x00000000,0x00000000,std::uint32_t>;
        ///Link address register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lar{}; 
    }
    namespace MdmaMdmaC14tbr{    ///<MDMA channel x Trigger and Bus selection          Register
        using Addr = Register::Address<0x520003e8,0xfffcffc0,0x00000000,std::uint32_t>;
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tsel{}; 
        ///Source BUS select This bit is protected              and can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbus{}; 
        ///Destination BUS slect This bit is              protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbus{}; 
    }
    namespace MdmaMdmaC14mar{    ///<MDMA channel x Mask address          register
        using Addr = Register::Address<0x520003f0,0x00000000,0x00000000,std::uint32_t>;
        ///Mask address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mar{}; 
    }
    namespace MdmaMdmaC14mdr{    ///<MDMA channel x Mask Data          register
        using Addr = Register::Address<0x520003f4,0x00000000,0x00000000,std::uint32_t>;
        ///Mask data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdr{}; 
    }
    namespace MdmaMdmaC15isr{    ///<MDMA channel x interrupt/status          register
        using Addr = Register::Address<0x52000400,0xfffeffe0,0x00000000,std::uint32_t>;
        ///Channel x transfer error interrupt flag              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif15{}; 
        ///Channel x Channel Transfer Complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register. CTC is set when the              last block was transferred and the channel has been              automatically disabled. CTC is also set when the              channel is suspended, as a result of writing EN bit              to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif15{}; 
        ///Channel x block repeat transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brtif15{}; 
        ///Channel x block transfer complete              interrupt flag This bit is set by hardware. It is              cleared by software writing 1 to the corresponding              bit in the DMA_IFCRy register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btif15{}; 
        ///channel x buffer transfer              complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcif15{}; 
        ///channel x request active              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> crqa15{}; 
    }
    namespace MdmaMdmaC15ifcr{    ///<MDMA channel x interrupt flag clear          register
        using Addr = Register::Address<0x52000404,0xffffffe0,0x00000000,std::uint32_t>;
        ///Channel x clear transfer error interrupt              flag Writing a 1 into this bit clears TEIFx in the              MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif15{}; 
        ///Clear Channel transfer complete              interrupt flag for channel x Writing a 1 into this              bit clears CTCIFx in the MDMA_ISRy              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cctcif15{}; 
        ///Channel x clear block repeat transfer              complete interrupt flag Writing a 1 into this bit              clears BRTIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cbrtif15{}; 
        ///Channel x Clear block transfer complete              interrupt flag Writing a 1 into this bit clears BTIFx              in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cbtif15{}; 
        ///CLear buffer Transfer Complete Interrupt              Flag for channel x Writing a 1 into this bit clears              TCIFx in the MDMA_ISRy register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cltcif15{}; 
    }
    namespace MdmaMdmaC15esr{    ///<MDMA Channel x error status          register
        using Addr = Register::Address<0x52000408,0xfffff000,0x00000000,std::uint32_t>;
        ///Transfer Error Address These bits are              set and cleared by HW, in case of an MDMA data              transfer error. It is used in conjunction with TED.              This field indicates the 7 LSBits of the address              which generated a transfer/access error. It may be              used by SW to retrieve the failing address, by adding              this value (truncated to the buffer transfer length              size) to the current SAR/DAR value. Note: The SAR/DAR              current value doesnt reflect this last address due to              the FIFO management system. The SAR/DAR are only              updated at the end of a (buffer) transfer (of TLEN+1              bytes). Note: It is not set in case of a link data              error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tea{}; 
        ///Transfer Error Direction These bit is              set and cleared by HW, in case of an MDMA data              transfer error.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ted{}; 
        ///Transfer Error Link Data These bit is              set by HW, in case of a transfer error while reading              the block link data structure. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teld{}; 
        ///Transfer Error Mask Data These bit is              set by HW, in case of a transfer error while writing              the Mask Data. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> temd{}; 
        ///Address/Size Error These bit is set by              HW, when the programmed address is not aligned with              the data size. TED will indicate whether the problem              is on the source or destination. It is cleared by              software writing 1 to the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ase{}; 
        ///Block Size Error These bit is set by HW,              when the block size is not an integer multiple of the              data size either for source or destination. TED will              indicate whether the problem is on the source or              destination. It is cleared by software writing 1 to              the CTEIFx bit in the DMA_IFCRy              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bse{}; 
    }
    namespace MdmaMdmaC15cr{    ///<This register is used to control the          concerned channel.
        using Addr = Register::Address<0x5200040c,0xfffe8f00,0x00000000,std::uint32_t>;
        ///channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Channel Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///Block Repeat transfer interrupt enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brtie{}; 
        ///Block Transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btie{}; 
        ///buffer Transfer Complete interrupt              enable This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Priority level These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pl{}; 
        ///byte Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bex{}; 
        ///Half word Endianes              exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> hex{}; 
        ///Word Endianness exchange
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wex{}; 
        ///SW ReQuest Writing a 1 into this bit              sets the CRQAx in MDMA_ISRy register, activating the              request on Channel x Note: Either the whole CxCR              register or the 8-bit/16-bit register @ Address              offset: 0x4E + 0x40 chn may be used for SWRQ              activation. In case of a SW request, acknowledge is              not generated (neither HW signal, nor CxMAR write              access).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrq{}; 
    }
    namespace MdmaMdmaC15tcr{    ///<This register is used to configure the          concerned channel.
        using Addr = Register::Address<0x52000410,0x00000000,0x00000000,std::uint32_t>;
        ///Source increment mode These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0 Note: When source is              AHB (SBUS=1), SINC = 00 is forbidden. In Linked List              Mode, at the end of a block (single or last block in              repeated block transfer mode), this register will be              loaded from memory (from address given by current              LAR[31:0] + 0x00).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sinc{}; 
        ///Destination increment mode These bits              are set and cleared by software. These bits are              protected and can be written only if EN is 0 Note:              When destination is AHB (DBUS=1), DINC = 00 is              forbidden.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dinc{}; 
        ///Source data size These bits are set and              cleared by software. These bits are protected and can              be written only if EN is 0 Note: If a value of 11 is              programmed for the TCM access/AHB port, a transfer              error will occur (TEIF bit set) If SINCOS &lt;              SSIZE and SINC &#8800; 00, the result will be              unpredictable. Note: SSIZE = 11 (double-word) is              forbidden when source is TCM/AHB bus              (SBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Destination data size These bits are set              and cleared by software. These bits are protected and              can be written only if EN is 0. Note: If a value of              11 is programmed for the TCM access/AHB port, a              transfer error will occur (TEIF bit set) If DINCOS              &lt; DSIZE and DINC &#8800; 00, the result              will be unpredictable. Note: DSIZE = 11 (double-word)              is forbidden when destination is TCM/AHB bus              (DBUS=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///source increment offset              size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sincos{}; 
        ///Destination increment              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> dincos{}; 
        ///source burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sburst{}; 
        ///Destination burst transfer              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dburst{}; 
        ///buffer transfer lengh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,18),Register::ReadWriteAccess,unsigned> tlen{}; 
        ///PacK Enable These bit is set and cleared              by software. If the Source Size is smaller than the              destination, it will be padded according to the PAM              value. If the Source data size is larger than the              destination one, it will be truncated. The alignment              will be done according to the PAM[0] value. This bit              is protected and can be written only if EN is              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pke{}; 
        ///Padding/Alignement Mode These bits are              set and cleared by software. Case 1: Source data size              smaller than destination data size - 3 options are              valid. Case 2: Source data size larger than              destination data size. The remainder part is              discarded. When PKE = 1 or DSIZE=SSIZE, these bits              are ignored. These bits are protected and can be              written only if EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pam{}; 
        ///Trigger Mode These bits are set and              cleared by software. Note: If TRGM is 11 for the              current block, all the values loaded at the end of              the current block through the linked list mechanism              must keep the same value (TRGM=11) and the same SWRM              value, otherwise the result is undefined. These bits              are protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> trgm{}; 
        ///SW Request Mode This bit is set and              cleared by software. If a HW or SW request is              currently active, the bit change will be delayed              until the current transfer is completed. If the CxMAR              contains a valid address, the CxMDR value will also              be written @ CxMAR address. This bit is protected and              can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swrm{}; 
        ///Bufferable Write Mode This bit is set              and cleared by software. This bit is protected and              can be written only if EN is 0. Note: All MDMA              destination accesses are non-cacheable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bwm{}; 
    }
    namespace MdmaMdmaC15bndtr{    ///<MDMA Channel x block number of data          register
        using Addr = Register::Address<0x52000414,0x00020000,0x00000000,std::uint32_t>;
        ///block number of data to              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> bndt{}; 
        ///Block Repeat Source address Update Mode              These bits are protected and can be written only if              EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> brsum{}; 
        ///Block Repeat Destination address Update              Mode These bits are protected and can be written only              if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> brdum{}; 
        ///Block Repeat Count This field contains              the number of repetitions of the current block (0 to              4095). When the channel is enabled, this register is              read-only, indicating the remaining number of blocks,              excluding the current one. This register decrements              after each complete block transfer. Once the last              block transfer has completed, this register can              either stay at zero or be reloaded automatically from              memory (in Linked List mode - i.e. Link Address              valid). These bits are protected and can be written              only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> brc{}; 
    }
    namespace MdmaMdmaC15sar{    ///<MDMA channel x source address          register
        using Addr = Register::Address<0x52000418,0x00000000,0x00000000,std::uint32_t>;
        ///source adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace MdmaMdmaC15dar{    ///<MDMA channel x destination address          register
        using Addr = Register::Address<0x5200041c,0x00000000,0x00000000,std::uint32_t>;
        ///Destination adr base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace MdmaMdmaC15brur{    ///<MDMA channel x Block Repeat address Update          register
        using Addr = Register::Address<0x52000420,0x00000000,0x00000000,std::uint32_t>;
        ///source adresse update              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> suv{}; 
        ///destination address update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> duv{}; 
    }
    namespace MdmaMdmaC15lar{    ///<MDMA channel x Link Address          register
        using Addr = Register::Address<0x52000424,0x00000000,0x00000000,std::uint32_t>;
        ///Link address register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lar{}; 
    }
    namespace MdmaMdmaC15tbr{    ///<MDMA channel x Trigger and Bus selection          Register
        using Addr = Register::Address<0x52000428,0xfffcffc0,0x00000000,std::uint32_t>;
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tsel{}; 
        ///Source BUS select This bit is protected              and can be written only if EN is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbus{}; 
        ///Destination BUS slect This bit is              protected and can be written only if EN is              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbus{}; 
    }
    namespace MdmaMdmaC15mar{    ///<MDMA channel x Mask address          register
        using Addr = Register::Address<0x52000430,0x00000000,0x00000000,std::uint32_t>;
        ///Mask address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mar{}; 
    }
    namespace MdmaMdmaC15mdr{    ///<MDMA channel x Mask Data          register
        using Addr = Register::Address<0x52000434,0x00000000,0x00000000,std::uint32_t>;
        ///Mask data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mdr{}; 
    }
}
