#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//AXI interconnect registers
    namespace AxiAxiPeriphId4{    ///<AXI interconnect - peripheral ID4          register
        using Addr = Register::Address<0x51001fd0,0xffffff00,0x00000000,std::uint32_t>;
        ///JEP106 continuation code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> jep106con{}; 
        ///Register file size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> kcount4{}; 
    }
    namespace AxiAxiPeriphId0{    ///<AXI interconnect - peripheral ID0          register
        using Addr = Register::Address<0x51001fe0,0xffffff00,0x00000000,std::uint32_t>;
        ///Peripheral part number bits 0 to              7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> partnum{}; 
    }
    namespace AxiAxiPeriphId1{    ///<AXI interconnect - peripheral ID1          register
        using Addr = Register::Address<0x51001fe4,0xffffff00,0x00000000,std::uint32_t>;
        ///Peripheral part number bits 8 to              11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> partnum{}; 
        ///JEP106 identity bits 0 to              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> jep106i{}; 
    }
    namespace AxiAxiPeriphId2{    ///<AXI interconnect - peripheral ID2          register
        using Addr = Register::Address<0x51001fe8,0xffffff00,0x00000000,std::uint32_t>;
        ///JEP106 Identity bits 4 to              6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jep106id{}; 
        ///JEP106 code flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jedec{}; 
        ///Peripheral revision number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> revision{}; 
    }
    namespace AxiAxiPeriphId3{    ///<AXI interconnect - peripheral ID3          register
        using Addr = Register::Address<0x51001fec,0xffffff00,0x00000000,std::uint32_t>;
        ///Customer modification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> custModNum{}; 
        ///Customer version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> revAnd{}; 
    }
    namespace AxiAxiCompId0{    ///<AXI interconnect - component ID0          register
        using Addr = Register::Address<0x51001ff0,0xffffff00,0x00000000,std::uint32_t>;
        ///Preamble bits 0 to 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> preamble{}; 
    }
    namespace AxiAxiCompId1{    ///<AXI interconnect - component ID1          register
        using Addr = Register::Address<0x51001ff4,0xffffff00,0x00000000,std::uint32_t>;
        ///Preamble bits 8 to 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> preamble{}; 
        ///Component class
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> class_{}; 
    }
    namespace AxiAxiCompId2{    ///<AXI interconnect - component ID2          register
        using Addr = Register::Address<0x51001ff8,0xffffff00,0x00000000,std::uint32_t>;
        ///Preamble bits 12 to 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> preamble{}; 
    }
    namespace AxiAxiCompId3{    ///<AXI interconnect - component ID3          register
        using Addr = Register::Address<0x51001ffc,0xffffff00,0x00000000,std::uint32_t>;
        ///Preamble bits 20 to 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> preamble{}; 
    }
    namespace AxiAxiTarg1FnModIssBm{    ///<AXI interconnect - TARG x bus matrix issuing          functionality register
        using Addr = Register::Address<0x51002008,0xfffffffc,0x00000000,std::uint32_t>;
        ///READ_ISS_OVERRIDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readIssOverride{}; 
        ///Switch matrix write issuing override for              target
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeIssOverride{}; 
    }
    namespace AxiAxiTarg2FnModIssBm{    ///<AXI interconnect - TARG x bus matrix issuing          functionality register
        using Addr = Register::Address<0x51003008,0xfffffffc,0x00000000,std::uint32_t>;
        ///READ_ISS_OVERRIDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readIssOverride{}; 
        ///Switch matrix write issuing override for              target
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeIssOverride{}; 
    }
    namespace AxiAxiTarg3FnModIssBm{    ///<AXI interconnect - TARG x bus matrix issuing          functionality register
        using Addr = Register::Address<0x51004008,0xfffffffc,0x00000000,std::uint32_t>;
        ///READ_ISS_OVERRIDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readIssOverride{}; 
        ///Switch matrix write issuing override for              target
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeIssOverride{}; 
    }
    namespace AxiAxiTarg4FnModIssBm{    ///<AXI interconnect - TARG x bus matrix issuing          functionality register
        using Addr = Register::Address<0x51005008,0xfffffffc,0x00000000,std::uint32_t>;
        ///READ_ISS_OVERRIDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readIssOverride{}; 
        ///Switch matrix write issuing override for              target
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeIssOverride{}; 
    }
    namespace AxiAxiTarg5FnModIssBm{    ///<AXI interconnect - TARG x bus matrix issuing          functionality register
        using Addr = Register::Address<0x51006008,0xfffffffc,0x00000000,std::uint32_t>;
        ///READ_ISS_OVERRIDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readIssOverride{}; 
        ///Switch matrix write issuing override for              target
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeIssOverride{}; 
    }
    namespace AxiAxiTarg6FnModIssBm{    ///<AXI interconnect - TARG x bus matrix issuing          functionality register
        using Addr = Register::Address<0x51007008,0xfffffffc,0x00000000,std::uint32_t>;
        ///READ_ISS_OVERRIDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readIssOverride{}; 
        ///Switch matrix write issuing override for              target
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeIssOverride{}; 
    }
    namespace AxiAxiTarg7FnModIssBm{    ///<AXI interconnect - TARG x bus matrix issuing          functionality register
        using Addr = Register::Address<0x5100800c,0xfffffffc,0x00000000,std::uint32_t>;
        ///READ_ISS_OVERRIDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readIssOverride{}; 
        ///Switch matrix write issuing override for              target
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeIssOverride{}; 
    }
    namespace AxiAxiTarg1FnMod2{    ///<AXI interconnect - TARG x bus matrix          functionality 2 register
        using Addr = Register::Address<0x51002024,0xfffffffe,0x00000000,std::uint32_t>;
        ///Disable packing of beats to match the              output data width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bypassMerge{}; 
    }
    namespace AxiAxiTarg2FnMod2{    ///<AXI interconnect - TARG x bus matrix          functionality 2 register
        using Addr = Register::Address<0x51003024,0xfffffffe,0x00000000,std::uint32_t>;
        ///Disable packing of beats to match the              output data width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bypassMerge{}; 
    }
    namespace AxiAxiTarg7FnMod2{    ///<AXI interconnect - TARG x bus matrix          functionality 2 register
        using Addr = Register::Address<0x51008024,0xfffffffe,0x00000000,std::uint32_t>;
        ///Disable packing of beats to match the              output data width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bypassMerge{}; 
    }
    namespace AxiAxiTarg1FnModLb{    ///<AXI interconnect - TARG x long burst          functionality modification
        using Addr = Register::Address<0x5100202c,0xfffffffe,0x00000000,std::uint32_t>;
        ///Controls burst breaking of long              bursts
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fnModLb{}; 
    }
    namespace AxiAxiTarg2FnModLb{    ///<AXI interconnect - TARG x long burst          functionality modification
        using Addr = Register::Address<0x5100302c,0xfffffffe,0x00000000,std::uint32_t>;
        ///Controls burst breaking of long              bursts
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fnModLb{}; 
    }
    namespace AxiAxiTarg1FnMod{    ///<AXI interconnect - TARG x long burst          functionality modification
        using Addr = Register::Address<0x51002108,0xfffffffc,0x00000000,std::uint32_t>;
        ///Override AMIB read issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readIssOverride{}; 
        ///Override AMIB write issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeIssOverride{}; 
    }
    namespace AxiAxiTarg2FnMod{    ///<AXI interconnect - TARG x long burst          functionality modification
        using Addr = Register::Address<0x51003108,0xfffffffc,0x00000000,std::uint32_t>;
        ///Override AMIB read issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readIssOverride{}; 
        ///Override AMIB write issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeIssOverride{}; 
    }
    namespace AxiAxiTarg7FnMod{    ///<AXI interconnect - TARG x long burst          functionality modification
        using Addr = Register::Address<0x51008108,0xfffffffc,0x00000000,std::uint32_t>;
        ///Override AMIB read issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readIssOverride{}; 
        ///Override AMIB write issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeIssOverride{}; 
    }
    namespace AxiAxiIni1FnMod2{    ///<AXI interconnect - INI x functionality          modification 2 register
        using Addr = Register::Address<0x51042024,0xfffffffe,0x00000000,std::uint32_t>;
        ///Disables alteration of transactions by              the up-sizer unless required by the              protocol
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bypassMerge{}; 
    }
    namespace AxiAxiIni3FnMod2{    ///<AXI interconnect - INI x functionality          modification 2 register
        using Addr = Register::Address<0x51044024,0xfffffffe,0x00000000,std::uint32_t>;
        ///Disables alteration of transactions by              the up-sizer unless required by the              protocol
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bypassMerge{}; 
    }
    namespace AxiAxiIni1FnModAhb{    ///<AXI interconnect - INI x AHB functionality          modification register
        using Addr = Register::Address<0x51042028,0xfffffffc,0x00000000,std::uint32_t>;
        ///Converts all AHB-Lite write transactions              to a series of single beat AXI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdIncOverride{}; 
        ///Converts all AHB-Lite read transactions              to a series of single beat AXI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wrIncOverride{}; 
    }
    namespace AxiAxiIni3FnModAhb{    ///<AXI interconnect - INI x AHB functionality          modification register
        using Addr = Register::Address<0x51044028,0xfffffffc,0x00000000,std::uint32_t>;
        ///Converts all AHB-Lite write transactions              to a series of single beat AXI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdIncOverride{}; 
        ///Converts all AHB-Lite read transactions              to a series of single beat AXI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wrIncOverride{}; 
    }
    namespace AxiAxiIni1ReadQos{    ///<AXI interconnect - INI x read QoS          register
        using Addr = Register::Address<0x51042100,0xfffffff0,0x00000000,std::uint32_t>;
        ///Read channel QoS setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> arQos{}; 
    }
    namespace AxiAxiIni2ReadQos{    ///<AXI interconnect - INI x read QoS          register
        using Addr = Register::Address<0x51043100,0xfffffff0,0x00000000,std::uint32_t>;
        ///Read channel QoS setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> arQos{}; 
    }
    namespace AxiAxiIni3ReadQos{    ///<AXI interconnect - INI x read QoS          register
        using Addr = Register::Address<0x51044100,0xfffffff0,0x00000000,std::uint32_t>;
        ///Read channel QoS setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> arQos{}; 
    }
    namespace AxiAxiIni4ReadQos{    ///<AXI interconnect - INI x read QoS          register
        using Addr = Register::Address<0x51045100,0xfffffff0,0x00000000,std::uint32_t>;
        ///Read channel QoS setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> arQos{}; 
    }
    namespace AxiAxiIni5ReadQos{    ///<AXI interconnect - INI x read QoS          register
        using Addr = Register::Address<0x51046100,0xfffffff0,0x00000000,std::uint32_t>;
        ///Read channel QoS setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> arQos{}; 
    }
    namespace AxiAxiIni6ReadQos{    ///<AXI interconnect - INI x read QoS          register
        using Addr = Register::Address<0x51047100,0xfffffff0,0x00000000,std::uint32_t>;
        ///Read channel QoS setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> arQos{}; 
    }
    namespace AxiAxiIni1WriteQos{    ///<AXI interconnect - INI x write QoS          register
        using Addr = Register::Address<0x51042104,0xfffffff0,0x00000000,std::uint32_t>;
        ///Write channel QoS setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> awQos{}; 
    }
    namespace AxiAxiIni2WriteQos{    ///<AXI interconnect - INI x write QoS          register
        using Addr = Register::Address<0x51043104,0xfffffff0,0x00000000,std::uint32_t>;
        ///Write channel QoS setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> awQos{}; 
    }
    namespace AxiAxiIni3WriteQos{    ///<AXI interconnect - INI x write QoS          register
        using Addr = Register::Address<0x51044104,0xfffffff0,0x00000000,std::uint32_t>;
        ///Write channel QoS setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> awQos{}; 
    }
    namespace AxiAxiIni4WriteQos{    ///<AXI interconnect - INI x write QoS          register
        using Addr = Register::Address<0x51045104,0xfffffff0,0x00000000,std::uint32_t>;
        ///Write channel QoS setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> awQos{}; 
    }
    namespace AxiAxiIni5WriteQos{    ///<AXI interconnect - INI x write QoS          register
        using Addr = Register::Address<0x51046104,0xfffffff0,0x00000000,std::uint32_t>;
        ///Write channel QoS setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> awQos{}; 
    }
    namespace AxiAxiIni6WriteQos{    ///<AXI interconnect - INI x write QoS          register
        using Addr = Register::Address<0x51047104,0xfffffff0,0x00000000,std::uint32_t>;
        ///Write channel QoS setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> awQos{}; 
    }
    namespace AxiAxiIni1FnMod{    ///<AXI interconnect - INI x issuing          functionality modification register
        using Addr = Register::Address<0x51042108,0xfffffffc,0x00000000,std::uint32_t>;
        ///Override ASIB read issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readIssOverride{}; 
        ///Override ASIB write issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeIssOverride{}; 
    }
    namespace AxiAxiIni2FnMod{    ///<AXI interconnect - INI x issuing          functionality modification register
        using Addr = Register::Address<0x51043108,0xfffffffc,0x00000000,std::uint32_t>;
        ///Override ASIB read issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readIssOverride{}; 
        ///Override ASIB write issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeIssOverride{}; 
    }
    namespace AxiAxiIni3FnMod{    ///<AXI interconnect - INI x issuing          functionality modification register
        using Addr = Register::Address<0x51044108,0xfffffffc,0x00000000,std::uint32_t>;
        ///Override ASIB read issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readIssOverride{}; 
        ///Override ASIB write issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeIssOverride{}; 
    }
    namespace AxiAxiIni4FnMod{    ///<AXI interconnect - INI x issuing          functionality modification register
        using Addr = Register::Address<0x51045108,0xfffffffc,0x00000000,std::uint32_t>;
        ///Override ASIB read issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readIssOverride{}; 
        ///Override ASIB write issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeIssOverride{}; 
    }
    namespace AxiAxiIni5FnMod{    ///<AXI interconnect - INI x issuing          functionality modification register
        using Addr = Register::Address<0x51046108,0xfffffffc,0x00000000,std::uint32_t>;
        ///Override ASIB read issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readIssOverride{}; 
        ///Override ASIB write issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeIssOverride{}; 
    }
    namespace AxiAxiIni6FnMod{    ///<AXI interconnect - INI x issuing          functionality modification register
        using Addr = Register::Address<0x51047108,0xfffffffc,0x00000000,std::uint32_t>;
        ///Override ASIB read issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> readIssOverride{}; 
        ///Override ASIB write issuing              capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> writeIssOverride{}; 
    }
}
