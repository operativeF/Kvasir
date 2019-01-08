#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Hash processor
    namespace HashCr{    ///<control register
        using Addr = Register::Address<0x48021400,0xfffac003,0x00000000,std::uint32_t>;
        ///Initialize message digest              calculation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> init{}; 
        ///DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmae{}; 
        ///Data type selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> datatype{}; 
        ///Mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Algorithm selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> algo0{}; 
        ///Number of words already              pushed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbw{}; 
        ///DIN not empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dinne{}; 
        ///Multiple DMA Transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mdmat{}; 
        ///Long key selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lkey{}; 
        ///ALGO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> algo1{}; 
    }
    namespace HashDin{    ///<data input register
        using Addr = Register::Address<0x48021404,0x00000000,0x00000000,std::uint32_t>;
        ///Data input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datain{}; 
    }
    namespace HashStr{    ///<start register
        using Addr = Register::Address<0x48021408,0xfffffee0,0x00000000,std::uint32_t>;
        ///Digest calculation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dcal{}; 
        ///Number of valid bits in the last word of              the message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> nblw{}; 
    }
    namespace HashHr0{    ///<digest registers
        using Addr = Register::Address<0x4802140c,0x00000000,0x00000000,std::uint32_t>;
        ///H0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h0{}; 
    }
    namespace HashHr1{    ///<digest registers
        using Addr = Register::Address<0x48021410,0x00000000,0x00000000,std::uint32_t>;
        ///H1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h1{}; 
    }
    namespace HashHr2{    ///<digest registers
        using Addr = Register::Address<0x48021414,0x00000000,0x00000000,std::uint32_t>;
        ///H2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h2{}; 
    }
    namespace HashHr3{    ///<digest registers
        using Addr = Register::Address<0x48021418,0x00000000,0x00000000,std::uint32_t>;
        ///H3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h3{}; 
    }
    namespace HashHr4{    ///<digest registers
        using Addr = Register::Address<0x4802141c,0x00000000,0x00000000,std::uint32_t>;
        ///H4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h4{}; 
    }
    namespace HashImr{    ///<interrupt enable register
        using Addr = Register::Address<0x48021420,0xfffffffc,0x00000000,std::uint32_t>;
        ///Digest calculation completion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcie{}; 
        ///Data input interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dinie{}; 
    }
    namespace HashSr{    ///<status register
        using Addr = Register::Address<0x48021424,0xfffffff0,0x00000000,std::uint32_t>;
        ///Busy bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///DMA Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmas{}; 
        ///Digest calculation completion interrupt              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcis{}; 
        ///Data input interrupt              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dinis{}; 
    }
    namespace HashCsr0{    ///<context swap registers
        using Addr = Register::Address<0x480214f8,0x00000000,0x00000000,std::uint32_t>;
        ///CSR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr0{}; 
    }
    namespace HashCsr1{    ///<context swap registers
        using Addr = Register::Address<0x480214fc,0x00000000,0x00000000,std::uint32_t>;
        ///CSR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr1{}; 
    }
    namespace HashCsr2{    ///<context swap registers
        using Addr = Register::Address<0x48021500,0x00000000,0x00000000,std::uint32_t>;
        ///CSR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr2{}; 
    }
    namespace HashCsr3{    ///<context swap registers
        using Addr = Register::Address<0x48021504,0x00000000,0x00000000,std::uint32_t>;
        ///CSR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr3{}; 
    }
    namespace HashCsr4{    ///<context swap registers
        using Addr = Register::Address<0x48021508,0x00000000,0x00000000,std::uint32_t>;
        ///CSR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr4{}; 
    }
    namespace HashCsr5{    ///<context swap registers
        using Addr = Register::Address<0x4802150c,0x00000000,0x00000000,std::uint32_t>;
        ///CSR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr5{}; 
    }
    namespace HashCsr6{    ///<context swap registers
        using Addr = Register::Address<0x48021510,0x00000000,0x00000000,std::uint32_t>;
        ///CSR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr6{}; 
    }
    namespace HashCsr7{    ///<context swap registers
        using Addr = Register::Address<0x48021514,0x00000000,0x00000000,std::uint32_t>;
        ///CSR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr7{}; 
    }
    namespace HashCsr8{    ///<context swap registers
        using Addr = Register::Address<0x48021518,0x00000000,0x00000000,std::uint32_t>;
        ///CSR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr8{}; 
    }
    namespace HashCsr9{    ///<context swap registers
        using Addr = Register::Address<0x4802151c,0x00000000,0x00000000,std::uint32_t>;
        ///CSR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr9{}; 
    }
    namespace HashCsr10{    ///<context swap registers
        using Addr = Register::Address<0x48021520,0x00000000,0x00000000,std::uint32_t>;
        ///CSR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr10{}; 
    }
    namespace HashCsr11{    ///<context swap registers
        using Addr = Register::Address<0x48021524,0x00000000,0x00000000,std::uint32_t>;
        ///CSR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr11{}; 
    }
    namespace HashCsr12{    ///<context swap registers
        using Addr = Register::Address<0x48021528,0x00000000,0x00000000,std::uint32_t>;
        ///CSR12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr12{}; 
    }
    namespace HashCsr13{    ///<context swap registers
        using Addr = Register::Address<0x4802152c,0x00000000,0x00000000,std::uint32_t>;
        ///CSR13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr13{}; 
    }
    namespace HashCsr14{    ///<context swap registers
        using Addr = Register::Address<0x48021530,0x00000000,0x00000000,std::uint32_t>;
        ///CSR14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr14{}; 
    }
    namespace HashCsr15{    ///<context swap registers
        using Addr = Register::Address<0x48021534,0x00000000,0x00000000,std::uint32_t>;
        ///CSR15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr15{}; 
    }
    namespace HashCsr16{    ///<context swap registers
        using Addr = Register::Address<0x48021538,0x00000000,0x00000000,std::uint32_t>;
        ///CSR16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr16{}; 
    }
    namespace HashCsr17{    ///<context swap registers
        using Addr = Register::Address<0x4802153c,0x00000000,0x00000000,std::uint32_t>;
        ///CSR17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr17{}; 
    }
    namespace HashCsr18{    ///<context swap registers
        using Addr = Register::Address<0x48021540,0x00000000,0x00000000,std::uint32_t>;
        ///CSR18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr18{}; 
    }
    namespace HashCsr19{    ///<context swap registers
        using Addr = Register::Address<0x48021544,0x00000000,0x00000000,std::uint32_t>;
        ///CSR19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr19{}; 
    }
    namespace HashCsr20{    ///<context swap registers
        using Addr = Register::Address<0x48021548,0x00000000,0x00000000,std::uint32_t>;
        ///CSR20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr20{}; 
    }
    namespace HashCsr21{    ///<context swap registers
        using Addr = Register::Address<0x4802154c,0x00000000,0x00000000,std::uint32_t>;
        ///CSR21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr21{}; 
    }
    namespace HashCsr22{    ///<context swap registers
        using Addr = Register::Address<0x48021550,0x00000000,0x00000000,std::uint32_t>;
        ///CSR22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr22{}; 
    }
    namespace HashCsr23{    ///<context swap registers
        using Addr = Register::Address<0x48021554,0x00000000,0x00000000,std::uint32_t>;
        ///CSR23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr23{}; 
    }
    namespace HashCsr24{    ///<context swap registers
        using Addr = Register::Address<0x48021558,0x00000000,0x00000000,std::uint32_t>;
        ///CSR24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr24{}; 
    }
    namespace HashCsr25{    ///<context swap registers
        using Addr = Register::Address<0x4802155c,0x00000000,0x00000000,std::uint32_t>;
        ///CSR25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr25{}; 
    }
    namespace HashCsr26{    ///<context swap registers
        using Addr = Register::Address<0x48021560,0x00000000,0x00000000,std::uint32_t>;
        ///CSR26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr26{}; 
    }
    namespace HashCsr27{    ///<context swap registers
        using Addr = Register::Address<0x48021564,0x00000000,0x00000000,std::uint32_t>;
        ///CSR27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr27{}; 
    }
    namespace HashCsr28{    ///<context swap registers
        using Addr = Register::Address<0x48021568,0x00000000,0x00000000,std::uint32_t>;
        ///CSR28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr28{}; 
    }
    namespace HashCsr29{    ///<context swap registers
        using Addr = Register::Address<0x4802156c,0x00000000,0x00000000,std::uint32_t>;
        ///CSR29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr29{}; 
    }
    namespace HashCsr30{    ///<context swap registers
        using Addr = Register::Address<0x48021570,0x00000000,0x00000000,std::uint32_t>;
        ///CSR30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr30{}; 
    }
    namespace HashCsr31{    ///<context swap registers
        using Addr = Register::Address<0x48021574,0x00000000,0x00000000,std::uint32_t>;
        ///CSR31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr31{}; 
    }
    namespace HashCsr32{    ///<context swap registers
        using Addr = Register::Address<0x48021578,0x00000000,0x00000000,std::uint32_t>;
        ///CSR32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr32{}; 
    }
    namespace HashCsr33{    ///<context swap registers
        using Addr = Register::Address<0x4802157c,0x00000000,0x00000000,std::uint32_t>;
        ///CSR33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr33{}; 
    }
    namespace HashCsr34{    ///<context swap registers
        using Addr = Register::Address<0x48021580,0x00000000,0x00000000,std::uint32_t>;
        ///CSR34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr34{}; 
    }
    namespace HashCsr35{    ///<context swap registers
        using Addr = Register::Address<0x48021584,0x00000000,0x00000000,std::uint32_t>;
        ///CSR35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr35{}; 
    }
    namespace HashCsr36{    ///<context swap registers
        using Addr = Register::Address<0x48021588,0x00000000,0x00000000,std::uint32_t>;
        ///CSR36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr36{}; 
    }
    namespace HashCsr37{    ///<context swap registers
        using Addr = Register::Address<0x4802158c,0x00000000,0x00000000,std::uint32_t>;
        ///CSR37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr37{}; 
    }
    namespace HashCsr38{    ///<context swap registers
        using Addr = Register::Address<0x48021590,0x00000000,0x00000000,std::uint32_t>;
        ///CSR38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr38{}; 
    }
    namespace HashCsr39{    ///<context swap registers
        using Addr = Register::Address<0x48021594,0x00000000,0x00000000,std::uint32_t>;
        ///CSR39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr39{}; 
    }
    namespace HashCsr40{    ///<context swap registers
        using Addr = Register::Address<0x48021598,0x00000000,0x00000000,std::uint32_t>;
        ///CSR40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr40{}; 
    }
    namespace HashCsr41{    ///<context swap registers
        using Addr = Register::Address<0x4802159c,0x00000000,0x00000000,std::uint32_t>;
        ///CSR41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr41{}; 
    }
    namespace HashCsr42{    ///<context swap registers
        using Addr = Register::Address<0x480215a0,0x00000000,0x00000000,std::uint32_t>;
        ///CSR42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr42{}; 
    }
    namespace HashCsr43{    ///<context swap registers
        using Addr = Register::Address<0x480215a4,0x00000000,0x00000000,std::uint32_t>;
        ///CSR43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr43{}; 
    }
    namespace HashCsr44{    ///<context swap registers
        using Addr = Register::Address<0x480215a8,0x00000000,0x00000000,std::uint32_t>;
        ///CSR44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr44{}; 
    }
    namespace HashCsr45{    ///<context swap registers
        using Addr = Register::Address<0x480215ac,0x00000000,0x00000000,std::uint32_t>;
        ///CSR45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr45{}; 
    }
    namespace HashCsr46{    ///<context swap registers
        using Addr = Register::Address<0x480215b0,0x00000000,0x00000000,std::uint32_t>;
        ///CSR46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr46{}; 
    }
    namespace HashCsr47{    ///<context swap registers
        using Addr = Register::Address<0x480215b4,0x00000000,0x00000000,std::uint32_t>;
        ///CSR47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr47{}; 
    }
    namespace HashCsr48{    ///<context swap registers
        using Addr = Register::Address<0x480215b8,0x00000000,0x00000000,std::uint32_t>;
        ///CSR48
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr48{}; 
    }
    namespace HashCsr49{    ///<context swap registers
        using Addr = Register::Address<0x480215bc,0x00000000,0x00000000,std::uint32_t>;
        ///CSR49
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr49{}; 
    }
    namespace HashCsr50{    ///<context swap registers
        using Addr = Register::Address<0x480215c0,0x00000000,0x00000000,std::uint32_t>;
        ///CSR50
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr50{}; 
    }
    namespace HashCsr51{    ///<context swap registers
        using Addr = Register::Address<0x480215c4,0x00000000,0x00000000,std::uint32_t>;
        ///CSR51
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr51{}; 
    }
    namespace HashCsr52{    ///<context swap registers
        using Addr = Register::Address<0x480215c8,0x00000000,0x00000000,std::uint32_t>;
        ///CSR52
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr52{}; 
    }
    namespace HashCsr53{    ///<context swap registers
        using Addr = Register::Address<0x480215cc,0x00000000,0x00000000,std::uint32_t>;
        ///CSR53
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr53{}; 
    }
    namespace HashHashHr0{    ///<HASH digest register
        using Addr = Register::Address<0x48021710,0x00000000,0x00000000,std::uint32_t>;
        ///H0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h0{}; 
    }
    namespace HashHashHr1{    ///<read-only
        using Addr = Register::Address<0x48021714,0x00000000,0x00000000,std::uint32_t>;
        ///H1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h1{}; 
    }
    namespace HashHashHr2{    ///<read-only
        using Addr = Register::Address<0x48021718,0x00000000,0x00000000,std::uint32_t>;
        ///H2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h2{}; 
    }
    namespace HashHashHr3{    ///<read-only
        using Addr = Register::Address<0x4802171c,0x00000000,0x00000000,std::uint32_t>;
        ///H3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h3{}; 
    }
    namespace HashHashHr4{    ///<read-only
        using Addr = Register::Address<0x48021720,0x00000000,0x00000000,std::uint32_t>;
        ///H4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h4{}; 
    }
    namespace HashHashHr5{    ///<read-only
        using Addr = Register::Address<0x48021724,0x00000000,0x00000000,std::uint32_t>;
        ///H5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h5{}; 
    }
    namespace HashHashHr6{    ///<read-only
        using Addr = Register::Address<0x48021728,0x00000000,0x00000000,std::uint32_t>;
        ///H6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h6{}; 
    }
    namespace HashHashHr7{    ///<read-only
        using Addr = Register::Address<0x4802172c,0x00000000,0x00000000,std::uint32_t>;
        ///H7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h7{}; 
    }
}
