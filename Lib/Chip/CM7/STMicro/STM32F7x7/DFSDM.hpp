#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Digital filter for sigma delta      modulators
    namespace DfsdmDfsdmChcfg0r1{    ///<DFSDM channel configuration 0 register          1
        using Addr = Register::Address<0x40017400,0x3f000e10,0x00000000,std::uint32_t>;
        ///Serial interface type for channel              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
        ///SPI clock select for channel              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///Short-circuit detector enable on channel              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///Clock absence detector enable on channel              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///Channel 0 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Channel inputs selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///Input data multiplexer for channel              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///Data packing mode in DFSDM_CHDATINyR              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///Output serial clock              divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckoutdiv{}; 
        ///Output serial clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ckoutsrc{}; 
        ///Global enable for DFSDM              interface
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dfsdmen{}; 
    }
    namespace DfsdmDfsdmChcfg1r1{    ///<DFSDM channel configuration 1 register          1
        using Addr = Register::Address<0x40017404,0x3f000e10,0x00000000,std::uint32_t>;
        ///Serial interface type for channel              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
        ///SPI clock select for channel              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///Short-circuit detector enable on channel              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///Clock absence detector enable on channel              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///Channel 1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Channel inputs selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///Input data multiplexer for channel              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///Data packing mode in DFSDM_CHDATINyR              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///Output serial clock              divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckoutdiv{}; 
        ///Output serial clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ckoutsrc{}; 
        ///Global enable for DFSDM              interface
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dfsdmen{}; 
    }
    namespace DfsdmDfsdmChcfg2r1{    ///<DFSDM channel configuration 2 register          1
        using Addr = Register::Address<0x40017408,0x3f000e10,0x00000000,std::uint32_t>;
        ///Serial interface type for channel              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
        ///SPI clock select for channel              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///Short-circuit detector enable on channel              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///Clock absence detector enable on channel              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///Channel 2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Channel inputs selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///Input data multiplexer for channel              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///Data packing mode in DFSDM_CHDATINyR              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///Output serial clock              divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckoutdiv{}; 
        ///Output serial clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ckoutsrc{}; 
        ///Global enable for DFSDM              interface
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dfsdmen{}; 
    }
    namespace DfsdmDfsdmChcfg3r1{    ///<DFSDM channel configuration 3 register          1
        using Addr = Register::Address<0x4001740c,0x3f000e10,0x00000000,std::uint32_t>;
        ///Serial interface type for channel              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
        ///SPI clock select for channel              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///Short-circuit detector enable on channel              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///Clock absence detector enable on channel              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///Channel 3 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Channel inputs selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///Input data multiplexer for channel              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///Data packing mode in DFSDM_CHDATINyR              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///Output serial clock              divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckoutdiv{}; 
        ///Output serial clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ckoutsrc{}; 
        ///Global enable for DFSDM              interface
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dfsdmen{}; 
    }
    namespace DfsdmDfsdmChcfg4r1{    ///<DFSDM channel configuration 4 register          1
        using Addr = Register::Address<0x40017410,0x3f000e10,0x00000000,std::uint32_t>;
        ///Serial interface type for channel              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
        ///SPI clock select for channel              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///Short-circuit detector enable on channel              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///Clock absence detector enable on channel              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///Channel 4 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Channel inputs selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///Input data multiplexer for channel              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///Data packing mode in DFSDM_CHDATINyR              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///Output serial clock              divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckoutdiv{}; 
        ///Output serial clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ckoutsrc{}; 
        ///Global enable for DFSDM              interface
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dfsdmen{}; 
    }
    namespace DfsdmDfsdmChcfg5r1{    ///<DFSDM channel configuration 5 register          1
        using Addr = Register::Address<0x40017414,0x3f000e10,0x00000000,std::uint32_t>;
        ///Serial interface type for channel              5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
        ///SPI clock select for channel              5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///Short-circuit detector enable on channel              5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///Clock absence detector enable on channel              5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///Channel 5 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Channel inputs selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///Input data multiplexer for channel              5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///Data packing mode in DFSDM_CHDATINyR              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///Output serial clock              divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckoutdiv{}; 
        ///Output serial clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ckoutsrc{}; 
        ///Global enable for DFSDM              interface
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dfsdmen{}; 
    }
    namespace DfsdmDfsdmChcfg6r1{    ///<DFSDM channel configuration 6 register          1
        using Addr = Register::Address<0x40017418,0x3f000e10,0x00000000,std::uint32_t>;
        ///Serial interface type for channel              6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
        ///SPI clock select for channel              6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///Short-circuit detector enable on channel              6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///Clock absence detector enable on channel              6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///Channel 6 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Channel inputs selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///Input data multiplexer for channel              6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///Data packing mode in DFSDM_CHDATINyR              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///Output serial clock              divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckoutdiv{}; 
        ///Output serial clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ckoutsrc{}; 
        ///Global enable for DFSDM              interface
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dfsdmen{}; 
    }
    namespace DfsdmDfsdmChcfg7r1{    ///<DFSDM channel configuration 7 register          1
        using Addr = Register::Address<0x4001741c,0x3f000e10,0x00000000,std::uint32_t>;
        ///Serial interface type for channel              7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
        ///SPI clock select for channel              7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///Short-circuit detector enable on channel              7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///Clock absence detector enable on channel              7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///Channel 7 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Channel inputs selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///Input data multiplexer for channel              7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///Data packing mode in DFSDM_CHDATINyR              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///Output serial clock              divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckoutdiv{}; 
        ///Output serial clock source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ckoutsrc{}; 
        ///Global enable for DFSDM              interface
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dfsdmen{}; 
    }
    namespace DfsdmDfsdmChcfg0r2{    ///<DFSDM channel configuration 0 register          2
        using Addr = Register::Address<0x40017420,0x00000007,0x00000000,std::uint32_t>;
        ///Data right bit-shift for channel              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
        ///24-bit calibration offset for channel              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace DfsdmDfsdmChcfg1r2{    ///<DFSDM channel configuration 1 register          2
        using Addr = Register::Address<0x40017424,0x00000007,0x00000000,std::uint32_t>;
        ///Data right bit-shift for channel              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
        ///24-bit calibration offset for channel              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace DfsdmDfsdmChcfg2r2{    ///<DFSDM channel configuration 2 register          2
        using Addr = Register::Address<0x40017428,0x00000007,0x00000000,std::uint32_t>;
        ///Data right bit-shift for channel              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
        ///24-bit calibration offset for channel              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace DfsdmDfsdmChcfg3r2{    ///<DFSDM channel configuration 3 register          2
        using Addr = Register::Address<0x4001742c,0x00000007,0x00000000,std::uint32_t>;
        ///Data right bit-shift for channel              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
        ///24-bit calibration offset for channel              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace DfsdmDfsdmChcfg4r2{    ///<DFSDM channel configuration 4 register          2
        using Addr = Register::Address<0x40017430,0x00000007,0x00000000,std::uint32_t>;
        ///Data right bit-shift for channel              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
        ///24-bit calibration offset for channel              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace DfsdmDfsdmChcfg5r2{    ///<DFSDM channel configuration 5 register          2
        using Addr = Register::Address<0x40017434,0x00000007,0x00000000,std::uint32_t>;
        ///Data right bit-shift for channel              5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
        ///24-bit calibration offset for channel              5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace DfsdmDfsdmChcfg6r2{    ///<DFSDM channel configuration 6 register          2
        using Addr = Register::Address<0x40017438,0x00000007,0x00000000,std::uint32_t>;
        ///Data right bit-shift for channel              6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
        ///24-bit calibration offset for channel              6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace DfsdmDfsdmChcfg7r2{    ///<DFSDM channel configuration 7 register          2
        using Addr = Register::Address<0x4001743c,0x00000007,0x00000000,std::uint32_t>;
        ///Data right bit-shift for channel              7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
        ///24-bit calibration offset for channel              7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace DfsdmDfsdmAwscd0r{    ///<DFSDM analog watchdog and short-circuit          detector register
        using Addr = Register::Address<0x40017440,0xff200f00,0x00000000,std::uint32_t>;
        ///short-circuit detector threshold for              channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
        ///Break signal assignment for              short-circuit detector on channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///Analog watchdog filter oversampling              ratio (decimation rate) on channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///Analog watchdog Sinc filter order on              channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
    }
    namespace DfsdmDfsdmAwscd1r{    ///<DFSDM analog watchdog and short-circuit          detector register
        using Addr = Register::Address<0x40017444,0xff200f00,0x00000000,std::uint32_t>;
        ///short-circuit detector threshold for              channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
        ///Break signal assignment for              short-circuit detector on channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///Analog watchdog filter oversampling              ratio (decimation rate) on channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///Analog watchdog Sinc filter order on              channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
    }
    namespace DfsdmDfsdmAwscd2r{    ///<DFSDM analog watchdog and short-circuit          detector register
        using Addr = Register::Address<0x40017448,0xff200f00,0x00000000,std::uint32_t>;
        ///short-circuit detector threshold for              channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
        ///Break signal assignment for              short-circuit detector on channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///Analog watchdog filter oversampling              ratio (decimation rate) on channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///Analog watchdog Sinc filter order on              channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
    }
    namespace DfsdmDfsdmAwscd3r{    ///<DFSDM analog watchdog and short-circuit          detector register
        using Addr = Register::Address<0x4001744c,0xff200f00,0x00000000,std::uint32_t>;
        ///short-circuit detector threshold for              channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
        ///Break signal assignment for              short-circuit detector on channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///Analog watchdog filter oversampling              ratio (decimation rate) on channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///Analog watchdog Sinc filter order on              channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
    }
    namespace DfsdmDfsdmAwscd4r{    ///<DFSDM analog watchdog and short-circuit          detector register
        using Addr = Register::Address<0x40017450,0xff200f00,0x00000000,std::uint32_t>;
        ///short-circuit detector threshold for              channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
        ///Break signal assignment for              short-circuit detector on channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///Analog watchdog filter oversampling              ratio (decimation rate) on channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///Analog watchdog Sinc filter order on              channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
    }
    namespace DfsdmDfsdmAwscd5r{    ///<DFSDM analog watchdog and short-circuit          detector register
        using Addr = Register::Address<0x40017454,0xff200f00,0x00000000,std::uint32_t>;
        ///short-circuit detector threshold for              channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
        ///Break signal assignment for              short-circuit detector on channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///Analog watchdog filter oversampling              ratio (decimation rate) on channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///Analog watchdog Sinc filter order on              channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
    }
    namespace DfsdmDfsdmAwscd6r{    ///<DFSDM analog watchdog and short-circuit          detector register
        using Addr = Register::Address<0x40017458,0xff200f00,0x00000000,std::uint32_t>;
        ///short-circuit detector threshold for              channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
        ///Break signal assignment for              short-circuit detector on channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///Analog watchdog filter oversampling              ratio (decimation rate) on channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///Analog watchdog Sinc filter order on              channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
    }
    namespace DfsdmDfsdmAwscd7r{    ///<DFSDM analog watchdog and short-circuit          detector register
        using Addr = Register::Address<0x4001745c,0xff200f00,0x00000000,std::uint32_t>;
        ///short-circuit detector threshold for              channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
        ///Break signal assignment for              short-circuit detector on channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///Analog watchdog filter oversampling              ratio (decimation rate) on channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///Analog watchdog Sinc filter order on              channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
    }
    namespace DfsdmDfsdmChwdat0r{    ///<DFSDM channel watchdog filter data          register
        using Addr = Register::Address<0x40017460,0xffff0000,0x00000000,std::uint32_t>;
        ///Input channel y watchdog              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace DfsdmDfsdmChwdat1r{    ///<DFSDM channel watchdog filter data          register
        using Addr = Register::Address<0x40017464,0xffff0000,0x00000000,std::uint32_t>;
        ///Input channel y watchdog              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace DfsdmDfsdmChwdat2r{    ///<DFSDM channel watchdog filter data          register
        using Addr = Register::Address<0x40017468,0xffff0000,0x00000000,std::uint32_t>;
        ///Input channel y watchdog              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace DfsdmDfsdmChwdat3r{    ///<DFSDM channel watchdog filter data          register
        using Addr = Register::Address<0x4001746c,0xffff0000,0x00000000,std::uint32_t>;
        ///Input channel y watchdog              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace DfsdmDfsdmChwdat4r{    ///<DFSDM channel watchdog filter data          register
        using Addr = Register::Address<0x40017470,0xffff0000,0x00000000,std::uint32_t>;
        ///Input channel y watchdog              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace DfsdmDfsdmChwdat5r{    ///<DFSDM channel watchdog filter data          register
        using Addr = Register::Address<0x40017474,0xffff0000,0x00000000,std::uint32_t>;
        ///Input channel y watchdog              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace DfsdmDfsdmChwdat6r{    ///<DFSDM channel watchdog filter data          register
        using Addr = Register::Address<0x40017478,0xffff0000,0x00000000,std::uint32_t>;
        ///Input channel y watchdog              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace DfsdmDfsdmChwdat7r{    ///<DFSDM channel watchdog filter data          register
        using Addr = Register::Address<0x4001747c,0xffff0000,0x00000000,std::uint32_t>;
        ///Input channel y watchdog              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace DfsdmDfsdmChdatin0r{    ///<DFSDM channel data input          register
        using Addr = Register::Address<0x40017480,0x00000000,0x00000000,std::uint32_t>;
        ///Input data for channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
        ///Input data for channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
    }
    namespace DfsdmDfsdmChdatin1r{    ///<DFSDM channel data input          register
        using Addr = Register::Address<0x40017484,0x00000000,0x00000000,std::uint32_t>;
        ///Input data for channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
        ///Input data for channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
    }
    namespace DfsdmDfsdmChdatin2r{    ///<DFSDM channel data input          register
        using Addr = Register::Address<0x40017488,0x00000000,0x00000000,std::uint32_t>;
        ///Input data for channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
        ///Input data for channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
    }
    namespace DfsdmDfsdmChdatin3r{    ///<DFSDM channel data input          register
        using Addr = Register::Address<0x4001748c,0x00000000,0x00000000,std::uint32_t>;
        ///Input data for channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
        ///Input data for channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
    }
    namespace DfsdmDfsdmChdatin4r{    ///<DFSDM channel data input          register
        using Addr = Register::Address<0x40017490,0x00000000,0x00000000,std::uint32_t>;
        ///Input data for channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
        ///Input data for channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
    }
    namespace DfsdmDfsdmChdatin5r{    ///<DFSDM channel data input          register
        using Addr = Register::Address<0x40017494,0x00000000,0x00000000,std::uint32_t>;
        ///Input data for channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
        ///Input data for channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
    }
    namespace DfsdmDfsdmChdatin6r{    ///<DFSDM channel data input          register
        using Addr = Register::Address<0x40017498,0x00000000,0x00000000,std::uint32_t>;
        ///Input data for channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
        ///Input data for channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
    }
    namespace DfsdmDfsdmChdatin7r{    ///<DFSDM channel data input          register
        using Addr = Register::Address<0x4001749c,0x00000000,0x00000000,std::uint32_t>;
        ///Input data for channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
        ///Input data for channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
    }
    namespace DfsdmDfsdm0Cr1{    ///<DFSDM control register 1
        using Addr = Register::Address<0x400174a0,0x98d180c4,0x00000000,std::uint32_t>;
        ///DFSDM enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfen{}; 
        ///Start a conversion of the injected group              of channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jswstart{}; 
        ///Launch an injected conversion              synchronously with the DFSDM0 JSWSTART              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jsync{}; 
        ///Scanning conversion mode for injected              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> jscan{}; 
        ///DMA channel enabled to read data for the              injected channel group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jdmaen{}; 
        ///Trigger signal selection for launching              injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///Trigger enable and trigger edge              selection for injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///Software start of a conversion on the              regular channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rswstart{}; 
        ///Continuous mode selection for regular              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Launch regular conversion synchronously              with DFSDM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsync{}; 
        ///DMA channel enabled to read data for the              regular conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rdmaen{}; 
        ///Regular channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rch{}; 
        ///Fast conversion mode selection for              regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fast{}; 
        ///Analog watchdog fast mode              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> awfsel{}; 
    }
    namespace DfsdmDfsdm1Cr1{    ///<DFSDM control register 1
        using Addr = Register::Address<0x400174a4,0x98d180c4,0x00000000,std::uint32_t>;
        ///DFSDM enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfen{}; 
        ///Start a conversion of the injected group              of channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jswstart{}; 
        ///Launch an injected conversion              synchronously with the DFSDM0 JSWSTART              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jsync{}; 
        ///Scanning conversion mode for injected              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> jscan{}; 
        ///DMA channel enabled to read data for the              injected channel group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jdmaen{}; 
        ///Trigger signal selection for launching              injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///Trigger enable and trigger edge              selection for injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///Software start of a conversion on the              regular channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rswstart{}; 
        ///Continuous mode selection for regular              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Launch regular conversion synchronously              with DFSDM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsync{}; 
        ///DMA channel enabled to read data for the              regular conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rdmaen{}; 
        ///Regular channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rch{}; 
        ///Fast conversion mode selection for              regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fast{}; 
        ///Analog watchdog fast mode              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> awfsel{}; 
    }
    namespace DfsdmDfsdm2Cr1{    ///<DFSDM control register 1
        using Addr = Register::Address<0x400174a8,0x98d180c4,0x00000000,std::uint32_t>;
        ///DFSDM enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfen{}; 
        ///Start a conversion of the injected group              of channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jswstart{}; 
        ///Launch an injected conversion              synchronously with the DFSDM0 JSWSTART              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jsync{}; 
        ///Scanning conversion mode for injected              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> jscan{}; 
        ///DMA channel enabled to read data for the              injected channel group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jdmaen{}; 
        ///Trigger signal selection for launching              injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///Trigger enable and trigger edge              selection for injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///Software start of a conversion on the              regular channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rswstart{}; 
        ///Continuous mode selection for regular              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Launch regular conversion synchronously              with DFSDM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsync{}; 
        ///DMA channel enabled to read data for the              regular conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rdmaen{}; 
        ///Regular channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rch{}; 
        ///Fast conversion mode selection for              regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fast{}; 
        ///Analog watchdog fast mode              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> awfsel{}; 
    }
    namespace DfsdmDfsdm3Cr1{    ///<DFSDM control register 1
        using Addr = Register::Address<0x400174ac,0x98d180c4,0x00000000,std::uint32_t>;
        ///DFSDM enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfen{}; 
        ///Start a conversion of the injected group              of channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jswstart{}; 
        ///Launch an injected conversion              synchronously with the DFSDM0 JSWSTART              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jsync{}; 
        ///Scanning conversion mode for injected              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> jscan{}; 
        ///DMA channel enabled to read data for the              injected channel group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jdmaen{}; 
        ///Trigger signal selection for launching              injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///Trigger enable and trigger edge              selection for injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///Software start of a conversion on the              regular channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rswstart{}; 
        ///Continuous mode selection for regular              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Launch regular conversion synchronously              with DFSDM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsync{}; 
        ///DMA channel enabled to read data for the              regular conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rdmaen{}; 
        ///Regular channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rch{}; 
        ///Fast conversion mode selection for              regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fast{}; 
        ///Analog watchdog fast mode              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> awfsel{}; 
    }
    namespace DfsdmDfsdm0Cr2{    ///<DFSDM control register 2
        using Addr = Register::Address<0x400174b0,0xff000080,0x00000000,std::uint32_t>;
        ///Injected end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocie{}; 
        ///Regular end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocie{}; 
        ///Injected data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrie{}; 
        ///Regular data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrie{}; 
        ///Analog watchdog interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdie{}; 
        ///Short-circuit detector interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scdie{}; 
        ///Clock absence interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckabie{}; 
        ///Extremes detector channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> exch{}; 
        ///Analog watchdog channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> awdch{}; 
    }
    namespace DfsdmDfsdm1Cr2{    ///<DFSDM control register 2
        using Addr = Register::Address<0x400174b4,0xff000080,0x00000000,std::uint32_t>;
        ///Injected end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocie{}; 
        ///Regular end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocie{}; 
        ///Injected data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrie{}; 
        ///Regular data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrie{}; 
        ///Analog watchdog interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdie{}; 
        ///Short-circuit detector interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scdie{}; 
        ///Clock absence interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckabie{}; 
        ///Extremes detector channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> exch{}; 
        ///Analog watchdog channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> awdch{}; 
    }
    namespace DfsdmDfsdm2Cr2{    ///<DFSDM control register 2
        using Addr = Register::Address<0x400174b8,0xff000080,0x00000000,std::uint32_t>;
        ///Injected end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocie{}; 
        ///Regular end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocie{}; 
        ///Injected data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrie{}; 
        ///Regular data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrie{}; 
        ///Analog watchdog interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdie{}; 
        ///Short-circuit detector interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scdie{}; 
        ///Clock absence interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckabie{}; 
        ///Extremes detector channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> exch{}; 
        ///Analog watchdog channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> awdch{}; 
    }
    namespace DfsdmDfsdm3Cr2{    ///<DFSDM control register 2
        using Addr = Register::Address<0x400174bc,0xff000080,0x00000000,std::uint32_t>;
        ///Injected end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocie{}; 
        ///Regular end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocie{}; 
        ///Injected data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrie{}; 
        ///Regular data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrie{}; 
        ///Analog watchdog interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdie{}; 
        ///Short-circuit detector interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scdie{}; 
        ///Clock absence interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckabie{}; 
        ///Extremes detector channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> exch{}; 
        ///Analog watchdog channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> awdch{}; 
    }
    namespace DfsdmDfsdm0Isr{    ///<DFSDM interrupt and status          register
        using Addr = Register::Address<0x400174c0,0x00009fe0,0x00000000,std::uint32_t>;
        ///End of injected conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocf{}; 
        ///End of regular conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocf{}; 
        ///Injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrf{}; 
        ///Regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrf{}; 
        ///Analog watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdf{}; 
        ///Injected conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> jcip{}; 
        ///Regular conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcip{}; 
        ///Clock absence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckabf{}; 
        ///short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> scdf{}; 
    }
    namespace DfsdmDfsdm1Isr{    ///<DFSDM interrupt and status          register
        using Addr = Register::Address<0x400174c4,0x00009fe0,0x00000000,std::uint32_t>;
        ///End of injected conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocf{}; 
        ///End of regular conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocf{}; 
        ///Injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrf{}; 
        ///Regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrf{}; 
        ///Analog watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdf{}; 
        ///Injected conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> jcip{}; 
        ///Regular conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcip{}; 
        ///Clock absence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckabf{}; 
        ///short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> scdf{}; 
    }
    namespace DfsdmDfsdm2Isr{    ///<DFSDM interrupt and status          register
        using Addr = Register::Address<0x400174c8,0x00009fe0,0x00000000,std::uint32_t>;
        ///End of injected conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocf{}; 
        ///End of regular conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocf{}; 
        ///Injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrf{}; 
        ///Regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrf{}; 
        ///Analog watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdf{}; 
        ///Injected conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> jcip{}; 
        ///Regular conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcip{}; 
        ///Clock absence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckabf{}; 
        ///short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> scdf{}; 
    }
    namespace DfsdmDfsdm3Isr{    ///<DFSDM interrupt and status          register
        using Addr = Register::Address<0x400174cc,0x00009fe0,0x00000000,std::uint32_t>;
        ///End of injected conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocf{}; 
        ///End of regular conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocf{}; 
        ///Injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrf{}; 
        ///Regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrf{}; 
        ///Analog watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdf{}; 
        ///Injected conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> jcip{}; 
        ///Regular conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcip{}; 
        ///Clock absence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckabf{}; 
        ///short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> scdf{}; 
    }
    namespace DfsdmDfsdm0Icr{    ///<DFSDM interrupt flag clear          register
        using Addr = Register::Address<0x400174d0,0x0000fff3,0x00000000,std::uint32_t>;
        ///Clear the injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
        ///Clear the regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        ///Clear the clock absence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        ///Clear the short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
    }
    namespace DfsdmDfsdm1Icr{    ///<DFSDM interrupt flag clear          register
        using Addr = Register::Address<0x400174d4,0x0000fff3,0x00000000,std::uint32_t>;
        ///Clear the injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
        ///Clear the regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        ///Clear the clock absence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        ///Clear the short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
    }
    namespace DfsdmDfsdm2Icr{    ///<DFSDM interrupt flag clear          register
        using Addr = Register::Address<0x400174d8,0x0000fff3,0x00000000,std::uint32_t>;
        ///Clear the injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
        ///Clear the regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        ///Clear the clock absence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        ///Clear the short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
    }
    namespace DfsdmDfsdm3Icr{    ///<DFSDM interrupt flag clear          register
        using Addr = Register::Address<0x400174dc,0x0000fff3,0x00000000,std::uint32_t>;
        ///Clear the injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
        ///Clear the regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        ///Clear the clock absence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        ///Clear the short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
    }
    namespace DfsdmDfsdm0Jchgr{    ///<DFSDM injected channel group selection          register
        using Addr = Register::Address<0x400174e0,0xffffff00,0x00000000,std::uint32_t>;
        ///Injected channel group              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
    }
    namespace DfsdmDfsdm1Jchgr{    ///<DFSDM injected channel group selection          register
        using Addr = Register::Address<0x400174e4,0xffffff00,0x00000000,std::uint32_t>;
        ///Injected channel group              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
    }
    namespace DfsdmDfsdm2Jchgr{    ///<DFSDM injected channel group selection          register
        using Addr = Register::Address<0x400174e8,0xffffff00,0x00000000,std::uint32_t>;
        ///Injected channel group              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
    }
    namespace DfsdmDfsdm3Jchgr{    ///<DFSDM injected channel group selection          register
        using Addr = Register::Address<0x400174ec,0xffffff00,0x00000000,std::uint32_t>;
        ///Injected channel group              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
    }
    namespace DfsdmDfsdm0Fcr{    ///<DFSDM filter control register
        using Addr = Register::Address<0x400174f0,0x1c00ff00,0x00000000,std::uint32_t>;
        ///Integrator oversampling ratio (averaging              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
        ///Sinc filter oversampling ratio              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
    }
    namespace DfsdmDfsdm1Fcr{    ///<DFSDM filter control register
        using Addr = Register::Address<0x400174f4,0x1c00ff00,0x00000000,std::uint32_t>;
        ///Integrator oversampling ratio (averaging              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
        ///Sinc filter oversampling ratio              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
    }
    namespace DfsdmDfsdm2Fcr{    ///<DFSDM filter control register
        using Addr = Register::Address<0x400174f8,0x1c00ff00,0x00000000,std::uint32_t>;
        ///Integrator oversampling ratio (averaging              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
        ///Sinc filter oversampling ratio              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
    }
    namespace DfsdmDfsdm3Fcr{    ///<DFSDM filter control register
        using Addr = Register::Address<0x400174fc,0x1c00ff00,0x00000000,std::uint32_t>;
        ///Integrator oversampling ratio (averaging              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
        ///Sinc filter oversampling ratio              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
    }
    namespace DfsdmDfsdm0Jdatar{    ///<DFSDM data register for injected          group
        using Addr = Register::Address<0x40017500,0x000000f8,0x00000000,std::uint32_t>;
        ///Injected channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
        ///Injected group conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace DfsdmDfsdm1Jdatar{    ///<DFSDM data register for injected          group
        using Addr = Register::Address<0x40017504,0x000000f8,0x00000000,std::uint32_t>;
        ///Injected channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
        ///Injected group conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace DfsdmDfsdm2Jdatar{    ///<DFSDM data register for injected          group
        using Addr = Register::Address<0x40017508,0x000000f8,0x00000000,std::uint32_t>;
        ///Injected channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
        ///Injected group conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace DfsdmDfsdm3Jdatar{    ///<DFSDM data register for injected          group
        using Addr = Register::Address<0x4001750c,0x000000f8,0x00000000,std::uint32_t>;
        ///Injected channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
        ///Injected group conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
    }
    namespace DfsdmDfsdm0Rdatar{    ///<DFSDM data register for the regular          channel
        using Addr = Register::Address<0x40017510,0x000000e8,0x00000000,std::uint32_t>;
        ///Regular channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
        ///Regular channel pending              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        ///Regular channel conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
    }
    namespace DfsdmDfsdm1Rdatar{    ///<DFSDM data register for the regular          channel
        using Addr = Register::Address<0x40017514,0x000000e8,0x00000000,std::uint32_t>;
        ///Regular channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
        ///Regular channel pending              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        ///Regular channel conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
    }
    namespace DfsdmDfsdm2Rdatar{    ///<DFSDM data register for the regular          channel
        using Addr = Register::Address<0x40017518,0x000000e8,0x00000000,std::uint32_t>;
        ///Regular channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
        ///Regular channel pending              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        ///Regular channel conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
    }
    namespace DfsdmDfsdm3Rdatar{    ///<DFSDM data register for the regular          channel
        using Addr = Register::Address<0x4001751c,0x000000e8,0x00000000,std::uint32_t>;
        ///Regular channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
        ///Regular channel pending              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        ///Regular channel conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
    }
    namespace DfsdmDfsdm0Awhtr{    ///<DFSDM analog watchdog high threshold          register
        using Addr = Register::Address<0x40017520,0x000000f0,0x00000000,std::uint32_t>;
        ///Break signal assignment to analog              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
        ///Analog watchdog high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
    }
    namespace DfsdmDfsdm1Awhtr{    ///<DFSDM analog watchdog high threshold          register
        using Addr = Register::Address<0x40017524,0x000000f0,0x00000000,std::uint32_t>;
        ///Break signal assignment to analog              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
        ///Analog watchdog high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
    }
    namespace DfsdmDfsdm2Awhtr{    ///<DFSDM analog watchdog high threshold          register
        using Addr = Register::Address<0x40017528,0x000000f0,0x00000000,std::uint32_t>;
        ///Break signal assignment to analog              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
        ///Analog watchdog high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
    }
    namespace DfsdmDfsdm3Awhtr{    ///<DFSDM analog watchdog high threshold          register
        using Addr = Register::Address<0x4001752c,0x000000f0,0x00000000,std::uint32_t>;
        ///Break signal assignment to analog              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
        ///Analog watchdog high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
    }
    namespace DfsdmDfsdm0Awltr{    ///<DFSDM analog watchdog low threshold          register
        using Addr = Register::Address<0x40017530,0x000000f0,0x00000000,std::uint32_t>;
        ///Break signal assignment to analog              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
        ///Analog watchdog low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
    }
    namespace DfsdmDfsdm1Awltr{    ///<DFSDM analog watchdog low threshold          register
        using Addr = Register::Address<0x40017534,0x000000f0,0x00000000,std::uint32_t>;
        ///Break signal assignment to analog              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
        ///Analog watchdog low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
    }
    namespace DfsdmDfsdm2Awltr{    ///<DFSDM analog watchdog low threshold          register
        using Addr = Register::Address<0x40017538,0x000000f0,0x00000000,std::uint32_t>;
        ///Break signal assignment to analog              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
        ///Analog watchdog low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
    }
    namespace DfsdmDfsdm3Awltr{    ///<DFSDM analog watchdog low threshold          register
        using Addr = Register::Address<0x4001753c,0x000000f0,0x00000000,std::uint32_t>;
        ///Break signal assignment to analog              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
        ///Analog watchdog low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
    }
    namespace DfsdmDfsdm0Awsr{    ///<DFSDM analog watchdog status          register
        using Addr = Register::Address<0x40017540,0xffff0000,0x00000000,std::uint32_t>;
        ///Analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
        ///Analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
    }
    namespace DfsdmDfsdm1Awsr{    ///<DFSDM analog watchdog status          register
        using Addr = Register::Address<0x40017544,0xffff0000,0x00000000,std::uint32_t>;
        ///Analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
        ///Analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
    }
    namespace DfsdmDfsdm2Awsr{    ///<DFSDM analog watchdog status          register
        using Addr = Register::Address<0x40017548,0xffff0000,0x00000000,std::uint32_t>;
        ///Analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
        ///Analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
    }
    namespace DfsdmDfsdm3Awsr{    ///<DFSDM analog watchdog status          register
        using Addr = Register::Address<0x4001754c,0xffff0000,0x00000000,std::uint32_t>;
        ///Analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
        ///Analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
    }
    namespace DfsdmDfsdm0Awcfr{    ///<DFSDM analog watchdog clear flag          register
        using Addr = Register::Address<0x40017550,0xffff0000,0x00000000,std::uint32_t>;
        ///Clear the analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
        ///Clear the analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
    }
    namespace DfsdmDfsdm1Awcfr{    ///<DFSDM analog watchdog clear flag          register
        using Addr = Register::Address<0x40017554,0xffff0000,0x00000000,std::uint32_t>;
        ///Clear the analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
        ///Clear the analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
    }
    namespace DfsdmDfsdm2Awcfr{    ///<DFSDM analog watchdog clear flag          register
        using Addr = Register::Address<0x40017558,0xffff0000,0x00000000,std::uint32_t>;
        ///Clear the analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
        ///Clear the analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
    }
    namespace DfsdmDfsdm3Awcfr{    ///<DFSDM analog watchdog clear flag          register
        using Addr = Register::Address<0x4001755c,0xffff0000,0x00000000,std::uint32_t>;
        ///Clear the analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
        ///Clear the analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
    }
    namespace DfsdmDfsdm0Exmax{    ///<DFSDM Extremes detector maximum          register
        using Addr = Register::Address<0x40017560,0x000000f8,0x00000000,std::uint32_t>;
        ///Extremes detector maximum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
        ///Extremes detector maximum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
    }
    namespace DfsdmDfsdm1Exmax{    ///<DFSDM Extremes detector maximum          register
        using Addr = Register::Address<0x40017564,0x000000f8,0x00000000,std::uint32_t>;
        ///Extremes detector maximum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
        ///Extremes detector maximum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
    }
    namespace DfsdmDfsdm2Exmax{    ///<DFSDM Extremes detector maximum          register
        using Addr = Register::Address<0x40017568,0x000000f8,0x00000000,std::uint32_t>;
        ///Extremes detector maximum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
        ///Extremes detector maximum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
    }
    namespace DfsdmDfsdm3Exmax{    ///<DFSDM Extremes detector maximum          register
        using Addr = Register::Address<0x4001756c,0x000000f8,0x00000000,std::uint32_t>;
        ///Extremes detector maximum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
        ///Extremes detector maximum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
    }
    namespace DfsdmDfsdm0Exmin{    ///<DFSDM Extremes detector minimum          register
        using Addr = Register::Address<0x40017570,0x000000f8,0x00000000,std::uint32_t>;
        ///Extremes detector minimum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
        ///Extremes detector minimum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
    }
    namespace DfsdmDfsdm1Exmin{    ///<DFSDM Extremes detector minimum          register
        using Addr = Register::Address<0x40017574,0x000000f8,0x00000000,std::uint32_t>;
        ///Extremes detector minimum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
        ///Extremes detector minimum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
    }
    namespace DfsdmDfsdm2Exmin{    ///<DFSDM Extremes detector minimum          register
        using Addr = Register::Address<0x40017578,0x000000f8,0x00000000,std::uint32_t>;
        ///Extremes detector minimum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
        ///Extremes detector minimum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
    }
    namespace DfsdmDfsdm3Exmin{    ///<DFSDM Extremes detector minimum          register
        using Addr = Register::Address<0x4001757c,0x000000f8,0x00000000,std::uint32_t>;
        ///Extremes detector minimum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
        ///Extremes detector minimum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
    }
    namespace DfsdmDfsdm0Cnvtimr{    ///<DFSDM conversion timer          register
        using Addr = Register::Address<0x40017580,0x0000000f,0x00000000,std::uint32_t>;
        ///28-bit timer counting conversion              time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
    }
    namespace DfsdmDfsdm1Cnvtimr{    ///<DFSDM conversion timer          register
        using Addr = Register::Address<0x40017584,0x0000000f,0x00000000,std::uint32_t>;
        ///28-bit timer counting conversion              time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
    }
    namespace DfsdmDfsdm2Cnvtimr{    ///<DFSDM conversion timer          register
        using Addr = Register::Address<0x40017588,0x0000000f,0x00000000,std::uint32_t>;
        ///28-bit timer counting conversion              time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
    }
    namespace DfsdmDfsdm3Cnvtimr{    ///<DFSDM conversion timer          register
        using Addr = Register::Address<0x4001758c,0x0000000f,0x00000000,std::uint32_t>;
        ///28-bit timer counting conversion              time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
    }
}
