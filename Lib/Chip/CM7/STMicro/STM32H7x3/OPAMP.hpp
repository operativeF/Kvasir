#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Operational amplifiers
    namespace OpampOpamp1Csr{    ///<OPAMP1 control/status register
        using Addr = Register::Address<0x40009000,0x9ff80690,0x00000000,std::uint32_t>;
        ///Operational amplifier              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opaen{}; 
        ///Force internal reference on VP (reserved              for test
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> forceVp{}; 
        ///Operational amplifier PGA              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> vpSel{}; 
        ///Inverting input selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> vmSel{}; 
        ///Operational amplifier high-speed              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> opahsm{}; 
        ///Calibration mode enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> calon{}; 
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> calsel{}; 
        ///allows to switch from AOP offset trimmed              values to AOP offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,14),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        ///User trimming enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usertrim{}; 
        ///OPAMP calibration reference voltage              output control (reserved for test)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tstref{}; 
        ///Operational amplifier calibration              output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> calout{}; 
    }
    namespace OpampOpamp1Otr{    ///<OPAMP1 offset trimming register in normal          mode
        using Addr = Register::Address<0x40009004,0xffffe0e0,0x00000000,std::uint32_t>;
        ///Trim for NMOS differential              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        ///Trim for PMOS differential              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
    }
    namespace OpampOpamp1Hsotr{    ///<OPAMP1 offset trimming register in low-power          mode
        using Addr = Register::Address<0x40009008,0xffffe0e0,0x00000000,std::uint32_t>;
        ///Trim for NMOS differential              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trimlpoffsetn{}; 
        ///Trim for PMOS differential              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> trimlpoffsetp{}; 
    }
    namespace OpampOpamp2Csr{    ///<OPAMP2 control/status register
        using Addr = Register::Address<0x40009010,0x9ff8069c,0x00000000,std::uint32_t>;
        ///Operational amplifier              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opaen{}; 
        ///Force internal reference on VP (reserved              for test)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> forceVp{}; 
        ///Inverting input selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> vmSel{}; 
        ///Operational amplifier high-speed              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> opahsm{}; 
        ///Calibration mode enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> calon{}; 
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> calsel{}; 
        ///Operational amplifier Programmable              amplifier gain value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,14),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        ///User trimming enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usertrim{}; 
        ///OPAMP calibration reference voltage              output control (reserved for test)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tstref{}; 
        ///Operational amplifier calibration              output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> calout{}; 
    }
    namespace OpampOpamp2Otr{    ///<OPAMP2 offset trimming register in normal          mode
        using Addr = Register::Address<0x40009014,0xffffe0e0,0x00000000,std::uint32_t>;
        ///Trim for NMOS differential              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        ///Trim for PMOS differential              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
    }
    namespace OpampOpamp2Hsotr{    ///<OPAMP2 offset trimming register in low-power          mode
        using Addr = Register::Address<0x40009018,0xffffe0e0,0x00000000,std::uint32_t>;
        ///Trim for NMOS differential              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trimlpoffsetn{}; 
        ///Trim for PMOS differential              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> trimlpoffsetp{}; 
    }
}
