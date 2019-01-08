#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//HSEM
    namespace HsemHsemR0{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026400,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR1{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026404,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR2{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026408,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR3{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x5802640c,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR4{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026410,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR5{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026414,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR6{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026418,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR7{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x5802641c,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR8{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026420,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR9{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026424,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR10{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026428,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR11{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x5802642c,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR12{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026430,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR13{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026434,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR14{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026438,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR15{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x5802643c,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR16{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026440,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR17{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026444,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR18{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026448,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR19{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x5802644c,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR20{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026450,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR21{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026454,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR22{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026458,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR23{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x5802645c,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR24{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026460,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR25{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026464,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR26{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026468,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR27{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x5802646c,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR28{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026470,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR29{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026474,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR30{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x58026478,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemR31{    ///<HSEM register HSEM_R0 HSEM_R31
        using Addr = Register::Address<0x5802647c,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr0{    ///<HSEM Read lock register
        using Addr = Register::Address<0x58026480,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr1{    ///<HSEM Read lock register
        using Addr = Register::Address<0x58026484,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr2{    ///<HSEM Read lock register
        using Addr = Register::Address<0x58026488,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr3{    ///<HSEM Read lock register
        using Addr = Register::Address<0x5802648c,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr4{    ///<HSEM Read lock register
        using Addr = Register::Address<0x58026490,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr5{    ///<HSEM Read lock register
        using Addr = Register::Address<0x58026494,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr6{    ///<HSEM Read lock register
        using Addr = Register::Address<0x58026498,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr7{    ///<HSEM Read lock register
        using Addr = Register::Address<0x5802649c,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr8{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264a0,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr9{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264a4,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr10{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264a8,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr11{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264ac,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr12{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264b0,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr13{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264b4,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr14{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264b8,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr15{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264bc,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr16{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264c0,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr17{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264c4,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr18{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264c8,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr19{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264cc,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr20{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264d0,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr21{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264d4,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr22{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264d8,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr23{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264dc,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr24{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264e0,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr25{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264e4,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr26{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264e8,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr27{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264ec,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr28{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264f0,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr29{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264f4,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr30{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264f8,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemRlr31{    ///<HSEM Read lock register
        using Addr = Register::Address<0x580264fc,0x7fff0000,0x00000000,std::uint32_t>;
        ///Semaphore ProcessID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> procid{}; 
        ///Semaphore MasterID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Lock indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace HsemHsemIer{    ///<HSEM Interrupt enable register
        using Addr = Register::Address<0x58026500,0x00000000,0x00000000,std::uint32_t>;
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> isem0{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> isem1{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> isem2{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> isem3{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> isem4{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> isem5{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> isem6{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> isem7{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> isem8{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> isem9{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> isem10{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> isem11{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> isem12{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> isem13{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> isem14{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> isem15{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> isem16{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> isem17{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> isem18{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> isem19{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> isem20{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> isem21{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> isem22{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> isem23{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> isem24{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> isem25{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> isem26{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> isem27{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> isem28{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> isem29{}; 
        ///Interrupt semaphore n enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> isem30{}; 
        ///Interrupt(N) semaphore n enable              bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> isem31{}; 
    }
    namespace HsemHsemIcr{    ///<HSEM Interrupt clear register
        using Addr = Register::Address<0x58026504,0x00000000,0x00000000,std::uint32_t>;
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> isem0{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> isem1{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> isem2{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> isem3{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> isem4{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> isem5{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> isem6{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> isem7{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> isem8{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> isem9{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> isem10{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> isem11{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> isem12{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> isem13{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> isem14{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> isem15{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> isem16{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> isem17{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> isem18{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> isem19{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> isem20{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> isem21{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> isem22{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> isem23{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> isem24{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> isem25{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> isem26{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> isem27{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> isem28{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> isem29{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> isem30{}; 
        ///Interrupt(N) semaphore n clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> isem31{}; 
    }
    namespace HsemHsemIsr{    ///<HSEM Interrupt status register
        using Addr = Register::Address<0x58026508,0x00000000,0x00000000,std::uint32_t>;
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> isem0{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> isem1{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> isem2{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> isem3{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> isem4{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> isem5{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> isem6{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> isem7{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> isem8{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> isem9{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> isem10{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> isem11{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> isem12{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> isem13{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> isem14{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> isem15{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> isem16{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> isem17{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> isem18{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> isem19{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> isem20{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> isem21{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> isem22{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> isem23{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> isem24{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> isem25{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> isem26{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> isem27{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> isem28{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> isem29{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> isem30{}; 
        ///Interrupt(N) semaphore n status bit              before enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> isem31{}; 
    }
    namespace HsemHsemMisr{    ///<HSEM Masked interrupt status          register
        using Addr = Register::Address<0x5802650c,0x00000000,0x00000000,std::uint32_t>;
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> isem0{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> isem1{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> isem2{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> isem3{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> isem4{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> isem5{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> isem6{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> isem7{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> isem8{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> isem9{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> isem10{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> isem11{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> isem12{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> isem13{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> isem14{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> isem15{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> isem16{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> isem17{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> isem18{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> isem19{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> isem20{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> isem21{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> isem22{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> isem23{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> isem24{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> isem25{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> isem26{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> isem27{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> isem28{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> isem29{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> isem30{}; 
        ///masked interrupt(N) semaphore n status              bit after enable (mask)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> isem31{}; 
    }
    namespace HsemHsemCr{    ///<HSEM Clear register
        using Addr = Register::Address<0x58026540,0x000000ff,0x00000000,std::uint32_t>;
        ///MasterID of semaphores to be              cleared
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> masterid{}; 
        ///Semaphore clear Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace HsemHsemKeyr{    ///<HSEM Interrupt clear register
        using Addr = Register::Address<0x58026544,0x0000ffff,0x00000000,std::uint32_t>;
        ///Semaphore Clear Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> key{}; 
    }
}
