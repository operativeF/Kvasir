#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//COMP1
    namespace Comp1Comp1Sr{    ///<Comparator status register
        using Addr = Register::Address<0x58003800,0xfffcfffc,0x00000000,std::uint32_t>;
        ///COMP channel 1 output status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> c1val{}; 
        ///COMP channel 2 output status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> c2val{}; 
        ///COMP channel 1 Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> c1if{}; 
        ///COMP channel 2 Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> c2if{}; 
    }
    namespace Comp1Comp1Icfr{    ///<Comparator interrupt clear flag          register
        using Addr = Register::Address<0x58003804,0xfffcffff,0x00000000,std::uint32_t>;
        ///Clear COMP channel 1 Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cc1if{}; 
        ///Clear COMP channel 2 Interrupt              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cc2if{}; 
    }
    namespace Comp1Comp1Or{    ///<Comparator option register
        using Addr = Register::Address<0x58003808,0x00000000,0x00000000,std::uint32_t>;
        ///Selection of source for alternate              function of output ports
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> afop{}; 
        ///Option Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> or_{}; 
    }
    namespace Comp1Comp1Cfgr1{    ///<Comparator configuration register          1
        using Addr = Register::Address<0x5800380c,0x70e8ccb0,0x00000000,std::uint32_t>;
        ///COMP channel 1 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Scaler bridge enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> brgen{}; 
        ///Voltage scaler enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> scalen{}; 
        ///COMP channel 1 polarity selection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> polarity{}; 
        ///COMP channel 1 interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iten{}; 
        ///COMP channel 1 hysteresis selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> hyst{}; 
        ///Power Mode of the COMP channel              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pwrmode{}; 
        ///COMP channel 1 inverting input selection              field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> inmsel{}; 
        ///COMP channel 1 non-inverting input              selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> inpsel{}; 
        ///COMP channel 1 blanking source selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> blanking{}; 
        ///Lock bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace Comp1Comp1Cfgr2{    ///<Comparator configuration register          2
        using Addr = Register::Address<0x58003810,0x70e8cca0,0x00000000,std::uint32_t>;
        ///COMP channel 1 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Scaler bridge enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> brgen{}; 
        ///Voltage scaler enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> scalen{}; 
        ///COMP channel 1 polarity selection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> polarity{}; 
        ///Window comparator mode selection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> winmode{}; 
        ///COMP channel 1 interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iten{}; 
        ///COMP channel 1 hysteresis selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> hyst{}; 
        ///Power Mode of the COMP channel              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pwrmode{}; 
        ///COMP channel 1 inverting input selection              field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> inmsel{}; 
        ///COMP channel 1 non-inverting input              selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> inpsel{}; 
        ///COMP channel 1 blanking source selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> blanking{}; 
        ///Lock bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
}
