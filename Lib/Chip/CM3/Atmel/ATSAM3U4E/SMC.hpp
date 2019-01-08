#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Static Memory Controller
    namespace SmcCfg{    ///<SMC NFC Configuration Register
        using Addr = Register::Address<0x400e0000,0xff80ccfc,0x00000000,std::uint32_t>;
        ///
        enum class PagesizeVal {
            ps51216=0x00000000,     ///<Main area 512 Bytes + Spare area 16 Bytes = 528 Bytes
            ps102432=0x00000001,     ///<Main area 1024 Bytes + Spare area 32 Bytes = 1056 Bytes
            ps204864=0x00000002,     ///<Main area 2048 Bytes + Spare area 64 Bytes = 2112 Bytes
            ps4096128=0x00000003,     ///<Main area 4096 Bytes + Spare area 128 Bytes = 4224 Bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PagesizeVal> pagesize{}; 
        namespace PagesizeValC{
            constexpr Register::FieldValue<decltype(pagesize)::Type,PagesizeVal::ps51216> ps51216{};
            constexpr Register::FieldValue<decltype(pagesize)::Type,PagesizeVal::ps102432> ps102432{};
            constexpr Register::FieldValue<decltype(pagesize)::Type,PagesizeVal::ps204864> ps204864{};
            constexpr Register::FieldValue<decltype(pagesize)::Type,PagesizeVal::ps4096128> ps4096128{};
        }
        ///Write Spare Area
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wspare{}; 
        ///Read Spare Area
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rspare{}; 
        ///Rising/Falling Edge Detection Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> edgectrl{}; 
        ///Ready/Busy Signal Edge Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rbedge{}; 
        ///Data Timeout Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dtocyc{}; 
        ///Data Timeout Multiplier
        enum class DtomulVal {
            x1=0x00000000,     ///<DTOCYC
            x16=0x00000001,     ///<DTOCYC x 16
            x128=0x00000002,     ///<DTOCYC x 128
            x256=0x00000003,     ///<DTOCYC x 256
            x1024=0x00000004,     ///<DTOCYC x 1024
            x4096=0x00000005,     ///<DTOCYC x 4096
            x65536=0x00000006,     ///<DTOCYC x 65536
            x1048576=0x00000007,     ///<DTOCYC x 1048576
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DtomulVal> dtomul{}; 
        namespace DtomulValC{
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::x1> x1{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::x16> x16{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::x128> x128{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::x256> x256{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::x1024> x1024{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::x4096> x4096{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::x65536> x65536{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::x1048576> x1048576{};
        }
    }
    namespace SmcCtrl{    ///<SMC NFC Control Register
        using Addr = Register::Address<0x400e0004,0xfffffffc,0x00000000,std::uint32_t>;
        ///NAND Flash Controller Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nfcen{}; 
        ///NAND Flash Controller Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nfcdis{}; 
    }
    namespace SmcSr{    ///<SMC NFC Status Register
        using Addr = Register::Address<0x400e0008,0xfe0c86ce,0x00000000,std::uint32_t>;
        ///NAND Flash Controller status (this field cannot be reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> smcsts{}; 
        ///Selected Ready Busy Rising Edge Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rbRise{}; 
        ///Selected Ready Busy Falling Edge Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rbFall{}; 
        ///NFC Busy (this field cannot be reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nfcbusy{}; 
        ///NFC Write/Read Operation (this field cannot be reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nfcwr{}; 
        ///NFC Chip Select ID (this field cannot be reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nfcsid{}; 
        ///NFC Data Transfer Terminated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xfrdone{}; 
        ///Command Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmddone{}; 
        ///Data Timeout Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtoe{}; 
        ///Undefined Area Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> undef{}; 
        ///Accessing While Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> awb{}; 
        ///NFC Access Size Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nfcase{}; 
        ///Ready/Busy Line 0 Edge Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rbEdge0{}; 
    }
    namespace SmcIer{    ///<SMC NFC Interrupt Enable Register
        using Addr = Register::Address<0x400e000c,0xfe0cffcf,0x00000000,std::uint32_t>;
        ///Ready Busy Rising Edge Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rbRise{}; 
        ///Ready Busy Falling Edge Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rbFall{}; 
        ///Transfer Done Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xfrdone{}; 
        ///Command Done Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmddone{}; 
        ///Data Timeout Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtoe{}; 
        ///Undefined Area Access Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> undef{}; 
        ///Accessing While Busy Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> awb{}; 
        ///NFC Access Size Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nfcase{}; 
        ///Ready/Busy Line 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rbEdge0{}; 
    }
    namespace SmcIdr{    ///<SMC NFC Interrupt Disable Register
        using Addr = Register::Address<0x400e0010,0xfe0cffcf,0x00000000,std::uint32_t>;
        ///Ready Busy Rising Edge Detection Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rbRise{}; 
        ///Ready Busy Falling Edge Detection Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rbFall{}; 
        ///Transfer Done Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xfrdone{}; 
        ///Command Done Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmddone{}; 
        ///Data Timeout Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtoe{}; 
        ///Undefined Area Access Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> undef{}; 
        ///Accessing While Busy Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> awb{}; 
        ///NFC Access Size Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nfcase{}; 
        ///Ready/Busy Line 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rbEdge0{}; 
    }
    namespace SmcImr{    ///<SMC NFC Interrupt Mask Register
        using Addr = Register::Address<0x400e0014,0xfe0cffcf,0x00000000,std::uint32_t>;
        ///Ready Busy Rising Edge Detection Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rbRise{}; 
        ///Ready Busy Falling Edge Detection Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rbFall{}; 
        ///Transfer Done Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xfrdone{}; 
        ///Command Done Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmddone{}; 
        ///Data Timeout Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtoe{}; 
        ///Undefined Area Access Interrupt Mask5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> undef{}; 
        ///Accessing While Busy Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> awb{}; 
        ///NFC Access Size Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nfcase{}; 
        ///Ready/Busy Line 0 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rbEdge0{}; 
    }
    namespace SmcAddr{    ///<SMC NFC Address Cycle Zero Register
        using Addr = Register::Address<0x400e0018,0xffffff00,0x00000000,std::uint32_t>;
        ///NAND Flash Array Address cycle 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addrCycle0{}; 
    }
    namespace SmcBank{    ///<SMC Bank Address Register
        using Addr = Register::Address<0x400e001c,0xfffffff8,0x00000000,std::uint32_t>;
        ///Bank Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bank{}; 
    }
    namespace SmcEccCtrl{    ///<SMC ECC Control Register
        using Addr = Register::Address<0x400e0020,0xfffffffc,0x00000000,std::uint32_t>;
        ///Reset ECC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rst{}; 
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
    }
    namespace SmcEccMd{    ///<SMC ECC Mode Register
        using Addr = Register::Address<0x400e0024,0xffffffcc,0x00000000,std::uint32_t>;
        ///ECC Page Size
        enum class EccpagesizeVal {
            ps51216=0x00000000,     ///<Main area 512 Bytes + Spare area 16 Bytes = 528 Bytes
            ps102432=0x00000001,     ///<Main area 1024 Bytes + Spare area 32 Bytes = 1056 Bytes
            ps204864=0x00000002,     ///<Main area 2048 Bytes + Spare area 64 Bytes = 2112 Bytes
            ps4096128=0x00000003,     ///<Main area 4096 Bytes + Spare area 128 Bytes = 4224 Bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,EccpagesizeVal> eccPagesize{}; 
        namespace EccpagesizeValC{
            constexpr Register::FieldValue<decltype(eccPagesize)::Type,EccpagesizeVal::ps51216> ps51216{};
            constexpr Register::FieldValue<decltype(eccPagesize)::Type,EccpagesizeVal::ps102432> ps102432{};
            constexpr Register::FieldValue<decltype(eccPagesize)::Type,EccpagesizeVal::ps204864> ps204864{};
            constexpr Register::FieldValue<decltype(eccPagesize)::Type,EccpagesizeVal::ps4096128> ps4096128{};
        }
        ///Type of Correction
        enum class TypcorrecVal {
            cpage=0x00000000,     ///<1 bit correction for a page of 512/1024/2048/4096 Bytes  (for 8 or 16-bit NAND Flash)
            c256b=0x00000001,     ///<1 bit correction for 256 Bytes of data for a page of 512/2048/4096 bytes (for 8-bit NAND Flash only)
            c512b=0x00000002,     ///<1 bit correction for 512 Bytes of data for a page of 512/2048/4096 bytes (for 8-bit NAND Flash only)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,TypcorrecVal> typcorrec{}; 
        namespace TypcorrecValC{
            constexpr Register::FieldValue<decltype(typcorrec)::Type,TypcorrecVal::cpage> cpage{};
            constexpr Register::FieldValue<decltype(typcorrec)::Type,TypcorrecVal::c256b> c256b{};
            constexpr Register::FieldValue<decltype(typcorrec)::Type,TypcorrecVal::c512b> c512b{};
        }
    }
    namespace SmcEccSr1{    ///<SMC ECC Status 1 Register
        using Addr = Register::Address<0x400e0028,0x88888888,0x00000000,std::uint32_t>;
        ///Recoverable Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recerr0{}; 
        ///ECC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccerr0{}; 
        ///Recoverable Error in the page between the 256th and the 511th bytes or the 512nd and the 1023rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recerr1{}; 
        ///ECC Error in the page between the 256th and the 511th bytes or between the 512nd and the 1023rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccerr1{}; 
        ///Multiple Error in the page between the 256th and the 511th bytes or between the 512nd and the 1023rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mulerr1{}; 
        ///Recoverable Error in the page between the 512nd and the 767th bytes or between the 1024th and the 1535th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recerr2{}; 
        ///ECC Error in the page between the 512nd and the 767th bytes or between the 1024th and the 1535th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccerr2{}; 
        ///Multiple Error in the page between the 512nd and the 767th bytes or between the 1024th and the 1535th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mulerr2{}; 
        ///Recoverable Error in the page between the 768th and the 1023rd bytes or between the 1536th and the 2047th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recerr3{}; 
        ///ECC Error in the page between the 768th and the 1023rd bytes or between the 1536th and the 2047th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccerr3{}; 
        ///Multiple Error in the page between the 768th and the 1023rd bytes or between the 1536th and the 2047th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mulerr3{}; 
        ///Recoverable Error in the page between the 1024th and the 1279th bytes or between the 2048th and the 2559th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recerr4{}; 
        ///ECC Error in the page between the 1024th and the 1279th bytes or between the 2048th and the 2559th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccerr4{}; 
        ///Recoverable Error in the page between the 1280th and the 1535th bytes or between the 2560th and the 3071st bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recerr5{}; 
        ///ECC Error in the page between the 1280th and the 1535th bytes or between the 2560th and the 3071st bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccerr5{}; 
        ///Recoverable Error in the page between the 1536th and the 1791st bytes or between the 3072nd and the 3583rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recerr6{}; 
        ///ECC Error in the page between the 1536th and the 1791st bytes or between the 3072nd and the 3583rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccerr6{}; 
        ///Recoverable Error in the page between the 1792nd and the 2047th bytes or between the 3584th and the 4095th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recerr7{}; 
        ///ECC Error in the page between the 1792nd and the 2047th bytes or between the 3584th and the 4095th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccerr7{}; 
    }
    namespace SmcEccPr0{    ///<SMC ECC Parity 0 Register
        using Addr = Register::Address<0x400e002c,0xffff0000,0x00000000,std::uint32_t>;
        ///Bit Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Word Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
    }
    namespace SmcEccPr0W9bit{    ///<SMC ECC Parity 0 Register
        using Addr = Register::Address<0x400e002c,0xff000000,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr0W8bit{    ///<SMC ECC Parity 0 Register
        using Addr = Register::Address<0x400e002c,0xff800800,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr1{    ///<SMC ECC parity 1 Register
        using Addr = Register::Address<0x400e0030,0xffff0000,0x00000000,std::uint32_t>;
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr1W9bit{    ///<SMC ECC parity 1 Register
        using Addr = Register::Address<0x400e0030,0xff000000,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr1W8bit{    ///<SMC ECC parity 1 Register
        using Addr = Register::Address<0x400e0030,0xff800800,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccSr2{    ///<SMC ECC status 2 Register
        using Addr = Register::Address<0x400e0034,0x88888888,0x00000000,std::uint32_t>;
        ///Recoverable Error in the page between the 2048th and the 2303rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recerr8{}; 
        ///ECC Error in the page between the 2048th and the 2303rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccerr8{}; 
        ///Recoverable Error in the page between the 2304th and the 2559th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recerr9{}; 
        ///ECC Error in the page between the 2304th and the 2559th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccerr9{}; 
        ///Multiple Error in the page between the 2304th and the 2559th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mulerr9{}; 
        ///Recoverable Error in the page between the 2560th and the 2815th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recerr10{}; 
        ///ECC Error in the page between the 2560th and the 2815th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccerr10{}; 
        ///Multiple Error in the page between the 2560th and the 2815th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mulerr10{}; 
        ///Recoverable Error in the page between the 2816th and the 3071st bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recerr11{}; 
        ///ECC Error in the page between the 2816th and the 3071st bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccerr11{}; 
        ///Multiple Error in the page between the 2816th and the 3071st bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mulerr11{}; 
        ///Recoverable Error in the page between the 3072nd and the 3327th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recerr12{}; 
        ///ECC Error in the page between the 3072nd and the 3327th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccerr12{}; 
        ///Recoverable Error in the page between the 3328th and the 3583rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recerr13{}; 
        ///ECC Error in the page between the 3328th and the 3583rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccerr13{}; 
        ///Recoverable Error in the page between the 3584th and the 3839th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recerr14{}; 
        ///ECC Error in the page between the 3584th and the 3839th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccerr14{}; 
        ///Recoverable Error in the page between the 3840th and the 4095th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> recerr15{}; 
        ///ECC Error in the page between the 3840th and the 4095th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccerr15{}; 
    }
    namespace SmcEccPr2{    ///<SMC ECC parity 2 Register
        using Addr = Register::Address<0x400e0038,0xff000000,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr2W8bit{    ///<SMC ECC parity 2 Register
        using Addr = Register::Address<0x400e0038,0xff800800,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr3{    ///<SMC ECC parity 3 Register
        using Addr = Register::Address<0x400e003c,0xff000000,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr3W8bit{    ///<SMC ECC parity 3 Register
        using Addr = Register::Address<0x400e003c,0xff800800,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr4{    ///<SMC ECC parity 4 Register
        using Addr = Register::Address<0x400e0040,0xff000000,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr4W8bit{    ///<SMC ECC parity 4 Register
        using Addr = Register::Address<0x400e0040,0xff800800,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr5{    ///<SMC ECC parity 5 Register
        using Addr = Register::Address<0x400e0044,0xff000000,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr5W8bit{    ///<SMC ECC parity 5 Register
        using Addr = Register::Address<0x400e0044,0xff800800,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr6{    ///<SMC ECC parity 6 Register
        using Addr = Register::Address<0x400e0048,0xff000000,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr6W8bit{    ///<SMC ECC parity 6 Register
        using Addr = Register::Address<0x400e0048,0xff800800,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr7{    ///<SMC ECC parity 7 Register
        using Addr = Register::Address<0x400e004c,0xff000000,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr7W8bit{    ///<SMC ECC parity 7 Register
        using Addr = Register::Address<0x400e004c,0xff800800,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr8{    ///<SMC ECC parity 8 Register
        using Addr = Register::Address<0x400e0050,0xff800800,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr9{    ///<SMC ECC parity 9 Register
        using Addr = Register::Address<0x400e0054,0xff800800,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr10{    ///<SMC ECC parity 10 Register
        using Addr = Register::Address<0x400e0058,0xff800800,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr11{    ///<SMC ECC parity 11 Register
        using Addr = Register::Address<0x400e005c,0xff800800,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr12{    ///<SMC ECC parity 12 Register
        using Addr = Register::Address<0x400e0060,0xff800800,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr13{    ///<SMC ECC parity 13 Register
        using Addr = Register::Address<0x400e0064,0xff800800,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr14{    ///<SMC ECC parity 14 Register
        using Addr = Register::Address<0x400e0068,0xff800800,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcEccPr15{    ///<SMC ECC parity 15 Register
        using Addr = Register::Address<0x400e006c,0xff800800,0x00000000,std::uint32_t>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nparity{}; 
    }
    namespace SmcSetup0{    ///<SMC Setup Register (CS_number = 0)
        using Addr = Register::Address<0x400e0070,0xc0c0c0c0,0x00000000,std::uint32_t>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in Write Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in Read Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse0{    ///<SMC Pulse Register (CS_number = 0)
        using Addr = Register::Address<0x400e0074,0xc0c0c0c0,0x00000000,std::uint32_t>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle0{    ///<SMC Cycle Register (CS_number = 0)
        using Addr = Register::Address<0x400e0078,0xfe00fe00,0x00000000,std::uint32_t>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcTimings0{    ///<SMC Timings Register (CS_number = 0)
        using Addr = Register::Address<0x400e007c,0x00f0e000,0x00000000,std::uint32_t>;
        ///CLE to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tclr{}; 
        ///ALE to Data Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tadl{}; 
        ///ALE to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tar{}; 
        ///Off Chip Memory Scrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ocms{}; 
        ///Ready to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trr{}; 
        ///WEN High to REN to Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> twb{}; 
        ///Ready/Busy Line Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> rbnsel{}; 
        ///NAND Flash Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nfsel{}; 
    }
    namespace SmcMode0{    ///<SMC Mode Register (CS_number = 0)
        using Addr = Register::Address<0x400e0080,0xffe0eecc,0x00000000,std::uint32_t>;
        ///
        enum class ReadmodeVal {
            ncsCtrl=0x00000000,     ///<The Read operation is controlled by the NCS signal.
            nrdCtrl=0x00000001,     ///<The Read operation is controlled by the NRD signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadmodeVal> readMode{}; 
        namespace ReadmodeValC{
            constexpr Register::FieldValue<decltype(readMode)::Type,ReadmodeVal::ncsCtrl> ncsCtrl{};
            constexpr Register::FieldValue<decltype(readMode)::Type,ReadmodeVal::nrdCtrl> nrdCtrl{};
        }
        ///
        enum class WritemodeVal {
            ncsCtrl=0x00000000,     ///<The Write operation is controller by the NCS signal.
            nweCtrl=0x00000001,     ///<The Write operation is controlled by the NWE signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WritemodeVal> writeMode{}; 
        namespace WritemodeValC{
            constexpr Register::FieldValue<decltype(writeMode)::Type,WritemodeVal::ncsCtrl> ncsCtrl{};
            constexpr Register::FieldValue<decltype(writeMode)::Type,WritemodeVal::nweCtrl> nweCtrl{};
        }
        ///NWAIT Mode
        enum class ExnwmodeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ExnwmodeVal> exnwMode{}; 
        namespace ExnwmodeValC{
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::frozen> frozen{};
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::ready> ready{};
        }
        ///Byte Access Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        enum class DbwVal {
            bit8=0x00000000,     ///<8-bit bus
            bit16=0x00000001,     ///<16-bit bus
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DbwVal> dbw{}; 
        namespace DbwValC{
            constexpr Register::FieldValue<decltype(dbw)::Type,DbwVal::bit8> bit8{};
            constexpr Register::FieldValue<decltype(dbw)::Type,DbwVal::bit16> bit16{};
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
    }
    namespace SmcSetup1{    ///<SMC Setup Register (CS_number = 1)
        using Addr = Register::Address<0x400e0084,0xc0c0c0c0,0x00000000,std::uint32_t>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in Write Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in Read Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse1{    ///<SMC Pulse Register (CS_number = 1)
        using Addr = Register::Address<0x400e0088,0xc0c0c0c0,0x00000000,std::uint32_t>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle1{    ///<SMC Cycle Register (CS_number = 1)
        using Addr = Register::Address<0x400e008c,0xfe00fe00,0x00000000,std::uint32_t>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcTimings1{    ///<SMC Timings Register (CS_number = 1)
        using Addr = Register::Address<0x400e0090,0x00f0e000,0x00000000,std::uint32_t>;
        ///CLE to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tclr{}; 
        ///ALE to Data Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tadl{}; 
        ///ALE to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tar{}; 
        ///Off Chip Memory Scrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ocms{}; 
        ///Ready to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trr{}; 
        ///WEN High to REN to Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> twb{}; 
        ///Ready/Busy Line Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> rbnsel{}; 
        ///NAND Flash Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nfsel{}; 
    }
    namespace SmcMode1{    ///<SMC Mode Register (CS_number = 1)
        using Addr = Register::Address<0x400e0094,0xffe0eecc,0x00000000,std::uint32_t>;
        ///
        enum class ReadmodeVal {
            ncsCtrl=0x00000000,     ///<The Read operation is controlled by the NCS signal.
            nrdCtrl=0x00000001,     ///<The Read operation is controlled by the NRD signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadmodeVal> readMode{}; 
        namespace ReadmodeValC{
            constexpr Register::FieldValue<decltype(readMode)::Type,ReadmodeVal::ncsCtrl> ncsCtrl{};
            constexpr Register::FieldValue<decltype(readMode)::Type,ReadmodeVal::nrdCtrl> nrdCtrl{};
        }
        ///
        enum class WritemodeVal {
            ncsCtrl=0x00000000,     ///<The Write operation is controller by the NCS signal.
            nweCtrl=0x00000001,     ///<The Write operation is controlled by the NWE signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WritemodeVal> writeMode{}; 
        namespace WritemodeValC{
            constexpr Register::FieldValue<decltype(writeMode)::Type,WritemodeVal::ncsCtrl> ncsCtrl{};
            constexpr Register::FieldValue<decltype(writeMode)::Type,WritemodeVal::nweCtrl> nweCtrl{};
        }
        ///NWAIT Mode
        enum class ExnwmodeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ExnwmodeVal> exnwMode{}; 
        namespace ExnwmodeValC{
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::frozen> frozen{};
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::ready> ready{};
        }
        ///Byte Access Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        enum class DbwVal {
            bit8=0x00000000,     ///<8-bit bus
            bit16=0x00000001,     ///<16-bit bus
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DbwVal> dbw{}; 
        namespace DbwValC{
            constexpr Register::FieldValue<decltype(dbw)::Type,DbwVal::bit8> bit8{};
            constexpr Register::FieldValue<decltype(dbw)::Type,DbwVal::bit16> bit16{};
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
    }
    namespace SmcSetup2{    ///<SMC Setup Register (CS_number = 2)
        using Addr = Register::Address<0x400e0098,0xc0c0c0c0,0x00000000,std::uint32_t>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in Write Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in Read Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse2{    ///<SMC Pulse Register (CS_number = 2)
        using Addr = Register::Address<0x400e009c,0xc0c0c0c0,0x00000000,std::uint32_t>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle2{    ///<SMC Cycle Register (CS_number = 2)
        using Addr = Register::Address<0x400e00a0,0xfe00fe00,0x00000000,std::uint32_t>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcTimings2{    ///<SMC Timings Register (CS_number = 2)
        using Addr = Register::Address<0x400e00a4,0x00f0e000,0x00000000,std::uint32_t>;
        ///CLE to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tclr{}; 
        ///ALE to Data Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tadl{}; 
        ///ALE to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tar{}; 
        ///Off Chip Memory Scrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ocms{}; 
        ///Ready to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trr{}; 
        ///WEN High to REN to Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> twb{}; 
        ///Ready/Busy Line Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> rbnsel{}; 
        ///NAND Flash Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nfsel{}; 
    }
    namespace SmcMode2{    ///<SMC Mode Register (CS_number = 2)
        using Addr = Register::Address<0x400e00a8,0xffe0eecc,0x00000000,std::uint32_t>;
        ///
        enum class ReadmodeVal {
            ncsCtrl=0x00000000,     ///<The Read operation is controlled by the NCS signal.
            nrdCtrl=0x00000001,     ///<The Read operation is controlled by the NRD signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadmodeVal> readMode{}; 
        namespace ReadmodeValC{
            constexpr Register::FieldValue<decltype(readMode)::Type,ReadmodeVal::ncsCtrl> ncsCtrl{};
            constexpr Register::FieldValue<decltype(readMode)::Type,ReadmodeVal::nrdCtrl> nrdCtrl{};
        }
        ///
        enum class WritemodeVal {
            ncsCtrl=0x00000000,     ///<The Write operation is controller by the NCS signal.
            nweCtrl=0x00000001,     ///<The Write operation is controlled by the NWE signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WritemodeVal> writeMode{}; 
        namespace WritemodeValC{
            constexpr Register::FieldValue<decltype(writeMode)::Type,WritemodeVal::ncsCtrl> ncsCtrl{};
            constexpr Register::FieldValue<decltype(writeMode)::Type,WritemodeVal::nweCtrl> nweCtrl{};
        }
        ///NWAIT Mode
        enum class ExnwmodeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ExnwmodeVal> exnwMode{}; 
        namespace ExnwmodeValC{
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::frozen> frozen{};
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::ready> ready{};
        }
        ///Byte Access Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        enum class DbwVal {
            bit8=0x00000000,     ///<8-bit bus
            bit16=0x00000001,     ///<16-bit bus
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DbwVal> dbw{}; 
        namespace DbwValC{
            constexpr Register::FieldValue<decltype(dbw)::Type,DbwVal::bit8> bit8{};
            constexpr Register::FieldValue<decltype(dbw)::Type,DbwVal::bit16> bit16{};
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
    }
    namespace SmcSetup3{    ///<SMC Setup Register (CS_number = 3)
        using Addr = Register::Address<0x400e00ac,0xc0c0c0c0,0x00000000,std::uint32_t>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in Write Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in Read Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse3{    ///<SMC Pulse Register (CS_number = 3)
        using Addr = Register::Address<0x400e00b0,0xc0c0c0c0,0x00000000,std::uint32_t>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle3{    ///<SMC Cycle Register (CS_number = 3)
        using Addr = Register::Address<0x400e00b4,0xfe00fe00,0x00000000,std::uint32_t>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcTimings3{    ///<SMC Timings Register (CS_number = 3)
        using Addr = Register::Address<0x400e00b8,0x00f0e000,0x00000000,std::uint32_t>;
        ///CLE to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tclr{}; 
        ///ALE to Data Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tadl{}; 
        ///ALE to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tar{}; 
        ///Off Chip Memory Scrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ocms{}; 
        ///Ready to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trr{}; 
        ///WEN High to REN to Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> twb{}; 
        ///Ready/Busy Line Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> rbnsel{}; 
        ///NAND Flash Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nfsel{}; 
    }
    namespace SmcMode3{    ///<SMC Mode Register (CS_number = 3)
        using Addr = Register::Address<0x400e00bc,0xffe0eecc,0x00000000,std::uint32_t>;
        ///
        enum class ReadmodeVal {
            ncsCtrl=0x00000000,     ///<The Read operation is controlled by the NCS signal.
            nrdCtrl=0x00000001,     ///<The Read operation is controlled by the NRD signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadmodeVal> readMode{}; 
        namespace ReadmodeValC{
            constexpr Register::FieldValue<decltype(readMode)::Type,ReadmodeVal::ncsCtrl> ncsCtrl{};
            constexpr Register::FieldValue<decltype(readMode)::Type,ReadmodeVal::nrdCtrl> nrdCtrl{};
        }
        ///
        enum class WritemodeVal {
            ncsCtrl=0x00000000,     ///<The Write operation is controller by the NCS signal.
            nweCtrl=0x00000001,     ///<The Write operation is controlled by the NWE signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WritemodeVal> writeMode{}; 
        namespace WritemodeValC{
            constexpr Register::FieldValue<decltype(writeMode)::Type,WritemodeVal::ncsCtrl> ncsCtrl{};
            constexpr Register::FieldValue<decltype(writeMode)::Type,WritemodeVal::nweCtrl> nweCtrl{};
        }
        ///NWAIT Mode
        enum class ExnwmodeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ExnwmodeVal> exnwMode{}; 
        namespace ExnwmodeValC{
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::frozen> frozen{};
            constexpr Register::FieldValue<decltype(exnwMode)::Type,ExnwmodeVal::ready> ready{};
        }
        ///Byte Access Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        enum class DbwVal {
            bit8=0x00000000,     ///<8-bit bus
            bit16=0x00000001,     ///<16-bit bus
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DbwVal> dbw{}; 
        namespace DbwValC{
            constexpr Register::FieldValue<decltype(dbw)::Type,DbwVal::bit8> bit8{};
            constexpr Register::FieldValue<decltype(dbw)::Type,DbwVal::bit16> bit16{};
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
    }
    namespace SmcOcms{    ///<SMC OCMS Register
        using Addr = Register::Address<0x400e0110,0xfffffffc,0x00000000,std::uint32_t>;
        ///Static Memory Controller Scrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> smse{}; 
        ///SRAM Scrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> srse{}; 
    }
    namespace SmcKey1{    ///<SMC OCMS KEY1 Register
        using Addr = Register::Address<0x400e0114,0x00000000,0x00000000,std::uint32_t>;
        ///Off Chip Memory Scrambling (OCMS) Key Part 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> key1{}; 
    }
    namespace SmcKey2{    ///<SMC OCMS KEY2 Register
        using Addr = Register::Address<0x400e0118,0x00000000,0x00000000,std::uint32_t>;
        ///Off Chip Memory Scrambling (OCMS) Key Part 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> key2{}; 
    }
    namespace SmcWpcr{    ///<Write Protection Control Register
        using Addr = Register::Address<0x400e01e4,0x000000fe,0x00000000,std::uint32_t>;
        ///Write Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpEn{}; 
        ///Write Protection KEY password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpKey{}; 
    }
    namespace SmcWpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0x400e01e8,0xff0000f0,0x00000000,std::uint32_t>;
        ///Write Protection Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpVs{}; 
        ///Write Protection Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpVsrc{}; 
    }
}
