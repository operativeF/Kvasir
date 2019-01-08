#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Management data input/output slave
    namespace MdiosMdiosCr{    ///<MDIOS configuration register
        using Addr = Register::Address<0x40017800,0xffffe070,0x00000000,std::uint32_t>;
        ///Peripheral enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Register write interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wrie{}; 
        ///Register Read Interrupt              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rdie{}; 
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eie{}; 
        ///Disable Preamble Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dpc{}; 
        ///Slaves's address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> portAddress{}; 
    }
    namespace MdiosMdiosWrfr{    ///<MDIOS write flag register
        using Addr = Register::Address<0x40017804,0x00000000,0x00000000,std::uint32_t>;
        ///Write flags for MDIO registers 0 to              31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrf{}; 
    }
    namespace MdiosMdiosCwrfr{    ///<MDIOS clear write flag          register
        using Addr = Register::Address<0x40017808,0x00000000,0x00000000,std::uint32_t>;
        ///Clear the write flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cwrf{}; 
    }
    namespace MdiosMdiosRdfr{    ///<MDIOS read flag register
        using Addr = Register::Address<0x4001780c,0x00000000,0x00000000,std::uint32_t>;
        ///Read flags for MDIO registers 0 to              31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdf{}; 
    }
    namespace MdiosMdiosCrdfr{    ///<MDIOS clear read flag register
        using Addr = Register::Address<0x40017810,0x00000000,0x00000000,std::uint32_t>;
        ///Clear the read flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crdf{}; 
    }
    namespace MdiosMdiosSr{    ///<MDIOS status register
        using Addr = Register::Address<0x40017814,0xfffffff8,0x00000000,std::uint32_t>;
        ///Preamble error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> perf{}; 
        ///Start error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> serf{}; 
        ///Turnaround error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> terf{}; 
    }
    namespace MdiosMdiosClrfr{    ///<MDIOS clear flag register
        using Addr = Register::Address<0x40017818,0xfffffff8,0x00000000,std::uint32_t>;
        ///Clear the preamble error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cperf{}; 
        ///Clear the start error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cserf{}; 
        ///Clear the turnaround error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cterf{}; 
    }
    namespace MdiosMdiosDinr0{    ///<MDIOS input data register 0
        using Addr = Register::Address<0x4001781c,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din0{}; 
    }
    namespace MdiosMdiosDinr1{    ///<MDIOS input data register 1
        using Addr = Register::Address<0x40017820,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din1{}; 
    }
    namespace MdiosMdiosDinr2{    ///<MDIOS input data register 2
        using Addr = Register::Address<0x40017824,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din2{}; 
    }
    namespace MdiosMdiosDinr3{    ///<MDIOS input data register 3
        using Addr = Register::Address<0x40017828,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din3{}; 
    }
    namespace MdiosMdiosDinr4{    ///<MDIOS input data register 4
        using Addr = Register::Address<0x4001782c,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din4{}; 
    }
    namespace MdiosMdiosDinr5{    ///<MDIOS input data register 5
        using Addr = Register::Address<0x40017830,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din5{}; 
    }
    namespace MdiosMdiosDinr6{    ///<MDIOS input data register 6
        using Addr = Register::Address<0x40017834,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din6{}; 
    }
    namespace MdiosMdiosDinr7{    ///<MDIOS input data register 7
        using Addr = Register::Address<0x40017838,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din7{}; 
    }
    namespace MdiosMdiosDinr8{    ///<MDIOS input data register 8
        using Addr = Register::Address<0x4001783c,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din8{}; 
    }
    namespace MdiosMdiosDinr9{    ///<MDIOS input data register 9
        using Addr = Register::Address<0x40017840,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din9{}; 
    }
    namespace MdiosMdiosDinr10{    ///<MDIOS input data register 10
        using Addr = Register::Address<0x40017844,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din10{}; 
    }
    namespace MdiosMdiosDinr11{    ///<MDIOS input data register 11
        using Addr = Register::Address<0x40017848,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din11{}; 
    }
    namespace MdiosMdiosDinr12{    ///<MDIOS input data register 12
        using Addr = Register::Address<0x4001784c,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din12{}; 
    }
    namespace MdiosMdiosDinr13{    ///<MDIOS input data register 13
        using Addr = Register::Address<0x40017850,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din13{}; 
    }
    namespace MdiosMdiosDinr14{    ///<MDIOS input data register 14
        using Addr = Register::Address<0x40017854,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din14{}; 
    }
    namespace MdiosMdiosDinr15{    ///<MDIOS input data register 15
        using Addr = Register::Address<0x40017858,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din15{}; 
    }
    namespace MdiosMdiosDinr16{    ///<MDIOS input data register 16
        using Addr = Register::Address<0x4001785c,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din16{}; 
    }
    namespace MdiosMdiosDinr17{    ///<MDIOS input data register 17
        using Addr = Register::Address<0x40017860,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din17{}; 
    }
    namespace MdiosMdiosDinr18{    ///<MDIOS input data register 18
        using Addr = Register::Address<0x40017864,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din18{}; 
    }
    namespace MdiosMdiosDinr19{    ///<MDIOS input data register 19
        using Addr = Register::Address<0x40017868,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din19{}; 
    }
    namespace MdiosMdiosDinr20{    ///<MDIOS input data register 20
        using Addr = Register::Address<0x4001786c,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din20{}; 
    }
    namespace MdiosMdiosDinr21{    ///<MDIOS input data register 21
        using Addr = Register::Address<0x40017870,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din21{}; 
    }
    namespace MdiosMdiosDinr22{    ///<MDIOS input data register 22
        using Addr = Register::Address<0x40017874,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din22{}; 
    }
    namespace MdiosMdiosDinr23{    ///<MDIOS input data register 23
        using Addr = Register::Address<0x40017878,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din23{}; 
    }
    namespace MdiosMdiosDinr24{    ///<MDIOS input data register 24
        using Addr = Register::Address<0x4001787c,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din24{}; 
    }
    namespace MdiosMdiosDinr25{    ///<MDIOS input data register 25
        using Addr = Register::Address<0x40017880,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din25{}; 
    }
    namespace MdiosMdiosDinr26{    ///<MDIOS input data register 26
        using Addr = Register::Address<0x40017884,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din26{}; 
    }
    namespace MdiosMdiosDinr27{    ///<MDIOS input data register 27
        using Addr = Register::Address<0x40017888,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din27{}; 
    }
    namespace MdiosMdiosDinr28{    ///<MDIOS input data register 28
        using Addr = Register::Address<0x4001788c,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din28{}; 
    }
    namespace MdiosMdiosDinr29{    ///<MDIOS input data register 29
        using Addr = Register::Address<0x40017890,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din29{}; 
    }
    namespace MdiosMdiosDinr30{    ///<MDIOS input data register 30
        using Addr = Register::Address<0x40017894,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din30{}; 
    }
    namespace MdiosMdiosDinr31{    ///<MDIOS input data register 31
        using Addr = Register::Address<0x40017898,0xffff0000,0x00000000,std::uint32_t>;
        ///Input data received from MDIO Master              during write frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> din31{}; 
    }
    namespace MdiosMdiosDoutr0{    ///<MDIOS output data register 0
        using Addr = Register::Address<0x4001789c,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout0{}; 
    }
    namespace MdiosMdiosDoutr1{    ///<MDIOS output data register 1
        using Addr = Register::Address<0x400178a0,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout1{}; 
    }
    namespace MdiosMdiosDoutr2{    ///<MDIOS output data register 2
        using Addr = Register::Address<0x400178a4,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout2{}; 
    }
    namespace MdiosMdiosDoutr3{    ///<MDIOS output data register 3
        using Addr = Register::Address<0x400178a8,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout3{}; 
    }
    namespace MdiosMdiosDoutr4{    ///<MDIOS output data register 4
        using Addr = Register::Address<0x400178ac,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout4{}; 
    }
    namespace MdiosMdiosDoutr5{    ///<MDIOS output data register 5
        using Addr = Register::Address<0x400178b0,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout5{}; 
    }
    namespace MdiosMdiosDoutr6{    ///<MDIOS output data register 6
        using Addr = Register::Address<0x400178b4,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout6{}; 
    }
    namespace MdiosMdiosDoutr7{    ///<MDIOS output data register 7
        using Addr = Register::Address<0x400178b8,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout7{}; 
    }
    namespace MdiosMdiosDoutr8{    ///<MDIOS output data register 8
        using Addr = Register::Address<0x400178bc,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout8{}; 
    }
    namespace MdiosMdiosDoutr9{    ///<MDIOS output data register 9
        using Addr = Register::Address<0x400178c0,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout9{}; 
    }
    namespace MdiosMdiosDoutr10{    ///<MDIOS output data register 10
        using Addr = Register::Address<0x400178c4,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout10{}; 
    }
    namespace MdiosMdiosDoutr11{    ///<MDIOS output data register 11
        using Addr = Register::Address<0x400178c8,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout11{}; 
    }
    namespace MdiosMdiosDoutr12{    ///<MDIOS output data register 12
        using Addr = Register::Address<0x400178cc,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout12{}; 
    }
    namespace MdiosMdiosDoutr13{    ///<MDIOS output data register 13
        using Addr = Register::Address<0x400178d0,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout13{}; 
    }
    namespace MdiosMdiosDoutr14{    ///<MDIOS output data register 14
        using Addr = Register::Address<0x400178d4,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout14{}; 
    }
    namespace MdiosMdiosDoutr15{    ///<MDIOS output data register 15
        using Addr = Register::Address<0x400178d8,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout15{}; 
    }
    namespace MdiosMdiosDoutr16{    ///<MDIOS output data register 16
        using Addr = Register::Address<0x400178dc,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout16{}; 
    }
    namespace MdiosMdiosDoutr17{    ///<MDIOS output data register 17
        using Addr = Register::Address<0x400178e0,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout17{}; 
    }
    namespace MdiosMdiosDoutr18{    ///<MDIOS output data register 18
        using Addr = Register::Address<0x400178e4,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout18{}; 
    }
    namespace MdiosMdiosDoutr19{    ///<MDIOS output data register 19
        using Addr = Register::Address<0x400178e8,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout19{}; 
    }
    namespace MdiosMdiosDoutr20{    ///<MDIOS output data register 20
        using Addr = Register::Address<0x400178ec,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout20{}; 
    }
    namespace MdiosMdiosDoutr21{    ///<MDIOS output data register 21
        using Addr = Register::Address<0x400178f0,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout21{}; 
    }
    namespace MdiosMdiosDoutr22{    ///<MDIOS output data register 22
        using Addr = Register::Address<0x400178f4,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout22{}; 
    }
    namespace MdiosMdiosDoutr23{    ///<MDIOS output data register 23
        using Addr = Register::Address<0x400178f8,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout23{}; 
    }
    namespace MdiosMdiosDoutr24{    ///<MDIOS output data register 24
        using Addr = Register::Address<0x400178fc,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout24{}; 
    }
    namespace MdiosMdiosDoutr25{    ///<MDIOS output data register 25
        using Addr = Register::Address<0x40017900,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout25{}; 
    }
    namespace MdiosMdiosDoutr26{    ///<MDIOS output data register 26
        using Addr = Register::Address<0x40017904,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout26{}; 
    }
    namespace MdiosMdiosDoutr27{    ///<MDIOS output data register 27
        using Addr = Register::Address<0x40017908,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout27{}; 
    }
    namespace MdiosMdiosDoutr28{    ///<MDIOS output data register 28
        using Addr = Register::Address<0x4001790c,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout28{}; 
    }
    namespace MdiosMdiosDoutr29{    ///<MDIOS output data register 29
        using Addr = Register::Address<0x40017910,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout29{}; 
    }
    namespace MdiosMdiosDoutr30{    ///<MDIOS output data register 30
        using Addr = Register::Address<0x40017914,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout30{}; 
    }
    namespace MdiosMdiosDoutr31{    ///<MDIOS output data register 31
        using Addr = Register::Address<0x40017918,0xffff0000,0x00000000,std::uint32_t>;
        ///Output data sent to MDIO Master during              read frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dout31{}; 
    }
}
