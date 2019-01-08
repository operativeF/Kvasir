#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Watchdog Timer
    namespace WdtCtrla{    ///<Control
        using Addr = Register::Address<0x40002000,0xffffff79,0x00000000,std::uint8_t>;
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Watchdog Timer Window Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wen{}; 
        ///Always-On
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> alwayson{}; 
    }
    namespace WdtConfig{    ///<Configuration
        using Addr = Register::Address<0x40002001,0xffffff00,0x00000000,std::uint8_t>;
        ///Time-Out Period
        enum class PerVal {
            cyc8=0x00000000,     ///<8 clock cycles
            cyc16=0x00000001,     ///<16 clock cycles
            cyc32=0x00000002,     ///<32 clock cycles
            cyc64=0x00000003,     ///<64 clock cycles
            cyc128=0x00000004,     ///<128 clock cycles
            cyc256=0x00000005,     ///<256 clock cycles
            cyc512=0x00000006,     ///<512 clock cycles
            cyc1024=0x00000007,     ///<1024 clock cycles
            cyc2048=0x00000008,     ///<2048 clock cycles
            cyc4096=0x00000009,     ///<4096 clock cycles
            cyc8192=0x0000000a,     ///<8192 clock cycles
            cyc16384=0x0000000b,     ///<16384 clock cycles
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PerVal> per{}; 
        namespace PerValC{
            constexpr Register::FieldValue<decltype(per)::Type,PerVal::cyc8> cyc8{};
            constexpr Register::FieldValue<decltype(per)::Type,PerVal::cyc16> cyc16{};
            constexpr Register::FieldValue<decltype(per)::Type,PerVal::cyc32> cyc32{};
            constexpr Register::FieldValue<decltype(per)::Type,PerVal::cyc64> cyc64{};
            constexpr Register::FieldValue<decltype(per)::Type,PerVal::cyc128> cyc128{};
            constexpr Register::FieldValue<decltype(per)::Type,PerVal::cyc256> cyc256{};
            constexpr Register::FieldValue<decltype(per)::Type,PerVal::cyc512> cyc512{};
            constexpr Register::FieldValue<decltype(per)::Type,PerVal::cyc1024> cyc1024{};
            constexpr Register::FieldValue<decltype(per)::Type,PerVal::cyc2048> cyc2048{};
            constexpr Register::FieldValue<decltype(per)::Type,PerVal::cyc4096> cyc4096{};
            constexpr Register::FieldValue<decltype(per)::Type,PerVal::cyc8192> cyc8192{};
            constexpr Register::FieldValue<decltype(per)::Type,PerVal::cyc16384> cyc16384{};
        }
        ///Window Mode Time-Out Period
        enum class WindowVal {
            cyc8=0x00000000,     ///<8 clock cycles
            cyc16=0x00000001,     ///<16 clock cycles
            cyc32=0x00000002,     ///<32 clock cycles
            cyc64=0x00000003,     ///<64 clock cycles
            cyc128=0x00000004,     ///<128 clock cycles
            cyc256=0x00000005,     ///<256 clock cycles
            cyc512=0x00000006,     ///<512 clock cycles
            cyc1024=0x00000007,     ///<1024 clock cycles
            cyc2048=0x00000008,     ///<2048 clock cycles
            cyc4096=0x00000009,     ///<4096 clock cycles
            cyc8192=0x0000000a,     ///<8192 clock cycles
            cyc16384=0x0000000b,     ///<16384 clock cycles
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,WindowVal> window{}; 
        namespace WindowValC{
            constexpr Register::FieldValue<decltype(window)::Type,WindowVal::cyc8> cyc8{};
            constexpr Register::FieldValue<decltype(window)::Type,WindowVal::cyc16> cyc16{};
            constexpr Register::FieldValue<decltype(window)::Type,WindowVal::cyc32> cyc32{};
            constexpr Register::FieldValue<decltype(window)::Type,WindowVal::cyc64> cyc64{};
            constexpr Register::FieldValue<decltype(window)::Type,WindowVal::cyc128> cyc128{};
            constexpr Register::FieldValue<decltype(window)::Type,WindowVal::cyc256> cyc256{};
            constexpr Register::FieldValue<decltype(window)::Type,WindowVal::cyc512> cyc512{};
            constexpr Register::FieldValue<decltype(window)::Type,WindowVal::cyc1024> cyc1024{};
            constexpr Register::FieldValue<decltype(window)::Type,WindowVal::cyc2048> cyc2048{};
            constexpr Register::FieldValue<decltype(window)::Type,WindowVal::cyc4096> cyc4096{};
            constexpr Register::FieldValue<decltype(window)::Type,WindowVal::cyc8192> cyc8192{};
            constexpr Register::FieldValue<decltype(window)::Type,WindowVal::cyc16384> cyc16384{};
        }
    }
    namespace WdtEwctrl{    ///<Early Warning Interrupt Control
        using Addr = Register::Address<0x40002002,0xfffffff0,0x00000000,std::uint8_t>;
        ///Early Warning Interrupt Time Offset
        enum class EwoffsetVal {
            cyc8=0x00000000,     ///<8 clock cycles
            cyc16=0x00000001,     ///<16 clock cycles
            cyc32=0x00000002,     ///<32 clock cycles
            cyc64=0x00000003,     ///<64 clock cycles
            cyc128=0x00000004,     ///<128 clock cycles
            cyc256=0x00000005,     ///<256 clock cycles
            cyc512=0x00000006,     ///<512 clock cycles
            cyc1024=0x00000007,     ///<1024 clock cycles
            cyc2048=0x00000008,     ///<2048 clock cycles
            cyc4096=0x00000009,     ///<4096 clock cycles
            cyc8192=0x0000000a,     ///<8192 clock cycles
            cyc16384=0x0000000b,     ///<16384 clock cycles
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,EwoffsetVal> ewoffset{}; 
        namespace EwoffsetValC{
            constexpr Register::FieldValue<decltype(ewoffset)::Type,EwoffsetVal::cyc8> cyc8{};
            constexpr Register::FieldValue<decltype(ewoffset)::Type,EwoffsetVal::cyc16> cyc16{};
            constexpr Register::FieldValue<decltype(ewoffset)::Type,EwoffsetVal::cyc32> cyc32{};
            constexpr Register::FieldValue<decltype(ewoffset)::Type,EwoffsetVal::cyc64> cyc64{};
            constexpr Register::FieldValue<decltype(ewoffset)::Type,EwoffsetVal::cyc128> cyc128{};
            constexpr Register::FieldValue<decltype(ewoffset)::Type,EwoffsetVal::cyc256> cyc256{};
            constexpr Register::FieldValue<decltype(ewoffset)::Type,EwoffsetVal::cyc512> cyc512{};
            constexpr Register::FieldValue<decltype(ewoffset)::Type,EwoffsetVal::cyc1024> cyc1024{};
            constexpr Register::FieldValue<decltype(ewoffset)::Type,EwoffsetVal::cyc2048> cyc2048{};
            constexpr Register::FieldValue<decltype(ewoffset)::Type,EwoffsetVal::cyc4096> cyc4096{};
            constexpr Register::FieldValue<decltype(ewoffset)::Type,EwoffsetVal::cyc8192> cyc8192{};
            constexpr Register::FieldValue<decltype(ewoffset)::Type,EwoffsetVal::cyc16384> cyc16384{};
        }
    }
    namespace WdtIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x40002004,0xfffffffe,0x00000000,std::uint8_t>;
        ///Early Warning Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ew{}; 
    }
    namespace WdtIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x40002005,0xfffffffe,0x00000000,std::uint8_t>;
        ///Early Warning Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ew{}; 
    }
    namespace WdtIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40002006,0xfffffffe,0x00000000,std::uint8_t>;
        ///Early Warning
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ew{}; 
    }
    namespace WdtSyncbusy{    ///<Synchronization Busy
        using Addr = Register::Address<0x40002008,0xffffffe1,0x00000000,std::uint32_t>;
        ///Enable Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
        ///Window Enable Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wen{}; 
        ///Always-On Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> alwayson{}; 
        ///Clear Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clear{}; 
    }
    namespace WdtClear{    ///<Clear
        using Addr = Register::Address<0x4000200c,0xffffff00,0x00000000,std::uint8_t>;
        ///Watchdog Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> clear{}; 
    }
}
