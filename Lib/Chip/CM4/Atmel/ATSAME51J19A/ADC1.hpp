#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Analog Digital Converter 1
    namespace Adc1Ctrla{    ///<Control A
        using Addr = Register::Address<0x43002000,0xffff7804,0x00000000,std::uint16_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Dual Mode Trigger Selection
        enum class DualselVal {
            both=0x00000000,     ///<Start event or software trigger will start a conversion on both ADCs
            interleave=0x00000001,     ///<START event or software trigger will alternatingly start a conversion on ADC0 and ADC1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,DualselVal> dualsel{}; 
        namespace DualselValC{
            constexpr Register::FieldValue<decltype(dualsel)::Type,DualselVal::both> both{};
            constexpr Register::FieldValue<decltype(dualsel)::Type,DualselVal::interleave> interleave{};
        }
        ///Slave Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> slaveen{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///On Demand Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
        ///Prescaler Configuration
        enum class PrescalerVal {
            div2=0x00000000,     ///<Peripheral clock divided by 2
            div4=0x00000001,     ///<Peripheral clock divided by 4
            div8=0x00000002,     ///<Peripheral clock divided by 8
            div16=0x00000003,     ///<Peripheral clock divided by 16
            div32=0x00000004,     ///<Peripheral clock divided by 32
            div64=0x00000005,     ///<Peripheral clock divided by 64
            div128=0x00000006,     ///<Peripheral clock divided by 128
            div256=0x00000007,     ///<Peripheral clock divided by 256
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,PrescalerVal> prescaler{}; 
        namespace PrescalerValC{
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div2> div2{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div4> div4{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div8> div8{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div16> div16{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div32> div32{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div64> div64{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div128> div128{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::div256> div256{};
        }
        ///Rail to Rail Operation Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> r2r{}; 
    }
    namespace Adc1Evctrl{    ///<Event Control
        using Addr = Register::Address<0x43002002,0xffffffc0,0x00000000,std::uint8_t>;
        ///Flush Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flushei{}; 
        ///Start Conversion Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> startei{}; 
        ///Flush Event Invert Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> flushinv{}; 
        ///Start Conversion Event Invert Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> startinv{}; 
        ///Result Ready Event Out
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> resrdyeo{}; 
        ///Window Monitor Event Out
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> winmoneo{}; 
    }
    namespace Adc1Dbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x43002003,0xfffffffe,0x00000000,std::uint8_t>;
        ///Debug Run
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace Adc1Inputctrl{    ///<Input Control
        using Addr = Register::Address<0x43002004,0xffff6060,0x00000000,std::uint16_t>;
        ///Positive Mux Input Selection
        enum class MuxposVal {
            ain0=0x00000000,     ///<ADC AIN0 Pin
            ain1=0x00000001,     ///<ADC AIN1 Pin
            ain2=0x00000002,     ///<ADC AIN2 Pin
            ain3=0x00000003,     ///<ADC AIN3 Pin
            ain4=0x00000004,     ///<ADC AIN4 Pin
            ain5=0x00000005,     ///<ADC AIN5 Pin
            ain6=0x00000006,     ///<ADC AIN6 Pin
            ain7=0x00000007,     ///<ADC AIN7 Pin
            ain8=0x00000008,     ///<ADC AIN8 Pin
            ain9=0x00000009,     ///<ADC AIN9 Pin
            ain10=0x0000000a,     ///<ADC AIN10 Pin
            ain11=0x0000000b,     ///<ADC AIN11 Pin
            ain12=0x0000000c,     ///<ADC AIN12 Pin
            ain13=0x0000000d,     ///<ADC AIN13 Pin
            ain14=0x0000000e,     ///<ADC AIN14 Pin
            ain15=0x0000000f,     ///<ADC AIN15 Pin
            ain16=0x00000010,     ///<ADC AIN16 Pin
            ain17=0x00000011,     ///<ADC AIN17 Pin
            ain18=0x00000012,     ///<ADC AIN18 Pin
            ain19=0x00000013,     ///<ADC AIN19 Pin
            ain20=0x00000014,     ///<ADC AIN20 Pin
            ain21=0x00000015,     ///<ADC AIN21 Pin
            ain22=0x00000016,     ///<ADC AIN22 Pin
            ain23=0x00000017,     ///<ADC AIN23 Pin
            scaledcorevcc=0x00000018,     ///<1/4 Scaled Core Supply
            scaledvbat=0x00000019,     ///<1/4 Scaled VBAT Supply
            scalediovcc=0x0000001a,     ///<1/4 Scaled I/O Supply
            bandgap=0x0000001b,     ///<Bandgap Voltage
            ptat=0x0000001c,     ///<Temperature Sensor
            ctat=0x0000001d,     ///<Temperature Sensor
            dac=0x0000001e,     ///<DAC Output
            ptc=0x0000001f,     ///<PTC output (only on ADC0)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,MuxposVal> muxpos{}; 
        namespace MuxposValC{
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain0> ain0{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain1> ain1{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain2> ain2{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain3> ain3{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain4> ain4{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain5> ain5{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain6> ain6{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain7> ain7{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain8> ain8{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain9> ain9{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain10> ain10{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain11> ain11{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain12> ain12{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain13> ain13{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain14> ain14{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain15> ain15{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain16> ain16{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain17> ain17{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain18> ain18{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain19> ain19{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain20> ain20{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain21> ain21{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain22> ain22{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ain23> ain23{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::scaledcorevcc> scaledcorevcc{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::scaledvbat> scaledvbat{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::scalediovcc> scalediovcc{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::bandgap> bandgap{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ptat> ptat{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ctat> ctat{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::dac> dac{};
            constexpr Register::FieldValue<decltype(muxpos)::Type,MuxposVal::ptc> ptc{};
        }
        ///Differential Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> diffmode{}; 
        ///Negative Mux Input Selection
        enum class MuxnegVal {
            ain0=0x00000000,     ///<ADC AIN0 Pin
            ain1=0x00000001,     ///<ADC AIN1 Pin
            ain2=0x00000002,     ///<ADC AIN2 Pin
            ain3=0x00000003,     ///<ADC AIN3 Pin
            ain4=0x00000004,     ///<ADC AIN4 Pin
            ain5=0x00000005,     ///<ADC AIN5 Pin
            ain6=0x00000006,     ///<ADC AIN6 Pin
            ain7=0x00000007,     ///<ADC AIN7 Pin
            gnd=0x00000018,     ///<Internal Ground
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,MuxnegVal> muxneg{}; 
        namespace MuxnegValC{
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::ain0> ain0{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::ain1> ain1{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::ain2> ain2{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::ain3> ain3{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::ain4> ain4{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::ain5> ain5{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::ain6> ain6{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::ain7> ain7{};
            constexpr Register::FieldValue<decltype(muxneg)::Type,MuxnegVal::gnd> gnd{};
        }
        ///Stop DMA Sequencing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dseqstop{}; 
    }
    namespace Adc1Ctrlb{    ///<Control B
        using Addr = Register::Address<0x43002006,0xfffff0e0,0x00000000,std::uint16_t>;
        ///Left-Adjusted Result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> leftadj{}; 
        ///Free Running Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> freerun{}; 
        ///Digital Correction Logic Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> corren{}; 
        ///Conversion Result Resolution
        enum class ResselVal {
            v12bit=0x00000000,     ///<12-bit result
            v16bit=0x00000001,     ///<For averaging mode output
            v10bit=0x00000002,     ///<10-bit result
            v8bit=0x00000003,     ///<8-bit result
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ResselVal> ressel{}; 
        namespace ResselValC{
            constexpr Register::FieldValue<decltype(ressel)::Type,ResselVal::v12bit> v12bit{};
            constexpr Register::FieldValue<decltype(ressel)::Type,ResselVal::v16bit> v16bit{};
            constexpr Register::FieldValue<decltype(ressel)::Type,ResselVal::v10bit> v10bit{};
            constexpr Register::FieldValue<decltype(ressel)::Type,ResselVal::v8bit> v8bit{};
        }
        ///Window Monitor Mode
        enum class WinmodeVal {
            disable=0x00000000,     ///<No window mode (default)
            mode1=0x00000001,     ///<RESULT > WINLT
            mode2=0x00000002,     ///<RESULT < WINUT
            mode3=0x00000003,     ///<WINLT < RESULT < WINUT
            mode4=0x00000004,     ///<!(WINLT < RESULT < WINUT)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,WinmodeVal> winmode{}; 
        namespace WinmodeValC{
            constexpr Register::FieldValue<decltype(winmode)::Type,WinmodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(winmode)::Type,WinmodeVal::mode1> mode1{};
            constexpr Register::FieldValue<decltype(winmode)::Type,WinmodeVal::mode2> mode2{};
            constexpr Register::FieldValue<decltype(winmode)::Type,WinmodeVal::mode3> mode3{};
            constexpr Register::FieldValue<decltype(winmode)::Type,WinmodeVal::mode4> mode4{};
        }
        ///Window Single Sample
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> winss{}; 
    }
    namespace Adc1Refctrl{    ///<Reference Control
        using Addr = Register::Address<0x43002008,0xffffff70,0x00000000,std::uint8_t>;
        ///Reference Selection
        enum class RefselVal {
            intref=0x00000000,     ///<Internal Bandgap Reference
            intvcc0=0x00000002,     ///<1/2 VDDANA
            intvcc1=0x00000003,     ///<VDDANA
            arefa=0x00000004,     ///<External Reference
            arefb=0x00000005,     ///<External Reference
            arefc=0x00000006,     ///<External Reference (only on ADC1)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,RefselVal> refsel{}; 
        namespace RefselValC{
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::intref> intref{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::intvcc0> intvcc0{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::intvcc1> intvcc1{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::arefa> arefa{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::arefb> arefb{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::arefc> arefc{};
        }
        ///Reference Buffer Offset Compensation Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> refcomp{}; 
    }
    namespace Adc1Avgctrl{    ///<Average Control
        using Addr = Register::Address<0x4300200a,0xffffff80,0x00000000,std::uint8_t>;
        ///Number of Samples to be Collected
        enum class SamplenumVal {
            v1=0x00000000,     ///<1 sample
            v2=0x00000001,     ///<2 samples
            v4=0x00000002,     ///<4 samples
            v8=0x00000003,     ///<8 samples
            v16=0x00000004,     ///<16 samples
            v32=0x00000005,     ///<32 samples
            v64=0x00000006,     ///<64 samples
            v128=0x00000007,     ///<128 samples
            v256=0x00000008,     ///<256 samples
            v512=0x00000009,     ///<512 samples
            v1024=0x0000000a,     ///<1024 samples
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SamplenumVal> samplenum{}; 
        namespace SamplenumValC{
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v1> v1{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v2> v2{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v4> v4{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v8> v8{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v16> v16{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v32> v32{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v64> v64{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v128> v128{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v256> v256{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v512> v512{};
            constexpr Register::FieldValue<decltype(samplenum)::Type,SamplenumVal::v1024> v1024{};
        }
        ///Adjusting Result / Division Coefficient
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> adjres{}; 
    }
    namespace Adc1Sampctrl{    ///<Sample Time Control
        using Addr = Register::Address<0x4300200b,0xffffff40,0x00000000,std::uint8_t>;
        ///Sampling Time Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> samplen{}; 
        ///Comparator Offset Compensation Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> offcomp{}; 
    }
    namespace Adc1Winlt{    ///<Window Monitor Lower Threshold
        using Addr = Register::Address<0x4300200c,0xffff0000,0x00000000,std::uint16_t>;
        ///Window Lower Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> winlt{}; 
    }
    namespace Adc1Winut{    ///<Window Monitor Upper Threshold
        using Addr = Register::Address<0x4300200e,0xffff0000,0x00000000,std::uint16_t>;
        ///Window Upper Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> winut{}; 
    }
    namespace Adc1Gaincorr{    ///<Gain Correction
        using Addr = Register::Address<0x43002010,0xfffff000,0x00000000,std::uint16_t>;
        ///Gain Correction Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> gaincorr{}; 
    }
    namespace Adc1Offsetcorr{    ///<Offset Correction
        using Addr = Register::Address<0x43002012,0xfffff000,0x00000000,std::uint16_t>;
        ///Offset Correction Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offsetcorr{}; 
    }
    namespace Adc1Swtrig{    ///<Software Trigger
        using Addr = Register::Address<0x43002014,0xfffffffc,0x00000000,std::uint8_t>;
        ///ADC Conversion Flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flush{}; 
        ///Start ADC Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> start{}; 
    }
    namespace Adc1Intenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x4300202c,0xfffffff8,0x00000000,std::uint8_t>;
        ///Result Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> resrdy{}; 
        ///Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///Window Monitor Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> winmon{}; 
    }
    namespace Adc1Intenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x4300202d,0xfffffff8,0x00000000,std::uint8_t>;
        ///Result Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> resrdy{}; 
        ///Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///Window Monitor Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> winmon{}; 
    }
    namespace Adc1Intflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4300202e,0xfffffff8,0x00000000,std::uint8_t>;
        ///Result Ready Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> resrdy{}; 
        ///Overrun Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> overrun{}; 
        ///Window Monitor Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> winmon{}; 
    }
    namespace Adc1Status{    ///<Status
        using Addr = Register::Address<0x4300202f,0xffffff02,0x00000000,std::uint8_t>;
        ///ADC Busy Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcbusy{}; 
        ///Window Comparator Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wcc{}; 
    }
    namespace Adc1Syncbusy{    ///<Synchronization Busy
        using Addr = Register::Address<0x43002030,0xfffff000,0x00000000,std::uint32_t>;
        ///SWRST Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///ENABLE Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
        ///Input Control Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> inputctrl{}; 
        ///Control B Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrlb{}; 
        ///Reference Control Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> refctrl{}; 
        ///Average Control Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> avgctrl{}; 
        ///Sampling Time Control Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sampctrl{}; 
        ///Window Monitor Lower Threshold Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> winlt{}; 
        ///Window Monitor Upper Threshold Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> winut{}; 
        ///Gain Correction Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gaincorr{}; 
        ///Offset Correction Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> offsetcorr{}; 
        ///Software Trigger Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swtrig{}; 
    }
    namespace Adc1Dseqdata{    ///<DMA Sequencial Data
        using Addr = Register::Address<0x43002034,0x00000000,0x00000000,std::uint32_t>;
        ///DMA Sequential Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> data{}; 
    }
    namespace Adc1Dseqctrl{    ///<DMA Sequential Control
        using Addr = Register::Address<0x43002038,0x7ffffe00,0x00000000,std::uint32_t>;
        ///Input Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inputctrl{}; 
        ///Control B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrlb{}; 
        ///Reference Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> refctrl{}; 
        ///Average Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> avgctrl{}; 
        ///Sampling Time Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sampctrl{}; 
        ///Window Monitor Lower Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> winlt{}; 
        ///Window Monitor Upper Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> winut{}; 
        ///Gain Correction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gaincorr{}; 
        ///Offset Correction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> offsetcorr{}; 
        ///ADC Auto-Start Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> autostart{}; 
    }
    namespace Adc1Dseqstat{    ///<DMA Sequencial Status
        using Addr = Register::Address<0x4300203c,0x7ffffe00,0x00000000,std::uint32_t>;
        ///Input Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> inputctrl{}; 
        ///Control B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrlb{}; 
        ///Reference Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> refctrl{}; 
        ///Average Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> avgctrl{}; 
        ///Sampling Time Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sampctrl{}; 
        ///Window Monitor Lower Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> winlt{}; 
        ///Window Monitor Upper Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> winut{}; 
        ///Gain Correction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gaincorr{}; 
        ///Offset Correction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> offsetcorr{}; 
        ///DMA Sequencing Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
    }
    namespace Adc1Result{    ///<Result Conversion Value
        using Addr = Register::Address<0x43002040,0xffff0000,0x00000000,std::uint16_t>;
        ///Result Conversion Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> result{}; 
    }
    namespace Adc1Ress{    ///<Last Sample Result
        using Addr = Register::Address<0x43002044,0xffff0000,0x00000000,std::uint16_t>;
        ///Last ADC conversion result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ress{}; 
    }
    namespace Adc1Calib{    ///<Calibration
        using Addr = Register::Address<0x43002048,0xfffff888,0x00000000,std::uint16_t>;
        ///Bias Comparator Scaling
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> biascomp{}; 
        ///Bias R2R Ampli scaling
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> biasr2r{}; 
        ///Bias  Reference Buffer Scaling
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> biasrefbuf{}; 
    }
}
