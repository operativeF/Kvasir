#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Non-Volatile Memory Controller
    namespace NvmctrlCtrla{    ///<Control A
        using Addr = Register::Address<0x41004000,0xffff0003,0x00000000,std::uint16_t>;
        ///Auto Wait State Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> autows{}; 
        ///Suspend Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> suspen{}; 
        ///Write Mode
        enum class WmodeVal {
            man=0x00000000,     ///<Manual Write
            adw=0x00000001,     ///<Automatic Double Word Write
            aqw=0x00000002,     ///<Automatic Quad Word
            ap=0x00000003,     ///<Automatic Page Write
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,WmodeVal> wmode{}; 
        namespace WmodeValC{
            constexpr Register::FieldValue<decltype(wmode)::Type,WmodeVal::man> man{};
            constexpr Register::FieldValue<decltype(wmode)::Type,WmodeVal::adw> adw{};
            constexpr Register::FieldValue<decltype(wmode)::Type,WmodeVal::aqw> aqw{};
            constexpr Register::FieldValue<decltype(wmode)::Type,WmodeVal::ap> ap{};
        }
        ///Power Reduction Mode during Sleep
        enum class PrmVal {
            semiauto=0x00000000,     ///<NVM block enters low-power mode when entering standby mode. NVM block enters low-power mode when SPRM command is issued. NVM block exits low-power mode upon first access.
            fullauto=0x00000001,     ///<NVM block enters low-power mode when entering standby mode. NVM block enters low-power mode when SPRM command is issued. NVM block exits low-power mode when system is not in standby mode.
            manual=0x00000003,     ///<NVM block does not enter low-power mode when entering standby mode. NVM block enters low-power mode when SPRM command is issued. NVM block exits low-power mode upon first access.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PrmVal> prm{}; 
        namespace PrmValC{
            constexpr Register::FieldValue<decltype(prm)::Type,PrmVal::semiauto> semiauto{};
            constexpr Register::FieldValue<decltype(prm)::Type,PrmVal::fullauto> fullauto{};
            constexpr Register::FieldValue<decltype(prm)::Type,PrmVal::manual> manual{};
        }
        ///NVM Read Wait States
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rws{}; 
        ///Force AHB0 access to NONSEQ, burst transfers are continuously rearbitrated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ahbns0{}; 
        ///Force AHB1 access to NONSEQ, burst transfers are continuously rearbitrated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ahbns1{}; 
        ///AHB0 Cache Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cachedis0{}; 
        ///AHB1 Cache Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cachedis1{}; 
    }
    namespace NvmctrlCtrlb{    ///<Control B
        using Addr = Register::Address<0x41004004,0xffff0080,0x00000000,std::uint16_t>;
        ///Command
        enum class CmdVal {
            ep=0x00000000,     ///<Erase Page - Only supported in the USER and AUX pages.
            eb=0x00000001,     ///<Erase Block - Erases the block addressed by the ADDR register, not supported in the user page
            wp=0x00000003,     ///<Write Page - Writes the contents of the page buffer to the page addressed by the ADDR register, not supported in the user page
            wqw=0x00000004,     ///<Write Quad Word - Writes a 128-bit word at the location addressed by the ADDR register.
            swrst=0x00000010,     ///<Software Reset - Power-Cycle the NVM memory and replay the device automatic calibration procedure and resets the module configuration registers
            lr=0x00000011,     ///<Lock Region - Locks the region containing the address location in the ADDR register.
            ur=0x00000012,     ///<Unlock Region - Unlocks the region containing the address location in the ADDR register.
            sprm=0x00000013,     ///<Sets the power reduction mode.
            cprm=0x00000014,     ///<Clears the power reduction mode.
            pbc=0x00000015,     ///<Page Buffer Clear - Clears the page buffer.
            ssb=0x00000016,     ///<Set Security Bit
            bkswrst=0x00000017,     ///<Bank swap and system reset, if SMEE is used also reallocate SMEE data into the opposite BANK
            celck=0x00000018,     ///<Chip Erase Lock - DSU.CE command is not available
            ceulck=0x00000019,     ///<Chip Erase Unlock - DSU.CE command is available
            sbpdis=0x0000001a,     ///<Sets STATUS.BPDIS, Boot loader protection is discarded until CBPDIS is issued or next start-up sequence
            cbpdis=0x0000001b,     ///<Clears STATUS.BPDIS, Boot loader protection is not discarded
            asees0=0x00000030,     ///<Activate SmartEEPROM Sector 0, deactivate Sector 1
            asees1=0x00000031,     ///<Activate SmartEEPROM Sector 1, deactivate Sector 0
            seeraloc=0x00000032,     ///<Starts SmartEEPROM sector reallocation algorithm
            seeflush=0x00000033,     ///<Flush SMEE data when in buffered mode
            lsee=0x00000034,     ///<Lock access to SmartEEPROM data from any mean
            usee=0x00000035,     ///<Unlock access to SmartEEPROM data
            lseer=0x00000036,     ///<Lock access to the SmartEEPROM Register Address Space (above 64KB)
            useer=0x00000037,     ///<Unlock access to the SmartEEPROM Register Address Space (above 64KB)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::ep> ep{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::eb> eb{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::wp> wp{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::wqw> wqw{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::swrst> swrst{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::lr> lr{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::ur> ur{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::sprm> sprm{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::cprm> cprm{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::pbc> pbc{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::ssb> ssb{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::bkswrst> bkswrst{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::celck> celck{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::ceulck> ceulck{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::sbpdis> sbpdis{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::cbpdis> cbpdis{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::asees0> asees0{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::asees1> asees1{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::seeraloc> seeraloc{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::seeflush> seeflush{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::lsee> lsee{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::usee> usee{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::lseer> lseer{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::useer> useer{};
        }
        ///Command Execution
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmdex{}; 
    }
    namespace NvmctrlParam{    ///<NVM Parameter
        using Addr = Register::Address<0x41004008,0x7ff80000,0x00000000,std::uint32_t>;
        ///NVM Pages
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nvmp{}; 
        ///Page Size
        enum class PszVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PszVal> psz{}; 
        namespace PszValC{
            constexpr Register::FieldValue<decltype(psz)::Type,PszVal::v8> v8{};
            constexpr Register::FieldValue<decltype(psz)::Type,PszVal::v16> v16{};
            constexpr Register::FieldValue<decltype(psz)::Type,PszVal::v32> v32{};
            constexpr Register::FieldValue<decltype(psz)::Type,PszVal::v64> v64{};
            constexpr Register::FieldValue<decltype(psz)::Type,PszVal::v128> v128{};
            constexpr Register::FieldValue<decltype(psz)::Type,PszVal::v256> v256{};
            constexpr Register::FieldValue<decltype(psz)::Type,PszVal::v512> v512{};
            constexpr Register::FieldValue<decltype(psz)::Type,PszVal::v1024> v1024{};
        }
        ///SmartEEPROM Supported
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> see{}; 
    }
    namespace NvmctrlIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x4100400c,0xfffff800,0x00000000,std::uint16_t>;
        ///Command Done Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> done{}; 
        ///Address Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> addre{}; 
        ///Programming Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> proge{}; 
        ///Lock Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> locke{}; 
        ///ECC Single Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eccse{}; 
        ///ECC Dual Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eccde{}; 
        ///NVM Error Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nvme{}; 
        ///Suspended Write Or Erase Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> susp{}; 
        ///Active SEES Full Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> seesfull{}; 
        ///Active SEES Overflow Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> seesovf{}; 
        ///SEE Write Completed Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> seewrc{}; 
    }
    namespace NvmctrlIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x4100400e,0xfffff800,0x00000000,std::uint16_t>;
        ///Command Done Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> done{}; 
        ///Address Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> addre{}; 
        ///Programming Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> proge{}; 
        ///Lock Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> locke{}; 
        ///ECC Single Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eccse{}; 
        ///ECC Dual Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eccde{}; 
        ///NVM Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nvme{}; 
        ///Suspended Write Or Erase  Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> susp{}; 
        ///Active SEES Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> seesfull{}; 
        ///Active SEES Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> seesovf{}; 
        ///SEE Write Completed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> seewrc{}; 
    }
    namespace NvmctrlIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x41004010,0xfffff800,0x00000000,std::uint16_t>;
        ///Command Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> done{}; 
        ///Address Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> addre{}; 
        ///Programming Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> proge{}; 
        ///Lock Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> locke{}; 
        ///ECC Single Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccse{}; 
        ///ECC Dual Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccde{}; 
        ///NVM Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nvme{}; 
        ///Suspended Write Or Erase Operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> susp{}; 
        ///Active SEES Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> seesfull{}; 
        ///Active SEES Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> seesovf{}; 
        ///SEE Write Completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> seewrc{}; 
    }
    namespace NvmctrlStatus{    ///<Status
        using Addr = Register::Address<0x41004012,0xfffff0c0,0x00000000,std::uint16_t>;
        ///Ready to accept a command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ready{}; 
        ///Power Reduction Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> prm{}; 
        ///NVM Page Buffer Active Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> load{}; 
        ///NVM Write Or Erase Operation Is Suspended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp{}; 
        ///BANKA First
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> afirst{}; 
        ///Boot Loader Protection Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bpdis{}; 
        ///Boot Loader Protection Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bootprot{}; 
    }
    namespace NvmctrlAddr{    ///<Address
        using Addr = Register::Address<0x41004014,0xff000000,0x00000000,std::uint32_t>;
        ///NVM Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace NvmctrlRunlock{    ///<Lock Section
        using Addr = Register::Address<0x41004018,0x00000000,0x00000000,std::uint32_t>;
        ///Region Un-Lock Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> runlock{}; 
    }
    namespace NvmctrlEccerr{    ///<ECC Error Status Register
        using Addr = Register::Address<0x41004024,0x0f000000,0x00000000,std::uint32_t>;
        ///Error Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> addr{}; 
        ///Low Double-Word Error Type
        enum class TypelVal {
            none=0x00000000,     ///<No Error Detected Since Last Read
            single=0x00000001,     ///<At Least One Single Error Detected Since last Read
            dual=0x00000002,     ///<At Least One Dual Error Detected Since Last Read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TypelVal> typel{}; 
        namespace TypelValC{
            constexpr Register::FieldValue<decltype(typel)::Type,TypelVal::none> none{};
            constexpr Register::FieldValue<decltype(typel)::Type,TypelVal::single> single{};
            constexpr Register::FieldValue<decltype(typel)::Type,TypelVal::dual> dual{};
        }
        ///High Double-Word Error Type
        enum class TypehVal {
            none=0x00000000,     ///<No Error Detected Since Last Read
            single=0x00000001,     ///<At Least One Single Error Detected Since last Read
            dual=0x00000002,     ///<At Least One Dual Error Detected Since Last Read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TypehVal> typeh{}; 
        namespace TypehValC{
            constexpr Register::FieldValue<decltype(typeh)::Type,TypehVal::none> none{};
            constexpr Register::FieldValue<decltype(typeh)::Type,TypehVal::single> single{};
            constexpr Register::FieldValue<decltype(typeh)::Type,TypehVal::dual> dual{};
        }
    }
    namespace NvmctrlDbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x41004028,0xfffffffc,0x00000000,std::uint8_t>;
        ///Debugger ECC Read Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eccdis{}; 
        ///Debugger ECC Error Tracking Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eccelog{}; 
    }
    namespace NvmctrlSeecfg{    ///<SmartEEPROM Configuration Register
        using Addr = Register::Address<0x4100402a,0xfffffffc,0x00000000,std::uint8_t>;
        ///Write Mode
        enum class WmodeVal {
            unbuffered=0x00000000,     ///<A NVM write command is issued after each write in the pagebuffer
            buffered=0x00000001,     ///<A NVM write command is issued when a write to a new page is requested
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,WmodeVal> wmode{}; 
        namespace WmodeValC{
            constexpr Register::FieldValue<decltype(wmode)::Type,WmodeVal::unbuffered> unbuffered{};
            constexpr Register::FieldValue<decltype(wmode)::Type,WmodeVal::buffered> buffered{};
        }
        ///Automatic Page Reallocation Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> aprdis{}; 
    }
    namespace NvmctrlSeestat{    ///<SmartEEPROM Status Register
        using Addr = Register::Address<0x4100402c,0xfff8f0e0,0x00000000,std::uint32_t>;
        ///Active SmartEEPROM Sector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> asees{}; 
        ///Page Buffer Loaded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> load{}; 
        ///Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///SmartEEPROM Write Access Is Locked
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lock{}; 
        ///SmartEEPROM Write Access To Register Address Space Is Locked
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rlock{}; 
        ///Blocks Number In a Sector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sblk{}; 
        ///SmartEEPROM Page Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> psz{}; 
    }
    namespace NvmctrlPbldata0{    ///<Page Buffer Load Data x
        using Addr = Register::Address<0x4100401c,0x00000000,0x00000000,std::uint32_t>;
        ///Page Buffer Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> data{}; 
    }
    namespace NvmctrlPbldata1{    ///<Page Buffer Load Data x
        using Addr = Register::Address<0x41004020,0x00000000,0x00000000,std::uint32_t>;
        ///Page Buffer Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> data{}; 
    }
}
