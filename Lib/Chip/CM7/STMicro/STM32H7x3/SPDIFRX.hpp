#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Receiver Interface
    namespace SpdifrxCr{    ///<Control register
        using Addr = Register::Address<0x40004000,0xffc88000,0x00000000,std::uint32_t>;
        ///Peripheral Block Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> spdifrxen{}; 
        ///Receiver DMA ENable for data              flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxdmaen{}; 
        ///STerEO Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxsteo{}; 
        ///RX Data format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> drfmt{}; 
        ///Mask Parity error bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pmsk{}; 
        ///Mask of Validity bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> vmsk{}; 
        ///Mask of channel status and user              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cumsk{}; 
        ///Mask of Preamble Type bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ptmsk{}; 
        ///Control Buffer DMA ENable for control              flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbdmaen{}; 
        ///Channel Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> chsel{}; 
        ///Maximum allowed re-tries during              synchronization phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> nbtr{}; 
        ///Wait For Activity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wfa{}; 
        ///input selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> insel{}; 
        ///Symbol Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cksen{}; 
        ///Backup Symbol Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cksbkpen{}; 
    }
    namespace SpdifrxImr{    ///<Interrupt mask register
        using Addr = Register::Address<0x40004004,0xffffff80,0x00000000,std::uint32_t>;
        ///RXNE interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxneie{}; 
        ///Control Buffer Ready Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csrneie{}; 
        ///Parity error interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> perrie{}; 
        ///Overrun error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovrie{}; 
        ///Synchronization Block Detected Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sblkie{}; 
        ///Synchronization Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> syncdie{}; 
        ///Serial Interface Error Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ifeie{}; 
    }
    namespace SpdifrxSr{    ///<Status register
        using Addr = Register::Address<0x40004008,0x8000fe00,0x00000000,std::uint32_t>;
        ///Read data register not              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxne{}; 
        ///Control Buffer register is not              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csrne{}; 
        ///Parity error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> perr{}; 
        ///Overrun error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Synchronization Block              Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sbd{}; 
        ///Synchronization Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> syncd{}; 
        ///Framing error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ferr{}; 
        ///Synchronization error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> serr{}; 
        ///Time-out error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Duration of 5 symbols counted with              SPDIF_CLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,16),Register::ReadWriteAccess,unsigned> width5{}; 
    }
    namespace SpdifrxIfcr{    ///<Interrupt Flag Clear register
        using Addr = Register::Address<0x4000400c,0xffffffc3,0x00000000,std::uint32_t>;
        ///Clears the Parity error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> perrcf{}; 
        ///Clears the Overrun error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovrcf{}; 
        ///Clears the Synchronization Block              Detected flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sbdcf{}; 
        ///Clears the Synchronization Done              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> syncdcf{}; 
    }
    namespace SpdifrxDr00{    ///<Data input register
        using Addr = Register::Address<0x40004010,0xc0000000,0x00000000,std::uint32_t>;
        ///Parity Error bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> dr{}; 
        ///Parity Error bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pe{}; 
        ///Validity bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> v{}; 
        ///User bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> u{}; 
        ///Channel Status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> c{}; 
        ///Preamble Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pt{}; 
    }
    namespace SpdifrxCsr{    ///<Channel Status register
        using Addr = Register::Address<0x40004014,0xfe000000,0x00000000,std::uint32_t>;
        ///User data information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> usr{}; 
        ///Channel A status              information
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> cs{}; 
        ///Start Of Block
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> sob{}; 
    }
    namespace SpdifrxDir{    ///<Debug Information register
        using Addr = Register::Address<0x40004018,0xe000e000,0x00000000,std::uint32_t>;
        ///Threshold HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> thi{}; 
        ///Threshold LOW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,16),Register::ReadWriteAccess,unsigned> tlo{}; 
    }
    namespace SpdifrxVerr{    ///<SPDIFRX version register
        using Addr = Register::Address<0x400043f4,0xffffff00,0x00000000,std::uint32_t>;
        ///Minor revision
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> minrev{}; 
        ///Major revision
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> majrev{}; 
    }
    namespace SpdifrxIdr{    ///<SPDIFRX identification          register
        using Addr = Register::Address<0x400043f8,0x00000000,0x00000000,std::uint32_t>;
        ///SPDIFRX identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace SpdifrxSidr{    ///<SPDIFRX size identification          register
        using Addr = Register::Address<0x400043fc,0x00000000,0x00000000,std::uint32_t>;
        ///Size identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sid{}; 
    }
    namespace SpdifrxDr01{    ///<Data input register
        using Addr = Register::Address<0x40004010,0x000000c0,0x00000000,std::uint32_t>;
        ///Parity Error bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe{}; 
        ///Validity bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> v{}; 
        ///User bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> u{}; 
        ///Channel Status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> c{}; 
        ///Preamble Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pt{}; 
        ///Data value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> dr{}; 
    }
    namespace SpdifrxDr10{    ///<Data input register
        using Addr = Register::Address<0x40004010,0x00000000,0x00000000,std::uint32_t>;
        ///Data value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> drnl1{}; 
        ///Data value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> drnl2{}; 
    }
}
