#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Digital filter for sigma delta      modulators
    namespace Dfsdm1Ch0cfgr1{    ///<channel configuration y          register
        using Addr = Register::Address<0x40016000,0x3f000e10,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Ch0cfgr2{    ///<channel configuration y          register
        using Addr = Register::Address<0x40016004,0x00000007,0x00000000,std::uint32_t>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace Dfsdm1Ch0awscdr{    ///<analog watchdog and short-circuit detector          register
        using Addr = Register::Address<0x40016008,0xff200f00,0x00000000,std::uint32_t>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace Dfsdm1Ch0wdatr{    ///<channel watchdog filter data          register
        using Addr = Register::Address<0x4001600c,0xffff0000,0x00000000,std::uint32_t>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace Dfsdm1Ch0datinr{    ///<channel data input register
        using Addr = Register::Address<0x40016010,0x00000000,0x00000000,std::uint32_t>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace Dfsdm1Ch1cfgr1{    ///<CHCFG1R1
        using Addr = Register::Address<0x40016020,0xffff0e10,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Ch1cfgr2{    ///<CHCFG1R2
        using Addr = Register::Address<0x40016024,0x00000007,0x00000000,std::uint32_t>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace Dfsdm1Ch1awscdr{    ///<AWSCD1R
        using Addr = Register::Address<0x40016028,0xff200f00,0x00000000,std::uint32_t>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace Dfsdm1Ch1wdatr{    ///<CHWDAT1R
        using Addr = Register::Address<0x4001602c,0xffff0000,0x00000000,std::uint32_t>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace Dfsdm1Ch1datinr{    ///<CHDATIN1R
        using Addr = Register::Address<0x40016030,0x00000000,0x00000000,std::uint32_t>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace Dfsdm1Ch2cfgr1{    ///<CHCFG2R1
        using Addr = Register::Address<0x40016040,0xffff0e10,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Ch2cfgr2{    ///<CHCFG2R2
        using Addr = Register::Address<0x40016044,0x00000007,0x00000000,std::uint32_t>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace Dfsdm1Ch2awscdr{    ///<AWSCD2R
        using Addr = Register::Address<0x40016048,0xff200f00,0x00000000,std::uint32_t>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace Dfsdm1Ch2wdatr{    ///<CHWDAT2R
        using Addr = Register::Address<0x4001604c,0xffff0000,0x00000000,std::uint32_t>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace Dfsdm1Ch2datinr{    ///<CHDATIN2R
        using Addr = Register::Address<0x40016050,0x00000000,0x00000000,std::uint32_t>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace Dfsdm1Ch3cfgr1{    ///<CHCFG3R1
        using Addr = Register::Address<0x40016060,0xffff0e10,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Ch3cfgr2{    ///<CHCFG3R2
        using Addr = Register::Address<0x40016064,0x00000007,0x00000000,std::uint32_t>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace Dfsdm1Ch3awscdr{    ///<AWSCD3R
        using Addr = Register::Address<0x40016068,0xff200f00,0x00000000,std::uint32_t>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace Dfsdm1Ch3wdatr{    ///<CHWDAT3R
        using Addr = Register::Address<0x4001606c,0xffff0000,0x00000000,std::uint32_t>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace Dfsdm1Ch3datinr{    ///<CHDATIN3R
        using Addr = Register::Address<0x40016070,0x00000000,0x00000000,std::uint32_t>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace Dfsdm1Ch4cfgr1{    ///<CHCFG4R1
        using Addr = Register::Address<0x40016080,0xffff0e10,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Ch4cfgr2{    ///<CHCFG4R2
        using Addr = Register::Address<0x40016084,0x00000007,0x00000000,std::uint32_t>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace Dfsdm1Ch4awscdr{    ///<AWSCD4R
        using Addr = Register::Address<0x40016088,0xff200f00,0x00000000,std::uint32_t>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace Dfsdm1Ch4wdatr{    ///<CHWDAT4R
        using Addr = Register::Address<0x4001608c,0xffff0000,0x00000000,std::uint32_t>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace Dfsdm1Ch4datinr{    ///<CHDATIN4R
        using Addr = Register::Address<0x40016090,0x00000000,0x00000000,std::uint32_t>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace Dfsdm1Ch5cfgr1{    ///<CHCFG5R1
        using Addr = Register::Address<0x400160a0,0xffff0e10,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Ch5cfgr2{    ///<CHCFG5R2
        using Addr = Register::Address<0x400160a4,0x00000007,0x00000000,std::uint32_t>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace Dfsdm1Ch5awscdr{    ///<AWSCD5R
        using Addr = Register::Address<0x400160a8,0xff200f00,0x00000000,std::uint32_t>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace Dfsdm1Ch5wdatr{    ///<CHWDAT5R
        using Addr = Register::Address<0x400160ac,0xffff0000,0x00000000,std::uint32_t>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace Dfsdm1Ch5datinr{    ///<CHDATIN5R
        using Addr = Register::Address<0x400160b0,0x00000000,0x00000000,std::uint32_t>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace Dfsdm1Ch6cfgr1{    ///<CHCFG6R1
        using Addr = Register::Address<0x400160c0,0xffff0e10,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Ch6cfgr2{    ///<CHCFG6R2
        using Addr = Register::Address<0x400160c4,0x00000007,0x00000000,std::uint32_t>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace Dfsdm1Ch6awscdr{    ///<AWSCD6R
        using Addr = Register::Address<0x400160c8,0xff200f00,0x00000000,std::uint32_t>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace Dfsdm1Ch6wdatr{    ///<CHWDAT6R
        using Addr = Register::Address<0x400160cc,0xffff0000,0x00000000,std::uint32_t>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace Dfsdm1Ch6datinr{    ///<CHDATIN6R
        using Addr = Register::Address<0x400160d0,0x00000000,0x00000000,std::uint32_t>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace Dfsdm1Ch7cfgr1{    ///<CHCFG7R1
        using Addr = Register::Address<0x400160e0,0xffff0e10,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Ch7cfgr2{    ///<CHCFG7R2
        using Addr = Register::Address<0x400160e4,0x00000007,0x00000000,std::uint32_t>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace Dfsdm1Ch7awscdr{    ///<AWSCD7R
        using Addr = Register::Address<0x400160e8,0xff200f00,0x00000000,std::uint32_t>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace Dfsdm1Ch7wdatr{    ///<CHWDAT7R
        using Addr = Register::Address<0x400160ec,0xffff0000,0x00000000,std::uint32_t>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace Dfsdm1Ch7datinr{    ///<CHDATIN7R
        using Addr = Register::Address<0x400160f0,0x00000000,0x00000000,std::uint32_t>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace Dfsdm1Flt0cr1{    ///<control register 1
        using Addr = Register::Address<0x40016100,0x98d198c4,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Flt0cr2{    ///<control register 2
        using Addr = Register::Address<0x40016104,0xff000080,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Flt0isr{    ///<interrupt and status register
        using Addr = Register::Address<0x40016108,0x00009fe0,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Flt0icr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4001610c,0x0000fff3,0x00000000,std::uint32_t>;
        ///Clear the short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
        ///Clear the clock absence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        ///Clear the regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        ///Clear the injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
    }
    namespace Dfsdm1Flt0jchgr{    ///<injected channel group selection          register
        using Addr = Register::Address<0x40016110,0xffffff00,0x00000000,std::uint32_t>;
        ///Injected channel group              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
    }
    namespace Dfsdm1Flt0fcr{    ///<filter control register
        using Addr = Register::Address<0x40016114,0x1c00ff00,0x00000000,std::uint32_t>;
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
        ///Sinc filter oversampling ratio              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        ///Integrator oversampling ratio (averaging              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
    }
    namespace Dfsdm1Flt0jdatar{    ///<data register for injected          group
        using Addr = Register::Address<0x40016118,0x000000f8,0x00000000,std::uint32_t>;
        ///Injected group conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
        ///Injected channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
    }
    namespace Dfsdm1Flt0rdatar{    ///<data register for the regular          channel
        using Addr = Register::Address<0x4001611c,0x000000e8,0x00000000,std::uint32_t>;
        ///Regular channel conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
        ///Regular channel pending              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        ///Regular channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
    }
    namespace Dfsdm1Flt0awhtr{    ///<analog watchdog high threshold          register
        using Addr = Register::Address<0x40016120,0x000000f0,0x00000000,std::uint32_t>;
        ///Analog watchdog high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
        ///Break signal assignment to analog              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
    }
    namespace Dfsdm1Flt0awltr{    ///<analog watchdog low threshold          register
        using Addr = Register::Address<0x40016124,0x000000f0,0x00000000,std::uint32_t>;
        ///Analog watchdog low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
        ///Break signal assignment to analog              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
    }
    namespace Dfsdm1Flt0awsr{    ///<analog watchdog status          register
        using Addr = Register::Address<0x40016128,0xffff0000,0x00000000,std::uint32_t>;
        ///Analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
        ///Analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
    }
    namespace Dfsdm1Flt0awcfr{    ///<analog watchdog clear flag          register
        using Addr = Register::Address<0x4001612c,0xffff0000,0x00000000,std::uint32_t>;
        ///Clear the analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
        ///Clear the analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
    }
    namespace Dfsdm1Flt0exmax{    ///<Extremes detector maximum          register
        using Addr = Register::Address<0x40016130,0x000000f8,0x00000000,std::uint32_t>;
        ///Extremes detector maximum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
        ///Extremes detector maximum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
    }
    namespace Dfsdm1Flt0exmin{    ///<Extremes detector minimum          register
        using Addr = Register::Address<0x40016134,0x000000f8,0x00000000,std::uint32_t>;
        ///EXMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
        ///Extremes detector minimum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
    }
    namespace Dfsdm1Flt0cnvtimr{    ///<conversion timer register
        using Addr = Register::Address<0x40016138,0x0000000f,0x00000000,std::uint32_t>;
        ///28-bit timer counting conversion time t              = CNVCNT[27:0] / fDFSDM_CKIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
    }
    namespace Dfsdm1Flt1cr1{    ///<control register 1
        using Addr = Register::Address<0x40016180,0x98d198c4,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Flt1cr2{    ///<control register 2
        using Addr = Register::Address<0x40016184,0xff000080,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Flt1isr{    ///<interrupt and status register
        using Addr = Register::Address<0x40016188,0x00009fe0,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Flt1icr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4001618c,0x0000fff3,0x00000000,std::uint32_t>;
        ///Clear the short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
        ///Clear the clock absence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        ///Clear the regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        ///Clear the injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
    }
    namespace Dfsdm1Flt1jchgr{    ///<injected channel group selection          register
        using Addr = Register::Address<0x40016190,0xffffff00,0x00000000,std::uint32_t>;
        ///Injected channel group              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
    }
    namespace Dfsdm1Flt1fcr{    ///<filter control register
        using Addr = Register::Address<0x40016194,0x1c00ff00,0x00000000,std::uint32_t>;
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
        ///Sinc filter oversampling ratio              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        ///Integrator oversampling ratio (averaging              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
    }
    namespace Dfsdm1Flt1jdatar{    ///<data register for injected          group
        using Addr = Register::Address<0x40016198,0x000000f8,0x00000000,std::uint32_t>;
        ///Injected group conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
        ///Injected channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
    }
    namespace Dfsdm1Flt1rdatar{    ///<data register for the regular          channel
        using Addr = Register::Address<0x4001619c,0x000000e8,0x00000000,std::uint32_t>;
        ///Regular channel conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
        ///Regular channel pending              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        ///Regular channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
    }
    namespace Dfsdm1Flt1awhtr{    ///<analog watchdog high threshold          register
        using Addr = Register::Address<0x400161a0,0x000000f0,0x00000000,std::uint32_t>;
        ///Analog watchdog high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
        ///Break signal assignment to analog              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
    }
    namespace Dfsdm1Flt1awltr{    ///<analog watchdog low threshold          register
        using Addr = Register::Address<0x400161a4,0x000000f0,0x00000000,std::uint32_t>;
        ///Analog watchdog low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
        ///Break signal assignment to analog              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
    }
    namespace Dfsdm1Flt1awsr{    ///<analog watchdog status          register
        using Addr = Register::Address<0x400161a8,0xffff0000,0x00000000,std::uint32_t>;
        ///Analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
        ///Analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
    }
    namespace Dfsdm1Flt1awcfr{    ///<analog watchdog clear flag          register
        using Addr = Register::Address<0x400161ac,0xffff0000,0x00000000,std::uint32_t>;
        ///Clear the analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
        ///Clear the analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
    }
    namespace Dfsdm1Flt1exmax{    ///<Extremes detector maximum          register
        using Addr = Register::Address<0x400161b0,0x000000f8,0x00000000,std::uint32_t>;
        ///Extremes detector maximum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
        ///Extremes detector maximum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
    }
    namespace Dfsdm1Flt1exmin{    ///<Extremes detector minimum          register
        using Addr = Register::Address<0x400161b4,0x000000f8,0x00000000,std::uint32_t>;
        ///EXMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
        ///Extremes detector minimum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
    }
    namespace Dfsdm1Flt1cnvtimr{    ///<conversion timer register
        using Addr = Register::Address<0x400161b8,0x0000000f,0x00000000,std::uint32_t>;
        ///28-bit timer counting conversion time t              = CNVCNT[27:0] / fDFSDM_CKIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
    }
    namespace Dfsdm1Flt2cr1{    ///<control register 1
        using Addr = Register::Address<0x40016200,0x98d198c4,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Flt2cr2{    ///<control register 2
        using Addr = Register::Address<0x40016204,0xff000080,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Flt2isr{    ///<interrupt and status register
        using Addr = Register::Address<0x40016208,0x00009fe0,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Flt2icr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4001620c,0x0000fff3,0x00000000,std::uint32_t>;
        ///Clear the short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
        ///Clear the clock absence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        ///Clear the regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        ///Clear the injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
    }
    namespace Dfsdm1Flt2jchgr{    ///<injected channel group selection          register
        using Addr = Register::Address<0x40016210,0xffffff00,0x00000000,std::uint32_t>;
        ///Injected channel group              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
    }
    namespace Dfsdm1Flt2fcr{    ///<filter control register
        using Addr = Register::Address<0x40016214,0x1c00ff00,0x00000000,std::uint32_t>;
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
        ///Sinc filter oversampling ratio              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        ///Integrator oversampling ratio (averaging              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
    }
    namespace Dfsdm1Flt2jdatar{    ///<data register for injected          group
        using Addr = Register::Address<0x40016218,0x000000f8,0x00000000,std::uint32_t>;
        ///Injected group conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
        ///Injected channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
    }
    namespace Dfsdm1Flt2rdatar{    ///<data register for the regular          channel
        using Addr = Register::Address<0x4001621c,0x000000e8,0x00000000,std::uint32_t>;
        ///Regular channel conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
        ///Regular channel pending              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        ///Regular channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
    }
    namespace Dfsdm1Flt2awhtr{    ///<analog watchdog high threshold          register
        using Addr = Register::Address<0x40016220,0x000000f0,0x00000000,std::uint32_t>;
        ///Analog watchdog high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
        ///Break signal assignment to analog              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
    }
    namespace Dfsdm1Flt2awltr{    ///<analog watchdog low threshold          register
        using Addr = Register::Address<0x40016224,0x000000f0,0x00000000,std::uint32_t>;
        ///Analog watchdog low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
        ///Break signal assignment to analog              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
    }
    namespace Dfsdm1Flt2awsr{    ///<analog watchdog status          register
        using Addr = Register::Address<0x40016228,0xffff0000,0x00000000,std::uint32_t>;
        ///Analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
        ///Analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
    }
    namespace Dfsdm1Flt2awcfr{    ///<analog watchdog clear flag          register
        using Addr = Register::Address<0x4001622c,0xffff0000,0x00000000,std::uint32_t>;
        ///Clear the analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
        ///Clear the analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
    }
    namespace Dfsdm1Flt2exmax{    ///<Extremes detector maximum          register
        using Addr = Register::Address<0x40016230,0x000000f8,0x00000000,std::uint32_t>;
        ///Extremes detector maximum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
        ///Extremes detector maximum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
    }
    namespace Dfsdm1Flt2exmin{    ///<Extremes detector minimum          register
        using Addr = Register::Address<0x40016234,0x000000f8,0x00000000,std::uint32_t>;
        ///EXMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
        ///Extremes detector minimum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
    }
    namespace Dfsdm1Flt2cnvtimr{    ///<conversion timer register
        using Addr = Register::Address<0x40016238,0x0000000f,0x00000000,std::uint32_t>;
        ///28-bit timer counting conversion time t              = CNVCNT[27:0] / fDFSDM_CKIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
    }
    namespace Dfsdm1Flt3cr1{    ///<control register 1
        using Addr = Register::Address<0x40016280,0x98d198c4,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Flt3cr2{    ///<control register 2
        using Addr = Register::Address<0x40016284,0xff000080,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Flt3isr{    ///<interrupt and status register
        using Addr = Register::Address<0x40016288,0x00009fe0,0x00000000,std::uint32_t>;
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
    namespace Dfsdm1Flt3icr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4001628c,0x0000fff3,0x00000000,std::uint32_t>;
        ///Clear the short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
        ///Clear the clock absence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        ///Clear the regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        ///Clear the injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
    }
    namespace Dfsdm1Flt3jchgr{    ///<injected channel group selection          register
        using Addr = Register::Address<0x40016290,0xffffff00,0x00000000,std::uint32_t>;
        ///Injected channel group              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
    }
    namespace Dfsdm1Flt3fcr{    ///<filter control register
        using Addr = Register::Address<0x40016294,0x1c00ff00,0x00000000,std::uint32_t>;
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
        ///Sinc filter oversampling ratio              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        ///Integrator oversampling ratio (averaging              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
    }
    namespace Dfsdm1Flt3jdatar{    ///<data register for injected          group
        using Addr = Register::Address<0x40016298,0x000000f8,0x00000000,std::uint32_t>;
        ///Injected group conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
        ///Injected channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
    }
    namespace Dfsdm1Flt3rdatar{    ///<data register for the regular          channel
        using Addr = Register::Address<0x4001629c,0x000000e8,0x00000000,std::uint32_t>;
        ///Regular channel conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
        ///Regular channel pending              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        ///Regular channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
    }
    namespace Dfsdm1Flt3awhtr{    ///<analog watchdog high threshold          register
        using Addr = Register::Address<0x400162a0,0x000000f0,0x00000000,std::uint32_t>;
        ///Analog watchdog high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
        ///Break signal assignment to analog              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
    }
    namespace Dfsdm1Flt3awltr{    ///<analog watchdog low threshold          register
        using Addr = Register::Address<0x400162a4,0x000000f0,0x00000000,std::uint32_t>;
        ///Analog watchdog low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
        ///Break signal assignment to analog              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
    }
    namespace Dfsdm1Flt3awsr{    ///<analog watchdog status          register
        using Addr = Register::Address<0x400162a8,0xffff0000,0x00000000,std::uint32_t>;
        ///Analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
        ///Analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
    }
    namespace Dfsdm1Flt3awcfr{    ///<analog watchdog clear flag          register
        using Addr = Register::Address<0x400162ac,0xffff0000,0x00000000,std::uint32_t>;
        ///Clear the analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
        ///Clear the analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
    }
    namespace Dfsdm1Flt3exmax{    ///<Extremes detector maximum          register
        using Addr = Register::Address<0x400162b0,0x000000f8,0x00000000,std::uint32_t>;
        ///Extremes detector maximum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
        ///Extremes detector maximum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
    }
    namespace Dfsdm1Flt3exmin{    ///<Extremes detector minimum          register
        using Addr = Register::Address<0x400162b4,0x000000f8,0x00000000,std::uint32_t>;
        ///EXMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
        ///Extremes detector minimum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
    }
    namespace Dfsdm1Flt3cnvtimr{    ///<conversion timer register
        using Addr = Register::Address<0x400162b8,0x0000000f,0x00000000,std::uint32_t>;
        ///28-bit timer counting conversion time t              = CNVCNT[27:0] / fDFSDM_CKIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
    }
}
