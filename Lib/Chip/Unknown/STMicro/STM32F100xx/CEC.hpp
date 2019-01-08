#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//HDMI-CEC controller
    namespace CecCfgr{    ///<configuration register
        using Addr = Register::Address<0x40007800,0xfffffff0,0x00000000,std::uint32_t>;
        ///Peripheral enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe{}; 
        ///Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ie{}; 
        ///Bit timing error mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btem{}; 
        ///Bit period error mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bpem{}; 
    }
    namespace CecOar{    ///<CEC own address register
        using Addr = Register::Address<0x40007804,0xfffffff0,0x00000000,std::uint32_t>;
        ///Own address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> oa{}; 
    }
    namespace CecPres{    ///<Rx Data Register
        using Addr = Register::Address<0x40007808,0xffffc000,0x00000000,std::uint32_t>;
        ///CEC Rx Data Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> presc{}; 
    }
    namespace CecEsr{    ///<CEC error status register
        using Addr = Register::Address<0x4000780c,0xffffff80,0x00000000,std::uint32_t>;
        ///Bit timing error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bte{}; 
        ///Bit period error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bpe{}; 
        ///Rx block transfer finished              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rbtfe{}; 
        ///Start bit error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sbe{}; 
        ///Block acknowledge error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> acke{}; 
        ///Line error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> line{}; 
        ///Tx block transfer finished              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tbtfe{}; 
    }
    namespace CecCsr{    ///<CEC control and status          register
        using Addr = Register::Address<0x40007810,0xffffff00,0x00000000,std::uint32_t>;
        ///Tx start of message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tsom{}; 
        ///Tx end of message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> teom{}; 
        ///Tx error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Tx byte transfer request or block              transfer finished
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tbtrf{}; 
        ///Rx start of message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rsom{}; 
        ///Rx end of message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reom{}; 
        ///Rx error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rerr{}; 
        ///Rx byte/block transfer              finished
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rbtf{}; 
    }
    namespace CecTxd{    ///<CEC Tx data register
        using Addr = Register::Address<0x40007814,0xffffff00,0x00000000,std::uint32_t>;
        ///Tx Data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
    }
    namespace CecRxd{    ///<CEC Rx data register
        using Addr = Register::Address<0x40007818,0xffffff00,0x00000000,std::uint32_t>;
        ///Rx data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxd{}; 
    }
}
