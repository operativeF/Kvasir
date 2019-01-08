#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Operational amplifiers
    namespace OpampOpamp1Csr{    ///<OPAMP1 control/status register
        using Addr = Register::Address<0x40007800,0x7fff08c0,0x00000000,std::uint32_t>;
        ///Operational amplifier              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opaen{}; 
        ///Operational amplifier Low Power              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> opalpm{}; 
        ///Operational amplifier PGA              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> opamode{}; 
        ///Operational amplifier Programmable              amplifier gain value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        ///Inverting input selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> vmSel{}; 
        ///Non inverted input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vpSel{}; 
        ///Calibration mode enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> calon{}; 
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> calsel{}; 
        ///allows to switch from              ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¹ÃƒÆ’Ã¢â‚¬Â¦ÃƒÂ¢Ã¢â€šÂ¬Ã…â€œfactoryÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¾ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢              AOP offset trimmed values to AOP offset              ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¹ÃƒÆ’Ã¢â‚¬Â¦ÃƒÂ¢Ã¢â€šÂ¬Ã…â€œuserÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¾ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usertrim{}; 
        ///Operational amplifier calibration              output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> calout{}; 
        ///Operational amplifier power supply range              for stability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> opaRange{}; 
    }
    namespace OpampOpamp1Otr{    ///<OPAMP1 offset trimming register in normal          mode
        using Addr = Register::Address<0x40007804,0xffffe0e0,0x00000000,std::uint32_t>;
        ///Trim for NMOS differential              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        ///Trim for PMOS differential              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
    }
    namespace OpampOpamp1Lpotr{    ///<OPAMP1 offset trimming register in low-power          mode
        using Addr = Register::Address<0x40007808,0xffffe0e0,0x00000000,std::uint32_t>;
        ///Trim for NMOS differential              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trimlpoffsetn{}; 
        ///Trim for PMOS differential              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> trimlpoffsetp{}; 
    }
    namespace OpampOpamp2Csr{    ///<OPAMP2 control/status register
        using Addr = Register::Address<0x40007810,0xffff08c0,0x00000000,std::uint32_t>;
        ///Operational amplifier              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opaen{}; 
        ///Operational amplifier Low Power              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> opalpm{}; 
        ///Operational amplifier PGA              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> opamode{}; 
        ///Operational amplifier Programmable              amplifier gain value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pgaGain{}; 
        ///Inverting input selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> vmSel{}; 
        ///Non inverted input              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vpSel{}; 
        ///Calibration mode enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> calon{}; 
        ///Calibration selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> calsel{}; 
        ///allows to switch from              ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¹ÃƒÆ’Ã¢â‚¬Â¦ÃƒÂ¢Ã¢â€šÂ¬Ã…â€œfactoryÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¾ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢              AOP offset trimmed values to AOP offset              ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¹ÃƒÆ’Ã¢â‚¬Â¦ÃƒÂ¢Ã¢â€šÂ¬Ã…â€œuserÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¾ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usertrim{}; 
        ///Operational amplifier calibration              output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> calout{}; 
    }
    namespace OpampOpamp2Otr{    ///<OPAMP2 offset trimming register in normal          mode
        using Addr = Register::Address<0x40007814,0xffffe0e0,0x00000000,std::uint32_t>;
        ///Trim for NMOS differential              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trimoffsetn{}; 
        ///Trim for PMOS differential              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> trimoffsetp{}; 
    }
    namespace OpampOpamp2Lpotr{    ///<OPAMP2 offset trimming register in low-power          mode
        using Addr = Register::Address<0x40007818,0xffffe0e0,0x00000000,std::uint32_t>;
        ///Trim for NMOS differential              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trimlpoffsetn{}; 
        ///Trim for PMOS differential              pairs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> trimlpoffsetp{}; 
    }
}
