#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DMA channel multiplexor
    namespace DmamuxChcfg0{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021000,0xffffff00,0x00000000,std::uint8_t>;
        ///DMA Channel Source (Slot)
        enum class SourceVal {
            v0=0x00000000,     ///<Disable_Signal
            v2=0x00000002,     ///<UART0_Rx_Signal
            v3=0x00000003,     ///<UART0_Tx_Signal
            v4=0x00000004,     ///<UART1_Rx_Signal
            v5=0x00000005,     ///<UART1_Tx_Signal
            v6=0x00000006,     ///<UART2_Rx_Signal
            v7=0x00000007,     ///<UART2_Tx_Signal
            v8=0x00000008,     ///<UART3_Rx_Signal
            v9=0x00000009,     ///<UART3_Tx_Signal
            v14=0x0000000e,     ///<I2S0_Rx_Signal
            v15=0x0000000f,     ///<I2S0_Tx_Signal
            v16=0x00000010,     ///<SPI0_Rx_Signal
            v17=0x00000011,     ///<SPI0_Tx_Signal
            v18=0x00000012,     ///<SPI1_Rx_Signal
            v19=0x00000013,     ///<SPI1_Tx_Signal
            v22=0x00000016,     ///<I2C0_Signal
            v23=0x00000017,     ///<I2C1_Signal
            v24=0x00000018,     ///<FTM0_Channel0_Signal
            v25=0x00000019,     ///<FTM0_Channel1_Signal
            v26=0x0000001a,     ///<FTM0_Channel2_Signal
            v27=0x0000001b,     ///<FTM0_Channel3_Signal
            v28=0x0000001c,     ///<FTM0_Channel4_Signal
            v29=0x0000001d,     ///<FTM0_Channel5_Signal
            v30=0x0000001e,     ///<FTM0_Channel6_Signal
            v31=0x0000001f,     ///<FTM0_Channel7_Signal
            v32=0x00000020,     ///<FTM1_Channel0_Signal
            v33=0x00000021,     ///<FTM1_Channel1_Signal
            v34=0x00000022,     ///<FTM2_Channel0_Signal
            v35=0x00000023,     ///<FTM2_Channel1_Signal
            v40=0x00000028,     ///<ADC0_Signal
            v42=0x0000002a,     ///<CMP0_Signal
            v43=0x0000002b,     ///<CMP1_Signal
            v45=0x0000002d,     ///<DAC0_Signal
            v47=0x0000002f,     ///<CMT_Signal
            v48=0x00000030,     ///<PDB0_Signal
            v49=0x00000031,     ///<PortA_Signal
            v50=0x00000032,     ///<PortB_Signal
            v51=0x00000033,     ///<PortC_Signal
            v52=0x00000034,     ///<PortD_Signal
            v53=0x00000035,     ///<PortE_Signal
            v54=0x00000036,     ///<AlwaysOn54_Signal
            v55=0x00000037,     ///<AlwaysOn55_Signal
            v56=0x00000038,     ///<AlwaysOn56_Signal
            v57=0x00000039,     ///<AlwaysOn57_Signal
            v58=0x0000003a,     ///<AlwaysOn58_Signal
            v59=0x0000003b,     ///<AlwaysOn59_Signal
            v60=0x0000003c,     ///<AlwaysOn60_Signal
            v61=0x0000003d,     ///<AlwaysOn61_Signal
            v62=0x0000003e,     ///<AlwaysOn62_Signal
            v63=0x0000003f,     ///<AlwaysOn63_Signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,SourceVal> source{}; 
        namespace SourceValC{
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v2> v2{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v3> v3{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v4> v4{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v5> v5{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v6> v6{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v7> v7{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v8> v8{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v9> v9{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v14> v14{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v15> v15{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v16> v16{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v17> v17{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v18> v18{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v19> v19{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v22> v22{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v23> v23{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v24> v24{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v25> v25{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v26> v26{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v27> v27{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v28> v28{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v29> v29{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v30> v30{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v31> v31{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v32> v32{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v33> v33{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v34> v34{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v35> v35{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v40> v40{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v42> v42{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v43> v43{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v45> v45{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v47> v47{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v48> v48{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v49> v49{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v50> v50{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v51> v51{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v52> v52{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v53> v53{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v54> v54{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v55> v55{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v56> v56{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v57> v57{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v58> v58{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v59> v59{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v60> v60{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v61> v61{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v62> v62{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v63> v63{};
        }
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg1{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021001,0xffffff00,0x00000000,std::uint8_t>;
        ///DMA Channel Source (Slot)
        enum class SourceVal {
            v0=0x00000000,     ///<Disable_Signal
            v2=0x00000002,     ///<UART0_Rx_Signal
            v3=0x00000003,     ///<UART0_Tx_Signal
            v4=0x00000004,     ///<UART1_Rx_Signal
            v5=0x00000005,     ///<UART1_Tx_Signal
            v6=0x00000006,     ///<UART2_Rx_Signal
            v7=0x00000007,     ///<UART2_Tx_Signal
            v8=0x00000008,     ///<UART3_Rx_Signal
            v9=0x00000009,     ///<UART3_Tx_Signal
            v14=0x0000000e,     ///<I2S0_Rx_Signal
            v15=0x0000000f,     ///<I2S0_Tx_Signal
            v16=0x00000010,     ///<SPI0_Rx_Signal
            v17=0x00000011,     ///<SPI0_Tx_Signal
            v18=0x00000012,     ///<SPI1_Rx_Signal
            v19=0x00000013,     ///<SPI1_Tx_Signal
            v22=0x00000016,     ///<I2C0_Signal
            v23=0x00000017,     ///<I2C1_Signal
            v24=0x00000018,     ///<FTM0_Channel0_Signal
            v25=0x00000019,     ///<FTM0_Channel1_Signal
            v26=0x0000001a,     ///<FTM0_Channel2_Signal
            v27=0x0000001b,     ///<FTM0_Channel3_Signal
            v28=0x0000001c,     ///<FTM0_Channel4_Signal
            v29=0x0000001d,     ///<FTM0_Channel5_Signal
            v30=0x0000001e,     ///<FTM0_Channel6_Signal
            v31=0x0000001f,     ///<FTM0_Channel7_Signal
            v32=0x00000020,     ///<FTM1_Channel0_Signal
            v33=0x00000021,     ///<FTM1_Channel1_Signal
            v34=0x00000022,     ///<FTM2_Channel0_Signal
            v35=0x00000023,     ///<FTM2_Channel1_Signal
            v40=0x00000028,     ///<ADC0_Signal
            v42=0x0000002a,     ///<CMP0_Signal
            v43=0x0000002b,     ///<CMP1_Signal
            v45=0x0000002d,     ///<DAC0_Signal
            v47=0x0000002f,     ///<CMT_Signal
            v48=0x00000030,     ///<PDB0_Signal
            v49=0x00000031,     ///<PortA_Signal
            v50=0x00000032,     ///<PortB_Signal
            v51=0x00000033,     ///<PortC_Signal
            v52=0x00000034,     ///<PortD_Signal
            v53=0x00000035,     ///<PortE_Signal
            v54=0x00000036,     ///<AlwaysOn54_Signal
            v55=0x00000037,     ///<AlwaysOn55_Signal
            v56=0x00000038,     ///<AlwaysOn56_Signal
            v57=0x00000039,     ///<AlwaysOn57_Signal
            v58=0x0000003a,     ///<AlwaysOn58_Signal
            v59=0x0000003b,     ///<AlwaysOn59_Signal
            v60=0x0000003c,     ///<AlwaysOn60_Signal
            v61=0x0000003d,     ///<AlwaysOn61_Signal
            v62=0x0000003e,     ///<AlwaysOn62_Signal
            v63=0x0000003f,     ///<AlwaysOn63_Signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,SourceVal> source{}; 
        namespace SourceValC{
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v2> v2{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v3> v3{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v4> v4{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v5> v5{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v6> v6{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v7> v7{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v8> v8{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v9> v9{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v14> v14{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v15> v15{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v16> v16{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v17> v17{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v18> v18{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v19> v19{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v22> v22{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v23> v23{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v24> v24{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v25> v25{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v26> v26{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v27> v27{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v28> v28{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v29> v29{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v30> v30{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v31> v31{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v32> v32{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v33> v33{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v34> v34{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v35> v35{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v40> v40{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v42> v42{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v43> v43{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v45> v45{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v47> v47{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v48> v48{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v49> v49{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v50> v50{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v51> v51{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v52> v52{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v53> v53{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v54> v54{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v55> v55{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v56> v56{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v57> v57{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v58> v58{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v59> v59{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v60> v60{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v61> v61{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v62> v62{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v63> v63{};
        }
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg2{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021002,0xffffff00,0x00000000,std::uint8_t>;
        ///DMA Channel Source (Slot)
        enum class SourceVal {
            v0=0x00000000,     ///<Disable_Signal
            v2=0x00000002,     ///<UART0_Rx_Signal
            v3=0x00000003,     ///<UART0_Tx_Signal
            v4=0x00000004,     ///<UART1_Rx_Signal
            v5=0x00000005,     ///<UART1_Tx_Signal
            v6=0x00000006,     ///<UART2_Rx_Signal
            v7=0x00000007,     ///<UART2_Tx_Signal
            v8=0x00000008,     ///<UART3_Rx_Signal
            v9=0x00000009,     ///<UART3_Tx_Signal
            v14=0x0000000e,     ///<I2S0_Rx_Signal
            v15=0x0000000f,     ///<I2S0_Tx_Signal
            v16=0x00000010,     ///<SPI0_Rx_Signal
            v17=0x00000011,     ///<SPI0_Tx_Signal
            v18=0x00000012,     ///<SPI1_Rx_Signal
            v19=0x00000013,     ///<SPI1_Tx_Signal
            v22=0x00000016,     ///<I2C0_Signal
            v23=0x00000017,     ///<I2C1_Signal
            v24=0x00000018,     ///<FTM0_Channel0_Signal
            v25=0x00000019,     ///<FTM0_Channel1_Signal
            v26=0x0000001a,     ///<FTM0_Channel2_Signal
            v27=0x0000001b,     ///<FTM0_Channel3_Signal
            v28=0x0000001c,     ///<FTM0_Channel4_Signal
            v29=0x0000001d,     ///<FTM0_Channel5_Signal
            v30=0x0000001e,     ///<FTM0_Channel6_Signal
            v31=0x0000001f,     ///<FTM0_Channel7_Signal
            v32=0x00000020,     ///<FTM1_Channel0_Signal
            v33=0x00000021,     ///<FTM1_Channel1_Signal
            v34=0x00000022,     ///<FTM2_Channel0_Signal
            v35=0x00000023,     ///<FTM2_Channel1_Signal
            v40=0x00000028,     ///<ADC0_Signal
            v42=0x0000002a,     ///<CMP0_Signal
            v43=0x0000002b,     ///<CMP1_Signal
            v45=0x0000002d,     ///<DAC0_Signal
            v47=0x0000002f,     ///<CMT_Signal
            v48=0x00000030,     ///<PDB0_Signal
            v49=0x00000031,     ///<PortA_Signal
            v50=0x00000032,     ///<PortB_Signal
            v51=0x00000033,     ///<PortC_Signal
            v52=0x00000034,     ///<PortD_Signal
            v53=0x00000035,     ///<PortE_Signal
            v54=0x00000036,     ///<AlwaysOn54_Signal
            v55=0x00000037,     ///<AlwaysOn55_Signal
            v56=0x00000038,     ///<AlwaysOn56_Signal
            v57=0x00000039,     ///<AlwaysOn57_Signal
            v58=0x0000003a,     ///<AlwaysOn58_Signal
            v59=0x0000003b,     ///<AlwaysOn59_Signal
            v60=0x0000003c,     ///<AlwaysOn60_Signal
            v61=0x0000003d,     ///<AlwaysOn61_Signal
            v62=0x0000003e,     ///<AlwaysOn62_Signal
            v63=0x0000003f,     ///<AlwaysOn63_Signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,SourceVal> source{}; 
        namespace SourceValC{
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v2> v2{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v3> v3{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v4> v4{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v5> v5{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v6> v6{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v7> v7{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v8> v8{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v9> v9{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v14> v14{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v15> v15{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v16> v16{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v17> v17{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v18> v18{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v19> v19{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v22> v22{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v23> v23{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v24> v24{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v25> v25{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v26> v26{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v27> v27{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v28> v28{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v29> v29{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v30> v30{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v31> v31{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v32> v32{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v33> v33{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v34> v34{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v35> v35{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v40> v40{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v42> v42{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v43> v43{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v45> v45{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v47> v47{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v48> v48{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v49> v49{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v50> v50{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v51> v51{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v52> v52{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v53> v53{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v54> v54{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v55> v55{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v56> v56{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v57> v57{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v58> v58{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v59> v59{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v60> v60{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v61> v61{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v62> v62{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v63> v63{};
        }
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg3{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021003,0xffffff00,0x00000000,std::uint8_t>;
        ///DMA Channel Source (Slot)
        enum class SourceVal {
            v0=0x00000000,     ///<Disable_Signal
            v2=0x00000002,     ///<UART0_Rx_Signal
            v3=0x00000003,     ///<UART0_Tx_Signal
            v4=0x00000004,     ///<UART1_Rx_Signal
            v5=0x00000005,     ///<UART1_Tx_Signal
            v6=0x00000006,     ///<UART2_Rx_Signal
            v7=0x00000007,     ///<UART2_Tx_Signal
            v8=0x00000008,     ///<UART3_Rx_Signal
            v9=0x00000009,     ///<UART3_Tx_Signal
            v14=0x0000000e,     ///<I2S0_Rx_Signal
            v15=0x0000000f,     ///<I2S0_Tx_Signal
            v16=0x00000010,     ///<SPI0_Rx_Signal
            v17=0x00000011,     ///<SPI0_Tx_Signal
            v18=0x00000012,     ///<SPI1_Rx_Signal
            v19=0x00000013,     ///<SPI1_Tx_Signal
            v22=0x00000016,     ///<I2C0_Signal
            v23=0x00000017,     ///<I2C1_Signal
            v24=0x00000018,     ///<FTM0_Channel0_Signal
            v25=0x00000019,     ///<FTM0_Channel1_Signal
            v26=0x0000001a,     ///<FTM0_Channel2_Signal
            v27=0x0000001b,     ///<FTM0_Channel3_Signal
            v28=0x0000001c,     ///<FTM0_Channel4_Signal
            v29=0x0000001d,     ///<FTM0_Channel5_Signal
            v30=0x0000001e,     ///<FTM0_Channel6_Signal
            v31=0x0000001f,     ///<FTM0_Channel7_Signal
            v32=0x00000020,     ///<FTM1_Channel0_Signal
            v33=0x00000021,     ///<FTM1_Channel1_Signal
            v34=0x00000022,     ///<FTM2_Channel0_Signal
            v35=0x00000023,     ///<FTM2_Channel1_Signal
            v40=0x00000028,     ///<ADC0_Signal
            v42=0x0000002a,     ///<CMP0_Signal
            v43=0x0000002b,     ///<CMP1_Signal
            v45=0x0000002d,     ///<DAC0_Signal
            v47=0x0000002f,     ///<CMT_Signal
            v48=0x00000030,     ///<PDB0_Signal
            v49=0x00000031,     ///<PortA_Signal
            v50=0x00000032,     ///<PortB_Signal
            v51=0x00000033,     ///<PortC_Signal
            v52=0x00000034,     ///<PortD_Signal
            v53=0x00000035,     ///<PortE_Signal
            v54=0x00000036,     ///<AlwaysOn54_Signal
            v55=0x00000037,     ///<AlwaysOn55_Signal
            v56=0x00000038,     ///<AlwaysOn56_Signal
            v57=0x00000039,     ///<AlwaysOn57_Signal
            v58=0x0000003a,     ///<AlwaysOn58_Signal
            v59=0x0000003b,     ///<AlwaysOn59_Signal
            v60=0x0000003c,     ///<AlwaysOn60_Signal
            v61=0x0000003d,     ///<AlwaysOn61_Signal
            v62=0x0000003e,     ///<AlwaysOn62_Signal
            v63=0x0000003f,     ///<AlwaysOn63_Signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,SourceVal> source{}; 
        namespace SourceValC{
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v2> v2{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v3> v3{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v4> v4{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v5> v5{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v6> v6{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v7> v7{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v8> v8{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v9> v9{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v14> v14{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v15> v15{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v16> v16{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v17> v17{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v18> v18{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v19> v19{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v22> v22{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v23> v23{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v24> v24{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v25> v25{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v26> v26{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v27> v27{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v28> v28{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v29> v29{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v30> v30{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v31> v31{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v32> v32{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v33> v33{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v34> v34{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v35> v35{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v40> v40{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v42> v42{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v43> v43{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v45> v45{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v47> v47{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v48> v48{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v49> v49{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v50> v50{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v51> v51{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v52> v52{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v53> v53{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v54> v54{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v55> v55{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v56> v56{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v57> v57{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v58> v58{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v59> v59{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v60> v60{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v61> v61{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v62> v62{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v63> v63{};
        }
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg4{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021004,0xffffff00,0x00000000,std::uint8_t>;
        ///DMA Channel Source (Slot)
        enum class SourceVal {
            v0=0x00000000,     ///<Disable_Signal
            v2=0x00000002,     ///<UART0_Rx_Signal
            v3=0x00000003,     ///<UART0_Tx_Signal
            v4=0x00000004,     ///<UART1_Rx_Signal
            v5=0x00000005,     ///<UART1_Tx_Signal
            v6=0x00000006,     ///<UART2_Rx_Signal
            v7=0x00000007,     ///<UART2_Tx_Signal
            v8=0x00000008,     ///<UART3_Rx_Signal
            v9=0x00000009,     ///<UART3_Tx_Signal
            v14=0x0000000e,     ///<I2S0_Rx_Signal
            v15=0x0000000f,     ///<I2S0_Tx_Signal
            v16=0x00000010,     ///<SPI0_Rx_Signal
            v17=0x00000011,     ///<SPI0_Tx_Signal
            v18=0x00000012,     ///<SPI1_Rx_Signal
            v19=0x00000013,     ///<SPI1_Tx_Signal
            v22=0x00000016,     ///<I2C0_Signal
            v23=0x00000017,     ///<I2C1_Signal
            v24=0x00000018,     ///<FTM0_Channel0_Signal
            v25=0x00000019,     ///<FTM0_Channel1_Signal
            v26=0x0000001a,     ///<FTM0_Channel2_Signal
            v27=0x0000001b,     ///<FTM0_Channel3_Signal
            v28=0x0000001c,     ///<FTM0_Channel4_Signal
            v29=0x0000001d,     ///<FTM0_Channel5_Signal
            v30=0x0000001e,     ///<FTM0_Channel6_Signal
            v31=0x0000001f,     ///<FTM0_Channel7_Signal
            v32=0x00000020,     ///<FTM1_Channel0_Signal
            v33=0x00000021,     ///<FTM1_Channel1_Signal
            v34=0x00000022,     ///<FTM2_Channel0_Signal
            v35=0x00000023,     ///<FTM2_Channel1_Signal
            v40=0x00000028,     ///<ADC0_Signal
            v42=0x0000002a,     ///<CMP0_Signal
            v43=0x0000002b,     ///<CMP1_Signal
            v45=0x0000002d,     ///<DAC0_Signal
            v47=0x0000002f,     ///<CMT_Signal
            v48=0x00000030,     ///<PDB0_Signal
            v49=0x00000031,     ///<PortA_Signal
            v50=0x00000032,     ///<PortB_Signal
            v51=0x00000033,     ///<PortC_Signal
            v52=0x00000034,     ///<PortD_Signal
            v53=0x00000035,     ///<PortE_Signal
            v54=0x00000036,     ///<AlwaysOn54_Signal
            v55=0x00000037,     ///<AlwaysOn55_Signal
            v56=0x00000038,     ///<AlwaysOn56_Signal
            v57=0x00000039,     ///<AlwaysOn57_Signal
            v58=0x0000003a,     ///<AlwaysOn58_Signal
            v59=0x0000003b,     ///<AlwaysOn59_Signal
            v60=0x0000003c,     ///<AlwaysOn60_Signal
            v61=0x0000003d,     ///<AlwaysOn61_Signal
            v62=0x0000003e,     ///<AlwaysOn62_Signal
            v63=0x0000003f,     ///<AlwaysOn63_Signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,SourceVal> source{}; 
        namespace SourceValC{
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v2> v2{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v3> v3{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v4> v4{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v5> v5{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v6> v6{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v7> v7{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v8> v8{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v9> v9{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v14> v14{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v15> v15{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v16> v16{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v17> v17{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v18> v18{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v19> v19{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v22> v22{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v23> v23{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v24> v24{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v25> v25{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v26> v26{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v27> v27{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v28> v28{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v29> v29{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v30> v30{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v31> v31{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v32> v32{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v33> v33{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v34> v34{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v35> v35{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v40> v40{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v42> v42{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v43> v43{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v45> v45{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v47> v47{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v48> v48{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v49> v49{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v50> v50{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v51> v51{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v52> v52{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v53> v53{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v54> v54{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v55> v55{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v56> v56{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v57> v57{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v58> v58{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v59> v59{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v60> v60{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v61> v61{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v62> v62{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v63> v63{};
        }
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg5{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021005,0xffffff00,0x00000000,std::uint8_t>;
        ///DMA Channel Source (Slot)
        enum class SourceVal {
            v0=0x00000000,     ///<Disable_Signal
            v2=0x00000002,     ///<UART0_Rx_Signal
            v3=0x00000003,     ///<UART0_Tx_Signal
            v4=0x00000004,     ///<UART1_Rx_Signal
            v5=0x00000005,     ///<UART1_Tx_Signal
            v6=0x00000006,     ///<UART2_Rx_Signal
            v7=0x00000007,     ///<UART2_Tx_Signal
            v8=0x00000008,     ///<UART3_Rx_Signal
            v9=0x00000009,     ///<UART3_Tx_Signal
            v14=0x0000000e,     ///<I2S0_Rx_Signal
            v15=0x0000000f,     ///<I2S0_Tx_Signal
            v16=0x00000010,     ///<SPI0_Rx_Signal
            v17=0x00000011,     ///<SPI0_Tx_Signal
            v18=0x00000012,     ///<SPI1_Rx_Signal
            v19=0x00000013,     ///<SPI1_Tx_Signal
            v22=0x00000016,     ///<I2C0_Signal
            v23=0x00000017,     ///<I2C1_Signal
            v24=0x00000018,     ///<FTM0_Channel0_Signal
            v25=0x00000019,     ///<FTM0_Channel1_Signal
            v26=0x0000001a,     ///<FTM0_Channel2_Signal
            v27=0x0000001b,     ///<FTM0_Channel3_Signal
            v28=0x0000001c,     ///<FTM0_Channel4_Signal
            v29=0x0000001d,     ///<FTM0_Channel5_Signal
            v30=0x0000001e,     ///<FTM0_Channel6_Signal
            v31=0x0000001f,     ///<FTM0_Channel7_Signal
            v32=0x00000020,     ///<FTM1_Channel0_Signal
            v33=0x00000021,     ///<FTM1_Channel1_Signal
            v34=0x00000022,     ///<FTM2_Channel0_Signal
            v35=0x00000023,     ///<FTM2_Channel1_Signal
            v40=0x00000028,     ///<ADC0_Signal
            v42=0x0000002a,     ///<CMP0_Signal
            v43=0x0000002b,     ///<CMP1_Signal
            v45=0x0000002d,     ///<DAC0_Signal
            v47=0x0000002f,     ///<CMT_Signal
            v48=0x00000030,     ///<PDB0_Signal
            v49=0x00000031,     ///<PortA_Signal
            v50=0x00000032,     ///<PortB_Signal
            v51=0x00000033,     ///<PortC_Signal
            v52=0x00000034,     ///<PortD_Signal
            v53=0x00000035,     ///<PortE_Signal
            v54=0x00000036,     ///<AlwaysOn54_Signal
            v55=0x00000037,     ///<AlwaysOn55_Signal
            v56=0x00000038,     ///<AlwaysOn56_Signal
            v57=0x00000039,     ///<AlwaysOn57_Signal
            v58=0x0000003a,     ///<AlwaysOn58_Signal
            v59=0x0000003b,     ///<AlwaysOn59_Signal
            v60=0x0000003c,     ///<AlwaysOn60_Signal
            v61=0x0000003d,     ///<AlwaysOn61_Signal
            v62=0x0000003e,     ///<AlwaysOn62_Signal
            v63=0x0000003f,     ///<AlwaysOn63_Signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,SourceVal> source{}; 
        namespace SourceValC{
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v2> v2{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v3> v3{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v4> v4{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v5> v5{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v6> v6{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v7> v7{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v8> v8{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v9> v9{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v14> v14{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v15> v15{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v16> v16{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v17> v17{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v18> v18{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v19> v19{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v22> v22{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v23> v23{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v24> v24{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v25> v25{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v26> v26{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v27> v27{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v28> v28{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v29> v29{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v30> v30{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v31> v31{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v32> v32{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v33> v33{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v34> v34{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v35> v35{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v40> v40{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v42> v42{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v43> v43{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v45> v45{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v47> v47{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v48> v48{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v49> v49{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v50> v50{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v51> v51{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v52> v52{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v53> v53{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v54> v54{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v55> v55{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v56> v56{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v57> v57{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v58> v58{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v59> v59{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v60> v60{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v61> v61{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v62> v62{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v63> v63{};
        }
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg6{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021006,0xffffff00,0x00000000,std::uint8_t>;
        ///DMA Channel Source (Slot)
        enum class SourceVal {
            v0=0x00000000,     ///<Disable_Signal
            v2=0x00000002,     ///<UART0_Rx_Signal
            v3=0x00000003,     ///<UART0_Tx_Signal
            v4=0x00000004,     ///<UART1_Rx_Signal
            v5=0x00000005,     ///<UART1_Tx_Signal
            v6=0x00000006,     ///<UART2_Rx_Signal
            v7=0x00000007,     ///<UART2_Tx_Signal
            v8=0x00000008,     ///<UART3_Rx_Signal
            v9=0x00000009,     ///<UART3_Tx_Signal
            v14=0x0000000e,     ///<I2S0_Rx_Signal
            v15=0x0000000f,     ///<I2S0_Tx_Signal
            v16=0x00000010,     ///<SPI0_Rx_Signal
            v17=0x00000011,     ///<SPI0_Tx_Signal
            v18=0x00000012,     ///<SPI1_Rx_Signal
            v19=0x00000013,     ///<SPI1_Tx_Signal
            v22=0x00000016,     ///<I2C0_Signal
            v23=0x00000017,     ///<I2C1_Signal
            v24=0x00000018,     ///<FTM0_Channel0_Signal
            v25=0x00000019,     ///<FTM0_Channel1_Signal
            v26=0x0000001a,     ///<FTM0_Channel2_Signal
            v27=0x0000001b,     ///<FTM0_Channel3_Signal
            v28=0x0000001c,     ///<FTM0_Channel4_Signal
            v29=0x0000001d,     ///<FTM0_Channel5_Signal
            v30=0x0000001e,     ///<FTM0_Channel6_Signal
            v31=0x0000001f,     ///<FTM0_Channel7_Signal
            v32=0x00000020,     ///<FTM1_Channel0_Signal
            v33=0x00000021,     ///<FTM1_Channel1_Signal
            v34=0x00000022,     ///<FTM2_Channel0_Signal
            v35=0x00000023,     ///<FTM2_Channel1_Signal
            v40=0x00000028,     ///<ADC0_Signal
            v42=0x0000002a,     ///<CMP0_Signal
            v43=0x0000002b,     ///<CMP1_Signal
            v45=0x0000002d,     ///<DAC0_Signal
            v47=0x0000002f,     ///<CMT_Signal
            v48=0x00000030,     ///<PDB0_Signal
            v49=0x00000031,     ///<PortA_Signal
            v50=0x00000032,     ///<PortB_Signal
            v51=0x00000033,     ///<PortC_Signal
            v52=0x00000034,     ///<PortD_Signal
            v53=0x00000035,     ///<PortE_Signal
            v54=0x00000036,     ///<AlwaysOn54_Signal
            v55=0x00000037,     ///<AlwaysOn55_Signal
            v56=0x00000038,     ///<AlwaysOn56_Signal
            v57=0x00000039,     ///<AlwaysOn57_Signal
            v58=0x0000003a,     ///<AlwaysOn58_Signal
            v59=0x0000003b,     ///<AlwaysOn59_Signal
            v60=0x0000003c,     ///<AlwaysOn60_Signal
            v61=0x0000003d,     ///<AlwaysOn61_Signal
            v62=0x0000003e,     ///<AlwaysOn62_Signal
            v63=0x0000003f,     ///<AlwaysOn63_Signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,SourceVal> source{}; 
        namespace SourceValC{
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v2> v2{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v3> v3{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v4> v4{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v5> v5{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v6> v6{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v7> v7{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v8> v8{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v9> v9{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v14> v14{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v15> v15{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v16> v16{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v17> v17{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v18> v18{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v19> v19{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v22> v22{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v23> v23{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v24> v24{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v25> v25{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v26> v26{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v27> v27{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v28> v28{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v29> v29{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v30> v30{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v31> v31{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v32> v32{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v33> v33{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v34> v34{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v35> v35{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v40> v40{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v42> v42{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v43> v43{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v45> v45{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v47> v47{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v48> v48{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v49> v49{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v50> v50{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v51> v51{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v52> v52{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v53> v53{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v54> v54{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v55> v55{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v56> v56{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v57> v57{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v58> v58{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v59> v59{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v60> v60{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v61> v61{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v62> v62{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v63> v63{};
        }
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg7{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021007,0xffffff00,0x00000000,std::uint8_t>;
        ///DMA Channel Source (Slot)
        enum class SourceVal {
            v0=0x00000000,     ///<Disable_Signal
            v2=0x00000002,     ///<UART0_Rx_Signal
            v3=0x00000003,     ///<UART0_Tx_Signal
            v4=0x00000004,     ///<UART1_Rx_Signal
            v5=0x00000005,     ///<UART1_Tx_Signal
            v6=0x00000006,     ///<UART2_Rx_Signal
            v7=0x00000007,     ///<UART2_Tx_Signal
            v8=0x00000008,     ///<UART3_Rx_Signal
            v9=0x00000009,     ///<UART3_Tx_Signal
            v14=0x0000000e,     ///<I2S0_Rx_Signal
            v15=0x0000000f,     ///<I2S0_Tx_Signal
            v16=0x00000010,     ///<SPI0_Rx_Signal
            v17=0x00000011,     ///<SPI0_Tx_Signal
            v18=0x00000012,     ///<SPI1_Rx_Signal
            v19=0x00000013,     ///<SPI1_Tx_Signal
            v22=0x00000016,     ///<I2C0_Signal
            v23=0x00000017,     ///<I2C1_Signal
            v24=0x00000018,     ///<FTM0_Channel0_Signal
            v25=0x00000019,     ///<FTM0_Channel1_Signal
            v26=0x0000001a,     ///<FTM0_Channel2_Signal
            v27=0x0000001b,     ///<FTM0_Channel3_Signal
            v28=0x0000001c,     ///<FTM0_Channel4_Signal
            v29=0x0000001d,     ///<FTM0_Channel5_Signal
            v30=0x0000001e,     ///<FTM0_Channel6_Signal
            v31=0x0000001f,     ///<FTM0_Channel7_Signal
            v32=0x00000020,     ///<FTM1_Channel0_Signal
            v33=0x00000021,     ///<FTM1_Channel1_Signal
            v34=0x00000022,     ///<FTM2_Channel0_Signal
            v35=0x00000023,     ///<FTM2_Channel1_Signal
            v40=0x00000028,     ///<ADC0_Signal
            v42=0x0000002a,     ///<CMP0_Signal
            v43=0x0000002b,     ///<CMP1_Signal
            v45=0x0000002d,     ///<DAC0_Signal
            v47=0x0000002f,     ///<CMT_Signal
            v48=0x00000030,     ///<PDB0_Signal
            v49=0x00000031,     ///<PortA_Signal
            v50=0x00000032,     ///<PortB_Signal
            v51=0x00000033,     ///<PortC_Signal
            v52=0x00000034,     ///<PortD_Signal
            v53=0x00000035,     ///<PortE_Signal
            v54=0x00000036,     ///<AlwaysOn54_Signal
            v55=0x00000037,     ///<AlwaysOn55_Signal
            v56=0x00000038,     ///<AlwaysOn56_Signal
            v57=0x00000039,     ///<AlwaysOn57_Signal
            v58=0x0000003a,     ///<AlwaysOn58_Signal
            v59=0x0000003b,     ///<AlwaysOn59_Signal
            v60=0x0000003c,     ///<AlwaysOn60_Signal
            v61=0x0000003d,     ///<AlwaysOn61_Signal
            v62=0x0000003e,     ///<AlwaysOn62_Signal
            v63=0x0000003f,     ///<AlwaysOn63_Signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,SourceVal> source{}; 
        namespace SourceValC{
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v2> v2{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v3> v3{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v4> v4{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v5> v5{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v6> v6{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v7> v7{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v8> v8{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v9> v9{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v14> v14{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v15> v15{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v16> v16{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v17> v17{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v18> v18{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v19> v19{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v22> v22{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v23> v23{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v24> v24{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v25> v25{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v26> v26{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v27> v27{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v28> v28{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v29> v29{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v30> v30{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v31> v31{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v32> v32{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v33> v33{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v34> v34{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v35> v35{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v40> v40{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v42> v42{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v43> v43{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v45> v45{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v47> v47{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v48> v48{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v49> v49{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v50> v50{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v51> v51{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v52> v52{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v53> v53{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v54> v54{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v55> v55{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v56> v56{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v57> v57{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v58> v58{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v59> v59{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v60> v60{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v61> v61{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v62> v62{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v63> v63{};
        }
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg8{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021008,0xffffff00,0x00000000,std::uint8_t>;
        ///DMA Channel Source (Slot)
        enum class SourceVal {
            v0=0x00000000,     ///<Disable_Signal
            v2=0x00000002,     ///<UART0_Rx_Signal
            v3=0x00000003,     ///<UART0_Tx_Signal
            v4=0x00000004,     ///<UART1_Rx_Signal
            v5=0x00000005,     ///<UART1_Tx_Signal
            v6=0x00000006,     ///<UART2_Rx_Signal
            v7=0x00000007,     ///<UART2_Tx_Signal
            v8=0x00000008,     ///<UART3_Rx_Signal
            v9=0x00000009,     ///<UART3_Tx_Signal
            v14=0x0000000e,     ///<I2S0_Rx_Signal
            v15=0x0000000f,     ///<I2S0_Tx_Signal
            v16=0x00000010,     ///<SPI0_Rx_Signal
            v17=0x00000011,     ///<SPI0_Tx_Signal
            v18=0x00000012,     ///<SPI1_Rx_Signal
            v19=0x00000013,     ///<SPI1_Tx_Signal
            v22=0x00000016,     ///<I2C0_Signal
            v23=0x00000017,     ///<I2C1_Signal
            v24=0x00000018,     ///<FTM0_Channel0_Signal
            v25=0x00000019,     ///<FTM0_Channel1_Signal
            v26=0x0000001a,     ///<FTM0_Channel2_Signal
            v27=0x0000001b,     ///<FTM0_Channel3_Signal
            v28=0x0000001c,     ///<FTM0_Channel4_Signal
            v29=0x0000001d,     ///<FTM0_Channel5_Signal
            v30=0x0000001e,     ///<FTM0_Channel6_Signal
            v31=0x0000001f,     ///<FTM0_Channel7_Signal
            v32=0x00000020,     ///<FTM1_Channel0_Signal
            v33=0x00000021,     ///<FTM1_Channel1_Signal
            v34=0x00000022,     ///<FTM2_Channel0_Signal
            v35=0x00000023,     ///<FTM2_Channel1_Signal
            v40=0x00000028,     ///<ADC0_Signal
            v42=0x0000002a,     ///<CMP0_Signal
            v43=0x0000002b,     ///<CMP1_Signal
            v45=0x0000002d,     ///<DAC0_Signal
            v47=0x0000002f,     ///<CMT_Signal
            v48=0x00000030,     ///<PDB0_Signal
            v49=0x00000031,     ///<PortA_Signal
            v50=0x00000032,     ///<PortB_Signal
            v51=0x00000033,     ///<PortC_Signal
            v52=0x00000034,     ///<PortD_Signal
            v53=0x00000035,     ///<PortE_Signal
            v54=0x00000036,     ///<AlwaysOn54_Signal
            v55=0x00000037,     ///<AlwaysOn55_Signal
            v56=0x00000038,     ///<AlwaysOn56_Signal
            v57=0x00000039,     ///<AlwaysOn57_Signal
            v58=0x0000003a,     ///<AlwaysOn58_Signal
            v59=0x0000003b,     ///<AlwaysOn59_Signal
            v60=0x0000003c,     ///<AlwaysOn60_Signal
            v61=0x0000003d,     ///<AlwaysOn61_Signal
            v62=0x0000003e,     ///<AlwaysOn62_Signal
            v63=0x0000003f,     ///<AlwaysOn63_Signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,SourceVal> source{}; 
        namespace SourceValC{
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v2> v2{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v3> v3{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v4> v4{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v5> v5{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v6> v6{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v7> v7{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v8> v8{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v9> v9{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v14> v14{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v15> v15{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v16> v16{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v17> v17{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v18> v18{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v19> v19{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v22> v22{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v23> v23{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v24> v24{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v25> v25{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v26> v26{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v27> v27{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v28> v28{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v29> v29{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v30> v30{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v31> v31{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v32> v32{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v33> v33{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v34> v34{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v35> v35{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v40> v40{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v42> v42{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v43> v43{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v45> v45{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v47> v47{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v48> v48{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v49> v49{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v50> v50{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v51> v51{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v52> v52{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v53> v53{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v54> v54{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v55> v55{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v56> v56{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v57> v57{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v58> v58{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v59> v59{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v60> v60{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v61> v61{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v62> v62{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v63> v63{};
        }
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg9{    ///<Channel Configuration register
        using Addr = Register::Address<0x40021009,0xffffff00,0x00000000,std::uint8_t>;
        ///DMA Channel Source (Slot)
        enum class SourceVal {
            v0=0x00000000,     ///<Disable_Signal
            v2=0x00000002,     ///<UART0_Rx_Signal
            v3=0x00000003,     ///<UART0_Tx_Signal
            v4=0x00000004,     ///<UART1_Rx_Signal
            v5=0x00000005,     ///<UART1_Tx_Signal
            v6=0x00000006,     ///<UART2_Rx_Signal
            v7=0x00000007,     ///<UART2_Tx_Signal
            v8=0x00000008,     ///<UART3_Rx_Signal
            v9=0x00000009,     ///<UART3_Tx_Signal
            v14=0x0000000e,     ///<I2S0_Rx_Signal
            v15=0x0000000f,     ///<I2S0_Tx_Signal
            v16=0x00000010,     ///<SPI0_Rx_Signal
            v17=0x00000011,     ///<SPI0_Tx_Signal
            v18=0x00000012,     ///<SPI1_Rx_Signal
            v19=0x00000013,     ///<SPI1_Tx_Signal
            v22=0x00000016,     ///<I2C0_Signal
            v23=0x00000017,     ///<I2C1_Signal
            v24=0x00000018,     ///<FTM0_Channel0_Signal
            v25=0x00000019,     ///<FTM0_Channel1_Signal
            v26=0x0000001a,     ///<FTM0_Channel2_Signal
            v27=0x0000001b,     ///<FTM0_Channel3_Signal
            v28=0x0000001c,     ///<FTM0_Channel4_Signal
            v29=0x0000001d,     ///<FTM0_Channel5_Signal
            v30=0x0000001e,     ///<FTM0_Channel6_Signal
            v31=0x0000001f,     ///<FTM0_Channel7_Signal
            v32=0x00000020,     ///<FTM1_Channel0_Signal
            v33=0x00000021,     ///<FTM1_Channel1_Signal
            v34=0x00000022,     ///<FTM2_Channel0_Signal
            v35=0x00000023,     ///<FTM2_Channel1_Signal
            v40=0x00000028,     ///<ADC0_Signal
            v42=0x0000002a,     ///<CMP0_Signal
            v43=0x0000002b,     ///<CMP1_Signal
            v45=0x0000002d,     ///<DAC0_Signal
            v47=0x0000002f,     ///<CMT_Signal
            v48=0x00000030,     ///<PDB0_Signal
            v49=0x00000031,     ///<PortA_Signal
            v50=0x00000032,     ///<PortB_Signal
            v51=0x00000033,     ///<PortC_Signal
            v52=0x00000034,     ///<PortD_Signal
            v53=0x00000035,     ///<PortE_Signal
            v54=0x00000036,     ///<AlwaysOn54_Signal
            v55=0x00000037,     ///<AlwaysOn55_Signal
            v56=0x00000038,     ///<AlwaysOn56_Signal
            v57=0x00000039,     ///<AlwaysOn57_Signal
            v58=0x0000003a,     ///<AlwaysOn58_Signal
            v59=0x0000003b,     ///<AlwaysOn59_Signal
            v60=0x0000003c,     ///<AlwaysOn60_Signal
            v61=0x0000003d,     ///<AlwaysOn61_Signal
            v62=0x0000003e,     ///<AlwaysOn62_Signal
            v63=0x0000003f,     ///<AlwaysOn63_Signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,SourceVal> source{}; 
        namespace SourceValC{
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v2> v2{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v3> v3{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v4> v4{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v5> v5{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v6> v6{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v7> v7{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v8> v8{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v9> v9{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v14> v14{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v15> v15{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v16> v16{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v17> v17{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v18> v18{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v19> v19{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v22> v22{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v23> v23{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v24> v24{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v25> v25{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v26> v26{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v27> v27{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v28> v28{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v29> v29{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v30> v30{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v31> v31{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v32> v32{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v33> v33{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v34> v34{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v35> v35{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v40> v40{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v42> v42{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v43> v43{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v45> v45{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v47> v47{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v48> v48{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v49> v49{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v50> v50{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v51> v51{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v52> v52{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v53> v53{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v54> v54{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v55> v55{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v56> v56{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v57> v57{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v58> v58{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v59> v59{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v60> v60{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v61> v61{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v62> v62{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v63> v63{};
        }
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg10{    ///<Channel Configuration register
        using Addr = Register::Address<0x4002100a,0xffffff00,0x00000000,std::uint8_t>;
        ///DMA Channel Source (Slot)
        enum class SourceVal {
            v0=0x00000000,     ///<Disable_Signal
            v2=0x00000002,     ///<UART0_Rx_Signal
            v3=0x00000003,     ///<UART0_Tx_Signal
            v4=0x00000004,     ///<UART1_Rx_Signal
            v5=0x00000005,     ///<UART1_Tx_Signal
            v6=0x00000006,     ///<UART2_Rx_Signal
            v7=0x00000007,     ///<UART2_Tx_Signal
            v8=0x00000008,     ///<UART3_Rx_Signal
            v9=0x00000009,     ///<UART3_Tx_Signal
            v14=0x0000000e,     ///<I2S0_Rx_Signal
            v15=0x0000000f,     ///<I2S0_Tx_Signal
            v16=0x00000010,     ///<SPI0_Rx_Signal
            v17=0x00000011,     ///<SPI0_Tx_Signal
            v18=0x00000012,     ///<SPI1_Rx_Signal
            v19=0x00000013,     ///<SPI1_Tx_Signal
            v22=0x00000016,     ///<I2C0_Signal
            v23=0x00000017,     ///<I2C1_Signal
            v24=0x00000018,     ///<FTM0_Channel0_Signal
            v25=0x00000019,     ///<FTM0_Channel1_Signal
            v26=0x0000001a,     ///<FTM0_Channel2_Signal
            v27=0x0000001b,     ///<FTM0_Channel3_Signal
            v28=0x0000001c,     ///<FTM0_Channel4_Signal
            v29=0x0000001d,     ///<FTM0_Channel5_Signal
            v30=0x0000001e,     ///<FTM0_Channel6_Signal
            v31=0x0000001f,     ///<FTM0_Channel7_Signal
            v32=0x00000020,     ///<FTM1_Channel0_Signal
            v33=0x00000021,     ///<FTM1_Channel1_Signal
            v34=0x00000022,     ///<FTM2_Channel0_Signal
            v35=0x00000023,     ///<FTM2_Channel1_Signal
            v40=0x00000028,     ///<ADC0_Signal
            v42=0x0000002a,     ///<CMP0_Signal
            v43=0x0000002b,     ///<CMP1_Signal
            v45=0x0000002d,     ///<DAC0_Signal
            v47=0x0000002f,     ///<CMT_Signal
            v48=0x00000030,     ///<PDB0_Signal
            v49=0x00000031,     ///<PortA_Signal
            v50=0x00000032,     ///<PortB_Signal
            v51=0x00000033,     ///<PortC_Signal
            v52=0x00000034,     ///<PortD_Signal
            v53=0x00000035,     ///<PortE_Signal
            v54=0x00000036,     ///<AlwaysOn54_Signal
            v55=0x00000037,     ///<AlwaysOn55_Signal
            v56=0x00000038,     ///<AlwaysOn56_Signal
            v57=0x00000039,     ///<AlwaysOn57_Signal
            v58=0x0000003a,     ///<AlwaysOn58_Signal
            v59=0x0000003b,     ///<AlwaysOn59_Signal
            v60=0x0000003c,     ///<AlwaysOn60_Signal
            v61=0x0000003d,     ///<AlwaysOn61_Signal
            v62=0x0000003e,     ///<AlwaysOn62_Signal
            v63=0x0000003f,     ///<AlwaysOn63_Signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,SourceVal> source{}; 
        namespace SourceValC{
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v2> v2{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v3> v3{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v4> v4{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v5> v5{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v6> v6{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v7> v7{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v8> v8{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v9> v9{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v14> v14{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v15> v15{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v16> v16{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v17> v17{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v18> v18{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v19> v19{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v22> v22{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v23> v23{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v24> v24{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v25> v25{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v26> v26{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v27> v27{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v28> v28{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v29> v29{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v30> v30{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v31> v31{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v32> v32{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v33> v33{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v34> v34{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v35> v35{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v40> v40{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v42> v42{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v43> v43{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v45> v45{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v47> v47{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v48> v48{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v49> v49{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v50> v50{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v51> v51{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v52> v52{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v53> v53{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v54> v54{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v55> v55{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v56> v56{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v57> v57{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v58> v58{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v59> v59{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v60> v60{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v61> v61{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v62> v62{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v63> v63{};
        }
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg11{    ///<Channel Configuration register
        using Addr = Register::Address<0x4002100b,0xffffff00,0x00000000,std::uint8_t>;
        ///DMA Channel Source (Slot)
        enum class SourceVal {
            v0=0x00000000,     ///<Disable_Signal
            v2=0x00000002,     ///<UART0_Rx_Signal
            v3=0x00000003,     ///<UART0_Tx_Signal
            v4=0x00000004,     ///<UART1_Rx_Signal
            v5=0x00000005,     ///<UART1_Tx_Signal
            v6=0x00000006,     ///<UART2_Rx_Signal
            v7=0x00000007,     ///<UART2_Tx_Signal
            v8=0x00000008,     ///<UART3_Rx_Signal
            v9=0x00000009,     ///<UART3_Tx_Signal
            v14=0x0000000e,     ///<I2S0_Rx_Signal
            v15=0x0000000f,     ///<I2S0_Tx_Signal
            v16=0x00000010,     ///<SPI0_Rx_Signal
            v17=0x00000011,     ///<SPI0_Tx_Signal
            v18=0x00000012,     ///<SPI1_Rx_Signal
            v19=0x00000013,     ///<SPI1_Tx_Signal
            v22=0x00000016,     ///<I2C0_Signal
            v23=0x00000017,     ///<I2C1_Signal
            v24=0x00000018,     ///<FTM0_Channel0_Signal
            v25=0x00000019,     ///<FTM0_Channel1_Signal
            v26=0x0000001a,     ///<FTM0_Channel2_Signal
            v27=0x0000001b,     ///<FTM0_Channel3_Signal
            v28=0x0000001c,     ///<FTM0_Channel4_Signal
            v29=0x0000001d,     ///<FTM0_Channel5_Signal
            v30=0x0000001e,     ///<FTM0_Channel6_Signal
            v31=0x0000001f,     ///<FTM0_Channel7_Signal
            v32=0x00000020,     ///<FTM1_Channel0_Signal
            v33=0x00000021,     ///<FTM1_Channel1_Signal
            v34=0x00000022,     ///<FTM2_Channel0_Signal
            v35=0x00000023,     ///<FTM2_Channel1_Signal
            v40=0x00000028,     ///<ADC0_Signal
            v42=0x0000002a,     ///<CMP0_Signal
            v43=0x0000002b,     ///<CMP1_Signal
            v45=0x0000002d,     ///<DAC0_Signal
            v47=0x0000002f,     ///<CMT_Signal
            v48=0x00000030,     ///<PDB0_Signal
            v49=0x00000031,     ///<PortA_Signal
            v50=0x00000032,     ///<PortB_Signal
            v51=0x00000033,     ///<PortC_Signal
            v52=0x00000034,     ///<PortD_Signal
            v53=0x00000035,     ///<PortE_Signal
            v54=0x00000036,     ///<AlwaysOn54_Signal
            v55=0x00000037,     ///<AlwaysOn55_Signal
            v56=0x00000038,     ///<AlwaysOn56_Signal
            v57=0x00000039,     ///<AlwaysOn57_Signal
            v58=0x0000003a,     ///<AlwaysOn58_Signal
            v59=0x0000003b,     ///<AlwaysOn59_Signal
            v60=0x0000003c,     ///<AlwaysOn60_Signal
            v61=0x0000003d,     ///<AlwaysOn61_Signal
            v62=0x0000003e,     ///<AlwaysOn62_Signal
            v63=0x0000003f,     ///<AlwaysOn63_Signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,SourceVal> source{}; 
        namespace SourceValC{
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v2> v2{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v3> v3{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v4> v4{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v5> v5{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v6> v6{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v7> v7{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v8> v8{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v9> v9{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v14> v14{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v15> v15{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v16> v16{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v17> v17{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v18> v18{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v19> v19{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v22> v22{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v23> v23{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v24> v24{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v25> v25{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v26> v26{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v27> v27{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v28> v28{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v29> v29{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v30> v30{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v31> v31{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v32> v32{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v33> v33{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v34> v34{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v35> v35{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v40> v40{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v42> v42{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v43> v43{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v45> v45{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v47> v47{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v48> v48{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v49> v49{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v50> v50{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v51> v51{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v52> v52{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v53> v53{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v54> v54{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v55> v55{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v56> v56{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v57> v57{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v58> v58{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v59> v59{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v60> v60{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v61> v61{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v62> v62{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v63> v63{};
        }
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg12{    ///<Channel Configuration register
        using Addr = Register::Address<0x4002100c,0xffffff00,0x00000000,std::uint8_t>;
        ///DMA Channel Source (Slot)
        enum class SourceVal {
            v0=0x00000000,     ///<Disable_Signal
            v2=0x00000002,     ///<UART0_Rx_Signal
            v3=0x00000003,     ///<UART0_Tx_Signal
            v4=0x00000004,     ///<UART1_Rx_Signal
            v5=0x00000005,     ///<UART1_Tx_Signal
            v6=0x00000006,     ///<UART2_Rx_Signal
            v7=0x00000007,     ///<UART2_Tx_Signal
            v8=0x00000008,     ///<UART3_Rx_Signal
            v9=0x00000009,     ///<UART3_Tx_Signal
            v14=0x0000000e,     ///<I2S0_Rx_Signal
            v15=0x0000000f,     ///<I2S0_Tx_Signal
            v16=0x00000010,     ///<SPI0_Rx_Signal
            v17=0x00000011,     ///<SPI0_Tx_Signal
            v18=0x00000012,     ///<SPI1_Rx_Signal
            v19=0x00000013,     ///<SPI1_Tx_Signal
            v22=0x00000016,     ///<I2C0_Signal
            v23=0x00000017,     ///<I2C1_Signal
            v24=0x00000018,     ///<FTM0_Channel0_Signal
            v25=0x00000019,     ///<FTM0_Channel1_Signal
            v26=0x0000001a,     ///<FTM0_Channel2_Signal
            v27=0x0000001b,     ///<FTM0_Channel3_Signal
            v28=0x0000001c,     ///<FTM0_Channel4_Signal
            v29=0x0000001d,     ///<FTM0_Channel5_Signal
            v30=0x0000001e,     ///<FTM0_Channel6_Signal
            v31=0x0000001f,     ///<FTM0_Channel7_Signal
            v32=0x00000020,     ///<FTM1_Channel0_Signal
            v33=0x00000021,     ///<FTM1_Channel1_Signal
            v34=0x00000022,     ///<FTM2_Channel0_Signal
            v35=0x00000023,     ///<FTM2_Channel1_Signal
            v40=0x00000028,     ///<ADC0_Signal
            v42=0x0000002a,     ///<CMP0_Signal
            v43=0x0000002b,     ///<CMP1_Signal
            v45=0x0000002d,     ///<DAC0_Signal
            v47=0x0000002f,     ///<CMT_Signal
            v48=0x00000030,     ///<PDB0_Signal
            v49=0x00000031,     ///<PortA_Signal
            v50=0x00000032,     ///<PortB_Signal
            v51=0x00000033,     ///<PortC_Signal
            v52=0x00000034,     ///<PortD_Signal
            v53=0x00000035,     ///<PortE_Signal
            v54=0x00000036,     ///<AlwaysOn54_Signal
            v55=0x00000037,     ///<AlwaysOn55_Signal
            v56=0x00000038,     ///<AlwaysOn56_Signal
            v57=0x00000039,     ///<AlwaysOn57_Signal
            v58=0x0000003a,     ///<AlwaysOn58_Signal
            v59=0x0000003b,     ///<AlwaysOn59_Signal
            v60=0x0000003c,     ///<AlwaysOn60_Signal
            v61=0x0000003d,     ///<AlwaysOn61_Signal
            v62=0x0000003e,     ///<AlwaysOn62_Signal
            v63=0x0000003f,     ///<AlwaysOn63_Signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,SourceVal> source{}; 
        namespace SourceValC{
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v2> v2{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v3> v3{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v4> v4{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v5> v5{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v6> v6{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v7> v7{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v8> v8{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v9> v9{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v14> v14{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v15> v15{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v16> v16{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v17> v17{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v18> v18{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v19> v19{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v22> v22{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v23> v23{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v24> v24{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v25> v25{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v26> v26{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v27> v27{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v28> v28{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v29> v29{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v30> v30{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v31> v31{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v32> v32{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v33> v33{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v34> v34{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v35> v35{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v40> v40{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v42> v42{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v43> v43{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v45> v45{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v47> v47{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v48> v48{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v49> v49{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v50> v50{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v51> v51{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v52> v52{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v53> v53{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v54> v54{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v55> v55{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v56> v56{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v57> v57{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v58> v58{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v59> v59{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v60> v60{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v61> v61{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v62> v62{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v63> v63{};
        }
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg13{    ///<Channel Configuration register
        using Addr = Register::Address<0x4002100d,0xffffff00,0x00000000,std::uint8_t>;
        ///DMA Channel Source (Slot)
        enum class SourceVal {
            v0=0x00000000,     ///<Disable_Signal
            v2=0x00000002,     ///<UART0_Rx_Signal
            v3=0x00000003,     ///<UART0_Tx_Signal
            v4=0x00000004,     ///<UART1_Rx_Signal
            v5=0x00000005,     ///<UART1_Tx_Signal
            v6=0x00000006,     ///<UART2_Rx_Signal
            v7=0x00000007,     ///<UART2_Tx_Signal
            v8=0x00000008,     ///<UART3_Rx_Signal
            v9=0x00000009,     ///<UART3_Tx_Signal
            v14=0x0000000e,     ///<I2S0_Rx_Signal
            v15=0x0000000f,     ///<I2S0_Tx_Signal
            v16=0x00000010,     ///<SPI0_Rx_Signal
            v17=0x00000011,     ///<SPI0_Tx_Signal
            v18=0x00000012,     ///<SPI1_Rx_Signal
            v19=0x00000013,     ///<SPI1_Tx_Signal
            v22=0x00000016,     ///<I2C0_Signal
            v23=0x00000017,     ///<I2C1_Signal
            v24=0x00000018,     ///<FTM0_Channel0_Signal
            v25=0x00000019,     ///<FTM0_Channel1_Signal
            v26=0x0000001a,     ///<FTM0_Channel2_Signal
            v27=0x0000001b,     ///<FTM0_Channel3_Signal
            v28=0x0000001c,     ///<FTM0_Channel4_Signal
            v29=0x0000001d,     ///<FTM0_Channel5_Signal
            v30=0x0000001e,     ///<FTM0_Channel6_Signal
            v31=0x0000001f,     ///<FTM0_Channel7_Signal
            v32=0x00000020,     ///<FTM1_Channel0_Signal
            v33=0x00000021,     ///<FTM1_Channel1_Signal
            v34=0x00000022,     ///<FTM2_Channel0_Signal
            v35=0x00000023,     ///<FTM2_Channel1_Signal
            v40=0x00000028,     ///<ADC0_Signal
            v42=0x0000002a,     ///<CMP0_Signal
            v43=0x0000002b,     ///<CMP1_Signal
            v45=0x0000002d,     ///<DAC0_Signal
            v47=0x0000002f,     ///<CMT_Signal
            v48=0x00000030,     ///<PDB0_Signal
            v49=0x00000031,     ///<PortA_Signal
            v50=0x00000032,     ///<PortB_Signal
            v51=0x00000033,     ///<PortC_Signal
            v52=0x00000034,     ///<PortD_Signal
            v53=0x00000035,     ///<PortE_Signal
            v54=0x00000036,     ///<AlwaysOn54_Signal
            v55=0x00000037,     ///<AlwaysOn55_Signal
            v56=0x00000038,     ///<AlwaysOn56_Signal
            v57=0x00000039,     ///<AlwaysOn57_Signal
            v58=0x0000003a,     ///<AlwaysOn58_Signal
            v59=0x0000003b,     ///<AlwaysOn59_Signal
            v60=0x0000003c,     ///<AlwaysOn60_Signal
            v61=0x0000003d,     ///<AlwaysOn61_Signal
            v62=0x0000003e,     ///<AlwaysOn62_Signal
            v63=0x0000003f,     ///<AlwaysOn63_Signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,SourceVal> source{}; 
        namespace SourceValC{
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v2> v2{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v3> v3{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v4> v4{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v5> v5{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v6> v6{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v7> v7{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v8> v8{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v9> v9{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v14> v14{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v15> v15{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v16> v16{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v17> v17{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v18> v18{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v19> v19{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v22> v22{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v23> v23{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v24> v24{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v25> v25{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v26> v26{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v27> v27{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v28> v28{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v29> v29{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v30> v30{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v31> v31{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v32> v32{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v33> v33{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v34> v34{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v35> v35{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v40> v40{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v42> v42{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v43> v43{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v45> v45{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v47> v47{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v48> v48{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v49> v49{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v50> v50{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v51> v51{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v52> v52{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v53> v53{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v54> v54{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v55> v55{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v56> v56{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v57> v57{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v58> v58{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v59> v59{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v60> v60{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v61> v61{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v62> v62{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v63> v63{};
        }
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg14{    ///<Channel Configuration register
        using Addr = Register::Address<0x4002100e,0xffffff00,0x00000000,std::uint8_t>;
        ///DMA Channel Source (Slot)
        enum class SourceVal {
            v0=0x00000000,     ///<Disable_Signal
            v2=0x00000002,     ///<UART0_Rx_Signal
            v3=0x00000003,     ///<UART0_Tx_Signal
            v4=0x00000004,     ///<UART1_Rx_Signal
            v5=0x00000005,     ///<UART1_Tx_Signal
            v6=0x00000006,     ///<UART2_Rx_Signal
            v7=0x00000007,     ///<UART2_Tx_Signal
            v8=0x00000008,     ///<UART3_Rx_Signal
            v9=0x00000009,     ///<UART3_Tx_Signal
            v14=0x0000000e,     ///<I2S0_Rx_Signal
            v15=0x0000000f,     ///<I2S0_Tx_Signal
            v16=0x00000010,     ///<SPI0_Rx_Signal
            v17=0x00000011,     ///<SPI0_Tx_Signal
            v18=0x00000012,     ///<SPI1_Rx_Signal
            v19=0x00000013,     ///<SPI1_Tx_Signal
            v22=0x00000016,     ///<I2C0_Signal
            v23=0x00000017,     ///<I2C1_Signal
            v24=0x00000018,     ///<FTM0_Channel0_Signal
            v25=0x00000019,     ///<FTM0_Channel1_Signal
            v26=0x0000001a,     ///<FTM0_Channel2_Signal
            v27=0x0000001b,     ///<FTM0_Channel3_Signal
            v28=0x0000001c,     ///<FTM0_Channel4_Signal
            v29=0x0000001d,     ///<FTM0_Channel5_Signal
            v30=0x0000001e,     ///<FTM0_Channel6_Signal
            v31=0x0000001f,     ///<FTM0_Channel7_Signal
            v32=0x00000020,     ///<FTM1_Channel0_Signal
            v33=0x00000021,     ///<FTM1_Channel1_Signal
            v34=0x00000022,     ///<FTM2_Channel0_Signal
            v35=0x00000023,     ///<FTM2_Channel1_Signal
            v40=0x00000028,     ///<ADC0_Signal
            v42=0x0000002a,     ///<CMP0_Signal
            v43=0x0000002b,     ///<CMP1_Signal
            v45=0x0000002d,     ///<DAC0_Signal
            v47=0x0000002f,     ///<CMT_Signal
            v48=0x00000030,     ///<PDB0_Signal
            v49=0x00000031,     ///<PortA_Signal
            v50=0x00000032,     ///<PortB_Signal
            v51=0x00000033,     ///<PortC_Signal
            v52=0x00000034,     ///<PortD_Signal
            v53=0x00000035,     ///<PortE_Signal
            v54=0x00000036,     ///<AlwaysOn54_Signal
            v55=0x00000037,     ///<AlwaysOn55_Signal
            v56=0x00000038,     ///<AlwaysOn56_Signal
            v57=0x00000039,     ///<AlwaysOn57_Signal
            v58=0x0000003a,     ///<AlwaysOn58_Signal
            v59=0x0000003b,     ///<AlwaysOn59_Signal
            v60=0x0000003c,     ///<AlwaysOn60_Signal
            v61=0x0000003d,     ///<AlwaysOn61_Signal
            v62=0x0000003e,     ///<AlwaysOn62_Signal
            v63=0x0000003f,     ///<AlwaysOn63_Signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,SourceVal> source{}; 
        namespace SourceValC{
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v2> v2{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v3> v3{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v4> v4{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v5> v5{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v6> v6{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v7> v7{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v8> v8{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v9> v9{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v14> v14{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v15> v15{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v16> v16{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v17> v17{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v18> v18{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v19> v19{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v22> v22{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v23> v23{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v24> v24{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v25> v25{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v26> v26{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v27> v27{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v28> v28{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v29> v29{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v30> v30{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v31> v31{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v32> v32{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v33> v33{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v34> v34{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v35> v35{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v40> v40{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v42> v42{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v43> v43{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v45> v45{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v47> v47{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v48> v48{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v49> v49{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v50> v50{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v51> v51{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v52> v52{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v53> v53{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v54> v54{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v55> v55{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v56> v56{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v57> v57{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v58> v58{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v59> v59{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v60> v60{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v61> v61{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v62> v62{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v63> v63{};
        }
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
    namespace DmamuxChcfg15{    ///<Channel Configuration register
        using Addr = Register::Address<0x4002100f,0xffffff00,0x00000000,std::uint8_t>;
        ///DMA Channel Source (Slot)
        enum class SourceVal {
            v0=0x00000000,     ///<Disable_Signal
            v2=0x00000002,     ///<UART0_Rx_Signal
            v3=0x00000003,     ///<UART0_Tx_Signal
            v4=0x00000004,     ///<UART1_Rx_Signal
            v5=0x00000005,     ///<UART1_Tx_Signal
            v6=0x00000006,     ///<UART2_Rx_Signal
            v7=0x00000007,     ///<UART2_Tx_Signal
            v8=0x00000008,     ///<UART3_Rx_Signal
            v9=0x00000009,     ///<UART3_Tx_Signal
            v14=0x0000000e,     ///<I2S0_Rx_Signal
            v15=0x0000000f,     ///<I2S0_Tx_Signal
            v16=0x00000010,     ///<SPI0_Rx_Signal
            v17=0x00000011,     ///<SPI0_Tx_Signal
            v18=0x00000012,     ///<SPI1_Rx_Signal
            v19=0x00000013,     ///<SPI1_Tx_Signal
            v22=0x00000016,     ///<I2C0_Signal
            v23=0x00000017,     ///<I2C1_Signal
            v24=0x00000018,     ///<FTM0_Channel0_Signal
            v25=0x00000019,     ///<FTM0_Channel1_Signal
            v26=0x0000001a,     ///<FTM0_Channel2_Signal
            v27=0x0000001b,     ///<FTM0_Channel3_Signal
            v28=0x0000001c,     ///<FTM0_Channel4_Signal
            v29=0x0000001d,     ///<FTM0_Channel5_Signal
            v30=0x0000001e,     ///<FTM0_Channel6_Signal
            v31=0x0000001f,     ///<FTM0_Channel7_Signal
            v32=0x00000020,     ///<FTM1_Channel0_Signal
            v33=0x00000021,     ///<FTM1_Channel1_Signal
            v34=0x00000022,     ///<FTM2_Channel0_Signal
            v35=0x00000023,     ///<FTM2_Channel1_Signal
            v40=0x00000028,     ///<ADC0_Signal
            v42=0x0000002a,     ///<CMP0_Signal
            v43=0x0000002b,     ///<CMP1_Signal
            v45=0x0000002d,     ///<DAC0_Signal
            v47=0x0000002f,     ///<CMT_Signal
            v48=0x00000030,     ///<PDB0_Signal
            v49=0x00000031,     ///<PortA_Signal
            v50=0x00000032,     ///<PortB_Signal
            v51=0x00000033,     ///<PortC_Signal
            v52=0x00000034,     ///<PortD_Signal
            v53=0x00000035,     ///<PortE_Signal
            v54=0x00000036,     ///<AlwaysOn54_Signal
            v55=0x00000037,     ///<AlwaysOn55_Signal
            v56=0x00000038,     ///<AlwaysOn56_Signal
            v57=0x00000039,     ///<AlwaysOn57_Signal
            v58=0x0000003a,     ///<AlwaysOn58_Signal
            v59=0x0000003b,     ///<AlwaysOn59_Signal
            v60=0x0000003c,     ///<AlwaysOn60_Signal
            v61=0x0000003d,     ///<AlwaysOn61_Signal
            v62=0x0000003e,     ///<AlwaysOn62_Signal
            v63=0x0000003f,     ///<AlwaysOn63_Signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,SourceVal> source{}; 
        namespace SourceValC{
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v2> v2{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v3> v3{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v4> v4{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v5> v5{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v6> v6{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v7> v7{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v8> v8{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v9> v9{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v14> v14{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v15> v15{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v16> v16{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v17> v17{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v18> v18{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v19> v19{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v22> v22{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v23> v23{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v24> v24{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v25> v25{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v26> v26{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v27> v27{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v28> v28{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v29> v29{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v30> v30{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v31> v31{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v32> v32{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v33> v33{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v34> v34{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v35> v35{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v40> v40{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v42> v42{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v43> v43{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v45> v45{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v47> v47{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v48> v48{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v49> v49{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v50> v50{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v51> v51{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v52> v52{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v53> v53{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v54> v54{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v55> v55{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v56> v56{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v57> v57{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v58> v58{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v59> v59{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v60> v60{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v61> v61{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v62> v62{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v63> v63{};
        }
        ///DMA Channel Trigger Enable
        enum class TrigVal {
            v0=0x00000000,     ///<Triggering is disabled. If triggering is disabled, and the ENBL bit is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
            v1=0x00000001,     ///<Triggering is enabled. If triggering is enabled, and the ENBL bit is set, the DMAMUX is in Periodic Trigger mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::v1> v1{};
        }
        ///DMA Channel Enable
        enum class EnblVal {
            v0=0x00000000,     ///<DMA channel is disabled. This mode is primarily used during configuration of the DMA Mux. The DMA has separate channel enables/disables, which should be used to disable or re-configure a DMA channel.
            v1=0x00000001,     ///<DMA channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnblVal> enbl{}; 
        namespace EnblValC{
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enbl)::Type,EnblVal::v1> v1{};
        }
    }
}
