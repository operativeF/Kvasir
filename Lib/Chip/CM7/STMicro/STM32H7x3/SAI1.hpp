#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//SAI
    namespace Sai1SaiGcr{    ///<Global configuration register
        using Addr = Register::Address<0x40015800,0xffffffcc,0x00000000,std::uint32_t>;
        ///Synchronization outputs These bits are              set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> syncout{}; 
        ///Synchronization inputs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> syncin{}; 
    }
    namespace Sai1SaiAcr1{    ///<Configuration register 1
        using Addr = Register::Address<0x40015804,0xfb04c010,0x00000000,std::uint32_t>;
        ///SAIx audio block mode              immediately
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Protocol configuration. These bits are              set and cleared by software. These bits have to be              configured when the audio block is              disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> prtcfg{}; 
        ///Data size. These bits are set and              cleared by software. These bits are ignored when the              SPDIF protocols are selected (bit PRTCFG[1:0]),              because the frame and the data size are fixed in such              case. When the companding mode is selected through              COMP[1:0] bits, DS[1:0] are ignored since the data              size is fixed to 8 bits by the algorithm. These bits              must be configured when the audio block is              disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> ds{}; 
        ///Least significant bit first. This bit is              set and cleared by software. It must be configured              when the audio block is disabled. This bit has no              meaning in AC97 audio protocol since AC97 data are              always transferred with the MSB first. This bit has              no meaning in SPDIF audio protocol since in SPDIF              data are always transferred with LSB              first.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lsbfirst{}; 
        ///Clock strobing edge. This bit is set and              cleared by software. It must be configured when the              audio block is disabled. This bit has no meaning in              SPDIF audio protocol.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ckstr{}; 
        ///Synchronization enable. These bits are              set and cleared by software. They must be configured              when the audio sub-block is disabled. Note: The audio              sub-block should be configured as asynchronous when              SPDIF mode is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> syncen{}; 
        ///Mono mode. This bit is set and cleared              by software. It is meaningful only when the number of              slots is equal to 2. When the mono mode is selected,              slot 0 data are duplicated on slot 1 when the audio              block operates as a transmitter. In reception mode,              the slot1 is discarded and only the data received              from slot 0 are stored. Refer to Section: Mono/stereo              mode for more details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mono{}; 
        ///Output drive. This bit is set and              cleared by software. Note: This bit has to be set              before enabling the audio block and after the audio              block configuration.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> outdriv{}; 
        ///Audio block enable where x is A or B.              This bit is set by software. To switch off the audio              block, the application software must program this bit              to 0 and poll the bit till it reads back 0, meaning              that the block is completely disabled. Before setting              this bit to 1, check that it is set to 0, otherwise              the enable command will not be taken into account.              This bit allows to control the state of SAIx audio              block. If it is disabled when an audio frame transfer              is ongoing, the ongoing transfer completes and the              cell is fully disabled at the end of this audio frame              transfer. Note: When SAIx block is configured in              master mode, the clock must be present on the input              of SAIx before setting SAIXEN bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> saixen{}; 
        ///DMA enable. This bit is set and cleared              by software. Note: Since the audio block defaults to              operate as a transmitter after reset, the MODE[1:0]              bits must be configured before setting DMAEN to avoid              a DMA request in receiver mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///No divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nomck{}; 
        ///Master clock divider. These bits are set              and cleared by software. These bits are meaningless              when the audio block operates in slave mode. They              have to be configured when the audio block is              disabled. Others: the master clock frequency is              calculated accordingly to the following              formula:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> mckdiv{}; 
        ///Oversampling ratio for master              clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> osr{}; 
    }
    namespace Sai1SaiAcr2{    ///<Configuration register 2
        using Addr = Register::Address<0x40015808,0xffff0000,0x00000000,std::uint32_t>;
        ///FIFO threshold. This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> fth{}; 
        ///FIFO flush. This bit is set by software.              It is always read as 0. This bit should be configured              when the SAI is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fflush{}; 
        ///Tristate management on data line. This              bit is set and cleared by software. It is meaningful              only if the audio block is configured as a              transmitter. This bit is not used when the audio              block is configured in SPDIF mode. It should be              configured when SAI is disabled. Refer to Section:              Output data line management on an inactive slot for              more details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tris{}; 
        ///Mute. This bit is set and cleared by              software. It is meaningful only when the audio block              operates as a transmitter. The MUTE value is linked              to value of MUTEVAL if the number of slots is lower              or equal to 2, or equal to 0 if it is greater than 2.              Refer to Section: Mute mode for more details. Note:              This bit is meaningless and should not be used for              SPDIF audio blocks.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mute{}; 
        ///Mute value. This bit is set and cleared              by software.It must be written before enabling the              audio block: SAIXEN. This bit is meaningful only when              the audio block operates as a transmitter, the number              of slots is lower or equal to 2 and the MUTE bit is              set. If more slots are declared, the bit value sent              during the transmission in mute mode is equal to 0,              whatever the value of MUTEVAL. if the number of slot              is lower or equal to 2 and MUTEVAL = 1, the MUTE              value transmitted for each slot is the one sent              during the previous frame. Refer to Section: Mute              mode for more details. Note: This bit is meaningless              and should not be used for SPDIF audio              blocks.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> muteval{}; 
        ///Mute counter. These bits are set and              cleared by software. They are used only in reception              mode. The value set in these bits is compared to the              number of consecutive mute frames detected in              reception. When the number of mute frames is equal to              this value, the flag MUTEDET will be set and an              interrupt will be generated if bit MUTEDETIE is set.              Refer to Section: Mute mode for more              details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> mutecnt{}; 
        ///Complement bit. This bit is set and              cleared by software. It defines the type of              complement to be used for companding mode Note: This              bit has effect only when the companding mode is -Law              algorithm or A-Law algorithm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cpl{}; 
        ///Companding mode. These bits are set and              cleared by software. The -Law and the A-Law log are a              part of the CCITT G.711 recommendation, the type of              complement that will be used depends on CPL bit. The              data expansion or data compression are determined by              the state of bit MODE[0]. The data compression is              applied if the audio block is configured as a              transmitter. The data expansion is automatically              applied when the audio block is configured as a              receiver. Refer to Section: Companding mode for more              details. Note: Companding mode is applicable only              when TDM is selected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> comp{}; 
    }
    namespace Sai1SaiAfrcr{    ///<This register has no meaning in AC97 and          SPDIF audio protocol
        using Addr = Register::Address<0x4001580c,0xfff88000,0x00000000,std::uint32_t>;
        ///Frame length. These bits are set and              cleared by software. They define the audio frame              length expressed in number of SCK clock cycles: the              number of bits in the frame is equal to FRL[7:0] + 1.              The minimum number of bits to transfer in an audio              frame must be equal to 8, otherwise the audio block              will behaves in an unexpected way. This is the case              when the data size is 8 bits and only one slot 0 is              defined in NBSLOT[4:0] of SAI_xSLOTR register              (NBSLOT[3:0] = 0000). In master mode, if the master              clock (available on MCLK_x pin) is used, the frame              length should be aligned with a number equal to a              power of 2, ranging from 8 to 256. When the master              clock is not used (NODIV = 1), it is recommended to              program the frame length to an value ranging from 8              to 256. These bits are meaningless and are not used              in AC97 or SPDIF audio block              configuration.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frl{}; 
        ///Frame synchronization active level              length. These bits are set and cleared by software.              They specify the length in number of bit clock (SCK)              + 1 (FSALL[6:0] + 1) of the active level of the FS              signal in the audio frame These bits are meaningless              and are not used in AC97 or SPDIF audio block              configuration. They must be configured when the audio              block is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fsall{}; 
        ///Frame synchronization definition. This              bit is set and cleared by software. When the bit is              set, the number of slots defined in the SAI_xSLOTR              register has to be even. It means that half of this              number of slots will be dedicated to the left channel              and the other slots for the right channel (e.g: this              bit has to be set for I2S or MSB/LSB-justified              protocols...). This bit is meaningless and is not              used in AC97 or SPDIF audio block configuration. It              must be configured when the audio block is              disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fsdef{}; 
        ///Frame synchronization polarity. This bit              is set and cleared by software. It is used to              configure the level of the start of frame on the FS              signal. It is meaningless and is not used in AC97 or              SPDIF audio block configuration. This bit must be              configured when the audio block is              disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fspol{}; 
        ///Frame synchronization offset. This bit              is set and cleared by software. It is meaningless and              is not used in AC97 or SPDIF audio block              configuration. This bit must be configured when the              audio block is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fsoff{}; 
    }
    namespace Sai1SaiAslotr{    ///<This register has no meaning in AC97 and          SPDIF audio protocol
        using Addr = Register::Address<0x40015810,0x0000f020,0x00000000,std::uint32_t>;
        ///First bit offset These bits are set and              cleared by software. The value set in this bitfield              defines the position of the first data transfer bit              in the slot. It represents an offset value. In              transmission mode, the bits outside the data field              are forced to 0. In reception mode, the extra              received bits are discarded. These bits must be set              when the audio block is disabled. They are ignored in              AC97 or SPDIF mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> fboff{}; 
        ///Slot size This bits is set and cleared              by software. The slot size must be higher or equal to              the data size. If this condition is not respected,              the behavior of the SAI will be undetermined. Refer              to Section: Output data line management on an              inactive slot for information on how to drive SD              line. These bits must be set when the audio block is              disabled. They are ignored in AC97 or SPDIF              mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> slotsz{}; 
        ///Number of slots in an audio frame. These              bits are set and cleared by software. The value set              in this bitfield represents the number of slots + 1              in the audio frame (including the number of inactive              slots). The maximum number of slots is 16. The number              of slots should be even if FSDEF bit in the SAI_xFRCR              register is set. The number of slots must be              configured when the audio block is disabled. They are              ignored in AC97 or SPDIF mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nbslot{}; 
        ///Slot enable. These bits are set and              cleared by software. Each SLOTEN bit corresponds to a              slot position from 0 to 15 (maximum 16 slots). The              slot must be enabled when the audio block is              disabled. They are ignored in AC97 or SPDIF              mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> sloten{}; 
    }
    namespace Sai1SaiAim{    ///<Interrupt mask register 2
        using Addr = Register::Address<0x40015814,0xffffff80,0x00000000,std::uint32_t>;
        ///Overrun/underrun interrupt enable. This              bit is set and cleared by software. When this bit is              set, an interrupt is generated if the OVRUDR bit in              the SAI_xSR register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudrie{}; 
        ///Mute detection interrupt enable. This              bit is set and cleared by software. When this bit is              set, an interrupt is generated if the MUTEDET bit in              the SAI_xSR register is set. This bit has a meaning              only if the audio block is configured in receiver              mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedetie{}; 
        ///Wrong clock configuration interrupt              enable. This bit is set and cleared by software. This              bit is taken into account only if the audio block is              configured as a master (MODE[1] = 0) and NODIV = 0.              It generates an interrupt if the WCKCFG flag in the              SAI_xSR register is set. Note: This bit is used only              in TDM mode and is meaningless in other              modes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfgie{}; 
        ///FIFO request interrupt enable. This bit              is set and cleared by software. When this bit is set,              an interrupt is generated if the FREQ bit in the              SAI_xSR register is set. Since the audio block              defaults to operate as a transmitter after reset, the              MODE bit must be configured before setting FREQIE to              avoid a parasitic interruption in receiver              mode,
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freqie{}; 
        ///Codec not ready interrupt enable (AC97).              This bit is set and cleared by software. When the              interrupt is enabled, the audio block detects in the              slot 0 (tag0) of the AC97 frame if the Codec              connected to this line is ready or not. If it is not              ready, the CNRDY flag in the SAI_xSR register is set              and an interruption i generated. This bit has a              meaning only if the AC97 mode is selected through              PRTCFG[1:0] bits and the audio block is operates as a              receiver.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdyie{}; 
        ///Anticipated frame synchronization              detection interrupt enable. This bit is set and              cleared by software. When this bit is set, an              interrupt will be generated if the AFSDET bit in the              SAI_xSR register is set. This bit is meaningless in              AC97, SPDIF mode or when the audio block operates as              a master.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdetie{}; 
        ///Late frame synchronization detection              interrupt enable. This bit is set and cleared by              software. When this bit is set, an interrupt will be              generated if the LFSDET bit is set in the SAI_xSR              register. This bit is meaningless in AC97, SPDIF mode              or when the audio block operates as a              master.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdetie{}; 
    }
    namespace Sai1SaiAsr{    ///<Status register
        using Addr = Register::Address<0x40015818,0xfff8ff80,0x00000000,std::uint32_t>;
        ///Overrun / underrun. This bit is read              only. The overrun and underrun conditions can occur              only when the audio block is configured as a receiver              and a transmitter, respectively. It can generate an              interrupt if OVRUDRIE bit is set in SAI_xIM register.              This flag is cleared when the software sets COVRUDR              bit in SAI_xCLRFR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudr{}; 
        ///Mute detection. This bit is read only.              This flag is set if consecutive 0 values are received              in each slot of a given audio frame and for a              consecutive number of audio frames (set in the              MUTECNT bit in the SAI_xCR2 register). It can              generate an interrupt if MUTEDETIE bit is set in              SAI_xIM register. This flag is cleared when the              software sets bit CMUTEDET in the SAI_xCLRFR              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        ///Wrong clock configuration flag. This bit              is read only. This bit is used only when the audio              block operates in master mode (MODE[1] = 0) and NODIV              = 0. It can generate an interrupt if WCKCFGIE bit is              set in SAI_xIM register. This flag is cleared when              the software sets CWCKCFG bit in SAI_xCLRFR              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        ///FIFO request. This bit is read only. The              request depends on the audio block configuration: If              the block is configured in transmission mode, the              FIFO request is related to a write request operation              in the SAI_xDR. If the block configured in reception,              the FIFO request related to a read request operation              from the SAI_xDR. This flag can generate an interrupt              if FREQIE bit is set in SAI_xIM              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freq{}; 
        ///Codec not ready. This bit is read only.              This bit is used only when the AC97 audio protocol is              selected in the SAI_xCR1 register and configured in              receiver mode. It can generate an interrupt if              CNRDYIE bit is set in SAI_xIM register. This flag is              cleared when the software sets CCNRDY bit in              SAI_xCLRFR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdy{}; 
        ///Anticipated frame synchronization              detection. This bit is read only. This flag can be              set only if the audio block is configured in slave              mode. It is not used in AC97or SPDIF mode. It can              generate an interrupt if AFSDETIE bit is set in              SAI_xIM register. This flag is cleared when the              software sets CAFSDET bit in SAI_xCLRFR              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdet{}; 
        ///Late frame synchronization detection.              This bit is read only. This flag can be set only if              the audio block is configured in slave mode. It is              not used in AC97 or SPDIF mode. It can generate an              interrupt if LFSDETIE bit is set in the SAI_xIM              register. This flag is cleared when the software sets              bit CLFSDET in SAI_xCLRFR register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        ///FIFO level threshold. This bit is read              only. The FIFO level threshold flag is managed only              by hardware and its setting depends on SAI block              configuration (transmitter or receiver mode). If the              SAI block is configured as transmitter: If SAI block              is configured as receiver:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> flvl{}; 
    }
    namespace Sai1SaiAclrfr{    ///<Clear flag register
        using Addr = Register::Address<0x4001581c,0xffffff88,0x00000000,std::uint32_t>;
        ///Clear overrun / underrun. This bit is              write only. Programming this bit to 1 clears the              OVRUDR flag in the SAI_xSR register. Reading this bit              always returns the value 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covrudr{}; 
        ///Mute detection flag. This bit is write              only. Programming this bit to 1 clears the MUTEDET              flag in the SAI_xSR register. Reading this bit always              returns the value 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmutedet{}; 
        ///Clear wrong clock configuration flag.              This bit is write only. Programming this bit to 1              clears the WCKCFG flag in the SAI_xSR register. This              bit is used only when the audio block is set as              master (MODE[1] = 0) and NODIV = 0 in the SAI_xCR1              register. Reading this bit always returns the value              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cwckcfg{}; 
        ///Clear Codec not ready flag. This bit is              write only. Programming this bit to 1 clears the              CNRDY flag in the SAI_xSR register. This bit is used              only when the AC97 audio protocol is selected in the              SAI_xCR1 register. Reading this bit always returns              the value 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccnrdy{}; 
        ///Clear anticipated frame synchronization              detection flag. This bit is write only. Programming              this bit to 1 clears the AFSDET flag in the SAI_xSR              register. It is not used in AC97or SPDIF mode.              Reading this bit always returns the value              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cafsdet{}; 
        ///Clear late frame synchronization              detection flag. This bit is write only. Programming              this bit to 1 clears the LFSDET flag in the SAI_xSR              register. This bit is not used in AC97or SPDIF mode              Reading this bit always returns the value              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clfsdet{}; 
    }
    namespace Sai1SaiAdr{    ///<Data register
        using Addr = Register::Address<0x40015820,0x00000000,0x00000000,std::uint32_t>;
        ///Data A write to this register loads the              FIFO provided the FIFO is not full. A read from this              register empties the FIFO if the FIFO is not              empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Sai1SaiBcr1{    ///<Configuration register 1
        using Addr = Register::Address<0x40015824,0xfb04c010,0x00000000,std::uint32_t>;
        ///SAIx audio block mode              immediately
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Protocol configuration. These bits are              set and cleared by software. These bits have to be              configured when the audio block is              disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> prtcfg{}; 
        ///Data size. These bits are set and              cleared by software. These bits are ignored when the              SPDIF protocols are selected (bit PRTCFG[1:0]),              because the frame and the data size are fixed in such              case. When the companding mode is selected through              COMP[1:0] bits, DS[1:0] are ignored since the data              size is fixed to 8 bits by the algorithm. These bits              must be configured when the audio block is              disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> ds{}; 
        ///Least significant bit first. This bit is              set and cleared by software. It must be configured              when the audio block is disabled. This bit has no              meaning in AC97 audio protocol since AC97 data are              always transferred with the MSB first. This bit has              no meaning in SPDIF audio protocol since in SPDIF              data are always transferred with LSB              first.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lsbfirst{}; 
        ///Clock strobing edge. This bit is set and              cleared by software. It must be configured when the              audio block is disabled. This bit has no meaning in              SPDIF audio protocol.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ckstr{}; 
        ///Synchronization enable. These bits are              set and cleared by software. They must be configured              when the audio sub-block is disabled. Note: The audio              sub-block should be configured as asynchronous when              SPDIF mode is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> syncen{}; 
        ///Mono mode. This bit is set and cleared              by software. It is meaningful only when the number of              slots is equal to 2. When the mono mode is selected,              slot 0 data are duplicated on slot 1 when the audio              block operates as a transmitter. In reception mode,              the slot1 is discarded and only the data received              from slot 0 are stored. Refer to Section: Mono/stereo              mode for more details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mono{}; 
        ///Output drive. This bit is set and              cleared by software. Note: This bit has to be set              before enabling the audio block and after the audio              block configuration.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> outdriv{}; 
        ///Audio block enable where x is A or B.              This bit is set by software. To switch off the audio              block, the application software must program this bit              to 0 and poll the bit till it reads back 0, meaning              that the block is completely disabled. Before setting              this bit to 1, check that it is set to 0, otherwise              the enable command will not be taken into account.              This bit allows to control the state of SAIx audio              block. If it is disabled when an audio frame transfer              is ongoing, the ongoing transfer completes and the              cell is fully disabled at the end of this audio frame              transfer. Note: When SAIx block is configured in              master mode, the clock must be present on the input              of SAIx before setting SAIXEN bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> saixen{}; 
        ///DMA enable. This bit is set and cleared              by software. Note: Since the audio block defaults to              operate as a transmitter after reset, the MODE[1:0]              bits must be configured before setting DMAEN to avoid              a DMA request in receiver mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///No divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> nomck{}; 
        ///Master clock divider. These bits are set              and cleared by software. These bits are meaningless              when the audio block operates in slave mode. They              have to be configured when the audio block is              disabled. Others: the master clock frequency is              calculated accordingly to the following              formula:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> mckdiv{}; 
        ///Oversampling ratio for master              clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> osr{}; 
    }
    namespace Sai1SaiBcr2{    ///<Configuration register 2
        using Addr = Register::Address<0x40015828,0xffff0000,0x00000000,std::uint32_t>;
        ///FIFO threshold. This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> fth{}; 
        ///FIFO flush. This bit is set by software.              It is always read as 0. This bit should be configured              when the SAI is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fflush{}; 
        ///Tristate management on data line. This              bit is set and cleared by software. It is meaningful              only if the audio block is configured as a              transmitter. This bit is not used when the audio              block is configured in SPDIF mode. It should be              configured when SAI is disabled. Refer to Section:              Output data line management on an inactive slot for              more details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tris{}; 
        ///Mute. This bit is set and cleared by              software. It is meaningful only when the audio block              operates as a transmitter. The MUTE value is linked              to value of MUTEVAL if the number of slots is lower              or equal to 2, or equal to 0 if it is greater than 2.              Refer to Section: Mute mode for more details. Note:              This bit is meaningless and should not be used for              SPDIF audio blocks.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mute{}; 
        ///Mute value. This bit is set and cleared              by software.It must be written before enabling the              audio block: SAIXEN. This bit is meaningful only when              the audio block operates as a transmitter, the number              of slots is lower or equal to 2 and the MUTE bit is              set. If more slots are declared, the bit value sent              during the transmission in mute mode is equal to 0,              whatever the value of MUTEVAL. if the number of slot              is lower or equal to 2 and MUTEVAL = 1, the MUTE              value transmitted for each slot is the one sent              during the previous frame. Refer to Section: Mute              mode for more details. Note: This bit is meaningless              and should not be used for SPDIF audio              blocks.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> muteval{}; 
        ///Mute counter. These bits are set and              cleared by software. They are used only in reception              mode. The value set in these bits is compared to the              number of consecutive mute frames detected in              reception. When the number of mute frames is equal to              this value, the flag MUTEDET will be set and an              interrupt will be generated if bit MUTEDETIE is set.              Refer to Section: Mute mode for more              details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> mutecnt{}; 
        ///Complement bit. This bit is set and              cleared by software. It defines the type of              complement to be used for companding mode Note: This              bit has effect only when the companding mode is -Law              algorithm or A-Law algorithm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cpl{}; 
        ///Companding mode. These bits are set and              cleared by software. The -Law and the A-Law log are a              part of the CCITT G.711 recommendation, the type of              complement that will be used depends on CPL bit. The              data expansion or data compression are determined by              the state of bit MODE[0]. The data compression is              applied if the audio block is configured as a              transmitter. The data expansion is automatically              applied when the audio block is configured as a              receiver. Refer to Section: Companding mode for more              details. Note: Companding mode is applicable only              when TDM is selected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> comp{}; 
    }
    namespace Sai1SaiBfrcr{    ///<This register has no meaning in AC97 and          SPDIF audio protocol
        using Addr = Register::Address<0x4001582c,0xfff88000,0x00000000,std::uint32_t>;
        ///Frame length. These bits are set and              cleared by software. They define the audio frame              length expressed in number of SCK clock cycles: the              number of bits in the frame is equal to FRL[7:0] + 1.              The minimum number of bits to transfer in an audio              frame must be equal to 8, otherwise the audio block              will behaves in an unexpected way. This is the case              when the data size is 8 bits and only one slot 0 is              defined in NBSLOT[4:0] of SAI_xSLOTR register              (NBSLOT[3:0] = 0000). In master mode, if the master              clock (available on MCLK_x pin) is used, the frame              length should be aligned with a number equal to a              power of 2, ranging from 8 to 256. When the master              clock is not used (NODIV = 1), it is recommended to              program the frame length to an value ranging from 8              to 256. These bits are meaningless and are not used              in AC97 or SPDIF audio block              configuration.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frl{}; 
        ///Frame synchronization active level              length. These bits are set and cleared by software.              They specify the length in number of bit clock (SCK)              + 1 (FSALL[6:0] + 1) of the active level of the FS              signal in the audio frame These bits are meaningless              and are not used in AC97 or SPDIF audio block              configuration. They must be configured when the audio              block is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fsall{}; 
        ///Frame synchronization definition. This              bit is set and cleared by software. When the bit is              set, the number of slots defined in the SAI_xSLOTR              register has to be even. It means that half of this              number of slots will be dedicated to the left channel              and the other slots for the right channel (e.g: this              bit has to be set for I2S or MSB/LSB-justified              protocols...). This bit is meaningless and is not              used in AC97 or SPDIF audio block configuration. It              must be configured when the audio block is              disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fsdef{}; 
        ///Frame synchronization polarity. This bit              is set and cleared by software. It is used to              configure the level of the start of frame on the FS              signal. It is meaningless and is not used in AC97 or              SPDIF audio block configuration. This bit must be              configured when the audio block is              disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fspol{}; 
        ///Frame synchronization offset. This bit              is set and cleared by software. It is meaningless and              is not used in AC97 or SPDIF audio block              configuration. This bit must be configured when the              audio block is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fsoff{}; 
    }
    namespace Sai1SaiBslotr{    ///<This register has no meaning in AC97 and          SPDIF audio protocol
        using Addr = Register::Address<0x40015830,0x0000f020,0x00000000,std::uint32_t>;
        ///First bit offset These bits are set and              cleared by software. The value set in this bitfield              defines the position of the first data transfer bit              in the slot. It represents an offset value. In              transmission mode, the bits outside the data field              are forced to 0. In reception mode, the extra              received bits are discarded. These bits must be set              when the audio block is disabled. They are ignored in              AC97 or SPDIF mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> fboff{}; 
        ///Slot size This bits is set and cleared              by software. The slot size must be higher or equal to              the data size. If this condition is not respected,              the behavior of the SAI will be undetermined. Refer              to Section: Output data line management on an              inactive slot for information on how to drive SD              line. These bits must be set when the audio block is              disabled. They are ignored in AC97 or SPDIF              mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> slotsz{}; 
        ///Number of slots in an audio frame. These              bits are set and cleared by software. The value set              in this bitfield represents the number of slots + 1              in the audio frame (including the number of inactive              slots). The maximum number of slots is 16. The number              of slots should be even if FSDEF bit in the SAI_xFRCR              register is set. The number of slots must be              configured when the audio block is disabled. They are              ignored in AC97 or SPDIF mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nbslot{}; 
        ///Slot enable. These bits are set and              cleared by software. Each SLOTEN bit corresponds to a              slot position from 0 to 15 (maximum 16 slots). The              slot must be enabled when the audio block is              disabled. They are ignored in AC97 or SPDIF              mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> sloten{}; 
    }
    namespace Sai1SaiBim{    ///<Interrupt mask register 2
        using Addr = Register::Address<0x40015834,0xffffff80,0x00000000,std::uint32_t>;
        ///Overrun/underrun interrupt enable. This              bit is set and cleared by software. When this bit is              set, an interrupt is generated if the OVRUDR bit in              the SAI_xSR register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudrie{}; 
        ///Mute detection interrupt enable. This              bit is set and cleared by software. When this bit is              set, an interrupt is generated if the MUTEDET bit in              the SAI_xSR register is set. This bit has a meaning              only if the audio block is configured in receiver              mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedetie{}; 
        ///Wrong clock configuration interrupt              enable. This bit is set and cleared by software. This              bit is taken into account only if the audio block is              configured as a master (MODE[1] = 0) and NODIV = 0.              It generates an interrupt if the WCKCFG flag in the              SAI_xSR register is set. Note: This bit is used only              in TDM mode and is meaningless in other              modes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfgie{}; 
        ///FIFO request interrupt enable. This bit              is set and cleared by software. When this bit is set,              an interrupt is generated if the FREQ bit in the              SAI_xSR register is set. Since the audio block              defaults to operate as a transmitter after reset, the              MODE bit must be configured before setting FREQIE to              avoid a parasitic interruption in receiver              mode,
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freqie{}; 
        ///Codec not ready interrupt enable (AC97).              This bit is set and cleared by software. When the              interrupt is enabled, the audio block detects in the              slot 0 (tag0) of the AC97 frame if the Codec              connected to this line is ready or not. If it is not              ready, the CNRDY flag in the SAI_xSR register is set              and an interruption i generated. This bit has a              meaning only if the AC97 mode is selected through              PRTCFG[1:0] bits and the audio block is operates as a              receiver.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdyie{}; 
        ///Anticipated frame synchronization              detection interrupt enable. This bit is set and              cleared by software. When this bit is set, an              interrupt will be generated if the AFSDET bit in the              SAI_xSR register is set. This bit is meaningless in              AC97, SPDIF mode or when the audio block operates as              a master.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdetie{}; 
        ///Late frame synchronization detection              interrupt enable. This bit is set and cleared by              software. When this bit is set, an interrupt will be              generated if the LFSDET bit is set in the SAI_xSR              register. This bit is meaningless in AC97, SPDIF mode              or when the audio block operates as a              master.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdetie{}; 
    }
    namespace Sai1SaiBsr{    ///<Status register
        using Addr = Register::Address<0x40015838,0xfff8ff80,0x00000000,std::uint32_t>;
        ///Overrun / underrun. This bit is read              only. The overrun and underrun conditions can occur              only when the audio block is configured as a receiver              and a transmitter, respectively. It can generate an              interrupt if OVRUDRIE bit is set in SAI_xIM register.              This flag is cleared when the software sets COVRUDR              bit in SAI_xCLRFR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrudr{}; 
        ///Mute detection. This bit is read only.              This flag is set if consecutive 0 values are received              in each slot of a given audio frame and for a              consecutive number of audio frames (set in the              MUTECNT bit in the SAI_xCR2 register). It can              generate an interrupt if MUTEDETIE bit is set in              SAI_xIM register. This flag is cleared when the              software sets bit CMUTEDET in the SAI_xCLRFR              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mutedet{}; 
        ///Wrong clock configuration flag. This bit              is read only. This bit is used only when the audio              block operates in master mode (MODE[1] = 0) and NODIV              = 0. It can generate an interrupt if WCKCFGIE bit is              set in SAI_xIM register. This flag is cleared when              the software sets CWCKCFG bit in SAI_xCLRFR              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wckcfg{}; 
        ///FIFO request. This bit is read only. The              request depends on the audio block configuration: If              the block is configured in transmission mode, the              FIFO request is related to a write request operation              in the SAI_xDR. If the block configured in reception,              the FIFO request related to a read request operation              from the SAI_xDR. This flag can generate an interrupt              if FREQIE bit is set in SAI_xIM              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> freq{}; 
        ///Codec not ready. This bit is read only.              This bit is used only when the AC97 audio protocol is              selected in the SAI_xCR1 register and configured in              receiver mode. It can generate an interrupt if              CNRDYIE bit is set in SAI_xIM register. This flag is              cleared when the software sets CCNRDY bit in              SAI_xCLRFR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnrdy{}; 
        ///Anticipated frame synchronization              detection. This bit is read only. This flag can be              set only if the audio block is configured in slave              mode. It is not used in AC97or SPDIF mode. It can              generate an interrupt if AFSDETIE bit is set in              SAI_xIM register. This flag is cleared when the              software sets CAFSDET bit in SAI_xCLRFR              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> afsdet{}; 
        ///Late frame synchronization detection.              This bit is read only. This flag can be set only if              the audio block is configured in slave mode. It is              not used in AC97 or SPDIF mode. It can generate an              interrupt if LFSDETIE bit is set in the SAI_xIM              register. This flag is cleared when the software sets              bit CLFSDET in SAI_xCLRFR register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lfsdet{}; 
        ///FIFO level threshold. This bit is read              only. The FIFO level threshold flag is managed only              by hardware and its setting depends on SAI block              configuration (transmitter or receiver mode). If the              SAI block is configured as transmitter: If SAI block              is configured as receiver:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> flvl{}; 
    }
    namespace Sai1SaiBclrfr{    ///<Clear flag register
        using Addr = Register::Address<0x4001583c,0xffffff88,0x00000000,std::uint32_t>;
        ///Clear overrun / underrun. This bit is              write only. Programming this bit to 1 clears the              OVRUDR flag in the SAI_xSR register. Reading this bit              always returns the value 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covrudr{}; 
        ///Mute detection flag. This bit is write              only. Programming this bit to 1 clears the MUTEDET              flag in the SAI_xSR register. Reading this bit always              returns the value 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmutedet{}; 
        ///Clear wrong clock configuration flag.              This bit is write only. Programming this bit to 1              clears the WCKCFG flag in the SAI_xSR register. This              bit is used only when the audio block is set as              master (MODE[1] = 0) and NODIV = 0 in the SAI_xCR1              register. Reading this bit always returns the value              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cwckcfg{}; 
        ///Clear Codec not ready flag. This bit is              write only. Programming this bit to 1 clears the              CNRDY flag in the SAI_xSR register. This bit is used              only when the AC97 audio protocol is selected in the              SAI_xCR1 register. Reading this bit always returns              the value 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccnrdy{}; 
        ///Clear anticipated frame synchronization              detection flag. This bit is write only. Programming              this bit to 1 clears the AFSDET flag in the SAI_xSR              register. It is not used in AC97or SPDIF mode.              Reading this bit always returns the value              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cafsdet{}; 
        ///Clear late frame synchronization              detection flag. This bit is write only. Programming              this bit to 1 clears the LFSDET flag in the SAI_xSR              register. This bit is not used in AC97or SPDIF mode              Reading this bit always returns the value              0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clfsdet{}; 
    }
    namespace Sai1SaiBdr{    ///<Data register
        using Addr = Register::Address<0x40015840,0x00000000,0x00000000,std::uint32_t>;
        ///Data A write to this register loads the              FIFO provided the FIFO is not full. A read from this              register empties the FIFO if the FIFO is not              empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Sai1SaiPdmcr{    ///<PDM control register
        using Addr = Register::Address<0x40015844,0xfffff0ce,0x00000000,std::uint32_t>;
        ///PDM enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pdmen{}; 
        ///Number of microphones
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> micnbr{}; 
        ///Clock enable of bitstream clock number              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cken1{}; 
        ///Clock enable of bitstream clock number              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cken2{}; 
        ///Clock enable of bitstream clock number              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cken3{}; 
        ///Clock enable of bitstream clock number              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cken4{}; 
    }
    namespace Sai1SaiPdmdly{    ///<PDM delay register
        using Addr = Register::Address<0x40015848,0x88888888,0x00000000,std::uint32_t>;
        ///Delay line adjust for first microphone              of pair 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dlym1l{}; 
        ///Delay line adjust for second microphone              of pair 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> dlym1r{}; 
        ///Delay line for first microphone of pair              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> dlym2l{}; 
        ///Delay line for second microphone of pair              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> dlym2r{}; 
        ///Delay line for first microphone of pair              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> dlym3l{}; 
        ///Delay line for second microphone of pair              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dlym3r{}; 
        ///Delay line for first microphone of pair              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> dlym4l{}; 
        ///Delay line for second microphone of pair              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> dlym4r{}; 
    }
}
