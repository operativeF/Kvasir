#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DMA Controller 0
    namespace Dmac0Gcfg{    ///<DMAC Global Configuration Register
        using Addr = Register::Address<0xffffe600,0xfffffeef,0x00000000,std::uint32_t>;
        ///Arbiter Configuration
        enum class ArbcfgVal {
            fixed=0x00000000,     ///<Fixed priority arbiter.
            roundRobin=0x00000001,     ///<Modified round robin arbiter.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ArbcfgVal> arbCfg{}; 
        namespace ArbcfgValC{
            constexpr Register::FieldValue<decltype(arbCfg)::Type,ArbcfgVal::fixed> fixed{};
            constexpr Register::FieldValue<decltype(arbCfg)::Type,ArbcfgVal::roundRobin> roundRobin{};
        }
        ///Descriptor Integrity Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dicen{}; 
    }
    namespace Dmac0En{    ///<DMAC Enable Register
        using Addr = Register::Address<0xffffe604,0xfffffffe,0x00000000,std::uint32_t>;
        ///General Enable of DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Dmac0Sreq{    ///<DMAC Software Single Request Register
        using Addr = Register::Address<0xffffe608,0xffff0000,0x00000000,std::uint32_t>;
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ssreq0{}; 
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dsreq0{}; 
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ssreq1{}; 
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsreq1{}; 
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssreq2{}; 
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dsreq2{}; 
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ssreq3{}; 
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dsreq3{}; 
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ssreq4{}; 
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dsreq4{}; 
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ssreq5{}; 
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dsreq5{}; 
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ssreq6{}; 
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dsreq6{}; 
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ssreq7{}; 
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dsreq7{}; 
    }
    namespace Dmac0Creq{    ///<DMAC Software Chunk Transfer Request Register
        using Addr = Register::Address<0xffffe60c,0xffff0000,0x00000000,std::uint32_t>;
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> screq0{}; 
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcreq0{}; 
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> screq1{}; 
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dcreq1{}; 
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> screq2{}; 
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dcreq2{}; 
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> screq3{}; 
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcreq3{}; 
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> screq4{}; 
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dcreq4{}; 
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> screq5{}; 
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dcreq5{}; 
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> screq6{}; 
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dcreq6{}; 
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> screq7{}; 
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dcreq7{}; 
    }
    namespace Dmac0Last{    ///<DMAC Software Last Transfer Flag Register
        using Addr = Register::Address<0xffffe610,0xffff0000,0x00000000,std::uint32_t>;
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> slast0{}; 
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dlast0{}; 
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> slast1{}; 
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dlast1{}; 
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> slast2{}; 
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dlast2{}; 
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> slast3{}; 
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dlast3{}; 
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slast4{}; 
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dlast4{}; 
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> slast5{}; 
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dlast5{}; 
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> slast6{}; 
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dlast6{}; 
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> slast7{}; 
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dlast7{}; 
    }
    namespace Dmac0Ebcier{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Enable register.
        using Addr = Register::Address<0xffffe618,0x00000000,0x00000000,std::uint32_t>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc0{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc1{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc2{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc3{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc4{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc5{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc6{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc7{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc5{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc6{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc7{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err0{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err1{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err2{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err3{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err4{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err5{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err6{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err7{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr0{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr1{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr2{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr3{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr4{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr5{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr6{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr7{}; 
    }
    namespace Dmac0Ebcidr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Disable register.
        using Addr = Register::Address<0xffffe61c,0x00000000,0x00000000,std::uint32_t>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc0{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc1{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc2{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc3{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc4{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc5{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc6{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc7{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc5{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc6{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc7{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err0{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err1{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err2{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err3{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err4{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err5{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err6{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err7{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr0{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr1{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr2{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr3{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr4{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr5{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr6{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr7{}; 
    }
    namespace Dmac0Ebcimr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Mask Register.
        using Addr = Register::Address<0xffffe620,0x00000000,0x00000000,std::uint32_t>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc0{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc1{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc2{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc3{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc4{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc5{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc6{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc7{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc5{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc6{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc7{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err0{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err1{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err2{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err3{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err4{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err5{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err6{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err7{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr0{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr1{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr2{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr3{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr4{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr5{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr6{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr7{}; 
    }
    namespace Dmac0Ebcisr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Status Register.
        using Addr = Register::Address<0xffffe624,0x00000000,0x00000000,std::uint32_t>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc0{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc1{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc2{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc3{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc4{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc5{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc6{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btc7{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc5{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc6{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cbtc7{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err0{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err1{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err2{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err3{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err4{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err5{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err6{}; 
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err7{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr0{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr1{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr2{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr3{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr4{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr5{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr6{}; 
        ///Descriptor Integrity Check Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dicerr7{}; 
    }
    namespace Dmac0Cher{    ///<DMAC Channel Handler Enable Register
        using Addr = Register::Address<0xffffe628,0x00ff0000,0x00000000,std::uint32_t>;
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena0{}; 
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena1{}; 
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena2{}; 
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena3{}; 
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena4{}; 
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena5{}; 
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena6{}; 
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena7{}; 
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp0{}; 
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp1{}; 
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp2{}; 
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp3{}; 
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp4{}; 
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp5{}; 
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp6{}; 
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp7{}; 
        ///Keep on [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> keep0{}; 
        ///Keep on [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> keep1{}; 
        ///Keep on [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> keep2{}; 
        ///Keep on [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> keep3{}; 
        ///Keep on [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> keep4{}; 
        ///Keep on [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> keep5{}; 
        ///Keep on [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> keep6{}; 
        ///Keep on [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> keep7{}; 
    }
    namespace Dmac0Chdr{    ///<DMAC Channel Handler Disable Register
        using Addr = Register::Address<0xffffe62c,0xffff0000,0x00000000,std::uint32_t>;
        ///Disable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dis0{}; 
        ///Disable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dis1{}; 
        ///Disable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dis2{}; 
        ///Disable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dis3{}; 
        ///Disable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dis4{}; 
        ///Disable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dis5{}; 
        ///Disable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dis6{}; 
        ///Disable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dis7{}; 
        ///Resume [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res0{}; 
        ///Resume [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res1{}; 
        ///Resume [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res2{}; 
        ///Resume [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res3{}; 
        ///Resume [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res4{}; 
        ///Resume [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res5{}; 
        ///Resume [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res6{}; 
        ///Resume [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res7{}; 
    }
    namespace Dmac0Chsr{    ///<DMAC Channel Handler Status Register
        using Addr = Register::Address<0xffffe630,0x00000000,0x00000000,std::uint32_t>;
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena0{}; 
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena1{}; 
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena2{}; 
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena3{}; 
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena4{}; 
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena5{}; 
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena6{}; 
        ///Enable [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ena7{}; 
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp0{}; 
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp1{}; 
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp2{}; 
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp3{}; 
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp4{}; 
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp5{}; 
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp6{}; 
        ///Suspend [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> susp7{}; 
        ///Empty [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> empt0{}; 
        ///Empty [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> empt1{}; 
        ///Empty [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> empt2{}; 
        ///Empty [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> empt3{}; 
        ///Empty [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> empt4{}; 
        ///Empty [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> empt5{}; 
        ///Empty [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> empt6{}; 
        ///Empty [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> empt7{}; 
        ///Stalled [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stal0{}; 
        ///Stalled [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stal1{}; 
        ///Stalled [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stal2{}; 
        ///Stalled [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stal3{}; 
        ///Stalled [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stal4{}; 
        ///Stalled [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stal5{}; 
        ///Stalled [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stal6{}; 
        ///Stalled [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stal7{}; 
    }
    namespace Dmac0Saddr0{    ///<DMAC Channel Source Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffe63c,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace Dmac0Daddr0{    ///<DMAC Channel Destination Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffe640,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace Dmac0Dscr0{    ///<DMAC Channel Descriptor Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffe644,0x00000000,0x00000000,std::uint32_t>;
        ///Descriptor Interface Selection
        enum class DscrifVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf2> ahbIf2{};
        }
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace Dmac0Ctrla0{    ///<DMAC Channel Control A Register (ch_num = 0)
        using Addr = Register::Address<0xffffe648,0x4c880000,0x00000000,std::uint32_t>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        ///Destination Chunk Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
            dword=0x00000003,     ///<the transfer size is set to 64-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::dword> dword{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
            dword=0x00000003,     ///<the transfer size is set to 64-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::dword> dword{};
        }
        ///Current Descriptor Stop Command and Transfer Completed Memory Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Dmac0Ctrlb0{    ///<DMAC Channel Control B Register (ch_num = 0)
        using Addr = Register::Address<0xffffe64c,0x0c8eeecc,0x00000000,std::uint32_t>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB_Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB_Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB_Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB_Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB_Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB_Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf2> ahbIf2{};
        }
        ///Source Picture-in-Picture Mode
        enum class SrcpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcpipVal> srcPip{}; 
        namespace SrcpipValC{
            constexpr Register::FieldValue<decltype(srcPip)::Type,SrcpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(srcPip)::Type,SrcpipVal::enable> enable{};
        }
        ///Destination Picture-in-Picture Mode
        enum class DstpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstpipVal> dstPip{}; 
        namespace DstpipValC{
            constexpr Register::FieldValue<decltype(dstPip)::Type,DstpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dstPip)::Type,DstpipVal::enable> enable{};
        }
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDmaFc> per2perDmaFc{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        ///Interrupt Enable Not
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///Automatic Multiple Buffer Transfer
        enum class Auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::disable> disable{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::enable> enable{};
        }
    }
    namespace Dmac0Cfg0{    ///<DMAC Channel Configuration Register (ch_num = 0)
        using Addr = Register::Address<0xffffe650,0xc88e0000,0x00000000,std::uint32_t>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Source Reloaded from Previous
        enum class SrcrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcrepVal> srcRep{}; 
        namespace SrcrepValC{
            constexpr Register::FieldValue<decltype(srcRep)::Type,SrcrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(srcRep)::Type,SrcrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::hw> hw{};
        }
        ///SRC_PER Most Significant Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> srcPerMsb{}; 
        ///Destination Reloaded from Previous
        enum class DstrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstrepVal> dstRep{}; 
        namespace DstrepValC{
            constexpr Register::FieldValue<decltype(dstRep)::Type,DstrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(dstRep)::Type,DstrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::hw> hw{};
        }
        ///DST_PER Most Significant Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> dstPerMsb{}; 
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB)::Type,LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace Dmac0Spip0{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 0)
        using Addr = Register::Address<0xffffe654,0xfc000000,0x00000000,std::uint32_t>;
        ///Source Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        ///Source Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
    }
    namespace Dmac0Dpip0{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 0)
        using Addr = Register::Address<0xffffe658,0xfc000000,0x00000000,std::uint32_t>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        ///Destination Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
    }
    namespace Dmac0Saddr1{    ///<DMAC Channel Source Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffe664,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace Dmac0Daddr1{    ///<DMAC Channel Destination Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffe668,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace Dmac0Dscr1{    ///<DMAC Channel Descriptor Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffe66c,0x00000000,0x00000000,std::uint32_t>;
        ///Descriptor Interface Selection
        enum class DscrifVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf2> ahbIf2{};
        }
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace Dmac0Ctrla1{    ///<DMAC Channel Control A Register (ch_num = 1)
        using Addr = Register::Address<0xffffe670,0x4c880000,0x00000000,std::uint32_t>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        ///Destination Chunk Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
            dword=0x00000003,     ///<the transfer size is set to 64-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::dword> dword{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
            dword=0x00000003,     ///<the transfer size is set to 64-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::dword> dword{};
        }
        ///Current Descriptor Stop Command and Transfer Completed Memory Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Dmac0Ctrlb1{    ///<DMAC Channel Control B Register (ch_num = 1)
        using Addr = Register::Address<0xffffe674,0x0c8eeecc,0x00000000,std::uint32_t>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB_Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB_Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB_Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB_Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB_Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB_Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf2> ahbIf2{};
        }
        ///Source Picture-in-Picture Mode
        enum class SrcpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcpipVal> srcPip{}; 
        namespace SrcpipValC{
            constexpr Register::FieldValue<decltype(srcPip)::Type,SrcpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(srcPip)::Type,SrcpipVal::enable> enable{};
        }
        ///Destination Picture-in-Picture Mode
        enum class DstpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstpipVal> dstPip{}; 
        namespace DstpipValC{
            constexpr Register::FieldValue<decltype(dstPip)::Type,DstpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dstPip)::Type,DstpipVal::enable> enable{};
        }
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDmaFc> per2perDmaFc{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        ///Interrupt Enable Not
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///Automatic Multiple Buffer Transfer
        enum class Auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::disable> disable{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::enable> enable{};
        }
    }
    namespace Dmac0Cfg1{    ///<DMAC Channel Configuration Register (ch_num = 1)
        using Addr = Register::Address<0xffffe678,0xc88e0000,0x00000000,std::uint32_t>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Source Reloaded from Previous
        enum class SrcrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcrepVal> srcRep{}; 
        namespace SrcrepValC{
            constexpr Register::FieldValue<decltype(srcRep)::Type,SrcrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(srcRep)::Type,SrcrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::hw> hw{};
        }
        ///SRC_PER Most Significant Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> srcPerMsb{}; 
        ///Destination Reloaded from Previous
        enum class DstrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstrepVal> dstRep{}; 
        namespace DstrepValC{
            constexpr Register::FieldValue<decltype(dstRep)::Type,DstrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(dstRep)::Type,DstrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::hw> hw{};
        }
        ///DST_PER Most Significant Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> dstPerMsb{}; 
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB)::Type,LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace Dmac0Spip1{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 1)
        using Addr = Register::Address<0xffffe67c,0xfc000000,0x00000000,std::uint32_t>;
        ///Source Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        ///Source Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
    }
    namespace Dmac0Dpip1{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 1)
        using Addr = Register::Address<0xffffe680,0xfc000000,0x00000000,std::uint32_t>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        ///Destination Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
    }
    namespace Dmac0Saddr2{    ///<DMAC Channel Source Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffe68c,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace Dmac0Daddr2{    ///<DMAC Channel Destination Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffe690,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace Dmac0Dscr2{    ///<DMAC Channel Descriptor Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffe694,0x00000000,0x00000000,std::uint32_t>;
        ///Descriptor Interface Selection
        enum class DscrifVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf2> ahbIf2{};
        }
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace Dmac0Ctrla2{    ///<DMAC Channel Control A Register (ch_num = 2)
        using Addr = Register::Address<0xffffe698,0x4c880000,0x00000000,std::uint32_t>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        ///Destination Chunk Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
            dword=0x00000003,     ///<the transfer size is set to 64-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::dword> dword{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
            dword=0x00000003,     ///<the transfer size is set to 64-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::dword> dword{};
        }
        ///Current Descriptor Stop Command and Transfer Completed Memory Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Dmac0Ctrlb2{    ///<DMAC Channel Control B Register (ch_num = 2)
        using Addr = Register::Address<0xffffe69c,0x0c8eeecc,0x00000000,std::uint32_t>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB_Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB_Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB_Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB_Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB_Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB_Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf2> ahbIf2{};
        }
        ///Source Picture-in-Picture Mode
        enum class SrcpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcpipVal> srcPip{}; 
        namespace SrcpipValC{
            constexpr Register::FieldValue<decltype(srcPip)::Type,SrcpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(srcPip)::Type,SrcpipVal::enable> enable{};
        }
        ///Destination Picture-in-Picture Mode
        enum class DstpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstpipVal> dstPip{}; 
        namespace DstpipValC{
            constexpr Register::FieldValue<decltype(dstPip)::Type,DstpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dstPip)::Type,DstpipVal::enable> enable{};
        }
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDmaFc> per2perDmaFc{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        ///Interrupt Enable Not
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///Automatic Multiple Buffer Transfer
        enum class Auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::disable> disable{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::enable> enable{};
        }
    }
    namespace Dmac0Cfg2{    ///<DMAC Channel Configuration Register (ch_num = 2)
        using Addr = Register::Address<0xffffe6a0,0xc88e0000,0x00000000,std::uint32_t>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Source Reloaded from Previous
        enum class SrcrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcrepVal> srcRep{}; 
        namespace SrcrepValC{
            constexpr Register::FieldValue<decltype(srcRep)::Type,SrcrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(srcRep)::Type,SrcrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::hw> hw{};
        }
        ///SRC_PER Most Significant Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> srcPerMsb{}; 
        ///Destination Reloaded from Previous
        enum class DstrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstrepVal> dstRep{}; 
        namespace DstrepValC{
            constexpr Register::FieldValue<decltype(dstRep)::Type,DstrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(dstRep)::Type,DstrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::hw> hw{};
        }
        ///DST_PER Most Significant Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> dstPerMsb{}; 
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB)::Type,LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace Dmac0Spip2{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 2)
        using Addr = Register::Address<0xffffe6a4,0xfc000000,0x00000000,std::uint32_t>;
        ///Source Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        ///Source Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
    }
    namespace Dmac0Dpip2{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 2)
        using Addr = Register::Address<0xffffe6a8,0xfc000000,0x00000000,std::uint32_t>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        ///Destination Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
    }
    namespace Dmac0Saddr3{    ///<DMAC Channel Source Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffe6b4,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace Dmac0Daddr3{    ///<DMAC Channel Destination Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffe6b8,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace Dmac0Dscr3{    ///<DMAC Channel Descriptor Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffe6bc,0x00000000,0x00000000,std::uint32_t>;
        ///Descriptor Interface Selection
        enum class DscrifVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf2> ahbIf2{};
        }
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace Dmac0Ctrla3{    ///<DMAC Channel Control A Register (ch_num = 3)
        using Addr = Register::Address<0xffffe6c0,0x4c880000,0x00000000,std::uint32_t>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        ///Destination Chunk Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
            dword=0x00000003,     ///<the transfer size is set to 64-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::dword> dword{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
            dword=0x00000003,     ///<the transfer size is set to 64-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::dword> dword{};
        }
        ///Current Descriptor Stop Command and Transfer Completed Memory Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Dmac0Ctrlb3{    ///<DMAC Channel Control B Register (ch_num = 3)
        using Addr = Register::Address<0xffffe6c4,0x0c8eeecc,0x00000000,std::uint32_t>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB_Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB_Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB_Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB_Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB_Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB_Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf2> ahbIf2{};
        }
        ///Source Picture-in-Picture Mode
        enum class SrcpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcpipVal> srcPip{}; 
        namespace SrcpipValC{
            constexpr Register::FieldValue<decltype(srcPip)::Type,SrcpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(srcPip)::Type,SrcpipVal::enable> enable{};
        }
        ///Destination Picture-in-Picture Mode
        enum class DstpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstpipVal> dstPip{}; 
        namespace DstpipValC{
            constexpr Register::FieldValue<decltype(dstPip)::Type,DstpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dstPip)::Type,DstpipVal::enable> enable{};
        }
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDmaFc> per2perDmaFc{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        ///Interrupt Enable Not
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///Automatic Multiple Buffer Transfer
        enum class Auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::disable> disable{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::enable> enable{};
        }
    }
    namespace Dmac0Cfg3{    ///<DMAC Channel Configuration Register (ch_num = 3)
        using Addr = Register::Address<0xffffe6c8,0xc88e0000,0x00000000,std::uint32_t>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Source Reloaded from Previous
        enum class SrcrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcrepVal> srcRep{}; 
        namespace SrcrepValC{
            constexpr Register::FieldValue<decltype(srcRep)::Type,SrcrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(srcRep)::Type,SrcrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::hw> hw{};
        }
        ///SRC_PER Most Significant Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> srcPerMsb{}; 
        ///Destination Reloaded from Previous
        enum class DstrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstrepVal> dstRep{}; 
        namespace DstrepValC{
            constexpr Register::FieldValue<decltype(dstRep)::Type,DstrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(dstRep)::Type,DstrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::hw> hw{};
        }
        ///DST_PER Most Significant Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> dstPerMsb{}; 
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB)::Type,LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace Dmac0Spip3{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 3)
        using Addr = Register::Address<0xffffe6cc,0xfc000000,0x00000000,std::uint32_t>;
        ///Source Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        ///Source Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
    }
    namespace Dmac0Dpip3{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 3)
        using Addr = Register::Address<0xffffe6d0,0xfc000000,0x00000000,std::uint32_t>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        ///Destination Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
    }
    namespace Dmac0Saddr4{    ///<DMAC Channel Source Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffe6dc,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace Dmac0Daddr4{    ///<DMAC Channel Destination Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffe6e0,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace Dmac0Dscr4{    ///<DMAC Channel Descriptor Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffe6e4,0x00000000,0x00000000,std::uint32_t>;
        ///Descriptor Interface Selection
        enum class DscrifVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf2> ahbIf2{};
        }
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace Dmac0Ctrla4{    ///<DMAC Channel Control A Register (ch_num = 4)
        using Addr = Register::Address<0xffffe6e8,0x4c880000,0x00000000,std::uint32_t>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        ///Destination Chunk Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
            dword=0x00000003,     ///<the transfer size is set to 64-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::dword> dword{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
            dword=0x00000003,     ///<the transfer size is set to 64-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::dword> dword{};
        }
        ///Current Descriptor Stop Command and Transfer Completed Memory Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Dmac0Ctrlb4{    ///<DMAC Channel Control B Register (ch_num = 4)
        using Addr = Register::Address<0xffffe6ec,0x0c8eeecc,0x00000000,std::uint32_t>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB_Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB_Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB_Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB_Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB_Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB_Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf2> ahbIf2{};
        }
        ///Source Picture-in-Picture Mode
        enum class SrcpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcpipVal> srcPip{}; 
        namespace SrcpipValC{
            constexpr Register::FieldValue<decltype(srcPip)::Type,SrcpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(srcPip)::Type,SrcpipVal::enable> enable{};
        }
        ///Destination Picture-in-Picture Mode
        enum class DstpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstpipVal> dstPip{}; 
        namespace DstpipValC{
            constexpr Register::FieldValue<decltype(dstPip)::Type,DstpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dstPip)::Type,DstpipVal::enable> enable{};
        }
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDmaFc> per2perDmaFc{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        ///Interrupt Enable Not
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///Automatic Multiple Buffer Transfer
        enum class Auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::disable> disable{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::enable> enable{};
        }
    }
    namespace Dmac0Cfg4{    ///<DMAC Channel Configuration Register (ch_num = 4)
        using Addr = Register::Address<0xffffe6f0,0xc88e0000,0x00000000,std::uint32_t>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Source Reloaded from Previous
        enum class SrcrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcrepVal> srcRep{}; 
        namespace SrcrepValC{
            constexpr Register::FieldValue<decltype(srcRep)::Type,SrcrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(srcRep)::Type,SrcrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::hw> hw{};
        }
        ///SRC_PER Most Significant Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> srcPerMsb{}; 
        ///Destination Reloaded from Previous
        enum class DstrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstrepVal> dstRep{}; 
        namespace DstrepValC{
            constexpr Register::FieldValue<decltype(dstRep)::Type,DstrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(dstRep)::Type,DstrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::hw> hw{};
        }
        ///DST_PER Most Significant Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> dstPerMsb{}; 
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB)::Type,LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace Dmac0Spip4{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 4)
        using Addr = Register::Address<0xffffe6f4,0xfc000000,0x00000000,std::uint32_t>;
        ///Source Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        ///Source Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
    }
    namespace Dmac0Dpip4{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 4)
        using Addr = Register::Address<0xffffe6f8,0xfc000000,0x00000000,std::uint32_t>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        ///Destination Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
    }
    namespace Dmac0Saddr5{    ///<DMAC Channel Source Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffe704,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace Dmac0Daddr5{    ///<DMAC Channel Destination Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffe708,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace Dmac0Dscr5{    ///<DMAC Channel Descriptor Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffe70c,0x00000000,0x00000000,std::uint32_t>;
        ///Descriptor Interface Selection
        enum class DscrifVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf2> ahbIf2{};
        }
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace Dmac0Ctrla5{    ///<DMAC Channel Control A Register (ch_num = 5)
        using Addr = Register::Address<0xffffe710,0x4c880000,0x00000000,std::uint32_t>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        ///Destination Chunk Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
            dword=0x00000003,     ///<the transfer size is set to 64-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::dword> dword{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
            dword=0x00000003,     ///<the transfer size is set to 64-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::dword> dword{};
        }
        ///Current Descriptor Stop Command and Transfer Completed Memory Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Dmac0Ctrlb5{    ///<DMAC Channel Control B Register (ch_num = 5)
        using Addr = Register::Address<0xffffe714,0x0c8eeecc,0x00000000,std::uint32_t>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB_Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB_Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB_Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB_Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB_Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB_Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf2> ahbIf2{};
        }
        ///Source Picture-in-Picture Mode
        enum class SrcpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcpipVal> srcPip{}; 
        namespace SrcpipValC{
            constexpr Register::FieldValue<decltype(srcPip)::Type,SrcpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(srcPip)::Type,SrcpipVal::enable> enable{};
        }
        ///Destination Picture-in-Picture Mode
        enum class DstpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstpipVal> dstPip{}; 
        namespace DstpipValC{
            constexpr Register::FieldValue<decltype(dstPip)::Type,DstpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dstPip)::Type,DstpipVal::enable> enable{};
        }
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDmaFc> per2perDmaFc{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        ///Interrupt Enable Not
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///Automatic Multiple Buffer Transfer
        enum class Auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::disable> disable{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::enable> enable{};
        }
    }
    namespace Dmac0Cfg5{    ///<DMAC Channel Configuration Register (ch_num = 5)
        using Addr = Register::Address<0xffffe718,0xc88e0000,0x00000000,std::uint32_t>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Source Reloaded from Previous
        enum class SrcrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcrepVal> srcRep{}; 
        namespace SrcrepValC{
            constexpr Register::FieldValue<decltype(srcRep)::Type,SrcrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(srcRep)::Type,SrcrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::hw> hw{};
        }
        ///SRC_PER Most Significant Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> srcPerMsb{}; 
        ///Destination Reloaded from Previous
        enum class DstrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstrepVal> dstRep{}; 
        namespace DstrepValC{
            constexpr Register::FieldValue<decltype(dstRep)::Type,DstrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(dstRep)::Type,DstrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::hw> hw{};
        }
        ///DST_PER Most Significant Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> dstPerMsb{}; 
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB)::Type,LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace Dmac0Spip5{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 5)
        using Addr = Register::Address<0xffffe71c,0xfc000000,0x00000000,std::uint32_t>;
        ///Source Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        ///Source Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
    }
    namespace Dmac0Dpip5{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 5)
        using Addr = Register::Address<0xffffe720,0xfc000000,0x00000000,std::uint32_t>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        ///Destination Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
    }
    namespace Dmac0Saddr6{    ///<DMAC Channel Source Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffe72c,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace Dmac0Daddr6{    ///<DMAC Channel Destination Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffe730,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace Dmac0Dscr6{    ///<DMAC Channel Descriptor Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffe734,0x00000000,0x00000000,std::uint32_t>;
        ///Descriptor Interface Selection
        enum class DscrifVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf2> ahbIf2{};
        }
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace Dmac0Ctrla6{    ///<DMAC Channel Control A Register (ch_num = 6)
        using Addr = Register::Address<0xffffe738,0x4c880000,0x00000000,std::uint32_t>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        ///Destination Chunk Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
            dword=0x00000003,     ///<the transfer size is set to 64-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::dword> dword{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
            dword=0x00000003,     ///<the transfer size is set to 64-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::dword> dword{};
        }
        ///Current Descriptor Stop Command and Transfer Completed Memory Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Dmac0Ctrlb6{    ///<DMAC Channel Control B Register (ch_num = 6)
        using Addr = Register::Address<0xffffe73c,0x0c8eeecc,0x00000000,std::uint32_t>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB_Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB_Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB_Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB_Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB_Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB_Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf2> ahbIf2{};
        }
        ///Source Picture-in-Picture Mode
        enum class SrcpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcpipVal> srcPip{}; 
        namespace SrcpipValC{
            constexpr Register::FieldValue<decltype(srcPip)::Type,SrcpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(srcPip)::Type,SrcpipVal::enable> enable{};
        }
        ///Destination Picture-in-Picture Mode
        enum class DstpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstpipVal> dstPip{}; 
        namespace DstpipValC{
            constexpr Register::FieldValue<decltype(dstPip)::Type,DstpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dstPip)::Type,DstpipVal::enable> enable{};
        }
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDmaFc> per2perDmaFc{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        ///Interrupt Enable Not
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///Automatic Multiple Buffer Transfer
        enum class Auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::disable> disable{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::enable> enable{};
        }
    }
    namespace Dmac0Cfg6{    ///<DMAC Channel Configuration Register (ch_num = 6)
        using Addr = Register::Address<0xffffe740,0xc88e0000,0x00000000,std::uint32_t>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Source Reloaded from Previous
        enum class SrcrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcrepVal> srcRep{}; 
        namespace SrcrepValC{
            constexpr Register::FieldValue<decltype(srcRep)::Type,SrcrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(srcRep)::Type,SrcrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::hw> hw{};
        }
        ///SRC_PER Most Significant Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> srcPerMsb{}; 
        ///Destination Reloaded from Previous
        enum class DstrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstrepVal> dstRep{}; 
        namespace DstrepValC{
            constexpr Register::FieldValue<decltype(dstRep)::Type,DstrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(dstRep)::Type,DstrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::hw> hw{};
        }
        ///DST_PER Most Significant Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> dstPerMsb{}; 
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB)::Type,LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace Dmac0Spip6{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 6)
        using Addr = Register::Address<0xffffe744,0xfc000000,0x00000000,std::uint32_t>;
        ///Source Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        ///Source Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
    }
    namespace Dmac0Dpip6{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 6)
        using Addr = Register::Address<0xffffe748,0xfc000000,0x00000000,std::uint32_t>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        ///Destination Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
    }
    namespace Dmac0Saddr7{    ///<DMAC Channel Source Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffe754,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace Dmac0Daddr7{    ///<DMAC Channel Destination Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffe758,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace Dmac0Dscr7{    ///<DMAC Channel Descriptor Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffe75c,0x00000000,0x00000000,std::uint32_t>;
        ///Descriptor Interface Selection
        enum class DscrifVal {
            ahbIf0=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf)::Type,DscrifVal::ahbIf2> ahbIf2{};
        }
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace Dmac0Ctrla7{    ///<DMAC Channel Control A Register (ch_num = 7)
        using Addr = Register::Address<0xffffe760,0x4c880000,0x00000000,std::uint32_t>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> scsize{}; 
        ///Destination Chunk Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> dcsize{}; 
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
            dword=0x00000003,     ///<the transfer size is set to 64-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::dword> dword{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
            dword=0x00000003,     ///<the transfer size is set to 64-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::dword> dword{};
        }
        ///Current Descriptor Stop Command and Transfer Completed Memory Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace Dmac0Ctrlb7{    ///<DMAC Channel Control B Register (ch_num = 7)
        using Addr = Register::Address<0xffffe764,0x0c8eeecc,0x00000000,std::uint32_t>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIf0=0x00000000,     ///<The source transfer is done via AHB_Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB_Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB_Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif)::Type,SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIf0=0x00000000,     ///<The destination transfer is done via AHB_Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB_Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB_Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf0> ahbIf0{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif)::Type,DifVal::ahbIf2> ahbIf2{};
        }
        ///Source Picture-in-Picture Mode
        enum class SrcpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The source data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the source PIP counter reaches the programmable boundary, the address is automatically incremented by a user defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcpipVal> srcPip{}; 
        namespace SrcpipValC{
            constexpr Register::FieldValue<decltype(srcPip)::Type,SrcpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(srcPip)::Type,SrcpipVal::enable> enable{};
        }
        ///Destination Picture-in-Picture Mode
        enum class DstpipVal {
            disable=0x00000000,     ///<Picture-in-Picture mode is disabled. The Destination data area is contiguous.
            enable=0x00000001,     ///<Picture-in-Picture mode is enabled. When the Destination PIP counter reaches the programmable boundary the address is automatically incremented by a user-defined amount.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstpipVal> dstPip{}; 
        namespace DstpipValC{
            constexpr Register::FieldValue<decltype(dstPip)::Type,DstpipVal::disable> disable{};
            constexpr Register::FieldValue<decltype(dstPip)::Type,DstpipVal::enable> enable{};
        }
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc)::Type,FcVal::per2perDmaFc> per2perDmaFc{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        ///Interrupt Enable Not
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///Automatic Multiple Buffer Transfer
        enum class Auto_Val {
            disable=0x00000000,     ///<Automatic multiple buffer transfer is disabled.
            enable=0x00000001,     ///<Automatic multiple buffer transfer is enabled. This bit enables replay mode or contiguous mode when several buffers are transferred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Auto_Val> auto_{}; 
        namespace Auto_ValC{
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::disable> disable{};
            constexpr Register::FieldValue<decltype(auto_)::Type,Auto_Val::enable> enable{};
        }
    }
    namespace Dmac0Cfg7{    ///<DMAC Channel Configuration Register (ch_num = 7)
        using Addr = Register::Address<0xffffe768,0xc88e0000,0x00000000,std::uint32_t>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Source Reloaded from Previous
        enum class SrcrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, source address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the source address and the control register are reloaded from previous transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SrcrepVal> srcRep{}; 
        namespace SrcrepValC{
            constexpr Register::FieldValue<decltype(srcRep)::Type,SrcrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(srcRep)::Type,SrcrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::hw> hw{};
        }
        ///SRC_PER Most Significant Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> srcPerMsb{}; 
        ///Destination Reloaded from Previous
        enum class DstrepVal {
            contiguousAddr=0x00000000,     ///<When automatic mode is activated, destination address is contiguous between two buffers.
            reloadAddr=0x00000001,     ///<When automatic mode is activated, the destination and the control register are reloaded from the pre-vious transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DstrepVal> dstRep{}; 
        namespace DstrepValC{
            constexpr Register::FieldValue<decltype(dstRep)::Type,DstrepVal::contiguousAddr> contiguousAddr{};
            constexpr Register::FieldValue<decltype(dstRep)::Type,DstrepVal::reloadAddr> reloadAddr{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::hw> hw{};
        }
        ///DST_PER Most Significant Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> dstPerMsb{}; 
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB)::Type,LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace Dmac0Spip7{    ///<DMAC Channel Source Picture-in-Picture Configuration Register (ch_num = 7)
        using Addr = Register::Address<0xffffe76c,0xfc000000,0x00000000,std::uint32_t>;
        ///Source Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> spipHole{}; 
        ///Source Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> spipBoundary{}; 
    }
    namespace Dmac0Dpip7{    ///<DMAC Channel Destination Picture-in-Picture Configuration Register (ch_num = 7)
        using Addr = Register::Address<0xffffe770,0xfc000000,0x00000000,std::uint32_t>;
        ///Destination Picture-in-Picture Hole
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dpipHole{}; 
        ///Destination Picture-in-Picture Boundary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> dpipBoundary{}; 
    }
    namespace Dmac0Wpmr{    ///<DMAC Write Protect Mode Register
        using Addr = Register::Address<0xffffe7e4,0x000000fe,0x00000000,std::uint32_t>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace Dmac0Wpsr{    ///<DMAC Write Protect Status Register
        using Addr = Register::Address<0xffffe7e8,0xff0000fe,0x00000000,std::uint32_t>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvsrc{}; 
    }
}
