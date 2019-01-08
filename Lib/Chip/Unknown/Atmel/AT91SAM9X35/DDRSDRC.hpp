#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DDR_SDR SDRAM Controller
    namespace DdrsdrcMr{    ///<DDRSDRC Mode Register
        using Addr = Register::Address<0xffffe800,0xfffffff8,0x00000000,std::uint32_t>;
        ///DDRSDRC Command Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> mode{}; 
    }
    namespace DdrsdrcRtr{    ///<DDRSDRC Refresh Timer Register
        using Addr = Register::Address<0xffffe804,0xfffff000,0x00000000,std::uint32_t>;
        ///DDRSDRC Refresh Timer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace DdrsdrcCr{    ///<DDRSDRC Configuration Register
        using Addr = Register::Address<0xffffe808,0xffaa8c00,0x00000000,std::uint32_t>;
        ///Number of Column Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> nc{}; 
        ///Number of Row Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> nr{}; 
        ///CAS Latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> cas{}; 
        ///Reset DLL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dll{}; 
        ///Output Driver Impedance Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dic{}; 
        ///Disable DLL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> disDll{}; 
        ///Off-chip Driver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ocd{}; 
        ///External Bus Interface is Shared
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ebishare{}; 
        ///ACTIVE Bank X to Burst Stop Read Access Bank Y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> actbst{}; 
        ///Number of Banks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> nb{}; 
        ///Type of Decoding
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> decod{}; 
    }
    namespace DdrsdrcTpr0{    ///<DDRSDRC Timing Parameter 0 Register
        using Addr = Register::Address<0xffffe80c,0x00000000,0x00000000,std::uint32_t>;
        ///Active to Precharge Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tras{}; 
        ///Row to Column Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> trcd{}; 
        ///Write Recovery Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> twr{}; 
        ///Row Cycle Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> trc{}; 
        ///Row Precharge Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trp{}; 
        ///Active bankA to Active bankB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> trrd{}; 
        ///Internal Write to Read Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> twtr{}; 
        ///Reduce Write to Read Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> reduceWrrd{}; 
        ///Load Mode Register Command to Active or Refresh Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> tmrd{}; 
    }
    namespace DdrsdrcTpr1{    ///<DDRSDRC Timing Parameter 1 Register
        using Addr = Register::Address<0xffffe810,0xf00000e0,0x00000000,std::uint32_t>;
        ///Row Cycle Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trfc{}; 
        ///Exit Self Refresh Delay to Non-read Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txsnr{}; 
        ///ExiT Self Refresh Delay to Read Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> txsrd{}; 
        ///Exit Power-down Delay to First Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> txp{}; 
    }
    namespace DdrsdrcTpr2{    ///<DDRSDRC Timing Parameter 2 Register
        using Addr = Register::Address<0xffffe814,0xfff08000,0x00000000,std::uint32_t>;
        ///Exit Active Power Down Delay to Read Command in Mode "Fast Exit".
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> txard{}; 
        ///Exit Active Power Down Delay to Read Command in Mode "Slow Exit".
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> txards{}; 
        ///Row Precharge All Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> trpa{}; 
        ///Read to Precharge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> trtp{}; 
        ///Four Active window
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tfaw{}; 
    }
    namespace DdrsdrcLpr{    ///<DDRSDRC Low-power Register
        using Addr = Register::Address<0xffffe81c,0xffcec888,0x00000000,std::uint32_t>;
        ///Low-power Command Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> lpcb{}; 
        ///Clock Frozen Command Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clkFr{}; 
        ///Partial Array Self Refresh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> pasr{}; 
        ///Drive Strength
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ds{}; 
        ///Low Power Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///Active Power Down Exit Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> apde{}; 
        ///Update Load Mode Register and Extended Mode Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> updMr{}; 
    }
    namespace DdrsdrcMd{    ///<DDRSDRC Memory Device Register
        using Addr = Register::Address<0xffffe820,0xffffffe8,0x00000000,std::uint32_t>;
        ///Memory Device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> md{}; 
        ///Data Bus Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dbw{}; 
    }
    namespace DdrsdrcDll{    ///<DDRSDRC DLL Information Register
        using Addr = Register::Address<0xffffe824,0xffff00f8,0x00000000,std::uint32_t>;
        ///DLL Master Delay Increment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdinc{}; 
        ///DLL Master Delay Decrement
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mddec{}; 
        ///DLL Master Delay Overflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdovf{}; 
        ///DLL Master Delay Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdval{}; 
    }
    namespace DdrsdrcHs{    ///<DDRSDRC High Speed Register
        using Addr = Register::Address<0xffffe82c,0xfffffffb,0x00000000,std::uint32_t>;
        ///Anticip Read Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> disAnticipRead{}; 
    }
    namespace DdrsdrcWpmr{    ///<DDRSDRC Write Protect Mode Register
        using Addr = Register::Address<0xffffe8e4,0x000000fe,0x00000000,std::uint32_t>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace DdrsdrcWpsr{    ///<DDRSDRC Write Protect Status Register
        using Addr = Register::Address<0xffffe8e8,0xff0000fe,0x00000000,std::uint32_t>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvsrc{}; 
    }
}
