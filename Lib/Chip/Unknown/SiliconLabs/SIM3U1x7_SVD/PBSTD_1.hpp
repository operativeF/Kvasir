#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Pbstd1Pb{    ///<Output Latch
        using Addr = Register::Address<0x4002a140,0xffff0000,0x00000000,unsigned>;
        ///Output Latch. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pb{}; 
    }
    namespace Pbstd1Pbpin{    ///<Pin Value
        using Addr = Register::Address<0x4002a150,0xffff0000,0x00000000,unsigned>;
        ///Pin Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pbpin{}; 
    }
    namespace Pbstd1Pbmdsel{    ///<Mode Select
        using Addr = Register::Address<0x4002a160,0xffff0000,0x00000000,unsigned>;
        ///Mode Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbmdsel{}; 
    }
    namespace Pbstd1Pbskipen{    ///<Crossbar Pin Skip Enable
        using Addr = Register::Address<0x4002a170,0xffff0000,0x00000000,unsigned>;
        ///Crossbar Pin Skip Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbskipen{}; 
    }
    namespace Pbstd1Pboutmd{    ///<Output Mode
        using Addr = Register::Address<0x4002a180,0xffff0000,0x00000000,unsigned>;
        ///Output Mode. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pboutmd{}; 
    }
    namespace Pbstd1Pbdrv{    ///<Drive Strength
        using Addr = Register::Address<0x4002a190,0xfffe0000,0x00000000,unsigned>;
        ///Drive Strength. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbdrv{}; 
        ///Port Bank Weak Pull-up Enable. 
        enum class PbpuenVal {
            disabled=0x00000000,     ///<Disable weak pull-ups for this port.
            enabled=0x00000001,     ///<Enable weak pull-ups for this port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,PbpuenVal> pbpuen{}; 
        namespace PbpuenValC{
            constexpr Register::FieldValue<decltype(pbpuen)::Type,PbpuenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pbpuen)::Type,PbpuenVal::enabled> enabled{};
        }
    }
    namespace Pbstd1Pm{    ///<Port Match Value
        using Addr = Register::Address<0x4002a1a0,0xffff0000,0x00000000,unsigned>;
        ///Port Match Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pm{}; 
    }
    namespace Pbstd1Pmen{    ///<Port Match Enable
        using Addr = Register::Address<0x4002a1b0,0xffff0000,0x00000000,unsigned>;
        ///Port Match Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pmen{}; 
    }
}
