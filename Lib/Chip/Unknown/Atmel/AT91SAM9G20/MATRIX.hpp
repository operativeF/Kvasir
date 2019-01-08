#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//AHB Bus Matrix
    namespace MatrixMatrixPras0{    ///<Priority Register A for Slave 0
        using Addr = Register::Address<0xffffee80,0xffcccccc,0x00000000,std::uint32_t>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
    }
    namespace MatrixMatrixPras1{    ///<Priority Register A for Slave 1
        using Addr = Register::Address<0xffffee88,0xffcccccc,0x00000000,std::uint32_t>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
    }
    namespace MatrixMatrixPras2{    ///<Priority Register A for Slave 2
        using Addr = Register::Address<0xffffee90,0xffcccccc,0x00000000,std::uint32_t>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
    }
    namespace MatrixMatrixPras3{    ///<Priority Register A for Slave 3
        using Addr = Register::Address<0xffffee98,0xffcccccc,0x00000000,std::uint32_t>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
    }
    namespace MatrixMatrixPras4{    ///<Priority Register A for Slave 4
        using Addr = Register::Address<0xffffeea0,0xffcccccc,0x00000000,std::uint32_t>;
        ///Master 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> m0pr{}; 
        ///Master 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> m1pr{}; 
        ///Master 2 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> m2pr{}; 
        ///Master 3 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> m3pr{}; 
        ///Master 4 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m4pr{}; 
        ///Master 5 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> m5pr{}; 
    }
    namespace MatrixMatrixMrcr{    ///<Master Remap Control Register
        using Addr = Register::Address<0xffffef00,0xfffffffc,0x00000000,std::uint32_t>;
        ///Remap Command Bit for AHB Master 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcb0{}; 
        ///Remap Command Bit for AHB Master 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcb1{}; 
    }
    namespace MatrixEbiCsa{    ///<EBI Chip Select Assignment Register
        using Addr = Register::Address<0xffffef1c,0xfffcfec5,0x00000000,std::uint32_t>;
        ///EBI Chip Select 1 Assignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ebiCs1a{}; 
        ///EBI Chip Select 3 Assignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ebiCs3a{}; 
        ///EBI Chip Select 4 Assignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ebiCs4a{}; 
        ///EBI Chip Select 5 Assignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ebiCs5a{}; 
        ///EBI Data Bus Pull-Up Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ebiDbpuc{}; 
        ///Memory voltage selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> vddiomsel{}; 
        ///I/O Slew Rate Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> iosr{}; 
    }
    namespace MatrixMatrixMcfg0{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffee00,0xfffffff8,0x00000000,std::uint32_t>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMatrixMcfg1{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffee04,0xfffffff8,0x00000000,std::uint32_t>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMatrixMcfg2{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffee08,0xfffffff8,0x00000000,std::uint32_t>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMatrixMcfg3{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffee0c,0xfffffff8,0x00000000,std::uint32_t>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMatrixMcfg4{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffee10,0xfffffff8,0x00000000,std::uint32_t>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMatrixMcfg5{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffee14,0xfffffff8,0x00000000,std::uint32_t>;
        ///Undefined Length Burst Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ulbt{}; 
    }
    namespace MatrixMatrixScfg0{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffee40,0xfce0ff00,0x00000000,std::uint32_t>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace MatrixMatrixScfg1{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffee44,0xfce0ff00,0x00000000,std::uint32_t>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace MatrixMatrixScfg2{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffee48,0xfce0ff00,0x00000000,std::uint32_t>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace MatrixMatrixScfg3{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffee4c,0xfce0ff00,0x00000000,std::uint32_t>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
    namespace MatrixMatrixScfg4{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffee50,0xfce0ff00,0x00000000,std::uint32_t>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        ///Default Master Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        ///Fixed Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        ///Arbitration Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> arbt{}; 
    }
}
