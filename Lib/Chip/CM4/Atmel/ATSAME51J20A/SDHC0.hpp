#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//SD/MMC Host Controller
    namespace Sdhc0Ssar{    ///<SDMA System Address / Argument 2
        using Addr = Register::Address<0x45000000,0x00000000,0x00000000,std::uint32_t>;
        ///SDMA System Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace Sdhc0SsarCmd23{    ///<SDMA System Address / Argument 2
        using Addr = Register::Address<0x45000000,0x00000000,0x00000000,std::uint32_t>;
        ///Argument 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> arg2{}; 
    }
    namespace Sdhc0Bsr{    ///<Block Size
        using Addr = Register::Address<0x45000004,0xffff8c00,0x00000000,std::uint16_t>;
        ///Transfer Block Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> blocksize{}; 
        ///SDMA Buffer Boundary
        enum class BoundaryVal {
            v4k=0x00000000,     ///<4k bytes
            v8k=0x00000001,     ///<8k bytes
            v16k=0x00000002,     ///<16k bytes
            v32k=0x00000003,     ///<32k bytes
            v64k=0x00000004,     ///<64k bytes
            v128k=0x00000005,     ///<128k bytes
            v256k=0x00000006,     ///<256k bytes
            v512k=0x00000007,     ///<512k bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,BoundaryVal> boundary{}; 
        namespace BoundaryValC{
            constexpr Register::FieldValue<decltype(boundary)::Type,BoundaryVal::v4k> v4k{};
            constexpr Register::FieldValue<decltype(boundary)::Type,BoundaryVal::v8k> v8k{};
            constexpr Register::FieldValue<decltype(boundary)::Type,BoundaryVal::v16k> v16k{};
            constexpr Register::FieldValue<decltype(boundary)::Type,BoundaryVal::v32k> v32k{};
            constexpr Register::FieldValue<decltype(boundary)::Type,BoundaryVal::v64k> v64k{};
            constexpr Register::FieldValue<decltype(boundary)::Type,BoundaryVal::v128k> v128k{};
            constexpr Register::FieldValue<decltype(boundary)::Type,BoundaryVal::v256k> v256k{};
            constexpr Register::FieldValue<decltype(boundary)::Type,BoundaryVal::v512k> v512k{};
        }
    }
    namespace Sdhc0Bcr{    ///<Block Count
        using Addr = Register::Address<0x45000006,0xffff0000,0x00000000,std::uint16_t>;
        ///Blocks Count for Current Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bcnt{}; 
    }
    namespace Sdhc0Arg1r{    ///<Argument 1
        using Addr = Register::Address<0x45000008,0x00000000,0x00000000,std::uint32_t>;
        ///Argument 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> arg{}; 
    }
    namespace Sdhc0Tmr{    ///<Transfer Mode
        using Addr = Register::Address<0x4500000c,0xffffffc0,0x00000000,std::uint16_t>;
        ///DMA Enable
        enum class DmaenVal {
            disable=0x00000000,     ///<No data transfer or Non DMA data transfer
            enable=0x00000001,     ///<DMA data transfer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DmaenVal> dmaen{}; 
        namespace DmaenValC{
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::enable> enable{};
        }
        ///Block Count Enable
        enum class BcenVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BcenVal> bcen{}; 
        namespace BcenValC{
            constexpr Register::FieldValue<decltype(bcen)::Type,BcenVal::disable> disable{};
            constexpr Register::FieldValue<decltype(bcen)::Type,BcenVal::enable> enable{};
        }
        ///Auto Command Enable
        enum class AcmdenVal {
            disabled=0x00000000,     ///<Auto Command Disabled
            cmd12=0x00000001,     ///<Auto CMD12 Enable
            cmd23=0x00000002,     ///<Auto CMD23 Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,AcmdenVal> acmden{}; 
        namespace AcmdenValC{
            constexpr Register::FieldValue<decltype(acmden)::Type,AcmdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(acmden)::Type,AcmdenVal::cmd12> cmd12{};
            constexpr Register::FieldValue<decltype(acmden)::Type,AcmdenVal::cmd23> cmd23{};
        }
        ///Data Transfer Direction Selection
        enum class DtdselVal {
            write=0x00000000,     ///<Write (Host to Card)
            read=0x00000001,     ///<Read (Card to Host)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DtdselVal> dtdsel{}; 
        namespace DtdselValC{
            constexpr Register::FieldValue<decltype(dtdsel)::Type,DtdselVal::write> write{};
            constexpr Register::FieldValue<decltype(dtdsel)::Type,DtdselVal::read> read{};
        }
        ///Multi/Single Block Selection
        enum class MsbselVal {
            single=0x00000000,     ///<Single Block
            multiple=0x00000001,     ///<Multiple Block
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MsbselVal> msbsel{}; 
        namespace MsbselValC{
            constexpr Register::FieldValue<decltype(msbsel)::Type,MsbselVal::single> single{};
            constexpr Register::FieldValue<decltype(msbsel)::Type,MsbselVal::multiple> multiple{};
        }
    }
    namespace Sdhc0Cr{    ///<Command
        using Addr = Register::Address<0x4500000e,0xffffc004,0x00000000,std::uint16_t>;
        ///Response Type
        enum class ResptypVal {
            none=0x00000000,     ///<No response
            v136Bit=0x00000001,     ///<136-bit response
            v48Bit=0x00000002,     ///<48-bit response
            v48BitBusy=0x00000003,     ///<48-bit response check busy after response
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ResptypVal> resptyp{}; 
        namespace ResptypValC{
            constexpr Register::FieldValue<decltype(resptyp)::Type,ResptypVal::none> none{};
            constexpr Register::FieldValue<decltype(resptyp)::Type,ResptypVal::v136Bit> v136Bit{};
            constexpr Register::FieldValue<decltype(resptyp)::Type,ResptypVal::v48Bit> v48Bit{};
            constexpr Register::FieldValue<decltype(resptyp)::Type,ResptypVal::v48BitBusy> v48BitBusy{};
        }
        ///Command CRC Check Enable
        enum class CmdccenVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CmdccenVal> cmdccen{}; 
        namespace CmdccenValC{
            constexpr Register::FieldValue<decltype(cmdccen)::Type,CmdccenVal::disable> disable{};
            constexpr Register::FieldValue<decltype(cmdccen)::Type,CmdccenVal::enable> enable{};
        }
        ///Command Index Check Enable
        enum class CmdicenVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CmdicenVal> cmdicen{}; 
        namespace CmdicenValC{
            constexpr Register::FieldValue<decltype(cmdicen)::Type,CmdicenVal::disable> disable{};
            constexpr Register::FieldValue<decltype(cmdicen)::Type,CmdicenVal::enable> enable{};
        }
        ///Data Present Select
        enum class DpselVal {
            noData=0x00000000,     ///<No Data Present
            data=0x00000001,     ///<Data Present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DpselVal> dpsel{}; 
        namespace DpselValC{
            constexpr Register::FieldValue<decltype(dpsel)::Type,DpselVal::noData> noData{};
            constexpr Register::FieldValue<decltype(dpsel)::Type,DpselVal::data> data{};
        }
        ///Command Type
        enum class CmdtypVal {
            normal=0x00000000,     ///<Other commands
            suspend=0x00000001,     ///<CMD52 for writing Bus Suspend in CCCR
            resume=0x00000002,     ///<CMD52 for writing Function Select in CCCR
            abort=0x00000003,     ///<CMD12, CMD52 for writing I/O Abort in CCCR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CmdtypVal> cmdtyp{}; 
        namespace CmdtypValC{
            constexpr Register::FieldValue<decltype(cmdtyp)::Type,CmdtypVal::normal> normal{};
            constexpr Register::FieldValue<decltype(cmdtyp)::Type,CmdtypVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmdtyp)::Type,CmdtypVal::resume> resume{};
            constexpr Register::FieldValue<decltype(cmdtyp)::Type,CmdtypVal::abort> abort{};
        }
        ///Command Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> cmdidx{}; 
    }
    namespace Sdhc0Bdpr{    ///<Buffer Data Port
        using Addr = Register::Address<0x45000020,0x00000000,0x00000000,std::uint32_t>;
        ///Buffer Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bufdata{}; 
    }
    namespace Sdhc0Psr{    ///<Present State
        using Addr = Register::Address<0x45000024,0xfe00f0f0,0x00000000,std::uint32_t>;
        ///Command Inhibit (CMD)
        enum class CmdinhcVal {
            can=0x00000000,     ///<Can issue command using only CMD line
            cannot=0x00000001,     ///<Cannot issue command
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CmdinhcVal> cmdinhc{}; 
        namespace CmdinhcValC{
            constexpr Register::FieldValue<decltype(cmdinhc)::Type,CmdinhcVal::can> can{};
            constexpr Register::FieldValue<decltype(cmdinhc)::Type,CmdinhcVal::cannot> cannot{};
        }
        ///Command Inhibit (DAT)
        enum class CmdinhdVal {
            can=0x00000000,     ///<Can issue command which uses the DAT line
            cannot=0x00000001,     ///<Cannot issue command which uses the DAT line
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CmdinhdVal> cmdinhd{}; 
        namespace CmdinhdValC{
            constexpr Register::FieldValue<decltype(cmdinhd)::Type,CmdinhdVal::can> can{};
            constexpr Register::FieldValue<decltype(cmdinhd)::Type,CmdinhdVal::cannot> cannot{};
        }
        ///DAT Line Active
        enum class DlactVal {
            inactive=0x00000000,     ///<DAT Line Inactive
            active=0x00000001,     ///<DAT Line Active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DlactVal> dlact{}; 
        namespace DlactValC{
            constexpr Register::FieldValue<decltype(dlact)::Type,DlactVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(dlact)::Type,DlactVal::active> active{};
        }
        ///Re-Tuning Request
        enum class RtreqVal {
            ok=0x00000000,     ///<Fixed or well-tuned sampling clock
            required=0x00000001,     ///<Sampling clock needs re-tuning
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RtreqVal> rtreq{}; 
        namespace RtreqValC{
            constexpr Register::FieldValue<decltype(rtreq)::Type,RtreqVal::ok> ok{};
            constexpr Register::FieldValue<decltype(rtreq)::Type,RtreqVal::required> required{};
        }
        ///Write Transfer Active
        enum class WtactVal {
            no=0x00000000,     ///<No valid data
            yes=0x00000001,     ///<Transferring data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WtactVal> wtact{}; 
        namespace WtactValC{
            constexpr Register::FieldValue<decltype(wtact)::Type,WtactVal::no> no{};
            constexpr Register::FieldValue<decltype(wtact)::Type,WtactVal::yes> yes{};
        }
        ///Read Transfer Active
        enum class RtactVal {
            no=0x00000000,     ///<No valid data
            yes=0x00000001,     ///<Transferring data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,RtactVal> rtact{}; 
        namespace RtactValC{
            constexpr Register::FieldValue<decltype(rtact)::Type,RtactVal::no> no{};
            constexpr Register::FieldValue<decltype(rtact)::Type,RtactVal::yes> yes{};
        }
        ///Buffer Write Enable
        enum class BufwrenVal {
            disable=0x00000000,     ///<Write disable
            enable=0x00000001,     ///<Write enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,BufwrenVal> bufwren{}; 
        namespace BufwrenValC{
            constexpr Register::FieldValue<decltype(bufwren)::Type,BufwrenVal::disable> disable{};
            constexpr Register::FieldValue<decltype(bufwren)::Type,BufwrenVal::enable> enable{};
        }
        ///Buffer Read Enable
        enum class BufrdenVal {
            disable=0x00000000,     ///<Read disable
            enable=0x00000001,     ///<Read enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,BufrdenVal> bufrden{}; 
        namespace BufrdenValC{
            constexpr Register::FieldValue<decltype(bufrden)::Type,BufrdenVal::disable> disable{};
            constexpr Register::FieldValue<decltype(bufrden)::Type,BufrdenVal::enable> enable{};
        }
        ///Card Inserted
        enum class CardinsVal {
            no=0x00000000,     ///<Reset or Debouncing or No Card
            yes=0x00000001,     ///<Card inserted
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,CardinsVal> cardins{}; 
        namespace CardinsValC{
            constexpr Register::FieldValue<decltype(cardins)::Type,CardinsVal::no> no{};
            constexpr Register::FieldValue<decltype(cardins)::Type,CardinsVal::yes> yes{};
        }
        ///Card State Stable
        enum class CardssVal {
            no=0x00000000,     ///<Reset or Debouncing
            yes=0x00000001,     ///<No Card or Insered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,CardssVal> cardss{}; 
        namespace CardssValC{
            constexpr Register::FieldValue<decltype(cardss)::Type,CardssVal::no> no{};
            constexpr Register::FieldValue<decltype(cardss)::Type,CardssVal::yes> yes{};
        }
        ///Card Detect Pin Level
        enum class CarddplVal {
            no=0x00000000,     ///<No card present (SDCD#=1)
            yes=0x00000001,     ///<Card present (SDCD#=0)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,CarddplVal> carddpl{}; 
        namespace CarddplValC{
            constexpr Register::FieldValue<decltype(carddpl)::Type,CarddplVal::no> no{};
            constexpr Register::FieldValue<decltype(carddpl)::Type,CarddplVal::yes> yes{};
        }
        ///Write Protect Pin Level
        enum class WrpplVal {
            protected_=0x00000000,     ///<Write protected (SDWP#=0)
            enabled=0x00000001,     ///<Write enabled (SDWP#=1)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,WrpplVal> wrppl{}; 
        namespace WrpplValC{
            constexpr Register::FieldValue<decltype(wrppl)::Type,WrpplVal::protected_> protected_{};
            constexpr Register::FieldValue<decltype(wrppl)::Type,WrpplVal::enabled> enabled{};
        }
        ///DAT[3:0] Line Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> datll{}; 
        ///CMD Line Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cmdll{}; 
    }
    namespace Sdhc0Hc1r{    ///<Host Control 1
        using Addr = Register::Address<0x45000028,0xffffff20,0x00000000,std::uint8_t>;
        ///LED Control
        enum class LedctrlVal {
            off=0x00000000,     ///<LED off
            on=0x00000001,     ///<LED on
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LedctrlVal> ledctrl{}; 
        namespace LedctrlValC{
            constexpr Register::FieldValue<decltype(ledctrl)::Type,LedctrlVal::off> off{};
            constexpr Register::FieldValue<decltype(ledctrl)::Type,LedctrlVal::on> on{};
        }
        ///Data Width
        enum class DwVal {
            v1bit=0x00000000,     ///<1-bit mode
            v4bit=0x00000001,     ///<4-bit mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DwVal> dw{}; 
        namespace DwValC{
            constexpr Register::FieldValue<decltype(dw)::Type,DwVal::v1bit> v1bit{};
            constexpr Register::FieldValue<decltype(dw)::Type,DwVal::v4bit> v4bit{};
        }
        ///High Speed Enable
        enum class HsenVal {
            normal=0x00000000,     ///<Normal Speed mode
            high=0x00000001,     ///<High Speed mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,HsenVal> hsen{}; 
        namespace HsenValC{
            constexpr Register::FieldValue<decltype(hsen)::Type,HsenVal::normal> normal{};
            constexpr Register::FieldValue<decltype(hsen)::Type,HsenVal::high> high{};
        }
        ///DMA Select
        enum class DmaselVal {
            sdma=0x00000000,     ///<SDMA is selected
            v32bit=0x00000002,     ///<32-bit Address ADMA2 is selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,DmaselVal> dmasel{}; 
        namespace DmaselValC{
            constexpr Register::FieldValue<decltype(dmasel)::Type,DmaselVal::sdma> sdma{};
            constexpr Register::FieldValue<decltype(dmasel)::Type,DmaselVal::v32bit> v32bit{};
        }
        ///Card Detect Test Level
        enum class CarddtlVal {
            no=0x00000000,     ///<No Card
            yes=0x00000001,     ///<Card Inserted
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CarddtlVal> carddtl{}; 
        namespace CarddtlValC{
            constexpr Register::FieldValue<decltype(carddtl)::Type,CarddtlVal::no> no{};
            constexpr Register::FieldValue<decltype(carddtl)::Type,CarddtlVal::yes> yes{};
        }
        ///Card Detect Signal Selection
        enum class CarddselVal {
            normal=0x00000000,     ///<SDCD# is selected (for normal use)
            test=0x00000001,     ///<The Card Select Test Level is selected (for test purpose)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CarddselVal> carddsel{}; 
        namespace CarddselValC{
            constexpr Register::FieldValue<decltype(carddsel)::Type,CarddselVal::normal> normal{};
            constexpr Register::FieldValue<decltype(carddsel)::Type,CarddselVal::test> test{};
        }
    }
    namespace Sdhc0Hc1rEmmc{    ///<Host Control 1
        using Addr = Register::Address<0x45000028,0xffffffe1,0x00000000,std::uint8_t>;
        ///Data Width
        enum class DwVal {
            v1bit=0x00000000,     ///<1-bit mode
            v4bit=0x00000001,     ///<4-bit mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DwVal> dw{}; 
        namespace DwValC{
            constexpr Register::FieldValue<decltype(dw)::Type,DwVal::v1bit> v1bit{};
            constexpr Register::FieldValue<decltype(dw)::Type,DwVal::v4bit> v4bit{};
        }
        ///High Speed Enable
        enum class HsenVal {
            normal=0x00000000,     ///<Normal Speed mode
            high=0x00000001,     ///<High Speed mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,HsenVal> hsen{}; 
        namespace HsenValC{
            constexpr Register::FieldValue<decltype(hsen)::Type,HsenVal::normal> normal{};
            constexpr Register::FieldValue<decltype(hsen)::Type,HsenVal::high> high{};
        }
        ///DMA Select
        enum class DmaselVal {
            sdma=0x00000000,     ///<SDMA is selected
            v32bit=0x00000002,     ///<32-bit Address ADMA2 is selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,DmaselVal> dmasel{}; 
        namespace DmaselValC{
            constexpr Register::FieldValue<decltype(dmasel)::Type,DmaselVal::sdma> sdma{};
            constexpr Register::FieldValue<decltype(dmasel)::Type,DmaselVal::v32bit> v32bit{};
        }
    }
    namespace Sdhc0Pcr{    ///<Power Control
        using Addr = Register::Address<0x45000029,0xfffffff0,0x00000000,std::uint8_t>;
        ///SD Bus Power
        enum class SdbpwrVal {
            off=0x00000000,     ///<Power off
            on=0x00000001,     ///<Power on
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SdbpwrVal> sdbpwr{}; 
        namespace SdbpwrValC{
            constexpr Register::FieldValue<decltype(sdbpwr)::Type,SdbpwrVal::off> off{};
            constexpr Register::FieldValue<decltype(sdbpwr)::Type,SdbpwrVal::on> on{};
        }
        ///SD Bus Voltage Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> sdbvsel{}; 
    }
    namespace Sdhc0Bgcr{    ///<Block Gap Control
        using Addr = Register::Address<0x4500002a,0xfffffff0,0x00000000,std::uint8_t>;
        ///Stop at Block Gap Request
        enum class StpbgrVal {
            transfer=0x00000000,     ///<Transfer
            stop=0x00000001,     ///<Stop
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StpbgrVal> stpbgr{}; 
        namespace StpbgrValC{
            constexpr Register::FieldValue<decltype(stpbgr)::Type,StpbgrVal::transfer> transfer{};
            constexpr Register::FieldValue<decltype(stpbgr)::Type,StpbgrVal::stop> stop{};
        }
        ///Continue Request
        enum class ContrVal {
            goOn=0x00000000,     ///<Not affected
            restart=0x00000001,     ///<Restart
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ContrVal> contr{}; 
        namespace ContrValC{
            constexpr Register::FieldValue<decltype(contr)::Type,ContrVal::goOn> goOn{};
            constexpr Register::FieldValue<decltype(contr)::Type,ContrVal::restart> restart{};
        }
        ///Read Wait Control
        enum class RwctrlVal {
            disable=0x00000000,     ///<Disable Read Wait Control
            enable=0x00000001,     ///<Enable Read Wait Control
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RwctrlVal> rwctrl{}; 
        namespace RwctrlValC{
            constexpr Register::FieldValue<decltype(rwctrl)::Type,RwctrlVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rwctrl)::Type,RwctrlVal::enable> enable{};
        }
        ///Interrupt at Block Gap
        enum class IntbgVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,IntbgVal> intbg{}; 
        namespace IntbgValC{
            constexpr Register::FieldValue<decltype(intbg)::Type,IntbgVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(intbg)::Type,IntbgVal::enabled> enabled{};
        }
    }
    namespace Sdhc0BgcrEmmc{    ///<Block Gap Control
        using Addr = Register::Address<0x4500002a,0xfffffffc,0x00000000,std::uint8_t>;
        ///Stop at Block Gap Request
        enum class StpbgrVal {
            transfer=0x00000000,     ///<Transfer
            stop=0x00000001,     ///<Stop
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StpbgrVal> stpbgr{}; 
        namespace StpbgrValC{
            constexpr Register::FieldValue<decltype(stpbgr)::Type,StpbgrVal::transfer> transfer{};
            constexpr Register::FieldValue<decltype(stpbgr)::Type,StpbgrVal::stop> stop{};
        }
        ///Continue Request
        enum class ContrVal {
            goOn=0x00000000,     ///<Not affected
            restart=0x00000001,     ///<Restart
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ContrVal> contr{}; 
        namespace ContrValC{
            constexpr Register::FieldValue<decltype(contr)::Type,ContrVal::goOn> goOn{};
            constexpr Register::FieldValue<decltype(contr)::Type,ContrVal::restart> restart{};
        }
    }
    namespace Sdhc0Wcr{    ///<Wakeup Control
        using Addr = Register::Address<0x4500002b,0xfffffff8,0x00000000,std::uint8_t>;
        ///Wakeup Event Enable on Card Interrupt
        enum class WkencintVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,WkencintVal> wkencint{}; 
        namespace WkencintValC{
            constexpr Register::FieldValue<decltype(wkencint)::Type,WkencintVal::disable> disable{};
            constexpr Register::FieldValue<decltype(wkencint)::Type,WkencintVal::enable> enable{};
        }
        ///Wakeup Event Enable on Card Insertion
        enum class WkencinsVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WkencinsVal> wkencins{}; 
        namespace WkencinsValC{
            constexpr Register::FieldValue<decltype(wkencins)::Type,WkencinsVal::disable> disable{};
            constexpr Register::FieldValue<decltype(wkencins)::Type,WkencinsVal::enable> enable{};
        }
        ///Wakeup Event Enable on Card Removal
        enum class WkencremVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WkencremVal> wkencrem{}; 
        namespace WkencremValC{
            constexpr Register::FieldValue<decltype(wkencrem)::Type,WkencremVal::disable> disable{};
            constexpr Register::FieldValue<decltype(wkencrem)::Type,WkencremVal::enable> enable{};
        }
    }
    namespace Sdhc0Ccr{    ///<Clock Control
        using Addr = Register::Address<0x4500002c,0xffff0018,0x00000000,std::uint16_t>;
        ///Internal Clock Enable
        enum class IntclkenVal {
            off=0x00000000,     ///<Stop
            on=0x00000001,     ///<Oscillate
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntclkenVal> intclken{}; 
        namespace IntclkenValC{
            constexpr Register::FieldValue<decltype(intclken)::Type,IntclkenVal::off> off{};
            constexpr Register::FieldValue<decltype(intclken)::Type,IntclkenVal::on> on{};
        }
        ///Internal Clock Stable
        enum class IntclksVal {
            notReady=0x00000000,     ///<Not Ready
            ready=0x00000001,     ///<Ready
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IntclksVal> intclks{}; 
        namespace IntclksValC{
            constexpr Register::FieldValue<decltype(intclks)::Type,IntclksVal::notReady> notReady{};
            constexpr Register::FieldValue<decltype(intclks)::Type,IntclksVal::ready> ready{};
        }
        ///SD Clock Enable
        enum class SdclkenVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SdclkenVal> sdclken{}; 
        namespace SdclkenValC{
            constexpr Register::FieldValue<decltype(sdclken)::Type,SdclkenVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sdclken)::Type,SdclkenVal::enable> enable{};
        }
        ///Clock Generator Select
        enum class ClkgselVal {
            div=0x00000000,     ///<Divided Clock Mode
            prog=0x00000001,     ///<Programmable Clock Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ClkgselVal> clkgsel{}; 
        namespace ClkgselValC{
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::div> div{};
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::prog> prog{};
        }
        ///Upper Bits of SDCLK Frequency Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> usdclkfsel{}; 
        ///SDCLK Frequency Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> sdclkfsel{}; 
    }
    namespace Sdhc0Tcr{    ///<Timeout Control
        using Addr = Register::Address<0x4500002e,0xfffffff0,0x00000000,std::uint8_t>;
        ///Data Timeout Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dtcval{}; 
    }
    namespace Sdhc0Srr{    ///<Software Reset
        using Addr = Register::Address<0x4500002f,0xfffffff8,0x00000000,std::uint8_t>;
        ///Software Reset For All
        enum class SwrstallVal {
            work=0x00000000,     ///<Work
            reset=0x00000001,     ///<Reset
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SwrstallVal> swrstall{}; 
        namespace SwrstallValC{
            constexpr Register::FieldValue<decltype(swrstall)::Type,SwrstallVal::work> work{};
            constexpr Register::FieldValue<decltype(swrstall)::Type,SwrstallVal::reset> reset{};
        }
        ///Software Reset For CMD Line
        enum class SwrstcmdVal {
            work=0x00000000,     ///<Work
            reset=0x00000001,     ///<Reset
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SwrstcmdVal> swrstcmd{}; 
        namespace SwrstcmdValC{
            constexpr Register::FieldValue<decltype(swrstcmd)::Type,SwrstcmdVal::work> work{};
            constexpr Register::FieldValue<decltype(swrstcmd)::Type,SwrstcmdVal::reset> reset{};
        }
        ///Software Reset For DAT Line
        enum class SwrstdatVal {
            work=0x00000000,     ///<Work
            reset=0x00000001,     ///<Reset
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwrstdatVal> swrstdat{}; 
        namespace SwrstdatValC{
            constexpr Register::FieldValue<decltype(swrstdat)::Type,SwrstdatVal::work> work{};
            constexpr Register::FieldValue<decltype(swrstdat)::Type,SwrstdatVal::reset> reset{};
        }
    }
    namespace Sdhc0Nistr{    ///<Normal Interrupt Status
        using Addr = Register::Address<0x45000030,0xffff7e00,0x00000000,std::uint16_t>;
        ///Command Complete
        enum class CmdcVal {
            no=0x00000000,     ///<No command complete
            yes=0x00000001,     ///<Command complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CmdcVal> cmdc{}; 
        namespace CmdcValC{
            constexpr Register::FieldValue<decltype(cmdc)::Type,CmdcVal::no> no{};
            constexpr Register::FieldValue<decltype(cmdc)::Type,CmdcVal::yes> yes{};
        }
        ///Transfer Complete
        enum class TrfcVal {
            no=0x00000000,     ///<Not complete
            yes=0x00000001,     ///<Command execution is completed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TrfcVal> trfc{}; 
        namespace TrfcValC{
            constexpr Register::FieldValue<decltype(trfc)::Type,TrfcVal::no> no{};
            constexpr Register::FieldValue<decltype(trfc)::Type,TrfcVal::yes> yes{};
        }
        ///Block Gap Event
        enum class BlkgeVal {
            no=0x00000000,     ///<No Block Gap Event
            stop=0x00000001,     ///<Transaction stopped at block gap
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BlkgeVal> blkge{}; 
        namespace BlkgeValC{
            constexpr Register::FieldValue<decltype(blkge)::Type,BlkgeVal::no> no{};
            constexpr Register::FieldValue<decltype(blkge)::Type,BlkgeVal::stop> stop{};
        }
        ///DMA Interrupt
        enum class DmaintVal {
            no=0x00000000,     ///<No DMA Interrupt
            yes=0x00000001,     ///<DMA Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DmaintVal> dmaint{}; 
        namespace DmaintValC{
            constexpr Register::FieldValue<decltype(dmaint)::Type,DmaintVal::no> no{};
            constexpr Register::FieldValue<decltype(dmaint)::Type,DmaintVal::yes> yes{};
        }
        ///Buffer Write Ready
        enum class BwrrdyVal {
            no=0x00000000,     ///<Not ready to write buffer
            yes=0x00000001,     ///<Ready to write buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BwrrdyVal> bwrrdy{}; 
        namespace BwrrdyValC{
            constexpr Register::FieldValue<decltype(bwrrdy)::Type,BwrrdyVal::no> no{};
            constexpr Register::FieldValue<decltype(bwrrdy)::Type,BwrrdyVal::yes> yes{};
        }
        ///Buffer Read Ready
        enum class BrdrdyVal {
            no=0x00000000,     ///<Not ready to read buffer
            yes=0x00000001,     ///<Ready to read buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BrdrdyVal> brdrdy{}; 
        namespace BrdrdyValC{
            constexpr Register::FieldValue<decltype(brdrdy)::Type,BrdrdyVal::no> no{};
            constexpr Register::FieldValue<decltype(brdrdy)::Type,BrdrdyVal::yes> yes{};
        }
        ///Card Insertion
        enum class CinsVal {
            no=0x00000000,     ///<Card state stable or Debouncing
            yes=0x00000001,     ///<Card inserted
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CinsVal> cins{}; 
        namespace CinsValC{
            constexpr Register::FieldValue<decltype(cins)::Type,CinsVal::no> no{};
            constexpr Register::FieldValue<decltype(cins)::Type,CinsVal::yes> yes{};
        }
        ///Card Removal
        enum class CremVal {
            no=0x00000000,     ///<Card state stable or Debouncing
            yes=0x00000001,     ///<Card Removed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CremVal> crem{}; 
        namespace CremValC{
            constexpr Register::FieldValue<decltype(crem)::Type,CremVal::no> no{};
            constexpr Register::FieldValue<decltype(crem)::Type,CremVal::yes> yes{};
        }
        ///Card Interrupt
        enum class CintVal {
            no=0x00000000,     ///<No Card Interrupt
            yes=0x00000001,     ///<Generate Card Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CintVal> cint{}; 
        namespace CintValC{
            constexpr Register::FieldValue<decltype(cint)::Type,CintVal::no> no{};
            constexpr Register::FieldValue<decltype(cint)::Type,CintVal::yes> yes{};
        }
        ///Error Interrupt
        enum class ErrintVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ErrintVal> errint{}; 
        namespace ErrintValC{
            constexpr Register::FieldValue<decltype(errint)::Type,ErrintVal::no> no{};
            constexpr Register::FieldValue<decltype(errint)::Type,ErrintVal::yes> yes{};
        }
    }
    namespace Sdhc0NistrEmmc{    ///<Normal Interrupt Status
        using Addr = Register::Address<0x45000030,0xffff3fc0,0x00000000,std::uint16_t>;
        ///Command Complete
        enum class CmdcVal {
            no=0x00000000,     ///<No command complete
            yes=0x00000001,     ///<Command complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CmdcVal> cmdc{}; 
        namespace CmdcValC{
            constexpr Register::FieldValue<decltype(cmdc)::Type,CmdcVal::no> no{};
            constexpr Register::FieldValue<decltype(cmdc)::Type,CmdcVal::yes> yes{};
        }
        ///Transfer Complete
        enum class TrfcVal {
            no=0x00000000,     ///<Not complete
            yes=0x00000001,     ///<Command execution is completed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TrfcVal> trfc{}; 
        namespace TrfcValC{
            constexpr Register::FieldValue<decltype(trfc)::Type,TrfcVal::no> no{};
            constexpr Register::FieldValue<decltype(trfc)::Type,TrfcVal::yes> yes{};
        }
        ///Block Gap Event
        enum class BlkgeVal {
            no=0x00000000,     ///<No Block Gap Event
            stop=0x00000001,     ///<Transaction stopped at block gap
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BlkgeVal> blkge{}; 
        namespace BlkgeValC{
            constexpr Register::FieldValue<decltype(blkge)::Type,BlkgeVal::no> no{};
            constexpr Register::FieldValue<decltype(blkge)::Type,BlkgeVal::stop> stop{};
        }
        ///DMA Interrupt
        enum class DmaintVal {
            no=0x00000000,     ///<No DMA Interrupt
            yes=0x00000001,     ///<DMA Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DmaintVal> dmaint{}; 
        namespace DmaintValC{
            constexpr Register::FieldValue<decltype(dmaint)::Type,DmaintVal::no> no{};
            constexpr Register::FieldValue<decltype(dmaint)::Type,DmaintVal::yes> yes{};
        }
        ///Buffer Write Ready
        enum class BwrrdyVal {
            no=0x00000000,     ///<Not ready to write buffer
            yes=0x00000001,     ///<Ready to write buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BwrrdyVal> bwrrdy{}; 
        namespace BwrrdyValC{
            constexpr Register::FieldValue<decltype(bwrrdy)::Type,BwrrdyVal::no> no{};
            constexpr Register::FieldValue<decltype(bwrrdy)::Type,BwrrdyVal::yes> yes{};
        }
        ///Buffer Read Ready
        enum class BrdrdyVal {
            no=0x00000000,     ///<Not ready to read buffer
            yes=0x00000001,     ///<Ready to read buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BrdrdyVal> brdrdy{}; 
        namespace BrdrdyValC{
            constexpr Register::FieldValue<decltype(brdrdy)::Type,BrdrdyVal::no> no{};
            constexpr Register::FieldValue<decltype(brdrdy)::Type,BrdrdyVal::yes> yes{};
        }
        ///Boot Acknowledge Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> bootar{}; 
        ///Error Interrupt
        enum class ErrintVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ErrintVal> errint{}; 
        namespace ErrintValC{
            constexpr Register::FieldValue<decltype(errint)::Type,ErrintVal::no> no{};
            constexpr Register::FieldValue<decltype(errint)::Type,ErrintVal::yes> yes{};
        }
    }
    namespace Sdhc0Eistr{    ///<Error Interrupt Status
        using Addr = Register::Address<0x45000032,0xfffffc00,0x00000000,std::uint16_t>;
        ///Command Timeout Error
        enum class CmdteoVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Timeout
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CmdteoVal> cmdteo{}; 
        namespace CmdteoValC{
            constexpr Register::FieldValue<decltype(cmdteo)::Type,CmdteoVal::no> no{};
            constexpr Register::FieldValue<decltype(cmdteo)::Type,CmdteoVal::yes> yes{};
        }
        ///Command CRC Error
        enum class CmdcrcVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<CRC Error Generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CmdcrcVal> cmdcrc{}; 
        namespace CmdcrcValC{
            constexpr Register::FieldValue<decltype(cmdcrc)::Type,CmdcrcVal::no> no{};
            constexpr Register::FieldValue<decltype(cmdcrc)::Type,CmdcrcVal::yes> yes{};
        }
        ///Command End Bit Error
        enum class CmdendVal {
            no=0x00000000,     ///<No error
            yes=0x00000001,     ///<End Bit Error Generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CmdendVal> cmdend{}; 
        namespace CmdendValC{
            constexpr Register::FieldValue<decltype(cmdend)::Type,CmdendVal::no> no{};
            constexpr Register::FieldValue<decltype(cmdend)::Type,CmdendVal::yes> yes{};
        }
        ///Command Index Error
        enum class CmdidxVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CmdidxVal> cmdidx{}; 
        namespace CmdidxValC{
            constexpr Register::FieldValue<decltype(cmdidx)::Type,CmdidxVal::no> no{};
            constexpr Register::FieldValue<decltype(cmdidx)::Type,CmdidxVal::yes> yes{};
        }
        ///Data Timeout Error
        enum class DatteoVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Timeout
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DatteoVal> datteo{}; 
        namespace DatteoValC{
            constexpr Register::FieldValue<decltype(datteo)::Type,DatteoVal::no> no{};
            constexpr Register::FieldValue<decltype(datteo)::Type,DatteoVal::yes> yes{};
        }
        ///Data CRC Error
        enum class DatcrcVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DatcrcVal> datcrc{}; 
        namespace DatcrcValC{
            constexpr Register::FieldValue<decltype(datcrc)::Type,DatcrcVal::no> no{};
            constexpr Register::FieldValue<decltype(datcrc)::Type,DatcrcVal::yes> yes{};
        }
        ///Data End Bit Error
        enum class DatendVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DatendVal> datend{}; 
        namespace DatendValC{
            constexpr Register::FieldValue<decltype(datend)::Type,DatendVal::no> no{};
            constexpr Register::FieldValue<decltype(datend)::Type,DatendVal::yes> yes{};
        }
        ///Current Limit Error
        enum class CurlimVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Power Fail
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CurlimVal> curlim{}; 
        namespace CurlimValC{
            constexpr Register::FieldValue<decltype(curlim)::Type,CurlimVal::no> no{};
            constexpr Register::FieldValue<decltype(curlim)::Type,CurlimVal::yes> yes{};
        }
        ///Auto CMD Error
        enum class AcmdVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AcmdVal> acmd{}; 
        namespace AcmdValC{
            constexpr Register::FieldValue<decltype(acmd)::Type,AcmdVal::no> no{};
            constexpr Register::FieldValue<decltype(acmd)::Type,AcmdVal::yes> yes{};
        }
        ///ADMA Error
        enum class AdmaVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AdmaVal> adma{}; 
        namespace AdmaValC{
            constexpr Register::FieldValue<decltype(adma)::Type,AdmaVal::no> no{};
            constexpr Register::FieldValue<decltype(adma)::Type,AdmaVal::yes> yes{};
        }
    }
    namespace Sdhc0EistrEmmc{    ///<Error Interrupt Status
        using Addr = Register::Address<0x45000032,0xffffec00,0x00000000,std::uint16_t>;
        ///Command Timeout Error
        enum class CmdteoVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Timeout
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CmdteoVal> cmdteo{}; 
        namespace CmdteoValC{
            constexpr Register::FieldValue<decltype(cmdteo)::Type,CmdteoVal::no> no{};
            constexpr Register::FieldValue<decltype(cmdteo)::Type,CmdteoVal::yes> yes{};
        }
        ///Command CRC Error
        enum class CmdcrcVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<CRC Error Generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CmdcrcVal> cmdcrc{}; 
        namespace CmdcrcValC{
            constexpr Register::FieldValue<decltype(cmdcrc)::Type,CmdcrcVal::no> no{};
            constexpr Register::FieldValue<decltype(cmdcrc)::Type,CmdcrcVal::yes> yes{};
        }
        ///Command End Bit Error
        enum class CmdendVal {
            no=0x00000000,     ///<No error
            yes=0x00000001,     ///<End Bit Error Generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CmdendVal> cmdend{}; 
        namespace CmdendValC{
            constexpr Register::FieldValue<decltype(cmdend)::Type,CmdendVal::no> no{};
            constexpr Register::FieldValue<decltype(cmdend)::Type,CmdendVal::yes> yes{};
        }
        ///Command Index Error
        enum class CmdidxVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CmdidxVal> cmdidx{}; 
        namespace CmdidxValC{
            constexpr Register::FieldValue<decltype(cmdidx)::Type,CmdidxVal::no> no{};
            constexpr Register::FieldValue<decltype(cmdidx)::Type,CmdidxVal::yes> yes{};
        }
        ///Data Timeout Error
        enum class DatteoVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Timeout
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DatteoVal> datteo{}; 
        namespace DatteoValC{
            constexpr Register::FieldValue<decltype(datteo)::Type,DatteoVal::no> no{};
            constexpr Register::FieldValue<decltype(datteo)::Type,DatteoVal::yes> yes{};
        }
        ///Data CRC Error
        enum class DatcrcVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DatcrcVal> datcrc{}; 
        namespace DatcrcValC{
            constexpr Register::FieldValue<decltype(datcrc)::Type,DatcrcVal::no> no{};
            constexpr Register::FieldValue<decltype(datcrc)::Type,DatcrcVal::yes> yes{};
        }
        ///Data End Bit Error
        enum class DatendVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DatendVal> datend{}; 
        namespace DatendValC{
            constexpr Register::FieldValue<decltype(datend)::Type,DatendVal::no> no{};
            constexpr Register::FieldValue<decltype(datend)::Type,DatendVal::yes> yes{};
        }
        ///Current Limit Error
        enum class CurlimVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Power Fail
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CurlimVal> curlim{}; 
        namespace CurlimValC{
            constexpr Register::FieldValue<decltype(curlim)::Type,CurlimVal::no> no{};
            constexpr Register::FieldValue<decltype(curlim)::Type,CurlimVal::yes> yes{};
        }
        ///Auto CMD Error
        enum class AcmdVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AcmdVal> acmd{}; 
        namespace AcmdValC{
            constexpr Register::FieldValue<decltype(acmd)::Type,AcmdVal::no> no{};
            constexpr Register::FieldValue<decltype(acmd)::Type,AcmdVal::yes> yes{};
        }
        ///ADMA Error
        enum class AdmaVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AdmaVal> adma{}; 
        namespace AdmaValC{
            constexpr Register::FieldValue<decltype(adma)::Type,AdmaVal::no> no{};
            constexpr Register::FieldValue<decltype(adma)::Type,AdmaVal::yes> yes{};
        }
        ///Boot Acknowledge Error
        enum class BootaeVal {
            v0=0x00000000,     ///<FIFO contains at least one byte
            v1=0x00000001,     ///<FIFO is empty
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,BootaeVal> bootae{}; 
        namespace BootaeValC{
            constexpr Register::FieldValue<decltype(bootae)::Type,BootaeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bootae)::Type,BootaeVal::v1> v1{};
        }
    }
    namespace Sdhc0Nister{    ///<Normal Interrupt Status Enable
        using Addr = Register::Address<0x45000034,0xfffffe00,0x00000000,std::uint16_t>;
        ///Command Complete Status Enable
        enum class CmdcVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CmdcVal> cmdc{}; 
        namespace CmdcValC{
            constexpr Register::FieldValue<decltype(cmdc)::Type,CmdcVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdc)::Type,CmdcVal::enabled> enabled{};
        }
        ///Transfer Complete Status Enable
        enum class TrfcVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TrfcVal> trfc{}; 
        namespace TrfcValC{
            constexpr Register::FieldValue<decltype(trfc)::Type,TrfcVal::masked> masked{};
            constexpr Register::FieldValue<decltype(trfc)::Type,TrfcVal::enabled> enabled{};
        }
        ///Block Gap Event Status Enable
        enum class BlkgeVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BlkgeVal> blkge{}; 
        namespace BlkgeValC{
            constexpr Register::FieldValue<decltype(blkge)::Type,BlkgeVal::masked> masked{};
            constexpr Register::FieldValue<decltype(blkge)::Type,BlkgeVal::enabled> enabled{};
        }
        ///DMA Interrupt Status Enable
        enum class DmaintVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DmaintVal> dmaint{}; 
        namespace DmaintValC{
            constexpr Register::FieldValue<decltype(dmaint)::Type,DmaintVal::masked> masked{};
            constexpr Register::FieldValue<decltype(dmaint)::Type,DmaintVal::enabled> enabled{};
        }
        ///Buffer Write Ready Status Enable
        enum class BwrrdyVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BwrrdyVal> bwrrdy{}; 
        namespace BwrrdyValC{
            constexpr Register::FieldValue<decltype(bwrrdy)::Type,BwrrdyVal::masked> masked{};
            constexpr Register::FieldValue<decltype(bwrrdy)::Type,BwrrdyVal::enabled> enabled{};
        }
        ///Buffer Read Ready Status Enable
        enum class BrdrdyVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BrdrdyVal> brdrdy{}; 
        namespace BrdrdyValC{
            constexpr Register::FieldValue<decltype(brdrdy)::Type,BrdrdyVal::masked> masked{};
            constexpr Register::FieldValue<decltype(brdrdy)::Type,BrdrdyVal::enabled> enabled{};
        }
        ///Card Insertion Status Enable
        enum class CinsVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CinsVal> cins{}; 
        namespace CinsValC{
            constexpr Register::FieldValue<decltype(cins)::Type,CinsVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cins)::Type,CinsVal::enabled> enabled{};
        }
        ///Card Removal Status Enable
        enum class CremVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CremVal> crem{}; 
        namespace CremValC{
            constexpr Register::FieldValue<decltype(crem)::Type,CremVal::masked> masked{};
            constexpr Register::FieldValue<decltype(crem)::Type,CremVal::enabled> enabled{};
        }
        ///Card Interrupt Status Enable
        enum class CintVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CintVal> cint{}; 
        namespace CintValC{
            constexpr Register::FieldValue<decltype(cint)::Type,CintVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cint)::Type,CintVal::enabled> enabled{};
        }
    }
    namespace Sdhc0NisterEmmc{    ///<Normal Interrupt Status Enable
        using Addr = Register::Address<0x45000034,0xffffbfc0,0x00000000,std::uint16_t>;
        ///Command Complete Status Enable
        enum class CmdcVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CmdcVal> cmdc{}; 
        namespace CmdcValC{
            constexpr Register::FieldValue<decltype(cmdc)::Type,CmdcVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdc)::Type,CmdcVal::enabled> enabled{};
        }
        ///Transfer Complete Status Enable
        enum class TrfcVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TrfcVal> trfc{}; 
        namespace TrfcValC{
            constexpr Register::FieldValue<decltype(trfc)::Type,TrfcVal::masked> masked{};
            constexpr Register::FieldValue<decltype(trfc)::Type,TrfcVal::enabled> enabled{};
        }
        ///Block Gap Event Status Enable
        enum class BlkgeVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BlkgeVal> blkge{}; 
        namespace BlkgeValC{
            constexpr Register::FieldValue<decltype(blkge)::Type,BlkgeVal::masked> masked{};
            constexpr Register::FieldValue<decltype(blkge)::Type,BlkgeVal::enabled> enabled{};
        }
        ///DMA Interrupt Status Enable
        enum class DmaintVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DmaintVal> dmaint{}; 
        namespace DmaintValC{
            constexpr Register::FieldValue<decltype(dmaint)::Type,DmaintVal::masked> masked{};
            constexpr Register::FieldValue<decltype(dmaint)::Type,DmaintVal::enabled> enabled{};
        }
        ///Buffer Write Ready Status Enable
        enum class BwrrdyVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BwrrdyVal> bwrrdy{}; 
        namespace BwrrdyValC{
            constexpr Register::FieldValue<decltype(bwrrdy)::Type,BwrrdyVal::masked> masked{};
            constexpr Register::FieldValue<decltype(bwrrdy)::Type,BwrrdyVal::enabled> enabled{};
        }
        ///Buffer Read Ready Status Enable
        enum class BrdrdyVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BrdrdyVal> brdrdy{}; 
        namespace BrdrdyValC{
            constexpr Register::FieldValue<decltype(brdrdy)::Type,BrdrdyVal::masked> masked{};
            constexpr Register::FieldValue<decltype(brdrdy)::Type,BrdrdyVal::enabled> enabled{};
        }
        ///Boot Acknowledge Received Status Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> bootar{}; 
    }
    namespace Sdhc0Eister{    ///<Error Interrupt Status Enable
        using Addr = Register::Address<0x45000036,0xfffffc00,0x00000000,std::uint16_t>;
        ///Command Timeout Error Status Enable
        enum class CmdteoVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CmdteoVal> cmdteo{}; 
        namespace CmdteoValC{
            constexpr Register::FieldValue<decltype(cmdteo)::Type,CmdteoVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdteo)::Type,CmdteoVal::enabled> enabled{};
        }
        ///Command CRC Error Status Enable
        enum class CmdcrcVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CmdcrcVal> cmdcrc{}; 
        namespace CmdcrcValC{
            constexpr Register::FieldValue<decltype(cmdcrc)::Type,CmdcrcVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdcrc)::Type,CmdcrcVal::enabled> enabled{};
        }
        ///Command End Bit Error Status Enable
        enum class CmdendVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CmdendVal> cmdend{}; 
        namespace CmdendValC{
            constexpr Register::FieldValue<decltype(cmdend)::Type,CmdendVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdend)::Type,CmdendVal::enabled> enabled{};
        }
        ///Command Index Error Status Enable
        enum class CmdidxVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CmdidxVal> cmdidx{}; 
        namespace CmdidxValC{
            constexpr Register::FieldValue<decltype(cmdidx)::Type,CmdidxVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdidx)::Type,CmdidxVal::enabled> enabled{};
        }
        ///Data Timeout Error Status Enable
        enum class DatteoVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DatteoVal> datteo{}; 
        namespace DatteoValC{
            constexpr Register::FieldValue<decltype(datteo)::Type,DatteoVal::masked> masked{};
            constexpr Register::FieldValue<decltype(datteo)::Type,DatteoVal::enabled> enabled{};
        }
        ///Data CRC Error Status Enable
        enum class DatcrcVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DatcrcVal> datcrc{}; 
        namespace DatcrcValC{
            constexpr Register::FieldValue<decltype(datcrc)::Type,DatcrcVal::masked> masked{};
            constexpr Register::FieldValue<decltype(datcrc)::Type,DatcrcVal::enabled> enabled{};
        }
        ///Data End Bit Error Status Enable
        enum class DatendVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DatendVal> datend{}; 
        namespace DatendValC{
            constexpr Register::FieldValue<decltype(datend)::Type,DatendVal::masked> masked{};
            constexpr Register::FieldValue<decltype(datend)::Type,DatendVal::enabled> enabled{};
        }
        ///Current Limit Error Status Enable
        enum class CurlimVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CurlimVal> curlim{}; 
        namespace CurlimValC{
            constexpr Register::FieldValue<decltype(curlim)::Type,CurlimVal::masked> masked{};
            constexpr Register::FieldValue<decltype(curlim)::Type,CurlimVal::enabled> enabled{};
        }
        ///Auto CMD Error Status Enable
        enum class AcmdVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AcmdVal> acmd{}; 
        namespace AcmdValC{
            constexpr Register::FieldValue<decltype(acmd)::Type,AcmdVal::masked> masked{};
            constexpr Register::FieldValue<decltype(acmd)::Type,AcmdVal::enabled> enabled{};
        }
        ///ADMA Error Status Enable
        enum class AdmaVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AdmaVal> adma{}; 
        namespace AdmaValC{
            constexpr Register::FieldValue<decltype(adma)::Type,AdmaVal::masked> masked{};
            constexpr Register::FieldValue<decltype(adma)::Type,AdmaVal::enabled> enabled{};
        }
    }
    namespace Sdhc0EisterEmmc{    ///<Error Interrupt Status Enable
        using Addr = Register::Address<0x45000036,0xffffec00,0x00000000,std::uint16_t>;
        ///Command Timeout Error Status Enable
        enum class CmdteoVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CmdteoVal> cmdteo{}; 
        namespace CmdteoValC{
            constexpr Register::FieldValue<decltype(cmdteo)::Type,CmdteoVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdteo)::Type,CmdteoVal::enabled> enabled{};
        }
        ///Command CRC Error Status Enable
        enum class CmdcrcVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CmdcrcVal> cmdcrc{}; 
        namespace CmdcrcValC{
            constexpr Register::FieldValue<decltype(cmdcrc)::Type,CmdcrcVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdcrc)::Type,CmdcrcVal::enabled> enabled{};
        }
        ///Command End Bit Error Status Enable
        enum class CmdendVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CmdendVal> cmdend{}; 
        namespace CmdendValC{
            constexpr Register::FieldValue<decltype(cmdend)::Type,CmdendVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdend)::Type,CmdendVal::enabled> enabled{};
        }
        ///Command Index Error Status Enable
        enum class CmdidxVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CmdidxVal> cmdidx{}; 
        namespace CmdidxValC{
            constexpr Register::FieldValue<decltype(cmdidx)::Type,CmdidxVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdidx)::Type,CmdidxVal::enabled> enabled{};
        }
        ///Data Timeout Error Status Enable
        enum class DatteoVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DatteoVal> datteo{}; 
        namespace DatteoValC{
            constexpr Register::FieldValue<decltype(datteo)::Type,DatteoVal::masked> masked{};
            constexpr Register::FieldValue<decltype(datteo)::Type,DatteoVal::enabled> enabled{};
        }
        ///Data CRC Error Status Enable
        enum class DatcrcVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DatcrcVal> datcrc{}; 
        namespace DatcrcValC{
            constexpr Register::FieldValue<decltype(datcrc)::Type,DatcrcVal::masked> masked{};
            constexpr Register::FieldValue<decltype(datcrc)::Type,DatcrcVal::enabled> enabled{};
        }
        ///Data End Bit Error Status Enable
        enum class DatendVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DatendVal> datend{}; 
        namespace DatendValC{
            constexpr Register::FieldValue<decltype(datend)::Type,DatendVal::masked> masked{};
            constexpr Register::FieldValue<decltype(datend)::Type,DatendVal::enabled> enabled{};
        }
        ///Current Limit Error Status Enable
        enum class CurlimVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CurlimVal> curlim{}; 
        namespace CurlimValC{
            constexpr Register::FieldValue<decltype(curlim)::Type,CurlimVal::masked> masked{};
            constexpr Register::FieldValue<decltype(curlim)::Type,CurlimVal::enabled> enabled{};
        }
        ///Auto CMD Error Status Enable
        enum class AcmdVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AcmdVal> acmd{}; 
        namespace AcmdValC{
            constexpr Register::FieldValue<decltype(acmd)::Type,AcmdVal::masked> masked{};
            constexpr Register::FieldValue<decltype(acmd)::Type,AcmdVal::enabled> enabled{};
        }
        ///ADMA Error Status Enable
        enum class AdmaVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AdmaVal> adma{}; 
        namespace AdmaValC{
            constexpr Register::FieldValue<decltype(adma)::Type,AdmaVal::masked> masked{};
            constexpr Register::FieldValue<decltype(adma)::Type,AdmaVal::enabled> enabled{};
        }
        ///Boot Acknowledge Error Status Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bootae{}; 
    }
    namespace Sdhc0Nisier{    ///<Normal Interrupt Signal Enable
        using Addr = Register::Address<0x45000038,0xfffffe00,0x00000000,std::uint16_t>;
        ///Command Complete Signal Enable
        enum class CmdcVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CmdcVal> cmdc{}; 
        namespace CmdcValC{
            constexpr Register::FieldValue<decltype(cmdc)::Type,CmdcVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdc)::Type,CmdcVal::enabled> enabled{};
        }
        ///Transfer Complete Signal Enable
        enum class TrfcVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TrfcVal> trfc{}; 
        namespace TrfcValC{
            constexpr Register::FieldValue<decltype(trfc)::Type,TrfcVal::masked> masked{};
            constexpr Register::FieldValue<decltype(trfc)::Type,TrfcVal::enabled> enabled{};
        }
        ///Block Gap Event Signal Enable
        enum class BlkgeVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BlkgeVal> blkge{}; 
        namespace BlkgeValC{
            constexpr Register::FieldValue<decltype(blkge)::Type,BlkgeVal::masked> masked{};
            constexpr Register::FieldValue<decltype(blkge)::Type,BlkgeVal::enabled> enabled{};
        }
        ///DMA Interrupt Signal Enable
        enum class DmaintVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DmaintVal> dmaint{}; 
        namespace DmaintValC{
            constexpr Register::FieldValue<decltype(dmaint)::Type,DmaintVal::masked> masked{};
            constexpr Register::FieldValue<decltype(dmaint)::Type,DmaintVal::enabled> enabled{};
        }
        ///Buffer Write Ready Signal Enable
        enum class BwrrdyVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BwrrdyVal> bwrrdy{}; 
        namespace BwrrdyValC{
            constexpr Register::FieldValue<decltype(bwrrdy)::Type,BwrrdyVal::masked> masked{};
            constexpr Register::FieldValue<decltype(bwrrdy)::Type,BwrrdyVal::enabled> enabled{};
        }
        ///Buffer Read Ready Signal Enable
        enum class BrdrdyVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BrdrdyVal> brdrdy{}; 
        namespace BrdrdyValC{
            constexpr Register::FieldValue<decltype(brdrdy)::Type,BrdrdyVal::masked> masked{};
            constexpr Register::FieldValue<decltype(brdrdy)::Type,BrdrdyVal::enabled> enabled{};
        }
        ///Card Insertion Signal Enable
        enum class CinsVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CinsVal> cins{}; 
        namespace CinsValC{
            constexpr Register::FieldValue<decltype(cins)::Type,CinsVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cins)::Type,CinsVal::enabled> enabled{};
        }
        ///Card Removal Signal Enable
        enum class CremVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CremVal> crem{}; 
        namespace CremValC{
            constexpr Register::FieldValue<decltype(crem)::Type,CremVal::masked> masked{};
            constexpr Register::FieldValue<decltype(crem)::Type,CremVal::enabled> enabled{};
        }
        ///Card Interrupt Signal Enable
        enum class CintVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CintVal> cint{}; 
        namespace CintValC{
            constexpr Register::FieldValue<decltype(cint)::Type,CintVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cint)::Type,CintVal::enabled> enabled{};
        }
    }
    namespace Sdhc0NisierEmmc{    ///<Normal Interrupt Signal Enable
        using Addr = Register::Address<0x45000038,0xffffbfc0,0x00000000,std::uint16_t>;
        ///Command Complete Signal Enable
        enum class CmdcVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CmdcVal> cmdc{}; 
        namespace CmdcValC{
            constexpr Register::FieldValue<decltype(cmdc)::Type,CmdcVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdc)::Type,CmdcVal::enabled> enabled{};
        }
        ///Transfer Complete Signal Enable
        enum class TrfcVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TrfcVal> trfc{}; 
        namespace TrfcValC{
            constexpr Register::FieldValue<decltype(trfc)::Type,TrfcVal::masked> masked{};
            constexpr Register::FieldValue<decltype(trfc)::Type,TrfcVal::enabled> enabled{};
        }
        ///Block Gap Event Signal Enable
        enum class BlkgeVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BlkgeVal> blkge{}; 
        namespace BlkgeValC{
            constexpr Register::FieldValue<decltype(blkge)::Type,BlkgeVal::masked> masked{};
            constexpr Register::FieldValue<decltype(blkge)::Type,BlkgeVal::enabled> enabled{};
        }
        ///DMA Interrupt Signal Enable
        enum class DmaintVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DmaintVal> dmaint{}; 
        namespace DmaintValC{
            constexpr Register::FieldValue<decltype(dmaint)::Type,DmaintVal::masked> masked{};
            constexpr Register::FieldValue<decltype(dmaint)::Type,DmaintVal::enabled> enabled{};
        }
        ///Buffer Write Ready Signal Enable
        enum class BwrrdyVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BwrrdyVal> bwrrdy{}; 
        namespace BwrrdyValC{
            constexpr Register::FieldValue<decltype(bwrrdy)::Type,BwrrdyVal::masked> masked{};
            constexpr Register::FieldValue<decltype(bwrrdy)::Type,BwrrdyVal::enabled> enabled{};
        }
        ///Buffer Read Ready Signal Enable
        enum class BrdrdyVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BrdrdyVal> brdrdy{}; 
        namespace BrdrdyValC{
            constexpr Register::FieldValue<decltype(brdrdy)::Type,BrdrdyVal::masked> masked{};
            constexpr Register::FieldValue<decltype(brdrdy)::Type,BrdrdyVal::enabled> enabled{};
        }
        ///Boot Acknowledge Received Signal Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> bootar{}; 
    }
    namespace Sdhc0Eisier{    ///<Error Interrupt Signal Enable
        using Addr = Register::Address<0x4500003a,0xfffffc00,0x00000000,std::uint16_t>;
        ///Command Timeout Error Signal Enable
        enum class CmdteoVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CmdteoVal> cmdteo{}; 
        namespace CmdteoValC{
            constexpr Register::FieldValue<decltype(cmdteo)::Type,CmdteoVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdteo)::Type,CmdteoVal::enabled> enabled{};
        }
        ///Command CRC Error Signal Enable
        enum class CmdcrcVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CmdcrcVal> cmdcrc{}; 
        namespace CmdcrcValC{
            constexpr Register::FieldValue<decltype(cmdcrc)::Type,CmdcrcVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdcrc)::Type,CmdcrcVal::enabled> enabled{};
        }
        ///Command End Bit Error Signal Enable
        enum class CmdendVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CmdendVal> cmdend{}; 
        namespace CmdendValC{
            constexpr Register::FieldValue<decltype(cmdend)::Type,CmdendVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdend)::Type,CmdendVal::enabled> enabled{};
        }
        ///Command Index Error Signal Enable
        enum class CmdidxVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CmdidxVal> cmdidx{}; 
        namespace CmdidxValC{
            constexpr Register::FieldValue<decltype(cmdidx)::Type,CmdidxVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdidx)::Type,CmdidxVal::enabled> enabled{};
        }
        ///Data Timeout Error Signal Enable
        enum class DatteoVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DatteoVal> datteo{}; 
        namespace DatteoValC{
            constexpr Register::FieldValue<decltype(datteo)::Type,DatteoVal::masked> masked{};
            constexpr Register::FieldValue<decltype(datteo)::Type,DatteoVal::enabled> enabled{};
        }
        ///Data CRC Error Signal Enable
        enum class DatcrcVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DatcrcVal> datcrc{}; 
        namespace DatcrcValC{
            constexpr Register::FieldValue<decltype(datcrc)::Type,DatcrcVal::masked> masked{};
            constexpr Register::FieldValue<decltype(datcrc)::Type,DatcrcVal::enabled> enabled{};
        }
        ///Data End Bit Error Signal Enable
        enum class DatendVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DatendVal> datend{}; 
        namespace DatendValC{
            constexpr Register::FieldValue<decltype(datend)::Type,DatendVal::masked> masked{};
            constexpr Register::FieldValue<decltype(datend)::Type,DatendVal::enabled> enabled{};
        }
        ///Current Limit Error Signal Enable
        enum class CurlimVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CurlimVal> curlim{}; 
        namespace CurlimValC{
            constexpr Register::FieldValue<decltype(curlim)::Type,CurlimVal::masked> masked{};
            constexpr Register::FieldValue<decltype(curlim)::Type,CurlimVal::enabled> enabled{};
        }
        ///Auto CMD Error Signal Enable
        enum class AcmdVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AcmdVal> acmd{}; 
        namespace AcmdValC{
            constexpr Register::FieldValue<decltype(acmd)::Type,AcmdVal::masked> masked{};
            constexpr Register::FieldValue<decltype(acmd)::Type,AcmdVal::enabled> enabled{};
        }
        ///ADMA Error Signal Enable
        enum class AdmaVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AdmaVal> adma{}; 
        namespace AdmaValC{
            constexpr Register::FieldValue<decltype(adma)::Type,AdmaVal::masked> masked{};
            constexpr Register::FieldValue<decltype(adma)::Type,AdmaVal::enabled> enabled{};
        }
    }
    namespace Sdhc0EisierEmmc{    ///<Error Interrupt Signal Enable
        using Addr = Register::Address<0x4500003a,0xffffec00,0x00000000,std::uint16_t>;
        ///Command Timeout Error Signal Enable
        enum class CmdteoVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CmdteoVal> cmdteo{}; 
        namespace CmdteoValC{
            constexpr Register::FieldValue<decltype(cmdteo)::Type,CmdteoVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdteo)::Type,CmdteoVal::enabled> enabled{};
        }
        ///Command CRC Error Signal Enable
        enum class CmdcrcVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CmdcrcVal> cmdcrc{}; 
        namespace CmdcrcValC{
            constexpr Register::FieldValue<decltype(cmdcrc)::Type,CmdcrcVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdcrc)::Type,CmdcrcVal::enabled> enabled{};
        }
        ///Command End Bit Error Signal Enable
        enum class CmdendVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CmdendVal> cmdend{}; 
        namespace CmdendValC{
            constexpr Register::FieldValue<decltype(cmdend)::Type,CmdendVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdend)::Type,CmdendVal::enabled> enabled{};
        }
        ///Command Index Error Signal Enable
        enum class CmdidxVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CmdidxVal> cmdidx{}; 
        namespace CmdidxValC{
            constexpr Register::FieldValue<decltype(cmdidx)::Type,CmdidxVal::masked> masked{};
            constexpr Register::FieldValue<decltype(cmdidx)::Type,CmdidxVal::enabled> enabled{};
        }
        ///Data Timeout Error Signal Enable
        enum class DatteoVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DatteoVal> datteo{}; 
        namespace DatteoValC{
            constexpr Register::FieldValue<decltype(datteo)::Type,DatteoVal::masked> masked{};
            constexpr Register::FieldValue<decltype(datteo)::Type,DatteoVal::enabled> enabled{};
        }
        ///Data CRC Error Signal Enable
        enum class DatcrcVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DatcrcVal> datcrc{}; 
        namespace DatcrcValC{
            constexpr Register::FieldValue<decltype(datcrc)::Type,DatcrcVal::masked> masked{};
            constexpr Register::FieldValue<decltype(datcrc)::Type,DatcrcVal::enabled> enabled{};
        }
        ///Data End Bit Error Signal Enable
        enum class DatendVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DatendVal> datend{}; 
        namespace DatendValC{
            constexpr Register::FieldValue<decltype(datend)::Type,DatendVal::masked> masked{};
            constexpr Register::FieldValue<decltype(datend)::Type,DatendVal::enabled> enabled{};
        }
        ///Current Limit Error Signal Enable
        enum class CurlimVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CurlimVal> curlim{}; 
        namespace CurlimValC{
            constexpr Register::FieldValue<decltype(curlim)::Type,CurlimVal::masked> masked{};
            constexpr Register::FieldValue<decltype(curlim)::Type,CurlimVal::enabled> enabled{};
        }
        ///Auto CMD Error Signal Enable
        enum class AcmdVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AcmdVal> acmd{}; 
        namespace AcmdValC{
            constexpr Register::FieldValue<decltype(acmd)::Type,AcmdVal::masked> masked{};
            constexpr Register::FieldValue<decltype(acmd)::Type,AcmdVal::enabled> enabled{};
        }
        ///ADMA Error Signal Enable
        enum class AdmaVal {
            masked=0x00000000,     ///<Masked
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AdmaVal> adma{}; 
        namespace AdmaValC{
            constexpr Register::FieldValue<decltype(adma)::Type,AdmaVal::masked> masked{};
            constexpr Register::FieldValue<decltype(adma)::Type,AdmaVal::enabled> enabled{};
        }
        ///Boot Acknowledge Error Signal Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bootae{}; 
    }
    namespace Sdhc0Acesr{    ///<Auto CMD Error Status
        using Addr = Register::Address<0x4500003c,0xffffff60,0x00000000,std::uint16_t>;
        ///Auto CMD12 Not Executed
        enum class Acmd12neVal {
            exec=0x00000000,     ///<Executed
            notExec=0x00000001,     ///<Not executed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Acmd12neVal> acmd12ne{}; 
        namespace Acmd12neValC{
            constexpr Register::FieldValue<decltype(acmd12ne)::Type,Acmd12neVal::exec> exec{};
            constexpr Register::FieldValue<decltype(acmd12ne)::Type,Acmd12neVal::notExec> notExec{};
        }
        ///Auto CMD Timeout Error
        enum class AcmdteoVal {
            no=0x00000000,     ///<No error
            yes=0x00000001,     ///<Timeout
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,AcmdteoVal> acmdteo{}; 
        namespace AcmdteoValC{
            constexpr Register::FieldValue<decltype(acmdteo)::Type,AcmdteoVal::no> no{};
            constexpr Register::FieldValue<decltype(acmdteo)::Type,AcmdteoVal::yes> yes{};
        }
        ///Auto CMD CRC Error
        enum class AcmdcrcVal {
            no=0x00000000,     ///<No error
            yes=0x00000001,     ///<CRC Error Generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,AcmdcrcVal> acmdcrc{}; 
        namespace AcmdcrcValC{
            constexpr Register::FieldValue<decltype(acmdcrc)::Type,AcmdcrcVal::no> no{};
            constexpr Register::FieldValue<decltype(acmdcrc)::Type,AcmdcrcVal::yes> yes{};
        }
        ///Auto CMD End Bit Error
        enum class AcmdendVal {
            no=0x00000000,     ///<No error
            yes=0x00000001,     ///<End Bit Error Generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,AcmdendVal> acmdend{}; 
        namespace AcmdendValC{
            constexpr Register::FieldValue<decltype(acmdend)::Type,AcmdendVal::no> no{};
            constexpr Register::FieldValue<decltype(acmdend)::Type,AcmdendVal::yes> yes{};
        }
        ///Auto CMD Index Error
        enum class AcmdidxVal {
            no=0x00000000,     ///<No error
            yes=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,AcmdidxVal> acmdidx{}; 
        namespace AcmdidxValC{
            constexpr Register::FieldValue<decltype(acmdidx)::Type,AcmdidxVal::no> no{};
            constexpr Register::FieldValue<decltype(acmdidx)::Type,AcmdidxVal::yes> yes{};
        }
        ///Command not Issued By Auto CMD12 Error
        enum class CmdniVal {
            ok=0x00000000,     ///<No error
            notIssued=0x00000001,     ///<Not Issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CmdniVal> cmdni{}; 
        namespace CmdniValC{
            constexpr Register::FieldValue<decltype(cmdni)::Type,CmdniVal::ok> ok{};
            constexpr Register::FieldValue<decltype(cmdni)::Type,CmdniVal::notIssued> notIssued{};
        }
    }
    namespace Sdhc0Hc2r{    ///<Host Control 2
        using Addr = Register::Address<0x4500003e,0xffff3f00,0x00000000,std::uint16_t>;
        ///UHS Mode Select
        enum class UhsmsVal {
            sdr12=0x00000000,     ///<SDR12
            sdr25=0x00000001,     ///<SDR25
            sdr50=0x00000002,     ///<SDR50
            sdr104=0x00000003,     ///<SDR104
            ddr50=0x00000004,     ///<DDR50
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,UhsmsVal> uhsms{}; 
        namespace UhsmsValC{
            constexpr Register::FieldValue<decltype(uhsms)::Type,UhsmsVal::sdr12> sdr12{};
            constexpr Register::FieldValue<decltype(uhsms)::Type,UhsmsVal::sdr25> sdr25{};
            constexpr Register::FieldValue<decltype(uhsms)::Type,UhsmsVal::sdr50> sdr50{};
            constexpr Register::FieldValue<decltype(uhsms)::Type,UhsmsVal::sdr104> sdr104{};
            constexpr Register::FieldValue<decltype(uhsms)::Type,UhsmsVal::ddr50> ddr50{};
        }
        ///1.8V Signaling Enable
        enum class Vs18enVal {
            s33v=0x00000000,     ///<3.3V Signaling
            s18v=0x00000001,     ///<1.8V Signaling
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Vs18enVal> vs18en{}; 
        namespace Vs18enValC{
            constexpr Register::FieldValue<decltype(vs18en)::Type,Vs18enVal::s33v> s33v{};
            constexpr Register::FieldValue<decltype(vs18en)::Type,Vs18enVal::s18v> s18v{};
        }
        ///Driver Strength Select
        enum class DrvselVal {
            b=0x00000000,     ///<Driver Type B is Selected (Default)
            a=0x00000001,     ///<Driver Type A is Selected
            c=0x00000002,     ///<Driver Type C is Selected
            d=0x00000003,     ///<Driver Type D is Selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DrvselVal> drvsel{}; 
        namespace DrvselValC{
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::b> b{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::a> a{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::c> c{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::d> d{};
        }
        ///Execute Tuning
        enum class ExtunVal {
            no=0x00000000,     ///<Not Tuned or Tuning Completed
            requested=0x00000001,     ///<Execute Tuning
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ExtunVal> extun{}; 
        namespace ExtunValC{
            constexpr Register::FieldValue<decltype(extun)::Type,ExtunVal::no> no{};
            constexpr Register::FieldValue<decltype(extun)::Type,ExtunVal::requested> requested{};
        }
        ///Sampling Clock Select
        enum class SlckselVal {
            fixed=0x00000000,     ///<Fixed clock is used to sample data
            tuned=0x00000001,     ///<Tuned clock is used to sample data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SlckselVal> slcksel{}; 
        namespace SlckselValC{
            constexpr Register::FieldValue<decltype(slcksel)::Type,SlckselVal::fixed> fixed{};
            constexpr Register::FieldValue<decltype(slcksel)::Type,SlckselVal::tuned> tuned{};
        }
        ///Asynchronous Interrupt Enable
        enum class AsintenVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,AsintenVal> asinten{}; 
        namespace AsintenValC{
            constexpr Register::FieldValue<decltype(asinten)::Type,AsintenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(asinten)::Type,AsintenVal::enabled> enabled{};
        }
        ///Preset Value Enable
        enum class PvalenVal {
            host=0x00000000,     ///<SDCLK and Driver Strength are controlled by Host Controller
            auto_=0x00000001,     ///<Automatic Selection by Preset Value is Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,PvalenVal> pvalen{}; 
        namespace PvalenValC{
            constexpr Register::FieldValue<decltype(pvalen)::Type,PvalenVal::host> host{};
            constexpr Register::FieldValue<decltype(pvalen)::Type,PvalenVal::auto_> auto_{};
        }
    }
    namespace Sdhc0Hc2rEmmc{    ///<Host Control 2
        using Addr = Register::Address<0x4500003e,0xffff7f00,0x00000000,std::uint16_t>;
        ///HS200 Mode Enable
        enum class Hs200enVal {
            sdr12=0x00000000,     ///<SDR12
            sdr25=0x00000001,     ///<SDR25
            sdr50=0x00000002,     ///<SDR50
            sdr104=0x00000003,     ///<SDR104
            ddr50=0x00000004,     ///<DDR50
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Hs200enVal> hs200en{}; 
        namespace Hs200enValC{
            constexpr Register::FieldValue<decltype(hs200en)::Type,Hs200enVal::sdr12> sdr12{};
            constexpr Register::FieldValue<decltype(hs200en)::Type,Hs200enVal::sdr25> sdr25{};
            constexpr Register::FieldValue<decltype(hs200en)::Type,Hs200enVal::sdr50> sdr50{};
            constexpr Register::FieldValue<decltype(hs200en)::Type,Hs200enVal::sdr104> sdr104{};
            constexpr Register::FieldValue<decltype(hs200en)::Type,Hs200enVal::ddr50> ddr50{};
        }
        ///Driver Strength Select
        enum class DrvselVal {
            b=0x00000000,     ///<Driver Type B is Selected (Default)
            a=0x00000001,     ///<Driver Type A is Selected
            c=0x00000002,     ///<Driver Type C is Selected
            d=0x00000003,     ///<Driver Type D is Selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DrvselVal> drvsel{}; 
        namespace DrvselValC{
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::b> b{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::a> a{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::c> c{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::d> d{};
        }
        ///Execute Tuning
        enum class ExtunVal {
            no=0x00000000,     ///<Not Tuned or Tuning Completed
            requested=0x00000001,     ///<Execute Tuning
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ExtunVal> extun{}; 
        namespace ExtunValC{
            constexpr Register::FieldValue<decltype(extun)::Type,ExtunVal::no> no{};
            constexpr Register::FieldValue<decltype(extun)::Type,ExtunVal::requested> requested{};
        }
        ///Sampling Clock Select
        enum class SlckselVal {
            fixed=0x00000000,     ///<Fixed clock is used to sample data
            tuned=0x00000001,     ///<Tuned clock is used to sample data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SlckselVal> slcksel{}; 
        namespace SlckselValC{
            constexpr Register::FieldValue<decltype(slcksel)::Type,SlckselVal::fixed> fixed{};
            constexpr Register::FieldValue<decltype(slcksel)::Type,SlckselVal::tuned> tuned{};
        }
        ///Preset Value Enable
        enum class PvalenVal {
            host=0x00000000,     ///<SDCLK and Driver Strength are controlled by Host Controller
            auto_=0x00000001,     ///<Automatic Selection by Preset Value is Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,PvalenVal> pvalen{}; 
        namespace PvalenValC{
            constexpr Register::FieldValue<decltype(pvalen)::Type,PvalenVal::host> host{};
            constexpr Register::FieldValue<decltype(pvalen)::Type,PvalenVal::auto_> auto_{};
        }
    }
    namespace Sdhc0Ca0r{    ///<Capabilities 0
        using Addr = Register::Address<0x45000040,0x08100040,0x00000000,std::uint32_t>;
        ///Timeout Clock Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> teoclkf{}; 
        ///Timeout Clock Unit
        enum class TeoclkuVal {
            khz=0x00000000,     ///<kHz
            mhz=0x00000001,     ///<MHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TeoclkuVal> teoclku{}; 
        namespace TeoclkuValC{
            constexpr Register::FieldValue<decltype(teoclku)::Type,TeoclkuVal::khz> khz{};
            constexpr Register::FieldValue<decltype(teoclku)::Type,TeoclkuVal::mhz> mhz{};
        }
        ///Base Clock Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> baseclkf{}; 
        ///Max Block Length
        enum class MaxblklVal {
            v512=0x00000000,     ///<512 bytes
            v1024=0x00000001,     ///<1024 bytes
            v2048=0x00000002,     ///<2048 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,MaxblklVal> maxblkl{}; 
        namespace MaxblklValC{
            constexpr Register::FieldValue<decltype(maxblkl)::Type,MaxblklVal::v512> v512{};
            constexpr Register::FieldValue<decltype(maxblkl)::Type,MaxblklVal::v1024> v1024{};
            constexpr Register::FieldValue<decltype(maxblkl)::Type,MaxblklVal::v2048> v2048{};
        }
        ///8-bit Support for Embedded Device
        enum class Ed8supVal {
            no=0x00000000,     ///<8-bit Bus Width not Supported
            yes=0x00000001,     ///<8-bit Bus Width Supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ed8supVal> ed8sup{}; 
        namespace Ed8supValC{
            constexpr Register::FieldValue<decltype(ed8sup)::Type,Ed8supVal::no> no{};
            constexpr Register::FieldValue<decltype(ed8sup)::Type,Ed8supVal::yes> yes{};
        }
        ///ADMA2 Support
        enum class Adma2supVal {
            no=0x00000000,     ///<ADMA2 not Supported
            yes=0x00000001,     ///<ADMA2 Supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Adma2supVal> adma2sup{}; 
        namespace Adma2supValC{
            constexpr Register::FieldValue<decltype(adma2sup)::Type,Adma2supVal::no> no{};
            constexpr Register::FieldValue<decltype(adma2sup)::Type,Adma2supVal::yes> yes{};
        }
        ///High Speed Support
        enum class HssupVal {
            no=0x00000000,     ///<High Speed not Supported
            yes=0x00000001,     ///<High Speed Supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,HssupVal> hssup{}; 
        namespace HssupValC{
            constexpr Register::FieldValue<decltype(hssup)::Type,HssupVal::no> no{};
            constexpr Register::FieldValue<decltype(hssup)::Type,HssupVal::yes> yes{};
        }
        ///SDMA Support
        enum class SdmasupVal {
            no=0x00000000,     ///<SDMA not Supported
            yes=0x00000001,     ///<SDMA Supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,SdmasupVal> sdmasup{}; 
        namespace SdmasupValC{
            constexpr Register::FieldValue<decltype(sdmasup)::Type,SdmasupVal::no> no{};
            constexpr Register::FieldValue<decltype(sdmasup)::Type,SdmasupVal::yes> yes{};
        }
        ///Suspend/Resume Support
        enum class SrsupVal {
            no=0x00000000,     ///<Suspend/Resume not Supported
            yes=0x00000001,     ///<Suspend/Resume Supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SrsupVal> srsup{}; 
        namespace SrsupValC{
            constexpr Register::FieldValue<decltype(srsup)::Type,SrsupVal::no> no{};
            constexpr Register::FieldValue<decltype(srsup)::Type,SrsupVal::yes> yes{};
        }
        ///Voltage Support 3.3V
        enum class V33vsupVal {
            no=0x00000000,     ///<3.3V Not Supported
            yes=0x00000001,     ///<3.3V Supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,V33vsupVal> v33vsup{}; 
        namespace V33vsupValC{
            constexpr Register::FieldValue<decltype(v33vsup)::Type,V33vsupVal::no> no{};
            constexpr Register::FieldValue<decltype(v33vsup)::Type,V33vsupVal::yes> yes{};
        }
        ///Voltage Support 3.0V
        enum class V30vsupVal {
            no=0x00000000,     ///<3.0V Not Supported
            yes=0x00000001,     ///<3.0V Supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,V30vsupVal> v30vsup{}; 
        namespace V30vsupValC{
            constexpr Register::FieldValue<decltype(v30vsup)::Type,V30vsupVal::no> no{};
            constexpr Register::FieldValue<decltype(v30vsup)::Type,V30vsupVal::yes> yes{};
        }
        ///Voltage Support 1.8V
        enum class V18vsupVal {
            no=0x00000000,     ///<1.8V Not Supported
            yes=0x00000001,     ///<1.8V Supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,V18vsupVal> v18vsup{}; 
        namespace V18vsupValC{
            constexpr Register::FieldValue<decltype(v18vsup)::Type,V18vsupVal::no> no{};
            constexpr Register::FieldValue<decltype(v18vsup)::Type,V18vsupVal::yes> yes{};
        }
        ///64-Bit System Bus Support
        enum class Sb64supVal {
            no=0x00000000,     ///<32-bit Address Descriptors and System Bus
            yes=0x00000001,     ///<64-bit Address Descriptors and System Bus
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Sb64supVal> sb64sup{}; 
        namespace Sb64supValC{
            constexpr Register::FieldValue<decltype(sb64sup)::Type,Sb64supVal::no> no{};
            constexpr Register::FieldValue<decltype(sb64sup)::Type,Sb64supVal::yes> yes{};
        }
        ///Asynchronous Interrupt Support
        enum class AsintsupVal {
            no=0x00000000,     ///<Asynchronous Interrupt not Supported
            yes=0x00000001,     ///<Asynchronous Interrupt supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,AsintsupVal> asintsup{}; 
        namespace AsintsupValC{
            constexpr Register::FieldValue<decltype(asintsup)::Type,AsintsupVal::no> no{};
            constexpr Register::FieldValue<decltype(asintsup)::Type,AsintsupVal::yes> yes{};
        }
        ///Slot Type
        enum class SltypeVal {
            removable=0x00000000,     ///<Removable Card Slot
            embedded=0x00000001,     ///<Embedded Slot for One Device
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,SltypeVal> sltype{}; 
        namespace SltypeValC{
            constexpr Register::FieldValue<decltype(sltype)::Type,SltypeVal::removable> removable{};
            constexpr Register::FieldValue<decltype(sltype)::Type,SltypeVal::embedded> embedded{};
        }
    }
    namespace Sdhc0Ca1r{    ///<Capabilities 1
        using Addr = Register::Address<0x45000044,0xff00d088,0x00000000,std::uint32_t>;
        ///SDR50 Support
        enum class Sdr50supVal {
            no=0x00000000,     ///<SDR50 is Not Supported
            yes=0x00000001,     ///<SDR50 is Supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Sdr50supVal> sdr50sup{}; 
        namespace Sdr50supValC{
            constexpr Register::FieldValue<decltype(sdr50sup)::Type,Sdr50supVal::no> no{};
            constexpr Register::FieldValue<decltype(sdr50sup)::Type,Sdr50supVal::yes> yes{};
        }
        ///SDR104 Support
        enum class Sdr104supVal {
            no=0x00000000,     ///<SDR104 is Not Supported
            yes=0x00000001,     ///<SDR104 is Supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Sdr104supVal> sdr104sup{}; 
        namespace Sdr104supValC{
            constexpr Register::FieldValue<decltype(sdr104sup)::Type,Sdr104supVal::no> no{};
            constexpr Register::FieldValue<decltype(sdr104sup)::Type,Sdr104supVal::yes> yes{};
        }
        ///DDR50 Support
        enum class Ddr50supVal {
            no=0x00000000,     ///<DDR50 is Not Supported
            yes=0x00000001,     ///<DDR50 is Supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ddr50supVal> ddr50sup{}; 
        namespace Ddr50supValC{
            constexpr Register::FieldValue<decltype(ddr50sup)::Type,Ddr50supVal::no> no{};
            constexpr Register::FieldValue<decltype(ddr50sup)::Type,Ddr50supVal::yes> yes{};
        }
        ///Driver Type A Support
        enum class DrvasupVal {
            no=0x00000000,     ///<Driver Type A is Not Supported
            yes=0x00000001,     ///<Driver Type A is Supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DrvasupVal> drvasup{}; 
        namespace DrvasupValC{
            constexpr Register::FieldValue<decltype(drvasup)::Type,DrvasupVal::no> no{};
            constexpr Register::FieldValue<decltype(drvasup)::Type,DrvasupVal::yes> yes{};
        }
        ///Driver Type C Support
        enum class DrvcsupVal {
            no=0x00000000,     ///<Driver Type C is Not Supported
            yes=0x00000001,     ///<Driver Type C is Supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DrvcsupVal> drvcsup{}; 
        namespace DrvcsupValC{
            constexpr Register::FieldValue<decltype(drvcsup)::Type,DrvcsupVal::no> no{};
            constexpr Register::FieldValue<decltype(drvcsup)::Type,DrvcsupVal::yes> yes{};
        }
        ///Driver Type D Support
        enum class DrvdsupVal {
            no=0x00000000,     ///<Driver Type D is Not Supported
            yes=0x00000001,     ///<Driver Type D is Supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DrvdsupVal> drvdsup{}; 
        namespace DrvdsupValC{
            constexpr Register::FieldValue<decltype(drvdsup)::Type,DrvdsupVal::no> no{};
            constexpr Register::FieldValue<decltype(drvdsup)::Type,DrvdsupVal::yes> yes{};
        }
        ///Timer Count for Re-Tuning
        enum class TcntrtVal {
            disabled=0x00000000,     ///<Re-Tuning Timer disabled
            v1s=0x00000001,     ///<1 second
            v2s=0x00000002,     ///<2 seconds
            v4s=0x00000003,     ///<4 seconds
            v8s=0x00000004,     ///<8 seconds
            v16s=0x00000005,     ///<16 seconds
            v32s=0x00000006,     ///<32 seconds
            v64s=0x00000007,     ///<64 seconds
            v128s=0x00000008,     ///<128 seconds
            v256s=0x00000009,     ///<256 seconds
            v512s=0x0000000a,     ///<512 seconds
            v1024s=0x0000000b,     ///<1024 seconds
            other=0x0000000f,     ///<Get information from other source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,TcntrtVal> tcntrt{}; 
        namespace TcntrtValC{
            constexpr Register::FieldValue<decltype(tcntrt)::Type,TcntrtVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tcntrt)::Type,TcntrtVal::v1s> v1s{};
            constexpr Register::FieldValue<decltype(tcntrt)::Type,TcntrtVal::v2s> v2s{};
            constexpr Register::FieldValue<decltype(tcntrt)::Type,TcntrtVal::v4s> v4s{};
            constexpr Register::FieldValue<decltype(tcntrt)::Type,TcntrtVal::v8s> v8s{};
            constexpr Register::FieldValue<decltype(tcntrt)::Type,TcntrtVal::v16s> v16s{};
            constexpr Register::FieldValue<decltype(tcntrt)::Type,TcntrtVal::v32s> v32s{};
            constexpr Register::FieldValue<decltype(tcntrt)::Type,TcntrtVal::v64s> v64s{};
            constexpr Register::FieldValue<decltype(tcntrt)::Type,TcntrtVal::v128s> v128s{};
            constexpr Register::FieldValue<decltype(tcntrt)::Type,TcntrtVal::v256s> v256s{};
            constexpr Register::FieldValue<decltype(tcntrt)::Type,TcntrtVal::v512s> v512s{};
            constexpr Register::FieldValue<decltype(tcntrt)::Type,TcntrtVal::v1024s> v1024s{};
            constexpr Register::FieldValue<decltype(tcntrt)::Type,TcntrtVal::other> other{};
        }
        ///Use Tuning for SDR50
        enum class Tsdr50Val {
            no=0x00000000,     ///<SDR50 does not require tuning
            yes=0x00000001,     ///<SDR50 requires tuning
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Tsdr50Val> tsdr50{}; 
        namespace Tsdr50ValC{
            constexpr Register::FieldValue<decltype(tsdr50)::Type,Tsdr50Val::no> no{};
            constexpr Register::FieldValue<decltype(tsdr50)::Type,Tsdr50Val::yes> yes{};
        }
        ///Clock Multiplier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clkmult{}; 
    }
    namespace Sdhc0Mccar{    ///<Maximum Current Capabilities
        using Addr = Register::Address<0x45000048,0xff000000,0x00000000,std::uint32_t>;
        ///Maximum Current for 3.3V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> maxcur33v{}; 
        ///Maximum Current for 3.0V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> maxcur30v{}; 
        ///Maximum Current for 1.8V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> maxcur18v{}; 
    }
    namespace Sdhc0Feraces{    ///<Force Event for Auto CMD Error Status
        using Addr = Register::Address<0x45000050,0xffffff60,0x00000000,std::uint16_t>;
        ///Force Event for Auto CMD12 Not Executed
        enum class Acmd12neVal {
            no=0x00000000,     ///<No Interrupt
            yes=0x00000001,     ///<Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Acmd12neVal> acmd12ne{}; 
        namespace Acmd12neValC{
            constexpr Register::FieldValue<decltype(acmd12ne)::Type,Acmd12neVal::no> no{};
            constexpr Register::FieldValue<decltype(acmd12ne)::Type,Acmd12neVal::yes> yes{};
        }
        ///Force Event for Auto CMD Timeout Error
        enum class AcmdteoVal {
            no=0x00000000,     ///<No Interrupt
            yes=0x00000001,     ///<Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AcmdteoVal> acmdteo{}; 
        namespace AcmdteoValC{
            constexpr Register::FieldValue<decltype(acmdteo)::Type,AcmdteoVal::no> no{};
            constexpr Register::FieldValue<decltype(acmdteo)::Type,AcmdteoVal::yes> yes{};
        }
        ///Force Event for Auto CMD CRC Error
        enum class AcmdcrcVal {
            no=0x00000000,     ///<No Interrupt
            yes=0x00000001,     ///<Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AcmdcrcVal> acmdcrc{}; 
        namespace AcmdcrcValC{
            constexpr Register::FieldValue<decltype(acmdcrc)::Type,AcmdcrcVal::no> no{};
            constexpr Register::FieldValue<decltype(acmdcrc)::Type,AcmdcrcVal::yes> yes{};
        }
        ///Force Event for Auto CMD End Bit Error
        enum class AcmdendVal {
            no=0x00000000,     ///<No Interrupt
            yes=0x00000001,     ///<Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AcmdendVal> acmdend{}; 
        namespace AcmdendValC{
            constexpr Register::FieldValue<decltype(acmdend)::Type,AcmdendVal::no> no{};
            constexpr Register::FieldValue<decltype(acmdend)::Type,AcmdendVal::yes> yes{};
        }
        ///Force Event for Auto CMD Index Error
        enum class AcmdidxVal {
            no=0x00000000,     ///<No Interrupt
            yes=0x00000001,     ///<Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AcmdidxVal> acmdidx{}; 
        namespace AcmdidxValC{
            constexpr Register::FieldValue<decltype(acmdidx)::Type,AcmdidxVal::no> no{};
            constexpr Register::FieldValue<decltype(acmdidx)::Type,AcmdidxVal::yes> yes{};
        }
        ///Force Event for Command Not Issued By Auto CMD12 Error
        enum class CmdniVal {
            no=0x00000000,     ///<No Interrupt
            yes=0x00000001,     ///<Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CmdniVal> cmdni{}; 
        namespace CmdniValC{
            constexpr Register::FieldValue<decltype(cmdni)::Type,CmdniVal::no> no{};
            constexpr Register::FieldValue<decltype(cmdni)::Type,CmdniVal::yes> yes{};
        }
    }
    namespace Sdhc0Fereis{    ///<Force Event for Error Interrupt Status
        using Addr = Register::Address<0x45000052,0xffffec00,0x00000000,std::uint16_t>;
        ///Force Event for Command Timeout Error
        enum class CmdteoVal {
            no=0x00000000,     ///<No Interrupt
            yes=0x00000001,     ///<Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CmdteoVal> cmdteo{}; 
        namespace CmdteoValC{
            constexpr Register::FieldValue<decltype(cmdteo)::Type,CmdteoVal::no> no{};
            constexpr Register::FieldValue<decltype(cmdteo)::Type,CmdteoVal::yes> yes{};
        }
        ///Force Event for Command CRC Error
        enum class CmdcrcVal {
            no=0x00000000,     ///<No Interrupt
            yes=0x00000001,     ///<Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CmdcrcVal> cmdcrc{}; 
        namespace CmdcrcValC{
            constexpr Register::FieldValue<decltype(cmdcrc)::Type,CmdcrcVal::no> no{};
            constexpr Register::FieldValue<decltype(cmdcrc)::Type,CmdcrcVal::yes> yes{};
        }
        ///Force Event for Command End Bit Error
        enum class CmdendVal {
            no=0x00000000,     ///<No Interrupt
            yes=0x00000001,     ///<Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CmdendVal> cmdend{}; 
        namespace CmdendValC{
            constexpr Register::FieldValue<decltype(cmdend)::Type,CmdendVal::no> no{};
            constexpr Register::FieldValue<decltype(cmdend)::Type,CmdendVal::yes> yes{};
        }
        ///Force Event for Command Index Error
        enum class CmdidxVal {
            no=0x00000000,     ///<No Interrupt
            yes=0x00000001,     ///<Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CmdidxVal> cmdidx{}; 
        namespace CmdidxValC{
            constexpr Register::FieldValue<decltype(cmdidx)::Type,CmdidxVal::no> no{};
            constexpr Register::FieldValue<decltype(cmdidx)::Type,CmdidxVal::yes> yes{};
        }
        ///Force Event for Data Timeout Error
        enum class DatteoVal {
            no=0x00000000,     ///<No Interrupt
            yes=0x00000001,     ///<Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DatteoVal> datteo{}; 
        namespace DatteoValC{
            constexpr Register::FieldValue<decltype(datteo)::Type,DatteoVal::no> no{};
            constexpr Register::FieldValue<decltype(datteo)::Type,DatteoVal::yes> yes{};
        }
        ///Force Event for Data CRC Error
        enum class DatcrcVal {
            no=0x00000000,     ///<No Interrupt
            yes=0x00000001,     ///<Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DatcrcVal> datcrc{}; 
        namespace DatcrcValC{
            constexpr Register::FieldValue<decltype(datcrc)::Type,DatcrcVal::no> no{};
            constexpr Register::FieldValue<decltype(datcrc)::Type,DatcrcVal::yes> yes{};
        }
        ///Force Event for Data End Bit Error
        enum class DatendVal {
            no=0x00000000,     ///<No Interrupt
            yes=0x00000001,     ///<Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DatendVal> datend{}; 
        namespace DatendValC{
            constexpr Register::FieldValue<decltype(datend)::Type,DatendVal::no> no{};
            constexpr Register::FieldValue<decltype(datend)::Type,DatendVal::yes> yes{};
        }
        ///Force Event for Current Limit Error
        enum class CurlimVal {
            no=0x00000000,     ///<No Interrupt
            yes=0x00000001,     ///<Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CurlimVal> curlim{}; 
        namespace CurlimValC{
            constexpr Register::FieldValue<decltype(curlim)::Type,CurlimVal::no> no{};
            constexpr Register::FieldValue<decltype(curlim)::Type,CurlimVal::yes> yes{};
        }
        ///Force Event for Auto CMD Error
        enum class AcmdVal {
            no=0x00000000,     ///<No Interrupt
            yes=0x00000001,     ///<Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AcmdVal> acmd{}; 
        namespace AcmdValC{
            constexpr Register::FieldValue<decltype(acmd)::Type,AcmdVal::no> no{};
            constexpr Register::FieldValue<decltype(acmd)::Type,AcmdVal::yes> yes{};
        }
        ///Force Event for ADMA Error
        enum class AdmaVal {
            no=0x00000000,     ///<No Interrupt
            yes=0x00000001,     ///<Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AdmaVal> adma{}; 
        namespace AdmaValC{
            constexpr Register::FieldValue<decltype(adma)::Type,AdmaVal::no> no{};
            constexpr Register::FieldValue<decltype(adma)::Type,AdmaVal::yes> yes{};
        }
        ///Force Event for Boot Acknowledge Error
        enum class BootaeVal {
            no=0x00000000,     ///<No Interrupt
            yes=0x00000001,     ///<Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,BootaeVal> bootae{}; 
        namespace BootaeValC{
            constexpr Register::FieldValue<decltype(bootae)::Type,BootaeVal::no> no{};
            constexpr Register::FieldValue<decltype(bootae)::Type,BootaeVal::yes> yes{};
        }
    }
    namespace Sdhc0Aesr{    ///<ADMA Error Status
        using Addr = Register::Address<0x45000054,0xfffffff8,0x00000000,std::uint8_t>;
        ///ADMA Error State
        enum class ErrstVal {
            stop=0x00000000,     ///<ST_STOP (Stop DMA)
            fds=0x00000001,     ///<ST_FDS (Fetch Descriptor)
            tfr=0x00000003,     ///<ST_TFR (Transfer Data)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ErrstVal> errst{}; 
        namespace ErrstValC{
            constexpr Register::FieldValue<decltype(errst)::Type,ErrstVal::stop> stop{};
            constexpr Register::FieldValue<decltype(errst)::Type,ErrstVal::fds> fds{};
            constexpr Register::FieldValue<decltype(errst)::Type,ErrstVal::tfr> tfr{};
        }
        ///ADMA Length Mismatch Error
        enum class LmisVal {
            no=0x00000000,     ///<No Error
            yes=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,LmisVal> lmis{}; 
        namespace LmisValC{
            constexpr Register::FieldValue<decltype(lmis)::Type,LmisVal::no> no{};
            constexpr Register::FieldValue<decltype(lmis)::Type,LmisVal::yes> yes{};
        }
    }
    namespace Sdhc0Sisr{    ///<Slot Interrupt Status
        using Addr = Register::Address<0x450000fc,0xfffffffe,0x00000000,std::uint16_t>;
        ///Interrupt Signal for Each Slot
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intssl{}; 
    }
    namespace Sdhc0Hcvr{    ///<Host Controller Version
        using Addr = Register::Address<0x450000fe,0xffff0000,0x00000000,std::uint16_t>;
        ///Spec Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sver{}; 
        ///Vendor Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> vver{}; 
    }
    namespace Sdhc0Mc1r{    ///<MMC Control 1
        using Addr = Register::Address<0x45000204,0xffffff04,0x00000000,std::uint8_t>;
        ///e.MMC Command Type
        enum class CmdtypVal {
            normal=0x00000000,     ///<Not a MMC specific command
            waitirq=0x00000001,     ///<Wait IRQ Command
            stream=0x00000002,     ///<Stream Command
            boot=0x00000003,     ///<Boot Command
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmdtypVal> cmdtyp{}; 
        namespace CmdtypValC{
            constexpr Register::FieldValue<decltype(cmdtyp)::Type,CmdtypVal::normal> normal{};
            constexpr Register::FieldValue<decltype(cmdtyp)::Type,CmdtypVal::waitirq> waitirq{};
            constexpr Register::FieldValue<decltype(cmdtyp)::Type,CmdtypVal::stream> stream{};
            constexpr Register::FieldValue<decltype(cmdtyp)::Type,CmdtypVal::boot> boot{};
        }
        ///e.MMC HSDDR Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ddr{}; 
        ///e.MMC Open Drain Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> opd{}; 
        ///e.MMC Boot Acknowledge Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> boota{}; 
        ///e.MMC Reset Signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rstn{}; 
        ///e.MMC Force Card Detect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fcd{}; 
    }
    namespace Sdhc0Mc2r{    ///<MMC Control 2
        using Addr = Register::Address<0x45000205,0xfffffffc,0x00000000,std::uint8_t>;
        ///e.MMC Abort Wait IRQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sresp{}; 
        ///e.MMC Abort Boot
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> aboot{}; 
    }
    namespace Sdhc0Acr{    ///<AHB Control
        using Addr = Register::Address<0x45000208,0xfffffffc,0x00000000,std::uint32_t>;
        ///AHB Maximum Burst
        enum class BmaxVal {
            incr16=0x00000000,     ///<
            incr8=0x00000001,     ///<
            incr4=0x00000002,     ///<
            single=0x00000003,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,BmaxVal> bmax{}; 
        namespace BmaxValC{
            constexpr Register::FieldValue<decltype(bmax)::Type,BmaxVal::incr16> incr16{};
            constexpr Register::FieldValue<decltype(bmax)::Type,BmaxVal::incr8> incr8{};
            constexpr Register::FieldValue<decltype(bmax)::Type,BmaxVal::incr4> incr4{};
            constexpr Register::FieldValue<decltype(bmax)::Type,BmaxVal::single> single{};
        }
    }
    namespace Sdhc0Cc2r{    ///<Clock Control 2
        using Addr = Register::Address<0x4500020c,0xfffffffe,0x00000000,std::uint32_t>;
        ///Force SDCK Disabled
        enum class FsdclkdVal {
            noeffect=0x00000000,     ///<No effect
            disable=0x00000001,     ///<SDCLK can be stopped at any time after DATA transfer.SDCLK enable forcing for 8 SDCLK cycles is disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FsdclkdVal> fsdclkd{}; 
        namespace FsdclkdValC{
            constexpr Register::FieldValue<decltype(fsdclkd)::Type,FsdclkdVal::noeffect> noeffect{};
            constexpr Register::FieldValue<decltype(fsdclkd)::Type,FsdclkdVal::disable> disable{};
        }
    }
    namespace Sdhc0Cacr{    ///<Capabilities Control
        using Addr = Register::Address<0x45000230,0xffff00fe,0x00000000,std::uint32_t>;
        ///Capabilities Registers Write Enable (Required to write the correct frequencies in the Capabilities Registers)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capwren{}; 
        ///Key (0x46)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace Sdhc0Dbgr{    ///<Debug
        using Addr = Register::Address<0x45000234,0xfffffffe,0x00000000,std::uint8_t>;
        ///Non-intrusive debug enable
        enum class NidbgVal {
            idbg=0x00000000,     ///<Debugging is intrusive (reads of BDPR from debugger are considered and increment the internal buffer pointer)
            nidbg=0x00000001,     ///<Debugging is not intrusive (reads of BDPR from debugger are discarded and do not increment the internal buffer pointer)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,NidbgVal> nidbg{}; 
        namespace NidbgValC{
            constexpr Register::FieldValue<decltype(nidbg)::Type,NidbgVal::idbg> idbg{};
            constexpr Register::FieldValue<decltype(nidbg)::Type,NidbgVal::nidbg> nidbg{};
        }
    }
    namespace Sdhc0Rr0{    ///<Response
        using Addr = Register::Address<0x45000010,0x00000000,0x00000000,std::uint32_t>;
        ///Command Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdresp{}; 
    }
    namespace Sdhc0Rr1{    ///<Response
        using Addr = Register::Address<0x45000014,0x00000000,0x00000000,std::uint32_t>;
        ///Command Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdresp{}; 
    }
    namespace Sdhc0Rr2{    ///<Response
        using Addr = Register::Address<0x45000018,0x00000000,0x00000000,std::uint32_t>;
        ///Command Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdresp{}; 
    }
    namespace Sdhc0Rr3{    ///<Response
        using Addr = Register::Address<0x4500001c,0x00000000,0x00000000,std::uint32_t>;
        ///Command Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdresp{}; 
    }
    namespace Sdhc0Asar0{    ///<ADMA System Address n
        using Addr = Register::Address<0x45000058,0x00000000,0x00000000,std::uint32_t>;
        ///ADMA System Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> admasa{}; 
    }
    namespace Sdhc0Pvr0{    ///<Preset Value n
        using Addr = Register::Address<0x45000060,0xffff3800,0x00000000,std::uint16_t>;
        ///SDCLK Frequency Select Value for Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> sdclkfsel{}; 
        ///Clock Generator Select Value for Initialization
        enum class ClkgselVal {
            div=0x00000000,     ///<Host Controller Ver2.00 Compatible Clock Generator (Divider)
            prog=0x00000001,     ///<Programmable Clock Generator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ClkgselVal> clkgsel{}; 
        namespace ClkgselValC{
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::div> div{};
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::prog> prog{};
        }
        ///Driver Strength Select Value for Initialization
        enum class DrvselVal {
            b=0x00000000,     ///<Driver Type B is Selected
            a=0x00000001,     ///<Driver Type A is Selected
            c=0x00000002,     ///<Driver Type C is Selected
            d=0x00000003,     ///<Driver Type D is Selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DrvselVal> drvsel{}; 
        namespace DrvselValC{
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::b> b{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::a> a{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::c> c{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::d> d{};
        }
    }
    namespace Sdhc0Pvr1{    ///<Preset Value n
        using Addr = Register::Address<0x45000062,0xffff3800,0x00000000,std::uint16_t>;
        ///SDCLK Frequency Select Value for Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> sdclkfsel{}; 
        ///Clock Generator Select Value for Initialization
        enum class ClkgselVal {
            div=0x00000000,     ///<Host Controller Ver2.00 Compatible Clock Generator (Divider)
            prog=0x00000001,     ///<Programmable Clock Generator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ClkgselVal> clkgsel{}; 
        namespace ClkgselValC{
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::div> div{};
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::prog> prog{};
        }
        ///Driver Strength Select Value for Initialization
        enum class DrvselVal {
            b=0x00000000,     ///<Driver Type B is Selected
            a=0x00000001,     ///<Driver Type A is Selected
            c=0x00000002,     ///<Driver Type C is Selected
            d=0x00000003,     ///<Driver Type D is Selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DrvselVal> drvsel{}; 
        namespace DrvselValC{
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::b> b{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::a> a{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::c> c{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::d> d{};
        }
    }
    namespace Sdhc0Pvr2{    ///<Preset Value n
        using Addr = Register::Address<0x45000064,0xffff3800,0x00000000,std::uint16_t>;
        ///SDCLK Frequency Select Value for Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> sdclkfsel{}; 
        ///Clock Generator Select Value for Initialization
        enum class ClkgselVal {
            div=0x00000000,     ///<Host Controller Ver2.00 Compatible Clock Generator (Divider)
            prog=0x00000001,     ///<Programmable Clock Generator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ClkgselVal> clkgsel{}; 
        namespace ClkgselValC{
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::div> div{};
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::prog> prog{};
        }
        ///Driver Strength Select Value for Initialization
        enum class DrvselVal {
            b=0x00000000,     ///<Driver Type B is Selected
            a=0x00000001,     ///<Driver Type A is Selected
            c=0x00000002,     ///<Driver Type C is Selected
            d=0x00000003,     ///<Driver Type D is Selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DrvselVal> drvsel{}; 
        namespace DrvselValC{
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::b> b{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::a> a{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::c> c{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::d> d{};
        }
    }
    namespace Sdhc0Pvr3{    ///<Preset Value n
        using Addr = Register::Address<0x45000066,0xffff3800,0x00000000,std::uint16_t>;
        ///SDCLK Frequency Select Value for Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> sdclkfsel{}; 
        ///Clock Generator Select Value for Initialization
        enum class ClkgselVal {
            div=0x00000000,     ///<Host Controller Ver2.00 Compatible Clock Generator (Divider)
            prog=0x00000001,     ///<Programmable Clock Generator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ClkgselVal> clkgsel{}; 
        namespace ClkgselValC{
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::div> div{};
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::prog> prog{};
        }
        ///Driver Strength Select Value for Initialization
        enum class DrvselVal {
            b=0x00000000,     ///<Driver Type B is Selected
            a=0x00000001,     ///<Driver Type A is Selected
            c=0x00000002,     ///<Driver Type C is Selected
            d=0x00000003,     ///<Driver Type D is Selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DrvselVal> drvsel{}; 
        namespace DrvselValC{
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::b> b{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::a> a{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::c> c{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::d> d{};
        }
    }
    namespace Sdhc0Pvr4{    ///<Preset Value n
        using Addr = Register::Address<0x45000068,0xffff3800,0x00000000,std::uint16_t>;
        ///SDCLK Frequency Select Value for Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> sdclkfsel{}; 
        ///Clock Generator Select Value for Initialization
        enum class ClkgselVal {
            div=0x00000000,     ///<Host Controller Ver2.00 Compatible Clock Generator (Divider)
            prog=0x00000001,     ///<Programmable Clock Generator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ClkgselVal> clkgsel{}; 
        namespace ClkgselValC{
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::div> div{};
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::prog> prog{};
        }
        ///Driver Strength Select Value for Initialization
        enum class DrvselVal {
            b=0x00000000,     ///<Driver Type B is Selected
            a=0x00000001,     ///<Driver Type A is Selected
            c=0x00000002,     ///<Driver Type C is Selected
            d=0x00000003,     ///<Driver Type D is Selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DrvselVal> drvsel{}; 
        namespace DrvselValC{
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::b> b{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::a> a{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::c> c{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::d> d{};
        }
    }
    namespace Sdhc0Pvr5{    ///<Preset Value n
        using Addr = Register::Address<0x4500006a,0xffff3800,0x00000000,std::uint16_t>;
        ///SDCLK Frequency Select Value for Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> sdclkfsel{}; 
        ///Clock Generator Select Value for Initialization
        enum class ClkgselVal {
            div=0x00000000,     ///<Host Controller Ver2.00 Compatible Clock Generator (Divider)
            prog=0x00000001,     ///<Programmable Clock Generator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ClkgselVal> clkgsel{}; 
        namespace ClkgselValC{
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::div> div{};
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::prog> prog{};
        }
        ///Driver Strength Select Value for Initialization
        enum class DrvselVal {
            b=0x00000000,     ///<Driver Type B is Selected
            a=0x00000001,     ///<Driver Type A is Selected
            c=0x00000002,     ///<Driver Type C is Selected
            d=0x00000003,     ///<Driver Type D is Selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DrvselVal> drvsel{}; 
        namespace DrvselValC{
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::b> b{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::a> a{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::c> c{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::d> d{};
        }
    }
    namespace Sdhc0Pvr6{    ///<Preset Value n
        using Addr = Register::Address<0x4500006c,0xffff3800,0x00000000,std::uint16_t>;
        ///SDCLK Frequency Select Value for Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> sdclkfsel{}; 
        ///Clock Generator Select Value for Initialization
        enum class ClkgselVal {
            div=0x00000000,     ///<Host Controller Ver2.00 Compatible Clock Generator (Divider)
            prog=0x00000001,     ///<Programmable Clock Generator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ClkgselVal> clkgsel{}; 
        namespace ClkgselValC{
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::div> div{};
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::prog> prog{};
        }
        ///Driver Strength Select Value for Initialization
        enum class DrvselVal {
            b=0x00000000,     ///<Driver Type B is Selected
            a=0x00000001,     ///<Driver Type A is Selected
            c=0x00000002,     ///<Driver Type C is Selected
            d=0x00000003,     ///<Driver Type D is Selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DrvselVal> drvsel{}; 
        namespace DrvselValC{
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::b> b{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::a> a{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::c> c{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::d> d{};
        }
    }
    namespace Sdhc0Pvr7{    ///<Preset Value n
        using Addr = Register::Address<0x4500006e,0xffff3800,0x00000000,std::uint16_t>;
        ///SDCLK Frequency Select Value for Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> sdclkfsel{}; 
        ///Clock Generator Select Value for Initialization
        enum class ClkgselVal {
            div=0x00000000,     ///<Host Controller Ver2.00 Compatible Clock Generator (Divider)
            prog=0x00000001,     ///<Programmable Clock Generator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ClkgselVal> clkgsel{}; 
        namespace ClkgselValC{
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::div> div{};
            constexpr Register::FieldValue<decltype(clkgsel)::Type,ClkgselVal::prog> prog{};
        }
        ///Driver Strength Select Value for Initialization
        enum class DrvselVal {
            b=0x00000000,     ///<Driver Type B is Selected
            a=0x00000001,     ///<Driver Type A is Selected
            c=0x00000002,     ///<Driver Type C is Selected
            d=0x00000003,     ///<Driver Type D is Selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DrvselVal> drvsel{}; 
        namespace DrvselValC{
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::b> b{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::a> a{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::c> c{};
            constexpr Register::FieldValue<decltype(drvsel)::Type,DrvselVal::d> d{};
        }
    }
}
