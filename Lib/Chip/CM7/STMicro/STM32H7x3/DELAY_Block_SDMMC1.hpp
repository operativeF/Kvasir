#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DELAY_Block_SDMMC1
    namespace DelayBlockSdmmc1Cr{    ///<DLYB control register
        using Addr = Register::Address<0x52008000,0xfffffffc,0x00000000,std::uint32_t>;
        ///Delay block enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> den{}; 
        ///Sampler length enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sen{}; 
    }
    namespace DelayBlockSdmmc1Cfgr{    ///<DLYB configuration register
        using Addr = Register::Address<0x52008004,0x700080f0,0x00000000,std::uint32_t>;
        ///Select the phase for the Output              clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sel{}; 
        ///Delay Defines the delay of a Unit delay              cell
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> unit{}; 
        ///Delay line length value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> lng{}; 
        ///Length valid flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lngf{}; 
    }
}
