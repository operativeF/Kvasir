#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Digital filter for sigma delta      modulators
    namespace Dfsdm2Ch0cfgr1{    ///<channel configuration y          register
        using Addr = Register::Address<0x40016400,0x3f000e10,0x00000000,std::uint32_t>;
        ///DFSDMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dfsdmen{}; 
        ///CKOUTSRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ckoutsrc{}; 
        ///CKOUTDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckoutdiv{}; 
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
    }
    namespace Dfsdm2Ch0cfgr2{    ///<channel configuration y          register
        using Addr = Register::Address<0x40016404,0x00000007,0x00000000,std::uint32_t>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace Dfsdm2Ch0awscdr{    ///<analog watchdog and short-circuit detector          register
        using Addr = Register::Address<0x40016408,0xff200f00,0x00000000,std::uint32_t>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace Dfsdm2Ch0wdatr{    ///<channel watchdog filter data          register
        using Addr = Register::Address<0x4001640c,0xffff0000,0x00000000,std::uint32_t>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace Dfsdm2Ch0datinr{    ///<channel data input register
        using Addr = Register::Address<0x40016410,0x00000000,0x00000000,std::uint32_t>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace Dfsdm2Ch1cfgr1{    ///<CHCFG1R1
        using Addr = Register::Address<0x40016420,0xffff0e10,0x00000000,std::uint32_t>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
    }
    namespace Dfsdm2Ch1cfgr2{    ///<CHCFG1R2
        using Addr = Register::Address<0x40016424,0x00000007,0x00000000,std::uint32_t>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace Dfsdm2Ch1awscdr{    ///<AWSCD1R
        using Addr = Register::Address<0x40016428,0xff200f00,0x00000000,std::uint32_t>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace Dfsdm2Ch1wdatr{    ///<CHWDAT1R
        using Addr = Register::Address<0x4001642c,0xffff0000,0x00000000,std::uint32_t>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace Dfsdm2Ch1datinr{    ///<CHDATIN1R
        using Addr = Register::Address<0x40016430,0x00000000,0x00000000,std::uint32_t>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace Dfsdm2Ch2cfgr1{    ///<CHCFG2R1
        using Addr = Register::Address<0x40016440,0xffff0e10,0x00000000,std::uint32_t>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
    }
    namespace Dfsdm2Ch2cfgr2{    ///<CHCFG2R2
        using Addr = Register::Address<0x40016444,0x00000007,0x00000000,std::uint32_t>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace Dfsdm2Ch2awscdr{    ///<AWSCD2R
        using Addr = Register::Address<0x40016448,0xff200f00,0x00000000,std::uint32_t>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace Dfsdm2Ch2wdatr{    ///<CHWDAT2R
        using Addr = Register::Address<0x4001644c,0xffff0000,0x00000000,std::uint32_t>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace Dfsdm2Ch2datinr{    ///<CHDATIN2R
        using Addr = Register::Address<0x40016450,0x00000000,0x00000000,std::uint32_t>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace Dfsdm2Ch3cfgr1{    ///<CHCFG3R1
        using Addr = Register::Address<0x40016460,0xffff0e10,0x00000000,std::uint32_t>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
    }
    namespace Dfsdm2Ch3cfgr2{    ///<CHCFG3R2
        using Addr = Register::Address<0x40016464,0x00000007,0x00000000,std::uint32_t>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace Dfsdm2Ch3awscdr{    ///<AWSCD3R
        using Addr = Register::Address<0x40016468,0xff200f00,0x00000000,std::uint32_t>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace Dfsdm2Ch3wdatr{    ///<CHWDAT3R
        using Addr = Register::Address<0x4001646c,0xffff0000,0x00000000,std::uint32_t>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace Dfsdm2Ch3datinr{    ///<CHDATIN3R
        using Addr = Register::Address<0x40016470,0x00000000,0x00000000,std::uint32_t>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace Dfsdm2Ch4cfgr1{    ///<CHCFG4R1
        using Addr = Register::Address<0x40016480,0xffff0e10,0x00000000,std::uint32_t>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
    }
    namespace Dfsdm2Ch4cfgr2{    ///<CHCFG4R2
        using Addr = Register::Address<0x40016484,0x00000007,0x00000000,std::uint32_t>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace Dfsdm2Ch4awscdr{    ///<AWSCD4R
        using Addr = Register::Address<0x40016488,0xff200f00,0x00000000,std::uint32_t>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace Dfsdm2Ch4wdatr{    ///<CHWDAT4R
        using Addr = Register::Address<0x4001648c,0xffff0000,0x00000000,std::uint32_t>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace Dfsdm2Ch4datinr{    ///<CHDATIN4R
        using Addr = Register::Address<0x40016490,0x00000000,0x00000000,std::uint32_t>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace Dfsdm2Ch5cfgr1{    ///<CHCFG5R1
        using Addr = Register::Address<0x400164a0,0xffff0e10,0x00000000,std::uint32_t>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
    }
    namespace Dfsdm2Ch5cfgr2{    ///<CHCFG5R2
        using Addr = Register::Address<0x400164a4,0x00000007,0x00000000,std::uint32_t>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace Dfsdm2Ch5awscdr{    ///<AWSCD5R
        using Addr = Register::Address<0x400164a8,0xff200f00,0x00000000,std::uint32_t>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace Dfsdm2Ch5wdatr{    ///<CHWDAT5R
        using Addr = Register::Address<0x400164ac,0xffff0000,0x00000000,std::uint32_t>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace Dfsdm2Ch5datinr{    ///<CHDATIN5R
        using Addr = Register::Address<0x400164b0,0x00000000,0x00000000,std::uint32_t>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace Dfsdm2Ch6cfgr1{    ///<CHCFG6R1
        using Addr = Register::Address<0x400164c0,0xffff0e10,0x00000000,std::uint32_t>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
    }
    namespace Dfsdm2Ch6cfgr2{    ///<CHCFG6R2
        using Addr = Register::Address<0x400164c4,0x00000007,0x00000000,std::uint32_t>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace Dfsdm2Ch6awscdr{    ///<AWSCD6R
        using Addr = Register::Address<0x400164c8,0xff200f00,0x00000000,std::uint32_t>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace Dfsdm2Ch6wdatr{    ///<CHWDAT6R
        using Addr = Register::Address<0x400164cc,0xffff0000,0x00000000,std::uint32_t>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace Dfsdm2Ch6datinr{    ///<CHDATIN6R
        using Addr = Register::Address<0x400164d0,0x00000000,0x00000000,std::uint32_t>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace Dfsdm2Ch7cfgr1{    ///<CHCFG7R1
        using Addr = Register::Address<0x400164e0,0xffff0e10,0x00000000,std::uint32_t>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
    }
    namespace Dfsdm2Ch7cfgr2{    ///<CHCFG7R2
        using Addr = Register::Address<0x400164e4,0x00000007,0x00000000,std::uint32_t>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace Dfsdm2Ch7awscdr{    ///<AWSCD7R
        using Addr = Register::Address<0x400164e8,0xff200f00,0x00000000,std::uint32_t>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace Dfsdm2Ch7wdatr{    ///<CHWDAT7R
        using Addr = Register::Address<0x400164ec,0xffff0000,0x00000000,std::uint32_t>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace Dfsdm2Ch7datinr{    ///<CHDATIN7R
        using Addr = Register::Address<0x400164f0,0x00000000,0x00000000,std::uint32_t>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace Dfsdm2Flt0cr1{    ///<control register 1
        using Addr = Register::Address<0x40016500,0x98d198c4,0x00000000,std::uint32_t>;
        ///Analog watchdog fast mode              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> awfsel{}; 
        ///Fast conversion mode selection for              regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fast{}; 
        ///Regular channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rch{}; 
        ///DMA channel enabled to read data for the              regular conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rdmaen{}; 
        ///Launch regular conversion synchronously              with DFSDM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsync{}; 
        ///Continuous mode selection for regular              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Software start of a conversion on the              regular channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rswstart{}; 
        ///Trigger enable and trigger edge              selection for injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///Trigger signal selection for launching              injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///DMA channel enabled to read data for the              injected channel group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jdmaen{}; 
        ///Scanning conversion mode for injected              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> jscan{}; 
        ///Launch an injected conversion              synchronously with the DFSDM0 JSWSTART              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jsync{}; 
        ///Start a conversion of the injected group              of channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jswstart{}; 
        ///DFSDM enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfen{}; 
    }
    namespace Dfsdm2Flt0cr2{    ///<control register 2
        using Addr = Register::Address<0x40016504,0xff000080,0x00000000,std::uint32_t>;
        ///Analog watchdog channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> awdch{}; 
        ///Extremes detector channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> exch{}; 
        ///Clock absence interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckabie{}; 
        ///Short-circuit detector interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scdie{}; 
        ///Analog watchdog interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdie{}; 
        ///Regular data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrie{}; 
        ///Injected data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrie{}; 
        ///Regular end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocie{}; 
        ///Injected end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocie{}; 
    }
    namespace Dfsdm2Flt0isr{    ///<interrupt and status register
        using Addr = Register::Address<0x40016508,0x00009fe0,0x00000000,std::uint32_t>;
        ///short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> scdf{}; 
        ///Clock absence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckabf{}; 
        ///Regular conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcip{}; 
        ///Injected conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> jcip{}; 
        ///Analog watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdf{}; 
        ///Regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrf{}; 
        ///Injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrf{}; 
        ///End of regular conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocf{}; 
        ///End of injected conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocf{}; 
    }
    namespace Dfsdm2Flt0icr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4001650c,0x0000fff3,0x00000000,std::uint32_t>;
        ///Clear the short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
        ///Clear the clock absence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        ///Clear the regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        ///Clear the injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
    }
    namespace Dfsdm2Flt0jchgr{    ///<injected channel group selection          register
        using Addr = Register::Address<0x40016510,0xffffff00,0x00000000,std::uint32_t>;
        ///Injected channel group              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
    }
    namespace Dfsdm2Flt0fcr{    ///<filter control register
        using Addr = Register::Address<0x40016514,0x1c00ff00,0x00000000,std::uint32_t>;
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
        ///Sinc filter oversampling ratio              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        ///Integrator oversampling ratio (averaging              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
    }
    namespace Dfsdm2Flt0jdatar{    ///<data register for injected          group
        using Addr = Register::Address<0x40016518,0x000000f8,0x00000000,std::uint32_t>;
        ///Injected group conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
        ///Injected channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
    }
    namespace Dfsdm2Flt0rdatar{    ///<data register for the regular          channel
        using Addr = Register::Address<0x4001651c,0x000000e8,0x00000000,std::uint32_t>;
        ///Regular channel conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
        ///Regular channel pending              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        ///Regular channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
    }
    namespace Dfsdm2Flt0awhtr{    ///<analog watchdog high threshold          register
        using Addr = Register::Address<0x40016520,0x000000f0,0x00000000,std::uint32_t>;
        ///Analog watchdog high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
        ///Break signal assignment to analog              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
    }
    namespace Dfsdm2Flt0awltr{    ///<analog watchdog low threshold          register
        using Addr = Register::Address<0x40016524,0x000000f0,0x00000000,std::uint32_t>;
        ///Analog watchdog low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
        ///Break signal assignment to analog              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
    }
    namespace Dfsdm2Flt0awsr{    ///<analog watchdog status          register
        using Addr = Register::Address<0x40016528,0xffff0000,0x00000000,std::uint32_t>;
        ///Analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
        ///Analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
    }
    namespace Dfsdm2Flt0awcfr{    ///<analog watchdog clear flag          register
        using Addr = Register::Address<0x4001652c,0xffff0000,0x00000000,std::uint32_t>;
        ///Clear the analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
        ///Clear the analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
    }
    namespace Dfsdm2Flt0exmax{    ///<Extremes detector maximum          register
        using Addr = Register::Address<0x40016530,0x000000f8,0x00000000,std::uint32_t>;
        ///Extremes detector maximum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
        ///Extremes detector maximum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
    }
    namespace Dfsdm2Flt0exmin{    ///<Extremes detector minimum          register
        using Addr = Register::Address<0x40016534,0x000000f8,0x00000000,std::uint32_t>;
        ///EXMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
        ///Extremes detector minimum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
    }
    namespace Dfsdm2Flt0cnvtimr{    ///<conversion timer register
        using Addr = Register::Address<0x40016538,0x0000000f,0x00000000,std::uint32_t>;
        ///28-bit timer counting conversion time t              = CNVCNT[27:0] / fDFSDM_CKIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
    }
    namespace Dfsdm2Flt1cr1{    ///<control register 1
        using Addr = Register::Address<0x40016580,0x98d198c4,0x00000000,std::uint32_t>;
        ///Analog watchdog fast mode              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> awfsel{}; 
        ///Fast conversion mode selection for              regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fast{}; 
        ///Regular channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rch{}; 
        ///DMA channel enabled to read data for the              regular conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rdmaen{}; 
        ///Launch regular conversion synchronously              with DFSDM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsync{}; 
        ///Continuous mode selection for regular              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Software start of a conversion on the              regular channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rswstart{}; 
        ///Trigger enable and trigger edge              selection for injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///Trigger signal selection for launching              injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///DMA channel enabled to read data for the              injected channel group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jdmaen{}; 
        ///Scanning conversion mode for injected              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> jscan{}; 
        ///Launch an injected conversion              synchronously with the DFSDM0 JSWSTART              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jsync{}; 
        ///Start a conversion of the injected group              of channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jswstart{}; 
        ///DFSDM enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfen{}; 
    }
    namespace Dfsdm2Flt1cr2{    ///<control register 2
        using Addr = Register::Address<0x40016584,0xff000080,0x00000000,std::uint32_t>;
        ///Analog watchdog channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> awdch{}; 
        ///Extremes detector channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> exch{}; 
        ///Clock absence interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckabie{}; 
        ///Short-circuit detector interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scdie{}; 
        ///Analog watchdog interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdie{}; 
        ///Regular data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrie{}; 
        ///Injected data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrie{}; 
        ///Regular end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocie{}; 
        ///Injected end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocie{}; 
    }
    namespace Dfsdm2Flt1isr{    ///<interrupt and status register
        using Addr = Register::Address<0x40016588,0x00009fe0,0x00000000,std::uint32_t>;
        ///short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> scdf{}; 
        ///Clock absence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckabf{}; 
        ///Regular conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcip{}; 
        ///Injected conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> jcip{}; 
        ///Analog watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdf{}; 
        ///Regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrf{}; 
        ///Injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrf{}; 
        ///End of regular conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocf{}; 
        ///End of injected conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocf{}; 
    }
    namespace Dfsdm2Flt1icr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4001658c,0x0000fff3,0x00000000,std::uint32_t>;
        ///Clear the short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
        ///Clear the clock absence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        ///Clear the regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        ///Clear the injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
    }
    namespace Dfsdm2Flt1jchgr{    ///<injected channel group selection          register
        using Addr = Register::Address<0x40016590,0xffffff00,0x00000000,std::uint32_t>;
        ///Injected channel group              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
    }
    namespace Dfsdm2Flt1fcr{    ///<filter control register
        using Addr = Register::Address<0x40016594,0x1c00ff00,0x00000000,std::uint32_t>;
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
        ///Sinc filter oversampling ratio              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        ///Integrator oversampling ratio (averaging              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
    }
    namespace Dfsdm2Flt1jdatar{    ///<data register for injected          group
        using Addr = Register::Address<0x40016598,0x000000f8,0x00000000,std::uint32_t>;
        ///Injected group conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
        ///Injected channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
    }
    namespace Dfsdm2Flt1rdatar{    ///<data register for the regular          channel
        using Addr = Register::Address<0x4001659c,0x000000e8,0x00000000,std::uint32_t>;
        ///Regular channel conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
        ///Regular channel pending              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        ///Regular channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
    }
    namespace Dfsdm2Flt1awhtr{    ///<analog watchdog high threshold          register
        using Addr = Register::Address<0x400165a0,0x000000f0,0x00000000,std::uint32_t>;
        ///Analog watchdog high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
        ///Break signal assignment to analog              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
    }
    namespace Dfsdm2Flt1awltr{    ///<analog watchdog low threshold          register
        using Addr = Register::Address<0x400165a4,0x000000f0,0x00000000,std::uint32_t>;
        ///Analog watchdog low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
        ///Break signal assignment to analog              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
    }
    namespace Dfsdm2Flt1awsr{    ///<analog watchdog status          register
        using Addr = Register::Address<0x400165a8,0xffff0000,0x00000000,std::uint32_t>;
        ///Analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
        ///Analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
    }
    namespace Dfsdm2Flt1awcfr{    ///<analog watchdog clear flag          register
        using Addr = Register::Address<0x400165ac,0xffff0000,0x00000000,std::uint32_t>;
        ///Clear the analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
        ///Clear the analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
    }
    namespace Dfsdm2Flt1exmax{    ///<Extremes detector maximum          register
        using Addr = Register::Address<0x400165b0,0x000000f8,0x00000000,std::uint32_t>;
        ///Extremes detector maximum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
        ///Extremes detector maximum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
    }
    namespace Dfsdm2Flt1exmin{    ///<Extremes detector minimum          register
        using Addr = Register::Address<0x400165b4,0x000000f8,0x00000000,std::uint32_t>;
        ///EXMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
        ///Extremes detector minimum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
    }
    namespace Dfsdm2Flt1cnvtimr{    ///<conversion timer register
        using Addr = Register::Address<0x400165b8,0x0000000f,0x00000000,std::uint32_t>;
        ///28-bit timer counting conversion time t              = CNVCNT[27:0] / fDFSDM_CKIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
    }
    namespace Dfsdm2Flt2cr1{    ///<control register 1
        using Addr = Register::Address<0x40016600,0x98d198c4,0x00000000,std::uint32_t>;
        ///Analog watchdog fast mode              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> awfsel{}; 
        ///Fast conversion mode selection for              regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fast{}; 
        ///Regular channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rch{}; 
        ///DMA channel enabled to read data for the              regular conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rdmaen{}; 
        ///Launch regular conversion synchronously              with DFSDM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsync{}; 
        ///Continuous mode selection for regular              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Software start of a conversion on the              regular channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rswstart{}; 
        ///Trigger enable and trigger edge              selection for injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///Trigger signal selection for launching              injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///DMA channel enabled to read data for the              injected channel group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jdmaen{}; 
        ///Scanning conversion mode for injected              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> jscan{}; 
        ///Launch an injected conversion              synchronously with the DFSDM0 JSWSTART              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jsync{}; 
        ///Start a conversion of the injected group              of channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jswstart{}; 
        ///DFSDM enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfen{}; 
    }
    namespace Dfsdm2Flt2cr2{    ///<control register 2
        using Addr = Register::Address<0x40016604,0xff000080,0x00000000,std::uint32_t>;
        ///Analog watchdog channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> awdch{}; 
        ///Extremes detector channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> exch{}; 
        ///Clock absence interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckabie{}; 
        ///Short-circuit detector interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scdie{}; 
        ///Analog watchdog interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdie{}; 
        ///Regular data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrie{}; 
        ///Injected data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrie{}; 
        ///Regular end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocie{}; 
        ///Injected end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocie{}; 
    }
    namespace Dfsdm2Flt2isr{    ///<interrupt and status register
        using Addr = Register::Address<0x40016608,0x00009fe0,0x00000000,std::uint32_t>;
        ///short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> scdf{}; 
        ///Clock absence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckabf{}; 
        ///Regular conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcip{}; 
        ///Injected conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> jcip{}; 
        ///Analog watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdf{}; 
        ///Regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrf{}; 
        ///Injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrf{}; 
        ///End of regular conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocf{}; 
        ///End of injected conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocf{}; 
    }
    namespace Dfsdm2Flt2icr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4001660c,0x0000fff3,0x00000000,std::uint32_t>;
        ///Clear the short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
        ///Clear the clock absence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        ///Clear the regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        ///Clear the injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
    }
    namespace Dfsdm2Flt2jchgr{    ///<injected channel group selection          register
        using Addr = Register::Address<0x40016610,0xffffff00,0x00000000,std::uint32_t>;
        ///Injected channel group              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
    }
    namespace Dfsdm2Flt2fcr{    ///<filter control register
        using Addr = Register::Address<0x40016614,0x1c00ff00,0x00000000,std::uint32_t>;
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
        ///Sinc filter oversampling ratio              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        ///Integrator oversampling ratio (averaging              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
    }
    namespace Dfsdm2Flt2jdatar{    ///<data register for injected          group
        using Addr = Register::Address<0x40016618,0x000000f8,0x00000000,std::uint32_t>;
        ///Injected group conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
        ///Injected channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
    }
    namespace Dfsdm2Flt2rdatar{    ///<data register for the regular          channel
        using Addr = Register::Address<0x4001661c,0x000000e8,0x00000000,std::uint32_t>;
        ///Regular channel conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
        ///Regular channel pending              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        ///Regular channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
    }
    namespace Dfsdm2Flt2awhtr{    ///<analog watchdog high threshold          register
        using Addr = Register::Address<0x40016620,0x000000f0,0x00000000,std::uint32_t>;
        ///Analog watchdog high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
        ///Break signal assignment to analog              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
    }
    namespace Dfsdm2Flt2awltr{    ///<analog watchdog low threshold          register
        using Addr = Register::Address<0x40016624,0x000000f0,0x00000000,std::uint32_t>;
        ///Analog watchdog low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
        ///Break signal assignment to analog              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
    }
    namespace Dfsdm2Flt2awsr{    ///<analog watchdog status          register
        using Addr = Register::Address<0x40016628,0xffff0000,0x00000000,std::uint32_t>;
        ///Analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
        ///Analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
    }
    namespace Dfsdm2Flt2awcfr{    ///<analog watchdog clear flag          register
        using Addr = Register::Address<0x4001662c,0xffff0000,0x00000000,std::uint32_t>;
        ///Clear the analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
        ///Clear the analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
    }
    namespace Dfsdm2Flt2exmax{    ///<Extremes detector maximum          register
        using Addr = Register::Address<0x40016630,0x000000f8,0x00000000,std::uint32_t>;
        ///Extremes detector maximum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
        ///Extremes detector maximum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
    }
    namespace Dfsdm2Flt2exmin{    ///<Extremes detector minimum          register
        using Addr = Register::Address<0x40016634,0x000000f8,0x00000000,std::uint32_t>;
        ///EXMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
        ///Extremes detector minimum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
    }
    namespace Dfsdm2Flt2cnvtimr{    ///<conversion timer register
        using Addr = Register::Address<0x40016638,0x0000000f,0x00000000,std::uint32_t>;
        ///28-bit timer counting conversion time t              = CNVCNT[27:0] / fDFSDM_CKIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
    }
    namespace Dfsdm2Flt3cr1{    ///<control register 1
        using Addr = Register::Address<0x40016680,0x98d198c4,0x00000000,std::uint32_t>;
        ///Analog watchdog fast mode              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> awfsel{}; 
        ///Fast conversion mode selection for              regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fast{}; 
        ///Regular channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rch{}; 
        ///DMA channel enabled to read data for the              regular conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rdmaen{}; 
        ///Launch regular conversion synchronously              with DFSDM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsync{}; 
        ///Continuous mode selection for regular              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Software start of a conversion on the              regular channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rswstart{}; 
        ///Trigger enable and trigger edge              selection for injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///Trigger signal selection for launching              injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///DMA channel enabled to read data for the              injected channel group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jdmaen{}; 
        ///Scanning conversion mode for injected              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> jscan{}; 
        ///Launch an injected conversion              synchronously with the DFSDM0 JSWSTART              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jsync{}; 
        ///Start a conversion of the injected group              of channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jswstart{}; 
        ///DFSDM enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfen{}; 
    }
    namespace Dfsdm2Flt3cr2{    ///<control register 2
        using Addr = Register::Address<0x40016684,0xff000080,0x00000000,std::uint32_t>;
        ///Analog watchdog channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> awdch{}; 
        ///Extremes detector channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> exch{}; 
        ///Clock absence interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckabie{}; 
        ///Short-circuit detector interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scdie{}; 
        ///Analog watchdog interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdie{}; 
        ///Regular data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrie{}; 
        ///Injected data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrie{}; 
        ///Regular end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocie{}; 
        ///Injected end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocie{}; 
    }
    namespace Dfsdm2Flt3isr{    ///<interrupt and status register
        using Addr = Register::Address<0x40016688,0x00009fe0,0x00000000,std::uint32_t>;
        ///short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> scdf{}; 
        ///Clock absence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckabf{}; 
        ///Regular conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcip{}; 
        ///Injected conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> jcip{}; 
        ///Analog watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdf{}; 
        ///Regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrf{}; 
        ///Injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrf{}; 
        ///End of regular conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocf{}; 
        ///End of injected conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocf{}; 
    }
    namespace Dfsdm2Flt3icr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4001668c,0x0000fff3,0x00000000,std::uint32_t>;
        ///Clear the short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
        ///Clear the clock absence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        ///Clear the regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        ///Clear the injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
    }
    namespace Dfsdm2Flt3jchgr{    ///<injected channel group selection          register
        using Addr = Register::Address<0x40016690,0xffffff00,0x00000000,std::uint32_t>;
        ///Injected channel group              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
    }
    namespace Dfsdm2Flt3fcr{    ///<filter control register
        using Addr = Register::Address<0x40016694,0x1c00ff00,0x00000000,std::uint32_t>;
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
        ///Sinc filter oversampling ratio              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        ///Integrator oversampling ratio (averaging              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
    }
    namespace Dfsdm2Flt3jdatar{    ///<data register for injected          group
        using Addr = Register::Address<0x40016698,0x000000f8,0x00000000,std::uint32_t>;
        ///Injected group conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
        ///Injected channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
    }
    namespace Dfsdm2Flt3rdatar{    ///<data register for the regular          channel
        using Addr = Register::Address<0x4001669c,0x000000e8,0x00000000,std::uint32_t>;
        ///Regular channel conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
        ///Regular channel pending              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        ///Regular channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
    }
    namespace Dfsdm2Flt3awhtr{    ///<analog watchdog high threshold          register
        using Addr = Register::Address<0x400166a0,0x000000f0,0x00000000,std::uint32_t>;
        ///Analog watchdog high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
        ///Break signal assignment to analog              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
    }
    namespace Dfsdm2Flt3awltr{    ///<analog watchdog low threshold          register
        using Addr = Register::Address<0x400166a4,0x000000f0,0x00000000,std::uint32_t>;
        ///Analog watchdog low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
        ///Break signal assignment to analog              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
    }
    namespace Dfsdm2Flt3awsr{    ///<analog watchdog status          register
        using Addr = Register::Address<0x400166a8,0xffff0000,0x00000000,std::uint32_t>;
        ///Analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
        ///Analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
    }
    namespace Dfsdm2Flt3awcfr{    ///<analog watchdog clear flag          register
        using Addr = Register::Address<0x400166ac,0xffff0000,0x00000000,std::uint32_t>;
        ///Clear the analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
        ///Clear the analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
    }
    namespace Dfsdm2Flt3exmax{    ///<Extremes detector maximum          register
        using Addr = Register::Address<0x400166b0,0x000000f8,0x00000000,std::uint32_t>;
        ///Extremes detector maximum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
        ///Extremes detector maximum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
    }
    namespace Dfsdm2Flt3exmin{    ///<Extremes detector minimum          register
        using Addr = Register::Address<0x400166b4,0x000000f8,0x00000000,std::uint32_t>;
        ///EXMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
        ///Extremes detector minimum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
    }
    namespace Dfsdm2Flt3cnvtimr{    ///<conversion timer register
        using Addr = Register::Address<0x400166b8,0x0000000f,0x00000000,std::uint32_t>;
        ///28-bit timer counting conversion time t              = CNVCNT[27:0] / fDFSDM_CKIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
    }
}
