#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//I2C
    namespace I2c4I2cCr1{    ///<Access: No wait states, except if a write          access occurs while a write access to this register is          ongoing. In this case, wait states are inserted in the          second write access until the previous one is completed.          The latency of the second write access can be up to 2 x          PCLK1 + 6 x I2CCLK.
        using Addr = Register::Address<0x58001c00,0xff002000,0x00000000,std::uint32_t>;
        ///Peripheral enable Note: When PE=0, the              I2C SCL and SDA lines are released. Internal state              machines and status bits are put back to their reset              value. When cleared, PE must be kept low for at least              3 APB clock cycles.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe{}; 
        ///TX Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txie{}; 
        ///RX Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxie{}; 
        ///Address match Interrupt enable (slave              only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> addrie{}; 
        ///Not acknowledge received Interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nackie{}; 
        ///STOP detection Interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stopie{}; 
        ///Transfer Complete interrupt enable Note:              Any of these events will generate an interrupt:              Transfer Complete (TC) Transfer Complete Reload              (TCR)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Error interrupts enable Note: Any of              these errors generate an interrupt: Arbitration Loss              (ARLO) Bus Error detection (BERR) Overrun/Underrun              (OVR) Timeout detection (TIMEOUT) PEC error detection              (PECERR) Alert pin event detection              (ALERT)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> errie{}; 
        ///Digital noise filter These bits are used              to configure the digital noise filter on SDA and SCL              input. The digital filter will filter spikes with a              length of up to DNF[3:0] * tI2CCLK ... Note: If the              analog filter is also enabled, the digital filter is              added to the analog filter. This filter can only be              programmed when the I2C is disabled (PE =              0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> dnf{}; 
        ///Analog noise filter OFF Note: This bit              can only be programmed when the I2C is disabled (PE =              0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> anfoff{}; 
        ///DMA transmission requests              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txdmaen{}; 
        ///DMA reception requests              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxdmaen{}; 
        ///Slave byte control This bit is used to              enable hardware byte control in slave              mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbc{}; 
        ///Clock stretching disable This bit is              used to disable clock stretching in slave mode. It              must be kept cleared in master mode. Note: This bit              can only be programmed when the I2C is disabled (PE =              0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nostretch{}; 
        ///Wakeup from Stop mode enable Note: If              the Wakeup from Stop mode feature is not supported,              this bit is reserved and forced by hardware to 0.              Please refer to Section25.3: I2C implementation.              Note: WUPEN can be set only when DNF =              0000
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> wupen{}; 
        ///General call enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> gcen{}; 
        ///SMBus Host address enable Note: If the              SMBus feature is not supported, this bit is reserved              and forced by hardware to 0. Please refer to              Section25.3: I2C implementation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> smbhen{}; 
        ///SMBus Device Default address enable              Note: If the SMBus feature is not supported, this bit              is reserved and forced by hardware to 0. Please refer              to Section25.3: I2C implementation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> smbden{}; 
        ///SMBus alert enable Device mode              (SMBHEN=0): Host mode (SMBHEN=1): Note: When              ALERTEN=0, the SMBA pin can be used as a standard              GPIO. If the SMBus feature is not supported, this bit              is reserved and forced by hardware to 0. Please refer              to Section25.3: I2C implementation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> alerten{}; 
        ///PEC enable Note: If the SMBus feature is              not supported, this bit is reserved and forced by              hardware to 0. Please refer to Section25.3: I2C              implementation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pecen{}; 
    }
    namespace I2c4I2cCr2{    ///<Access: No wait states, except if a write          access occurs while a write access to this register is          ongoing. In this case, wait states are inserted in the          second write access until the previous one is completed.          The latency of the second write access can be up to 2 x          PCLK1 + 6 x I2CCLK.
        using Addr = Register::Address<0x58001c04,0xf8000000,0x00000000,std::uint32_t>;
        ///Slave address bit 0 (master mode) In              7-bit addressing mode (ADD10 = 0): This bit is dont              care In 10-bit addressing mode (ADD10 = 1): This bit              should be written with bit 0 of the slave address to              be sent Note: Changing these bits when the START bit              is set is not allowed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sadd0{}; 
        ///Slave address bit 7:1 (master mode) In              7-bit addressing mode (ADD10 = 0): These bits should              be written with the 7-bit slave address to be sent In              10-bit addressing mode (ADD10 = 1): These bits should              be written with bits 7:1 of the slave address to be              sent. Note: Changing these bits when the START bit is              set is not allowed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sadd1{}; 
        ///Slave address bit 7:1 (master mode) In              7-bit addressing mode (ADD10 = 0): These bits should              be written with the 7-bit slave address to be sent In              10-bit addressing mode (ADD10 = 1): These bits should              be written with bits 7:1 of the slave address to be              sent. Note: Changing these bits when the START bit is              set is not allowed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sadd2{}; 
        ///Slave address bit 7:1 (master mode) In              7-bit addressing mode (ADD10 = 0): These bits should              be written with the 7-bit slave address to be sent In              10-bit addressing mode (ADD10 = 1): These bits should              be written with bits 7:1 of the slave address to be              sent. Note: Changing these bits when the START bit is              set is not allowed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sadd3{}; 
        ///Slave address bit 7:1 (master mode) In              7-bit addressing mode (ADD10 = 0): These bits should              be written with the 7-bit slave address to be sent In              10-bit addressing mode (ADD10 = 1): These bits should              be written with bits 7:1 of the slave address to be              sent. Note: Changing these bits when the START bit is              set is not allowed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sadd4{}; 
        ///Slave address bit 7:1 (master mode) In              7-bit addressing mode (ADD10 = 0): These bits should              be written with the 7-bit slave address to be sent In              10-bit addressing mode (ADD10 = 1): These bits should              be written with bits 7:1 of the slave address to be              sent. Note: Changing these bits when the START bit is              set is not allowed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sadd5{}; 
        ///Slave address bit 7:1 (master mode) In              7-bit addressing mode (ADD10 = 0): These bits should              be written with the 7-bit slave address to be sent In              10-bit addressing mode (ADD10 = 1): These bits should              be written with bits 7:1 of the slave address to be              sent. Note: Changing these bits when the START bit is              set is not allowed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sadd6{}; 
        ///Slave address bit 7:1 (master mode) In              7-bit addressing mode (ADD10 = 0): These bits should              be written with the 7-bit slave address to be sent In              10-bit addressing mode (ADD10 = 1): These bits should              be written with bits 7:1 of the slave address to be              sent. Note: Changing these bits when the START bit is              set is not allowed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sadd7{}; 
        ///Slave address bit 9:8 (master mode) In              7-bit addressing mode (ADD10 = 0): These bits are              dont care In 10-bit addressing mode (ADD10 = 1):              These bits should be written with bits 9:8 of the              slave address to be sent Note: Changing these bits              when the START bit is set is not              allowed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sadd8{}; 
        ///Slave address bit 9:8 (master mode) In              7-bit addressing mode (ADD10 = 0): These bits are              dont care In 10-bit addressing mode (ADD10 = 1):              These bits should be written with bits 9:8 of the              slave address to be sent Note: Changing these bits              when the START bit is set is not              allowed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sadd9{}; 
        ///Transfer direction (master mode) Note:              Changing this bit when the START bit is set is not              allowed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rdWrn{}; 
        ///10-bit addressing mode (master mode)              Note: Changing this bit when the START bit is set is              not allowed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> add10{}; 
        ///10-bit address header only read              direction (master receiver mode) Note: Changing this              bit when the START bit is set is not              allowed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> head10r{}; 
        ///Start generation This bit is set by              software, and cleared by hardware after the Start              followed by the address sequence is sent, by an              arbitration loss, by a timeout error detection, or              when PE = 0. It can also be cleared by software by              writing 1 to the ADDRCF bit in the I2C_ICR register.              If the I2C is already in master mode with AUTOEND =              0, setting this bit generates a Repeated Start              condition when RELOAD=0, after the end of the NBYTES              transfer. Otherwise setting this bit will generate a              START condition once the bus is free. Note: Writing 0              to this bit has no effect. The START bit can be set              even if the bus is BUSY or I2C is in slave mode. This              bit has no effect when RELOAD is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> start{}; 
        ///Stop generation (master mode) The bit is              set by software, cleared by hardware when a Stop              condition is detected, or when PE = 0. In Master              Mode: Note: Writing 0 to this bit has no              effect.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> stop{}; 
        ///NACK generation (slave mode) The bit is              set by software, cleared by hardware when the NACK is              sent, or when a STOP condition or an Address matched              is received, or when PE=0. Note: Writing 0 to this              bit has no effect. This bit is used in slave mode              only: in master receiver mode, NACK is automatically              generated after last byte preceding STOP or RESTART              condition, whatever the NACK bit value. When an              overrun occurs in slave receiver NOSTRETCH mode, a              NACK is automatically generated whatever the NACK bit              value. When hardware PEC checking is enabled              (PECBYTE=1), the PEC acknowledge value does not              depend on the NACK value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Number of bytes The number of bytes to              be transmitted/received is programmed there. This              field is dont care in slave mode with SBC=0. Note:              Changing these bits when the START bit is set is not              allowed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///NBYTES reload mode This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> reload{}; 
        ///Automatic end mode (master mode) This              bit is set and cleared by software. Note: This bit              has no effect in slave mode or when the RELOAD bit is              set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> autoend{}; 
        ///Packet error checking byte This bit is              set by software, and cleared by hardware when the PEC              is transferred, or when a STOP condition or an              Address matched is received, also when PE=0. Note:              Writing 0 to this bit has no effect. This bit has no              effect when RELOAD is set. This bit has no effect is              slave mode when SBC=0. If the SMBus feature is not              supported, this bit is reserved and forced by              hardware to 0. Please refer to Section25.3: I2C              implementation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pecbyte{}; 
    }
    namespace I2c4I2cOar1{    ///<Access: No wait states, except if a write          access occurs while a write access to this register is          ongoing. In this case, wait states are inserted in the          second write access until the previous one is completed.          The latency of the second write access can be up to 2 x          PCLK1 + 6 x I2CCLK.
        using Addr = Register::Address<0x58001c08,0xffff7800,0x00000000,std::uint32_t>;
        ///Interface address 7-bit addressing mode:              dont care 10-bit addressing mode: bits 9:8 of address              Note: These bits can be written only when OA1EN=0.              OA1[7:1]: Interface address Bits 7:1 of address Note:              These bits can be written only when OA1EN=0. OA1[0]:              Interface address 7-bit addressing mode: dont care              10-bit addressing mode: bit 0 of address Note: This              bit can be written only when OA1EN=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> oa1{}; 
        ///Own Address 1 10-bit mode Note: This bit              can be written only when OA1EN=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oa1mode{}; 
        ///Own Address 1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> oa1en{}; 
    }
    namespace I2c4I2cOar2{    ///<Access: No wait states, except if a write          access occurs while a write access to this register is          ongoing. In this case, wait states are inserted in the          second write access until the previous one is completed.          The latency of the second write access can be up to 2 x          PCLK1 + 6 x I2CCLK.
        using Addr = Register::Address<0x58001c0c,0xffff7801,0x00000000,std::uint32_t>;
        ///Interface address bits 7:1 of address              Note: These bits can be written only when              OA2EN=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> oa2{}; 
        ///Own Address 2 masks Note: These bits can              be written only when OA2EN=0. As soon as OA2MSK is              not equal to 0, the reserved I2C addresses (0b0000xxx              and 0b1111xxx) are not acknowledged even if the              comparison matches.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> oa2msk{}; 
        ///Own Address 2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> oa2en{}; 
    }
    namespace I2c4I2cTimingr{    ///<Access: No wait states
        using Addr = Register::Address<0x58001c10,0x0f000000,0x00000000,std::uint32_t>;
        ///SCL low period (master mode) This field              is used to generate the SCL low period in master              mode. tSCLL = (SCLL+1) x tPRESC Note: SCLL is also              used to generate tBUF and tSU:STA              timings.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scll{}; 
        ///SCL high period (master mode) This field              is used to generate the SCL high period in master              mode. tSCLH = (SCLH+1) x tPRESC Note: SCLH is also              used to generate tSU:STO and tHD:STA              timing.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> sclh{}; 
        ///Data hold time This field is used to              generate the delay tSDADEL between SCL falling edge              and SDA edge. In master mode and in slave mode with              NOSTRETCH = 0, the SCL line is stretched low during              tSDADEL. tSDADEL= SDADEL x tPRESC Note: SDADEL is              used to generate tHD:DAT timing.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> sdadel{}; 
        ///Data setup time This field is used to              generate a delay tSCLDEL between SDA edge and SCL              rising edge. In master mode and in slave mode with              NOSTRETCH = 0, the SCL line is stretched low during              tSCLDEL. tSCLDEL = (SCLDEL+1) x tPRESC Note: tSCLDEL              is used to generate tSU:DAT timing.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> scldel{}; 
        ///Timing prescaler This field is used to              prescale I2CCLK in order to generate the clock period              tPRESC used for data setup and hold counters (refer              to I2C timings on page9) and for SCL high and low              level counters (refer to I2C master initialization on              page24). tPRESC = (PRESC+1) x tI2CCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> presc{}; 
    }
    namespace I2c4I2cTimeoutr{    ///<Access: No wait states, except if a write          access occurs while a write access to this register is          ongoing. In this case, wait states are inserted in the          second write access until the previous one is completed.          The latency of the second write access can be up to 2 x          PCLK1 + 6 x I2CCLK.
        using Addr = Register::Address<0x58001c14,0x70006000,0x00000000,std::uint32_t>;
        ///Bus Timeout A This field is used to              configure: The SCL low timeout condition tTIMEOUT              when TIDLE=0 tTIMEOUT= (TIMEOUTA+1) x 2048 x tI2CCLK              The bus idle condition (both SCL and SDA high) when              TIDLE=1 tIDLE= (TIMEOUTA+1) x 4 x tI2CCLK Note: These              bits can be written only when              TIMOUTEN=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> timeouta{}; 
        ///Idle clock timeout detection Note: This              bit can be written only when              TIMOUTEN=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tidle{}; 
        ///Clock timeout enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> timouten{}; 
        ///Bus timeout B This field is used to              configure the cumulative clock extension timeout: In              master mode, the master cumulative clock low extend              time (tLOW:MEXT) is detected In slave mode, the slave              cumulative clock low extend time (tLOW:SEXT) is              detected tLOW:EXT= (TIMEOUTB+1) x 2048 x tI2CCLK              Note: These bits can be written only when              TEXTEN=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> timeoutb{}; 
        ///Extended clock timeout              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> texten{}; 
    }
    namespace I2c4I2cIsr{    ///<Access: No wait states
        using Addr = Register::Address<0x58001c18,0xff004000,0x00000000,std::uint32_t>;
        ///Transmit data register empty              (transmitters) This bit is set by hardware when the              I2C_TXDR register is empty. It is cleared when the              next data to be sent is written in the I2C_TXDR              register. This bit can be written to 1 by software in              order to flush the transmit data register I2C_TXDR.              Note: This bit is set by hardware when              PE=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
        ///Transmit interrupt status (transmitters)              This bit is set by hardware when the I2C_TXDR              register is empty and the data to be transmitted must              be written in the I2C_TXDR register. It is cleared              when the next data to be sent is written in the              I2C_TXDR register. This bit can be written to 1 by              software when NOSTRETCH=1 only, in order to generate              a TXIS event (interrupt if TXIE=1 or DMA request if              TXDMAEN=1). Note: This bit is cleared by hardware              when PE=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txis{}; 
        ///Receive data register not empty              (receivers) This bit is set by hardware when the              received data is copied into the I2C_RXDR register,              and is ready to be read. It is cleared when I2C_RXDR              is read. Note: This bit is cleared by hardware when              PE=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxne{}; 
        ///Address matched (slave mode) This bit is              set by hardware as soon as the received slave address              matched with one of the enabled slave addresses. It              is cleared by software by setting ADDRCF bit. Note:              This bit is cleared by hardware when              PE=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> addr{}; 
        ///Not Acknowledge received flag This flag              is set by hardware when a NACK is received after a              byte transmission. It is cleared by software by              setting the NACKCF bit. Note: This bit is cleared by              hardware when PE=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nackf{}; 
        ///Stop detection flag This flag is set by              hardware when a Stop condition is detected on the bus              and the peripheral is involved in this transfer:              either as a master, provided that the STOP condition              is generated by the peripheral. or as a slave,              provided that the peripheral has been addressed              previously during this transfer. It is cleared by              software by setting the STOPCF bit. Note: This bit is              cleared by hardware when PE=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stopf{}; 
        ///Transfer Complete (master mode) This              flag is set by hardware when RELOAD=0, AUTOEND=0 and              NBYTES data have been transferred. It is cleared by              software when START bit or STOP bit is set. Note:              This bit is cleared by hardware when              PE=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tc{}; 
        ///Transfer Complete Reload This flag is              set by hardware when RELOAD=1 and NBYTES data have              been transferred. It is cleared by software when              NBYTES is written to a non-zero value. Note: This bit              is cleared by hardware when PE=0. This flag is only              for master mode, or for slave mode when the SBC bit              is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tcr{}; 
        ///Bus error This flag is set by hardware              when a misplaced Start or Stop condition is detected              whereas the peripheral is involved in the transfer.              The flag is not set during the address phase in slave              mode. It is cleared by software by setting BERRCF              bit. Note: This bit is cleared by hardware when              PE=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> berr{}; 
        ///Arbitration lost This flag is set by              hardware in case of arbitration loss. It is cleared              by software by setting the ARLOCF bit. Note: This bit              is cleared by hardware when PE=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> arlo{}; 
        ///Overrun/Underrun (slave mode) This flag              is set by hardware in slave mode with NOSTRETCH=1,              when an overrun/underrun error occurs. It is cleared              by software by setting the OVRCF bit. Note: This bit              is cleared by hardware when PE=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovr{}; 
        ///PEC Error in reception This flag is set              by hardware when the received PEC does not match with              the PEC register content. A NACK is automatically              sent after the wrong PEC reception. It is cleared by              software by setting the PECCF bit. Note: This bit is              cleared by hardware when PE=0. If the SMBus feature              is not supported, this bit is reserved and forced by              hardware to 0. Please refer to Section25.3: I2C              implementation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pecerr{}; 
        ///Timeout or tLOW detection flag This flag              is set by hardware when a timeout or extended clock              timeout occurred. It is cleared by software by              setting the TIMEOUTCF bit. Note: This bit is cleared              by hardware when PE=0. If the SMBus feature is not              supported, this bit is reserved and forced by              hardware to 0. Please refer to Section25.3: I2C              implementation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timeout{}; 
        ///SMBus alert This flag is set by hardware              when SMBHEN=1 (SMBus host configuration), ALERTEN=1              and a SMBALERT event (falling edge) is detected on              SMBA pin. It is cleared by software by setting the              ALERTCF bit. Note: This bit is cleared by hardware              when PE=0. If the SMBus feature is not supported,              this bit is reserved and forced by hardware to 0.              Please refer to Section25.3: I2C              implementation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> alert{}; 
        ///Bus busy This flag indicates that a              communication is in progress on the bus. It is set by              hardware when a START condition is detected. It is              cleared by hardware when a Stop condition is              detected, or when PE=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Transfer direction (Slave mode) This              flag is updated when an address match event occurs              (ADDR=1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dir{}; 
        ///Address match code (Slave mode) These              bits are updated with the received address when an              address match event occurs (ADDR = 1). In the case of              a 10-bit address, ADDCODE provides the 10-bit header              followed by the 2 MSBs of the address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> addcode{}; 
    }
    namespace I2c4I2cIcr{    ///<Access: No wait states
        using Addr = Register::Address<0x58001c1c,0xffffc0c7,0x00000000,std::uint32_t>;
        ///Address matched flag clear Writing 1 to              this bit clears the ADDR flag in the I2C_ISR              register. Writing 1 to this bit also clears the START              bit in the I2C_CR2 register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> addrcf{}; 
        ///Not Acknowledge flag clear Writing 1 to              this bit clears the ACKF flag in I2C_ISR              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nackcf{}; 
        ///Stop detection flag clear Writing 1 to              this bit clears the STOPF flag in the I2C_ISR              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stopcf{}; 
        ///Bus error flag clear Writing 1 to this              bit clears the BERRF flag in the I2C_ISR              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> berrcf{}; 
        ///Arbitration Lost flag clear Writing 1 to              this bit clears the ARLO flag in the I2C_ISR              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arlocf{}; 
        ///Overrun/Underrun flag clear Writing 1 to              this bit clears the OVR flag in the I2C_ISR              register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovrcf{}; 
        ///PEC Error flag clear Writing 1 to this              bit clears the PECERR flag in the I2C_ISR register.              Note: If the SMBus feature is not supported, this bit              is reserved and forced by hardware to 0. Please refer              to Section25.3: I2C implementation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> peccf{}; 
        ///Timeout detection flag clear Writing 1              to this bit clears the TIMEOUT flag in the I2C_ISR              register. Note: If the SMBus feature is not              supported, this bit is reserved and forced by              hardware to 0. Please refer to Section25.3: I2C              implementation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timoutcf{}; 
        ///Alert flag clear Writing 1 to this bit              clears the ALERT flag in the I2C_ISR register. Note:              If the SMBus feature is not supported, this bit is              reserved and forced by hardware to 0. Please refer to              Section25.3: I2C implementation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> alertcf{}; 
    }
    namespace I2c4I2cPecr{    ///<Access: No wait states
        using Addr = Register::Address<0x58001c20,0xffffff00,0x00000000,std::uint32_t>;
        ///Packet error checking register This              field contains the internal PEC when PECEN=1. The PEC              is cleared by hardware when PE=0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pec{}; 
    }
    namespace I2c4I2cRxdr{    ///<Access: No wait states
        using Addr = Register::Address<0x58001c24,0xffffff00,0x00000000,std::uint32_t>;
        ///8-bit receive data Data byte received              from the I2C bus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
    }
    namespace I2c4I2cTxdr{    ///<Access: No wait states
        using Addr = Register::Address<0x58001c28,0xffffff00,0x00000000,std::uint32_t>;
        ///8-bit transmit data Data byte to be              transmitted to the I2C bus. Note: These bits can be              written only when TXE=1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
}
