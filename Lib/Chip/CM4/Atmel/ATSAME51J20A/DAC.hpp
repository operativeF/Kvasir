#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Digital-to-Analog Converter
    namespace DacCtrla{    ///<Control A
        using Addr = Register::Address<0x43002400,0xfffffffc,0x00000000,std::uint8_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable DAC Controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace DacCtrlb{    ///<Control B
        using Addr = Register::Address<0x43002401,0xfffffff8,0x00000000,std::uint8_t>;
        ///Differential mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> diff{}; 
        ///Reference Selection for DAC0/1
        enum class RefselVal {
            vrefpu=0x00000000,     ///<External reference unbuffered
            vddana=0x00000001,     ///<Analog supply
            vrefpb=0x00000002,     ///<External reference buffered
            intref=0x00000003,     ///<Internal bandgap reference
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,RefselVal> refsel{}; 
        namespace RefselValC{
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::vrefpu> vrefpu{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::vddana> vddana{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::vrefpb> vrefpb{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::intref> intref{};
        }
    }
    namespace DacEvctrl{    ///<Event Control
        using Addr = Register::Address<0x43002402,0xffffff00,0x00000000,std::uint8_t>;
        ///Start Conversion Event Input DAC 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> startei0{}; 
        ///Start Conversion Event Input DAC 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> startei1{}; 
        ///Data Buffer Empty Event Output DAC 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> emptyeo0{}; 
        ///Data Buffer Empty Event Output DAC 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> emptyeo1{}; 
        ///Enable Invertion of DAC 0 input event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> invei0{}; 
        ///Enable Invertion of DAC 1 input event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> invei1{}; 
        ///Result Ready Event Output 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> resrdyeo0{}; 
        ///Result Ready Event Output 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> resrdyeo1{}; 
    }
    namespace DacIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x43002404,0xffffff00,0x00000000,std::uint8_t>;
        ///Underrun 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> underrun0{}; 
        ///Underrun 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> underrun1{}; 
        ///Data Buffer 0 Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> empty0{}; 
        ///Data Buffer 1 Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> empty1{}; 
        ///Result 0 Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> resrdy0{}; 
        ///Result 1 Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> resrdy1{}; 
        ///Overrun 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> overrun0{}; 
        ///Overrun 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> overrun1{}; 
    }
    namespace DacIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x43002405,0xffffff00,0x00000000,std::uint8_t>;
        ///Underrun 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> underrun0{}; 
        ///Underrun 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> underrun1{}; 
        ///Data Buffer 0 Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> empty0{}; 
        ///Data Buffer 1 Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> empty1{}; 
        ///Result 0 Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> resrdy0{}; 
        ///Result 1 Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> resrdy1{}; 
        ///Overrun 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> overrun0{}; 
        ///Overrun 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> overrun1{}; 
    }
    namespace DacIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x43002406,0xffffff00,0x00000000,std::uint8_t>;
        ///Result 0 Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> underrun0{}; 
        ///Result 1 Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> underrun1{}; 
        ///Data Buffer 0 Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> empty0{}; 
        ///Data Buffer 1 Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> empty1{}; 
        ///Result 0 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> resrdy0{}; 
        ///Result 1 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> resrdy1{}; 
        ///Result 0 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> overrun0{}; 
        ///Result 1 Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> overrun1{}; 
    }
    namespace DacStatus{    ///<Status
        using Addr = Register::Address<0x43002407,0xfffffff0,0x00000000,std::uint8_t>;
        ///DAC 0 Startup Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ready0{}; 
        ///DAC 1 Startup Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ready1{}; 
        ///DAC 0 End of Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eoc0{}; 
        ///DAC 1 End of Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eoc1{}; 
    }
    namespace DacSyncbusy{    ///<Synchronization Busy
        using Addr = Register::Address<0x43002408,0xffffffc0,0x00000000,std::uint32_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///DAC Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
        ///Data DAC 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> data0{}; 
        ///Data DAC 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> data1{}; 
        ///Data Buffer DAC 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> databuf0{}; 
        ///Data Buffer DAC 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> databuf1{}; 
    }
    namespace DacDbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x43002418,0xfffffffe,0x00000000,std::uint8_t>;
        ///Debug Run
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace DacDacctrl0{    ///<DAC n Control
        using Addr = Register::Address<0x4300240c,0xffff1010,0x00000000,std::uint16_t>;
        ///Left Adjusted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> leftadj{}; 
        ///Enable DAC0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Current Control
        enum class CctrlVal {
            cc100k=0x00000000,     ///<GCLK_DAC <= 1.2MHz (100kSPS)
            cc1m=0x00000001,     ///<1.2MHz < GCLK_DAC  <= 6MHz (500kSPS)
            cc12m=0x00000002,     ///<6MHz < GCLK_DAC <= 12MHz (1MSPS)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,CctrlVal> cctrl{}; 
        namespace CctrlValC{
            constexpr Register::FieldValue<decltype(cctrl)::Type,CctrlVal::cc100k> cc100k{};
            constexpr Register::FieldValue<decltype(cctrl)::Type,CctrlVal::cc1m> cc1m{};
            constexpr Register::FieldValue<decltype(cctrl)::Type,CctrlVal::cc12m> cc12m{};
        }
        ///Standalone Filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fext{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Dithering Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Refresh period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> refresh{}; 
        ///Sampling Rate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> osr{}; 
    }
    namespace DacDacctrl1{    ///<DAC n Control
        using Addr = Register::Address<0x4300240e,0xffff1010,0x00000000,std::uint16_t>;
        ///Left Adjusted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> leftadj{}; 
        ///Enable DAC0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Current Control
        enum class CctrlVal {
            cc100k=0x00000000,     ///<GCLK_DAC <= 1.2MHz (100kSPS)
            cc1m=0x00000001,     ///<1.2MHz < GCLK_DAC  <= 6MHz (500kSPS)
            cc12m=0x00000002,     ///<6MHz < GCLK_DAC <= 12MHz (1MSPS)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,CctrlVal> cctrl{}; 
        namespace CctrlValC{
            constexpr Register::FieldValue<decltype(cctrl)::Type,CctrlVal::cc100k> cc100k{};
            constexpr Register::FieldValue<decltype(cctrl)::Type,CctrlVal::cc1m> cc1m{};
            constexpr Register::FieldValue<decltype(cctrl)::Type,CctrlVal::cc12m> cc12m{};
        }
        ///Standalone Filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fext{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Dithering Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dither{}; 
        ///Refresh period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> refresh{}; 
        ///Sampling Rate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> osr{}; 
    }
    namespace DacData0{    ///<DAC n Data
        using Addr = Register::Address<0x43002410,0xffff0000,0x00000000,std::uint16_t>;
        ///DAC0 Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> data{}; 
    }
    namespace DacData1{    ///<DAC n Data
        using Addr = Register::Address<0x43002412,0xffff0000,0x00000000,std::uint16_t>;
        ///DAC0 Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> data{}; 
    }
    namespace DacDatabuf0{    ///<DAC n Data Buffer
        using Addr = Register::Address<0x43002414,0xffff0000,0x00000000,std::uint16_t>;
        ///DAC0 Data Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> databuf{}; 
    }
    namespace DacDatabuf1{    ///<DAC n Data Buffer
        using Addr = Register::Address<0x43002416,0xffff0000,0x00000000,std::uint16_t>;
        ///DAC0 Data Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> databuf{}; 
    }
    namespace DacResult0{    ///<Filter Result
        using Addr = Register::Address<0x4300241c,0xffff0000,0x00000000,std::uint16_t>;
        ///Filter Result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> result{}; 
    }
    namespace DacResult1{    ///<Filter Result
        using Addr = Register::Address<0x4300241e,0xffff0000,0x00000000,std::uint16_t>;
        ///Filter Result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> result{}; 
    }
}
