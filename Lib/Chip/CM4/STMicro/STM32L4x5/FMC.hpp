#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Flexible memory controller
    namespace FmcBcr1{    ///<SRAM/NOR-Flash chip-select control register          1
        using Addr = Register::Address<0xa0000000,0xffc70480,0x00000000,std::uint32_t>;
        ///MBKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mbken{}; 
        ///MUXEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> muxen{}; 
        ///MTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mtyp{}; 
        ///MWID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        ///FACCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> faccen{}; 
        ///BURSTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bursten{}; 
        ///WAITPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpol{}; 
        ///WAITCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitcfg{}; 
        ///WREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wren{}; 
        ///WAITEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> waiten{}; 
        ///EXTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extmod{}; 
        ///ASYNCWAIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asyncwait{}; 
        ///CBURSTRW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cburstrw{}; 
        ///CCLKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cclken{}; 
        ///Write FIFO Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> wfdis{}; 
    }
    namespace FmcBtr1{    ///<SRAM/NOR-Flash chip-select timing register          1
        using Addr = Register::Address<0xa0000004,0xc0000000,0x00000000,std::uint32_t>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///BUSTURN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> busturn{}; 
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace FmcBcr2{    ///<SRAM/NOR-Flash chip-select control register          2
        using Addr = Register::Address<0xa0000008,0xfff70080,0x00000000,std::uint32_t>;
        ///CBURSTRW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cburstrw{}; 
        ///ASYNCWAIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asyncwait{}; 
        ///EXTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extmod{}; 
        ///WAITEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> waiten{}; 
        ///WREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wren{}; 
        ///WAITCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitcfg{}; 
        ///WRAPMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wrapmod{}; 
        ///WAITPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpol{}; 
        ///BURSTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bursten{}; 
        ///FACCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> faccen{}; 
        ///MWID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        ///MTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mtyp{}; 
        ///MUXEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> muxen{}; 
        ///MBKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mbken{}; 
    }
    namespace FmcBtr2{    ///<SRAM/NOR-Flash chip-select timing register          2
        using Addr = Register::Address<0xa000000c,0xc0000000,0x00000000,std::uint32_t>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///BUSTURN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> busturn{}; 
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace FmcBcr3{    ///<SRAM/NOR-Flash chip-select control register          3
        using Addr = Register::Address<0xa0000010,0xfff70080,0x00000000,std::uint32_t>;
        ///CBURSTRW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cburstrw{}; 
        ///ASYNCWAIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asyncwait{}; 
        ///EXTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extmod{}; 
        ///WAITEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> waiten{}; 
        ///WREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wren{}; 
        ///WAITCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitcfg{}; 
        ///WRAPMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wrapmod{}; 
        ///WAITPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpol{}; 
        ///BURSTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bursten{}; 
        ///FACCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> faccen{}; 
        ///MWID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        ///MTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mtyp{}; 
        ///MUXEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> muxen{}; 
        ///MBKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mbken{}; 
    }
    namespace FmcBtr3{    ///<SRAM/NOR-Flash chip-select timing register          3
        using Addr = Register::Address<0xa0000014,0xc0000000,0x00000000,std::uint32_t>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///BUSTURN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> busturn{}; 
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace FmcBcr4{    ///<SRAM/NOR-Flash chip-select control register          4
        using Addr = Register::Address<0xa0000018,0xfff70080,0x00000000,std::uint32_t>;
        ///CBURSTRW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cburstrw{}; 
        ///ASYNCWAIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asyncwait{}; 
        ///EXTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extmod{}; 
        ///WAITEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> waiten{}; 
        ///WREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wren{}; 
        ///WAITCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitcfg{}; 
        ///WRAPMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wrapmod{}; 
        ///WAITPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpol{}; 
        ///BURSTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bursten{}; 
        ///FACCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> faccen{}; 
        ///MWID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        ///MTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mtyp{}; 
        ///MUXEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> muxen{}; 
        ///MBKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mbken{}; 
    }
    namespace FmcBtr4{    ///<SRAM/NOR-Flash chip-select timing register          4
        using Addr = Register::Address<0xa000001c,0xc0000000,0x00000000,std::uint32_t>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///BUSTURN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> busturn{}; 
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace FmcPcr{    ///<PC Card/NAND Flash control register          3
        using Addr = Register::Address<0xa0000080,0xfff00181,0x00000000,std::uint32_t>;
        ///ECCPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> eccps{}; 
        ///TAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,unsigned> tar{}; 
        ///TCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> tclr{}; 
        ///ECCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eccen{}; 
        ///PWID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pwid{}; 
        ///PTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ptyp{}; 
        ///PBKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pbken{}; 
        ///PWAITEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pwaiten{}; 
    }
    namespace FmcSr{    ///<FIFO status and interrupt register          3
        using Addr = Register::Address<0xa0000084,0xffffff80,0x00000000,std::uint32_t>;
        ///FEMPT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fempt{}; 
        ///IFEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ifen{}; 
        ///ILEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ilen{}; 
        ///IREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iren{}; 
        ///IFS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ifs{}; 
        ///ILS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ils{}; 
        ///IRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irs{}; 
    }
    namespace FmcPmem{    ///<Common memory space timing register          3
        using Addr = Register::Address<0xa0000088,0x00000000,0x00000000,std::uint32_t>;
        ///MEMHIZx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> memhizx{}; 
        ///MEMHOLDx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> memholdx{}; 
        ///MEMWAITx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> memwaitx{}; 
        ///MEMSETx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> memsetx{}; 
    }
    namespace FmcPatt{    ///<Attribute memory space timing register          3
        using Addr = Register::Address<0xa000008c,0x00000000,0x00000000,std::uint32_t>;
        ///ATTHIZx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> atthizx{}; 
        ///ATTHOLDx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> attholdx{}; 
        ///ATTWAITx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> attwaitx{}; 
        ///ATTSETx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> attsetx{}; 
    }
    namespace FmcEccr{    ///<ECC result register 3
        using Addr = Register::Address<0xa0000094,0x00000000,0x00000000,std::uint32_t>;
        ///ECCx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eccx{}; 
    }
    namespace FmcBwtr1{    ///<SRAM/NOR-Flash write timing registers          1
        using Addr = Register::Address<0xa0000104,0xc00f0000,0x00000000,std::uint32_t>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace FmcBwtr2{    ///<SRAM/NOR-Flash write timing registers          2
        using Addr = Register::Address<0xa000010c,0xc00f0000,0x00000000,std::uint32_t>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace FmcBwtr3{    ///<SRAM/NOR-Flash write timing registers          3
        using Addr = Register::Address<0xa0000114,0xc00f0000,0x00000000,std::uint32_t>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace FmcBwtr4{    ///<SRAM/NOR-Flash write timing registers          4
        using Addr = Register::Address<0xa000011c,0xc00f0000,0x00000000,std::uint32_t>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
}
