#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Pulse Width Modulation Controller
    namespace PwmClk{    ///<PWM Clock Register
        using Addr = Register::Address<0x4008c000,0xf000f000,0x00000000,std::uint32_t>;
        ///CLKA, CLKB Divide Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> diva{}; 
        ///CLKA, CLKB Source Clock Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> prea{}; 
        ///CLKA, CLKB Divide Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> divb{}; 
        ///CLKA, CLKB Source Clock Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> preb{}; 
    }
    namespace PwmEna{    ///<PWM Enable Register
        using Addr = Register::Address<0x4008c004,0xfffffff0,0x00000000,std::uint32_t>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid0{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid1{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid2{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid3{}; 
    }
    namespace PwmDis{    ///<PWM Disable Register
        using Addr = Register::Address<0x4008c008,0xfffffff0,0x00000000,std::uint32_t>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid0{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid1{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid2{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid3{}; 
    }
    namespace PwmSr{    ///<PWM Status Register
        using Addr = Register::Address<0x4008c00c,0xfffffff0,0x00000000,std::uint32_t>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid0{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid1{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid2{}; 
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid3{}; 
    }
    namespace PwmIer1{    ///<PWM Interrupt Enable Register 1
        using Addr = Register::Address<0x4008c010,0xfff0fff0,0x00000000,std::uint32_t>;
        ///Counter Event on Channel 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid0{}; 
        ///Counter Event on Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid1{}; 
        ///Counter Event on Channel 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid2{}; 
        ///Counter Event on Channel 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid3{}; 
        ///Fault Protection Trigger on Channel 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fchid0{}; 
        ///Fault Protection Trigger on Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fchid1{}; 
        ///Fault Protection Trigger on Channel 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fchid2{}; 
        ///Fault Protection Trigger on Channel 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fchid3{}; 
    }
    namespace PwmIdr1{    ///<PWM Interrupt Disable Register 1
        using Addr = Register::Address<0x4008c014,0xfff0fff0,0x00000000,std::uint32_t>;
        ///Counter Event on Channel 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid0{}; 
        ///Counter Event on Channel 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid1{}; 
        ///Counter Event on Channel 2 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid2{}; 
        ///Counter Event on Channel 3 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid3{}; 
        ///Fault Protection Trigger on Channel 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fchid0{}; 
        ///Fault Protection Trigger on Channel 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fchid1{}; 
        ///Fault Protection Trigger on Channel 2 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fchid2{}; 
        ///Fault Protection Trigger on Channel 3 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fchid3{}; 
    }
    namespace PwmImr1{    ///<PWM Interrupt Mask Register 1
        using Addr = Register::Address<0x4008c018,0xfff0fff0,0x00000000,std::uint32_t>;
        ///Counter Event on Channel 0 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid0{}; 
        ///Counter Event on Channel 1 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid1{}; 
        ///Counter Event on Channel 2 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid2{}; 
        ///Counter Event on Channel 3 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid3{}; 
        ///Fault Protection Trigger on Channel 0 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fchid0{}; 
        ///Fault Protection Trigger on Channel 1 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fchid1{}; 
        ///Fault Protection Trigger on Channel 2 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fchid2{}; 
        ///Fault Protection Trigger on Channel 3 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fchid3{}; 
    }
    namespace PwmIsr1{    ///<PWM Interrupt Status Register 1
        using Addr = Register::Address<0x4008c01c,0xfff0fff0,0x00000000,std::uint32_t>;
        ///Counter Event on Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid0{}; 
        ///Counter Event on Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid1{}; 
        ///Counter Event on Channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid2{}; 
        ///Counter Event on Channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chid3{}; 
        ///Fault Protection Trigger on Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fchid0{}; 
        ///Fault Protection Trigger on Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fchid1{}; 
        ///Fault Protection Trigger on Channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fchid2{}; 
        ///Fault Protection Trigger on Channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fchid3{}; 
    }
    namespace PwmScm{    ///<PWM Sync Channels Mode Register
        using Addr = Register::Address<0x4008c020,0xff0cfff0,0x00000000,std::uint32_t>;
        ///Synchronous Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sync0{}; 
        ///Synchronous Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sync1{}; 
        ///Synchronous Channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sync2{}; 
        ///Synchronous Channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sync3{}; 
        ///Synchronous Channels Update Mode
        enum class UpdmVal {
            mode0=0x00000000,     ///<Manual write of double buffer registers and manual update of synchronous channels
            mode1=0x00000001,     ///<Manual write of double buffer registers and automatic update of synchronous channels
            mode2=0x00000002,     ///<Automatic write of duty-cycle update registers by the PDC and automatic update of synchronous channels
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,UpdmVal> updm{}; 
        namespace UpdmValC{
            constexpr Register::FieldValue<decltype(updm)::Type,UpdmVal::mode0> mode0{};
            constexpr Register::FieldValue<decltype(updm)::Type,UpdmVal::mode1> mode1{};
            constexpr Register::FieldValue<decltype(updm)::Type,UpdmVal::mode2> mode2{};
        }
        ///PDC Transfer Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ptrm{}; 
        ///PDC Transfer Request Comparison Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> ptrcs{}; 
    }
    namespace PwmScuc{    ///<PWM Sync Channels Update Control Register
        using Addr = Register::Address<0x4008c028,0xfffffffe,0x00000000,std::uint32_t>;
        ///Synchronous Channels Update Unlock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> updulock{}; 
    }
    namespace PwmScup{    ///<PWM Sync Channels Update Period Register
        using Addr = Register::Address<0x4008c02c,0xffffff00,0x00000000,std::uint32_t>;
        ///Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> upr{}; 
        ///Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> uprcnt{}; 
    }
    namespace PwmScupupd{    ///<PWM Sync Channels Update Period Update Register
        using Addr = Register::Address<0x4008c030,0xfffffff0,0x00000000,std::uint32_t>;
        ///Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uprupd{}; 
    }
    namespace PwmIer2{    ///<PWM Interrupt Enable Register 2
        using Addr = Register::Address<0x4008c034,0xff0000f0,0x00000000,std::uint32_t>;
        ///Write Ready for Synchronous Channels Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wrdy{}; 
        ///PDC End of TX Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endtx{}; 
        ///PDC TX Buffer Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbufe{}; 
        ///Synchronous Channels Update Underrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> unre{}; 
        ///Comparison 0 Match Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm0{}; 
        ///Comparison 1 Match Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm1{}; 
        ///Comparison 2 Match Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm2{}; 
        ///Comparison 3 Match Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm3{}; 
        ///Comparison 4 Match Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm4{}; 
        ///Comparison 5 Match Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm5{}; 
        ///Comparison 6 Match Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm6{}; 
        ///Comparison 7 Match Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm7{}; 
        ///Comparison 0 Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu0{}; 
        ///Comparison 1 Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu1{}; 
        ///Comparison 2 Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu2{}; 
        ///Comparison 3 Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu3{}; 
        ///Comparison 4 Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu4{}; 
        ///Comparison 5 Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu5{}; 
        ///Comparison 6 Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu6{}; 
        ///Comparison 7 Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu7{}; 
    }
    namespace PwmIdr2{    ///<PWM Interrupt Disable Register 2
        using Addr = Register::Address<0x4008c038,0xff0000f0,0x00000000,std::uint32_t>;
        ///Write Ready for Synchronous Channels Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wrdy{}; 
        ///PDC End of TX Buffer Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endtx{}; 
        ///PDC TX Buffer Empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbufe{}; 
        ///Synchronous Channels Update Underrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> unre{}; 
        ///Comparison 0 Match Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm0{}; 
        ///Comparison 1 Match Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm1{}; 
        ///Comparison 2 Match Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm2{}; 
        ///Comparison 3 Match Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm3{}; 
        ///Comparison 4 Match Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm4{}; 
        ///Comparison 5 Match Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm5{}; 
        ///Comparison 6 Match Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm6{}; 
        ///Comparison 7 Match Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm7{}; 
        ///Comparison 0 Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu0{}; 
        ///Comparison 1 Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu1{}; 
        ///Comparison 2 Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu2{}; 
        ///Comparison 3 Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu3{}; 
        ///Comparison 4 Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu4{}; 
        ///Comparison 5 Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu5{}; 
        ///Comparison 6 Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu6{}; 
        ///Comparison 7 Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu7{}; 
    }
    namespace PwmImr2{    ///<PWM Interrupt Mask Register 2
        using Addr = Register::Address<0x4008c03c,0xff0000f0,0x00000000,std::uint32_t>;
        ///Write Ready for Synchronous Channels Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wrdy{}; 
        ///PDC End of TX Buffer Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endtx{}; 
        ///PDC TX Buffer Empty Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbufe{}; 
        ///Synchronous Channels Update Underrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> unre{}; 
        ///Comparison 0 Match Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm0{}; 
        ///Comparison 1 Match Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm1{}; 
        ///Comparison 2 Match Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm2{}; 
        ///Comparison 3 Match Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm3{}; 
        ///Comparison 4 Match Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm4{}; 
        ///Comparison 5 Match Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm5{}; 
        ///Comparison 6 Match Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm6{}; 
        ///Comparison 7 Match Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm7{}; 
        ///Comparison 0 Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu0{}; 
        ///Comparison 1 Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu1{}; 
        ///Comparison 2 Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu2{}; 
        ///Comparison 3 Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu3{}; 
        ///Comparison 4 Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu4{}; 
        ///Comparison 5 Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu5{}; 
        ///Comparison 6 Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu6{}; 
        ///Comparison 7 Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu7{}; 
    }
    namespace PwmIsr2{    ///<PWM Interrupt Status Register 2
        using Addr = Register::Address<0x4008c040,0xff0000f0,0x00000000,std::uint32_t>;
        ///Write Ready for Synchronous Channels Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wrdy{}; 
        ///PDC End of TX Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endtx{}; 
        ///PDC TX Buffer Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbufe{}; 
        ///Synchronous Channels Update Underrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> unre{}; 
        ///Comparison 0 Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm0{}; 
        ///Comparison 1 Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm1{}; 
        ///Comparison 2 Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm2{}; 
        ///Comparison 3 Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm3{}; 
        ///Comparison 4 Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm4{}; 
        ///Comparison 5 Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm5{}; 
        ///Comparison 6 Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm6{}; 
        ///Comparison 7 Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpm7{}; 
        ///Comparison 0 Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu0{}; 
        ///Comparison 1 Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu1{}; 
        ///Comparison 2 Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu2{}; 
        ///Comparison 3 Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu3{}; 
        ///Comparison 4 Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu4{}; 
        ///Comparison 5 Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu5{}; 
        ///Comparison 6 Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu6{}; 
        ///Comparison 7 Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmpu7{}; 
    }
    namespace PwmOov{    ///<PWM Output Override Value Register
        using Addr = Register::Address<0x4008c044,0xfff0fff0,0x00000000,std::uint32_t>;
        ///Output Override Value for PWMH output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> oovh0{}; 
        ///Output Override Value for PWMH output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oovh1{}; 
        ///Output Override Value for PWMH output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oovh2{}; 
        ///Output Override Value for PWMH output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oovh3{}; 
        ///Output Override Value for PWML output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> oovl0{}; 
        ///Output Override Value for PWML output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> oovl1{}; 
        ///Output Override Value for PWML output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> oovl2{}; 
        ///Output Override Value for PWML output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> oovl3{}; 
    }
    namespace PwmOs{    ///<PWM Output Selection Register
        using Addr = Register::Address<0x4008c048,0xfff0fff0,0x00000000,std::uint32_t>;
        ///Output Selection for PWMH output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> osh0{}; 
        ///Output Selection for PWMH output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> osh1{}; 
        ///Output Selection for PWMH output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osh2{}; 
        ///Output Selection for PWMH output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osh3{}; 
        ///Output Selection for PWML output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> osl0{}; 
        ///Output Selection for PWML output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> osl1{}; 
        ///Output Selection for PWML output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> osl2{}; 
        ///Output Selection for PWML output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> osl3{}; 
    }
    namespace PwmOss{    ///<PWM Output Selection Set Register
        using Addr = Register::Address<0x4008c04c,0xfff0fff0,0x00000000,std::uint32_t>;
        ///Output Selection Set for PWMH output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ossh0{}; 
        ///Output Selection Set for PWMH output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ossh1{}; 
        ///Output Selection Set for PWMH output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ossh2{}; 
        ///Output Selection Set for PWMH output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ossh3{}; 
        ///Output Selection Set for PWML output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ossl0{}; 
        ///Output Selection Set for PWML output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ossl1{}; 
        ///Output Selection Set for PWML output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ossl2{}; 
        ///Output Selection Set for PWML output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ossl3{}; 
    }
    namespace PwmOsc{    ///<PWM Output Selection Clear Register
        using Addr = Register::Address<0x4008c050,0xfff0fff0,0x00000000,std::uint32_t>;
        ///Output Selection Clear for PWMH output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> osch0{}; 
        ///Output Selection Clear for PWMH output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> osch1{}; 
        ///Output Selection Clear for PWMH output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> osch2{}; 
        ///Output Selection Clear for PWMH output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> osch3{}; 
        ///Output Selection Clear for PWML output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oscl0{}; 
        ///Output Selection Clear for PWML output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oscl1{}; 
        ///Output Selection Clear for PWML output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oscl2{}; 
        ///Output Selection Clear for PWML output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oscl3{}; 
    }
    namespace PwmOssupd{    ///<PWM Output Selection Set Update Register
        using Addr = Register::Address<0x4008c054,0xfff0fff0,0x00000000,std::uint32_t>;
        ///Output Selection Set for PWMH output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ossuph0{}; 
        ///Output Selection Set for PWMH output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ossuph1{}; 
        ///Output Selection Set for PWMH output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ossuph2{}; 
        ///Output Selection Set for PWMH output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ossuph3{}; 
        ///Output Selection Set for PWML output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ossupl0{}; 
        ///Output Selection Set for PWML output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ossupl1{}; 
        ///Output Selection Set for PWML output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ossupl2{}; 
        ///Output Selection Set for PWML output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ossupl3{}; 
    }
    namespace PwmOscupd{    ///<PWM Output Selection Clear Update Register
        using Addr = Register::Address<0x4008c058,0xfff0fff0,0x00000000,std::uint32_t>;
        ///Output Selection Clear for PWMH output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oscuph0{}; 
        ///Output Selection Clear for PWMH output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oscuph1{}; 
        ///Output Selection Clear for PWMH output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oscuph2{}; 
        ///Output Selection Clear for PWMH output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oscuph3{}; 
        ///Output Selection Clear for PWML output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oscupl0{}; 
        ///Output Selection Clear for PWML output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oscupl1{}; 
        ///Output Selection Clear for PWML output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oscupl2{}; 
        ///Output Selection Clear for PWML output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oscupl3{}; 
    }
    namespace PwmFmr{    ///<PWM Fault Mode Register
        using Addr = Register::Address<0x4008c05c,0xff000000,0x00000000,std::uint32_t>;
        ///Fault Polarity (fault input bit varies from 0 to 3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fpol{}; 
        ///Fault Activation Mode (fault input bit varies from 0 to 3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> fmod{}; 
        ///Fault Filtering (fault input bit varies from 0 to 3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ffil{}; 
    }
    namespace PwmFsr{    ///<PWM Fault Status Register
        using Addr = Register::Address<0x4008c060,0xffff0000,0x00000000,std::uint32_t>;
        ///Fault Input Value (fault input bit varies from 0 to 3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fiv{}; 
        ///Fault Status (fault input bit varies from 0 to 3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fs{}; 
    }
    namespace PwmFcr{    ///<PWM Fault Clear Register
        using Addr = Register::Address<0x4008c064,0xffffff00,0x00000000,std::uint32_t>;
        ///Fault Clear (fault input bit varies from 0 to 3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fclr{}; 
    }
    namespace PwmFpv{    ///<PWM Fault Protection Value Register
        using Addr = Register::Address<0x4008c068,0xfff0fff0,0x00000000,std::uint32_t>;
        ///Fault Protection Value for PWMH output on channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fpvh0{}; 
        ///Fault Protection Value for PWMH output on channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fpvh1{}; 
        ///Fault Protection Value for PWMH output on channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fpvh2{}; 
        ///Fault Protection Value for PWMH output on channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fpvh3{}; 
        ///Fault Protection Value for PWML output on channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fpvl0{}; 
        ///Fault Protection Value for PWML output on channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fpvl1{}; 
        ///Fault Protection Value for PWML output on channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fpvl2{}; 
        ///Fault Protection Value for PWML output on channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> fpvl3{}; 
    }
    namespace PwmFpe{    ///<PWM Fault Protection Enable Register
        using Addr = Register::Address<0x4008c06c,0x00000000,0x00000000,std::uint32_t>;
        ///Fault Protection Enable for channel 0 (fault input bit varies from 0 to 3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fpe0{}; 
        ///Fault Protection Enable for channel 1 (fault input bit varies from 0 to 3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> fpe1{}; 
        ///Fault Protection Enable for channel 2 (fault input bit varies from 0 to 3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> fpe2{}; 
        ///Fault Protection Enable for channel 3 (fault input bit varies from 0 to 3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> fpe3{}; 
    }
    namespace PwmSmmr{    ///<PWM Stepper Motor Mode Register
        using Addr = Register::Address<0x4008c0b0,0xfffcfffc,0x00000000,std::uint32_t>;
        ///Gray Count ENable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gcen0{}; 
        ///Gray Count ENable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gcen1{}; 
        ///DOWN Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> down0{}; 
        ///DOWN Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> down1{}; 
    }
    namespace PwmWpcr{    ///<PWM Write Protect Control Register
        using Addr = Register::Address<0x4008c0e4,0x00000000,0x00000000,std::uint32_t>;
        ///Write Protect Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpcmd{}; 
        ///Write Protect Register Group 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wprg0{}; 
        ///Write Protect Register Group 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wprg1{}; 
        ///Write Protect Register Group 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wprg2{}; 
        ///Write Protect Register Group 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wprg3{}; 
        ///Write Protect Register Group 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wprg4{}; 
        ///Write Protect Register Group 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wprg5{}; 
        ///Write Protect Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpkey{}; 
    }
    namespace PwmWpsr{    ///<PWM Write Protect Status Register
        using Addr = Register::Address<0x4008c0e8,0x0000c040,0x00000000,std::uint32_t>;
        ///Write Protect SW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpsws0{}; 
        ///Write Protect SW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpsws1{}; 
        ///Write Protect SW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpsws2{}; 
        ///Write Protect SW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpsws3{}; 
        ///Write Protect SW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpsws4{}; 
        ///Write Protect SW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpsws5{}; 
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvs{}; 
        ///Write Protect HW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wphws0{}; 
        ///Write Protect HW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wphws1{}; 
        ///Write Protect HW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wphws2{}; 
        ///Write Protect HW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wphws3{}; 
        ///Write Protect HW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wphws4{}; 
        ///Write Protect HW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wphws5{}; 
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvsrc{}; 
    }
    namespace PwmCmpv0{    ///<PWM Comparison 0 Value Register
        using Addr = Register::Address<0x4008c130,0xfe000000,0x00000000,std::uint32_t>;
        ///Comparison x Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cv{}; 
        ///Comparison x Value Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvm{}; 
    }
    namespace PwmCmpvupd0{    ///<PWM Comparison 0 Value Update Register
        using Addr = Register::Address<0x4008c134,0xfe000000,0x00000000,std::uint32_t>;
        ///Comparison x Value Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cvupd{}; 
        ///Comparison x Value Mode Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cvmupd{}; 
    }
    namespace PwmCmpm0{    ///<PWM Comparison 0 Mode Register
        using Addr = Register::Address<0x4008c138,0xff00000e,0x00000000,std::uint32_t>;
        ///Comparison x Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        ///Comparison x Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctr{}; 
        ///Comparison x Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cpr{}; 
        ///Comparison x Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cprcnt{}; 
        ///Comparison x Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cupr{}; 
        ///Comparison x Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cuprcnt{}; 
    }
    namespace PwmCmpmupd0{    ///<PWM Comparison 0 Mode Update Register
        using Addr = Register::Address<0x4008c13c,0xfff0f00e,0x00000000,std::uint32_t>;
        ///Comparison x Enable Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cenupd{}; 
        ///Comparison x Trigger Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrupd{}; 
        ///Comparison x Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cprupd{}; 
        ///Comparison x Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cuprupd{}; 
    }
    namespace PwmCmpv1{    ///<PWM Comparison 1 Value Register
        using Addr = Register::Address<0x4008c140,0xfe000000,0x00000000,std::uint32_t>;
        ///Comparison x Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cv{}; 
        ///Comparison x Value Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvm{}; 
    }
    namespace PwmCmpvupd1{    ///<PWM Comparison 1 Value Update Register
        using Addr = Register::Address<0x4008c144,0xfe000000,0x00000000,std::uint32_t>;
        ///Comparison x Value Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cvupd{}; 
        ///Comparison x Value Mode Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cvmupd{}; 
    }
    namespace PwmCmpm1{    ///<PWM Comparison 1 Mode Register
        using Addr = Register::Address<0x4008c148,0xff00000e,0x00000000,std::uint32_t>;
        ///Comparison x Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        ///Comparison x Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctr{}; 
        ///Comparison x Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cpr{}; 
        ///Comparison x Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cprcnt{}; 
        ///Comparison x Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cupr{}; 
        ///Comparison x Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cuprcnt{}; 
    }
    namespace PwmCmpmupd1{    ///<PWM Comparison 1 Mode Update Register
        using Addr = Register::Address<0x4008c14c,0xfff0f00e,0x00000000,std::uint32_t>;
        ///Comparison x Enable Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cenupd{}; 
        ///Comparison x Trigger Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrupd{}; 
        ///Comparison x Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cprupd{}; 
        ///Comparison x Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cuprupd{}; 
    }
    namespace PwmCmpv2{    ///<PWM Comparison 2 Value Register
        using Addr = Register::Address<0x4008c150,0xfe000000,0x00000000,std::uint32_t>;
        ///Comparison x Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cv{}; 
        ///Comparison x Value Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvm{}; 
    }
    namespace PwmCmpvupd2{    ///<PWM Comparison 2 Value Update Register
        using Addr = Register::Address<0x4008c154,0xfe000000,0x00000000,std::uint32_t>;
        ///Comparison x Value Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cvupd{}; 
        ///Comparison x Value Mode Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cvmupd{}; 
    }
    namespace PwmCmpm2{    ///<PWM Comparison 2 Mode Register
        using Addr = Register::Address<0x4008c158,0xff00000e,0x00000000,std::uint32_t>;
        ///Comparison x Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        ///Comparison x Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctr{}; 
        ///Comparison x Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cpr{}; 
        ///Comparison x Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cprcnt{}; 
        ///Comparison x Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cupr{}; 
        ///Comparison x Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cuprcnt{}; 
    }
    namespace PwmCmpmupd2{    ///<PWM Comparison 2 Mode Update Register
        using Addr = Register::Address<0x4008c15c,0xfff0f00e,0x00000000,std::uint32_t>;
        ///Comparison x Enable Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cenupd{}; 
        ///Comparison x Trigger Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrupd{}; 
        ///Comparison x Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cprupd{}; 
        ///Comparison x Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cuprupd{}; 
    }
    namespace PwmCmpv3{    ///<PWM Comparison 3 Value Register
        using Addr = Register::Address<0x4008c160,0xfe000000,0x00000000,std::uint32_t>;
        ///Comparison x Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cv{}; 
        ///Comparison x Value Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvm{}; 
    }
    namespace PwmCmpvupd3{    ///<PWM Comparison 3 Value Update Register
        using Addr = Register::Address<0x4008c164,0xfe000000,0x00000000,std::uint32_t>;
        ///Comparison x Value Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cvupd{}; 
        ///Comparison x Value Mode Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cvmupd{}; 
    }
    namespace PwmCmpm3{    ///<PWM Comparison 3 Mode Register
        using Addr = Register::Address<0x4008c168,0xff00000e,0x00000000,std::uint32_t>;
        ///Comparison x Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        ///Comparison x Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctr{}; 
        ///Comparison x Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cpr{}; 
        ///Comparison x Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cprcnt{}; 
        ///Comparison x Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cupr{}; 
        ///Comparison x Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cuprcnt{}; 
    }
    namespace PwmCmpmupd3{    ///<PWM Comparison 3 Mode Update Register
        using Addr = Register::Address<0x4008c16c,0xfff0f00e,0x00000000,std::uint32_t>;
        ///Comparison x Enable Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cenupd{}; 
        ///Comparison x Trigger Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrupd{}; 
        ///Comparison x Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cprupd{}; 
        ///Comparison x Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cuprupd{}; 
    }
    namespace PwmCmpv4{    ///<PWM Comparison 4 Value Register
        using Addr = Register::Address<0x4008c170,0xfe000000,0x00000000,std::uint32_t>;
        ///Comparison x Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cv{}; 
        ///Comparison x Value Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvm{}; 
    }
    namespace PwmCmpvupd4{    ///<PWM Comparison 4 Value Update Register
        using Addr = Register::Address<0x4008c174,0xfe000000,0x00000000,std::uint32_t>;
        ///Comparison x Value Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cvupd{}; 
        ///Comparison x Value Mode Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cvmupd{}; 
    }
    namespace PwmCmpm4{    ///<PWM Comparison 4 Mode Register
        using Addr = Register::Address<0x4008c178,0xff00000e,0x00000000,std::uint32_t>;
        ///Comparison x Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        ///Comparison x Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctr{}; 
        ///Comparison x Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cpr{}; 
        ///Comparison x Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cprcnt{}; 
        ///Comparison x Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cupr{}; 
        ///Comparison x Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cuprcnt{}; 
    }
    namespace PwmCmpmupd4{    ///<PWM Comparison 4 Mode Update Register
        using Addr = Register::Address<0x4008c17c,0xfff0f00e,0x00000000,std::uint32_t>;
        ///Comparison x Enable Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cenupd{}; 
        ///Comparison x Trigger Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrupd{}; 
        ///Comparison x Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cprupd{}; 
        ///Comparison x Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cuprupd{}; 
    }
    namespace PwmCmpv5{    ///<PWM Comparison 5 Value Register
        using Addr = Register::Address<0x4008c180,0xfe000000,0x00000000,std::uint32_t>;
        ///Comparison x Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cv{}; 
        ///Comparison x Value Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvm{}; 
    }
    namespace PwmCmpvupd5{    ///<PWM Comparison 5 Value Update Register
        using Addr = Register::Address<0x4008c184,0xfe000000,0x00000000,std::uint32_t>;
        ///Comparison x Value Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cvupd{}; 
        ///Comparison x Value Mode Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cvmupd{}; 
    }
    namespace PwmCmpm5{    ///<PWM Comparison 5 Mode Register
        using Addr = Register::Address<0x4008c188,0xff00000e,0x00000000,std::uint32_t>;
        ///Comparison x Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        ///Comparison x Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctr{}; 
        ///Comparison x Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cpr{}; 
        ///Comparison x Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cprcnt{}; 
        ///Comparison x Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cupr{}; 
        ///Comparison x Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cuprcnt{}; 
    }
    namespace PwmCmpmupd5{    ///<PWM Comparison 5 Mode Update Register
        using Addr = Register::Address<0x4008c18c,0xfff0f00e,0x00000000,std::uint32_t>;
        ///Comparison x Enable Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cenupd{}; 
        ///Comparison x Trigger Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrupd{}; 
        ///Comparison x Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cprupd{}; 
        ///Comparison x Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cuprupd{}; 
    }
    namespace PwmCmpv6{    ///<PWM Comparison 6 Value Register
        using Addr = Register::Address<0x4008c190,0xfe000000,0x00000000,std::uint32_t>;
        ///Comparison x Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cv{}; 
        ///Comparison x Value Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvm{}; 
    }
    namespace PwmCmpvupd6{    ///<PWM Comparison 6 Value Update Register
        using Addr = Register::Address<0x4008c194,0xfe000000,0x00000000,std::uint32_t>;
        ///Comparison x Value Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cvupd{}; 
        ///Comparison x Value Mode Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cvmupd{}; 
    }
    namespace PwmCmpm6{    ///<PWM Comparison 6 Mode Register
        using Addr = Register::Address<0x4008c198,0xff00000e,0x00000000,std::uint32_t>;
        ///Comparison x Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        ///Comparison x Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctr{}; 
        ///Comparison x Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cpr{}; 
        ///Comparison x Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cprcnt{}; 
        ///Comparison x Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cupr{}; 
        ///Comparison x Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cuprcnt{}; 
    }
    namespace PwmCmpmupd6{    ///<PWM Comparison 6 Mode Update Register
        using Addr = Register::Address<0x4008c19c,0xfff0f00e,0x00000000,std::uint32_t>;
        ///Comparison x Enable Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cenupd{}; 
        ///Comparison x Trigger Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrupd{}; 
        ///Comparison x Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cprupd{}; 
        ///Comparison x Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cuprupd{}; 
    }
    namespace PwmCmpv7{    ///<PWM Comparison 7 Value Register
        using Addr = Register::Address<0x4008c1a0,0xfe000000,0x00000000,std::uint32_t>;
        ///Comparison x Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cv{}; 
        ///Comparison x Value Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvm{}; 
    }
    namespace PwmCmpvupd7{    ///<PWM Comparison 7 Value Update Register
        using Addr = Register::Address<0x4008c1a4,0xfe000000,0x00000000,std::uint32_t>;
        ///Comparison x Value Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cvupd{}; 
        ///Comparison x Value Mode Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cvmupd{}; 
    }
    namespace PwmCmpm7{    ///<PWM Comparison 7 Mode Register
        using Addr = Register::Address<0x4008c1a8,0xff00000e,0x00000000,std::uint32_t>;
        ///Comparison x Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        ///Comparison x Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctr{}; 
        ///Comparison x Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cpr{}; 
        ///Comparison x Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cprcnt{}; 
        ///Comparison x Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cupr{}; 
        ///Comparison x Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cuprcnt{}; 
    }
    namespace PwmCmpmupd7{    ///<PWM Comparison 7 Mode Update Register
        using Addr = Register::Address<0x4008c1ac,0xfff0f00e,0x00000000,std::uint32_t>;
        ///Comparison x Enable Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cenupd{}; 
        ///Comparison x Trigger Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctrupd{}; 
        ///Comparison x Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cprupd{}; 
        ///Comparison x Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cuprupd{}; 
    }
    namespace PwmCmr0{    ///<PWM Channel Mode Register (ch_num = 0)
        using Addr = Register::Address<0x4008c200,0xfff8f8f0,0x00000000,std::uint32_t>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master clock
            mckDiv2=0x00000001,     ///<Master clock/2
            mckDiv4=0x00000002,     ///<Master clock/4
            mckDiv8=0x00000003,     ///<Master clock/8
            mckDiv16=0x00000004,     ///<Master clock/16
            mckDiv32=0x00000005,     ///<Master clock/32
            mckDiv64=0x00000006,     ///<Master clock/64
            mckDiv128=0x00000007,     ///<Master clock/128
            mckDiv256=0x00000008,     ///<Master clock/256
            mckDiv512=0x00000009,     ///<Master clock/512
            mckDiv1024=0x0000000a,     ///<Master clock/1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv2> mckDiv2{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv4> mckDiv4{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv8> mckDiv8{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv16> mckDiv16{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv32> mckDiv32{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv64> mckDiv64{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv128> mckDiv128{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv256> mckDiv256{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv512> mckDiv512{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv1024> mckDiv1024{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Counter Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ces{}; 
        ///Dead-Time Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dte{}; 
        ///Dead-Time PWMHx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dthi{}; 
        ///Dead-Time PWMLx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dtli{}; 
    }
    namespace PwmCdty0{    ///<PWM Channel Duty Cycle Register (ch_num = 0)
        using Addr = Register::Address<0x4008c204,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Duty-Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdty{}; 
    }
    namespace PwmCdtyupd0{    ///<PWM Channel Duty Cycle Update Register (ch_num = 0)
        using Addr = Register::Address<0x4008c208,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Duty-Cycle Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cdtyupd{}; 
    }
    namespace PwmCprd0{    ///<PWM Channel Period Register (ch_num = 0)
        using Addr = Register::Address<0x4008c20c,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprd{}; 
    }
    namespace PwmCprdupd0{    ///<PWM Channel Period Update Register (ch_num = 0)
        using Addr = Register::Address<0x4008c210,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cprdupd{}; 
    }
    namespace PwmCcnt0{    ///<PWM Channel Counter Register (ch_num = 0)
        using Addr = Register::Address<0x4008c214,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnt{}; 
    }
    namespace PwmDt0{    ///<PWM Channel Dead Time Register (ch_num = 0)
        using Addr = Register::Address<0x4008c218,0x00000000,0x00000000,std::uint32_t>;
        ///Dead-Time Value for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dth{}; 
        ///Dead-Time Value for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtl{}; 
    }
    namespace PwmDtupd0{    ///<PWM Channel Dead Time Update Register (ch_num = 0)
        using Addr = Register::Address<0x4008c21c,0x00000000,0x00000000,std::uint32_t>;
        ///Dead-Time Value Update for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dthupd{}; 
        ///Dead-Time Value Update for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtlupd{}; 
    }
    namespace PwmCmr1{    ///<PWM Channel Mode Register (ch_num = 1)
        using Addr = Register::Address<0x4008c220,0xfff8f8f0,0x00000000,std::uint32_t>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master clock
            mckDiv2=0x00000001,     ///<Master clock/2
            mckDiv4=0x00000002,     ///<Master clock/4
            mckDiv8=0x00000003,     ///<Master clock/8
            mckDiv16=0x00000004,     ///<Master clock/16
            mckDiv32=0x00000005,     ///<Master clock/32
            mckDiv64=0x00000006,     ///<Master clock/64
            mckDiv128=0x00000007,     ///<Master clock/128
            mckDiv256=0x00000008,     ///<Master clock/256
            mckDiv512=0x00000009,     ///<Master clock/512
            mckDiv1024=0x0000000a,     ///<Master clock/1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv2> mckDiv2{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv4> mckDiv4{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv8> mckDiv8{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv16> mckDiv16{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv32> mckDiv32{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv64> mckDiv64{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv128> mckDiv128{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv256> mckDiv256{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv512> mckDiv512{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv1024> mckDiv1024{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Counter Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ces{}; 
        ///Dead-Time Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dte{}; 
        ///Dead-Time PWMHx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dthi{}; 
        ///Dead-Time PWMLx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dtli{}; 
    }
    namespace PwmCdty1{    ///<PWM Channel Duty Cycle Register (ch_num = 1)
        using Addr = Register::Address<0x4008c224,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Duty-Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdty{}; 
    }
    namespace PwmCdtyupd1{    ///<PWM Channel Duty Cycle Update Register (ch_num = 1)
        using Addr = Register::Address<0x4008c228,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Duty-Cycle Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cdtyupd{}; 
    }
    namespace PwmCprd1{    ///<PWM Channel Period Register (ch_num = 1)
        using Addr = Register::Address<0x4008c22c,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprd{}; 
    }
    namespace PwmCprdupd1{    ///<PWM Channel Period Update Register (ch_num = 1)
        using Addr = Register::Address<0x4008c230,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cprdupd{}; 
    }
    namespace PwmCcnt1{    ///<PWM Channel Counter Register (ch_num = 1)
        using Addr = Register::Address<0x4008c234,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnt{}; 
    }
    namespace PwmDt1{    ///<PWM Channel Dead Time Register (ch_num = 1)
        using Addr = Register::Address<0x4008c238,0x00000000,0x00000000,std::uint32_t>;
        ///Dead-Time Value for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dth{}; 
        ///Dead-Time Value for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtl{}; 
    }
    namespace PwmDtupd1{    ///<PWM Channel Dead Time Update Register (ch_num = 1)
        using Addr = Register::Address<0x4008c23c,0x00000000,0x00000000,std::uint32_t>;
        ///Dead-Time Value Update for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dthupd{}; 
        ///Dead-Time Value Update for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtlupd{}; 
    }
    namespace PwmCmr2{    ///<PWM Channel Mode Register (ch_num = 2)
        using Addr = Register::Address<0x4008c240,0xfff8f8f0,0x00000000,std::uint32_t>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master clock
            mckDiv2=0x00000001,     ///<Master clock/2
            mckDiv4=0x00000002,     ///<Master clock/4
            mckDiv8=0x00000003,     ///<Master clock/8
            mckDiv16=0x00000004,     ///<Master clock/16
            mckDiv32=0x00000005,     ///<Master clock/32
            mckDiv64=0x00000006,     ///<Master clock/64
            mckDiv128=0x00000007,     ///<Master clock/128
            mckDiv256=0x00000008,     ///<Master clock/256
            mckDiv512=0x00000009,     ///<Master clock/512
            mckDiv1024=0x0000000a,     ///<Master clock/1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv2> mckDiv2{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv4> mckDiv4{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv8> mckDiv8{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv16> mckDiv16{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv32> mckDiv32{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv64> mckDiv64{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv128> mckDiv128{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv256> mckDiv256{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv512> mckDiv512{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv1024> mckDiv1024{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Counter Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ces{}; 
        ///Dead-Time Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dte{}; 
        ///Dead-Time PWMHx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dthi{}; 
        ///Dead-Time PWMLx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dtli{}; 
    }
    namespace PwmCdty2{    ///<PWM Channel Duty Cycle Register (ch_num = 2)
        using Addr = Register::Address<0x4008c244,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Duty-Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdty{}; 
    }
    namespace PwmCdtyupd2{    ///<PWM Channel Duty Cycle Update Register (ch_num = 2)
        using Addr = Register::Address<0x4008c248,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Duty-Cycle Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cdtyupd{}; 
    }
    namespace PwmCprd2{    ///<PWM Channel Period Register (ch_num = 2)
        using Addr = Register::Address<0x4008c24c,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprd{}; 
    }
    namespace PwmCprdupd2{    ///<PWM Channel Period Update Register (ch_num = 2)
        using Addr = Register::Address<0x4008c250,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cprdupd{}; 
    }
    namespace PwmCcnt2{    ///<PWM Channel Counter Register (ch_num = 2)
        using Addr = Register::Address<0x4008c254,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnt{}; 
    }
    namespace PwmDt2{    ///<PWM Channel Dead Time Register (ch_num = 2)
        using Addr = Register::Address<0x4008c258,0x00000000,0x00000000,std::uint32_t>;
        ///Dead-Time Value for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dth{}; 
        ///Dead-Time Value for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtl{}; 
    }
    namespace PwmDtupd2{    ///<PWM Channel Dead Time Update Register (ch_num = 2)
        using Addr = Register::Address<0x4008c25c,0x00000000,0x00000000,std::uint32_t>;
        ///Dead-Time Value Update for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dthupd{}; 
        ///Dead-Time Value Update for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtlupd{}; 
    }
    namespace PwmCmr3{    ///<PWM Channel Mode Register (ch_num = 3)
        using Addr = Register::Address<0x4008c260,0xfff8f8f0,0x00000000,std::uint32_t>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master clock
            mckDiv2=0x00000001,     ///<Master clock/2
            mckDiv4=0x00000002,     ///<Master clock/4
            mckDiv8=0x00000003,     ///<Master clock/8
            mckDiv16=0x00000004,     ///<Master clock/16
            mckDiv32=0x00000005,     ///<Master clock/32
            mckDiv64=0x00000006,     ///<Master clock/64
            mckDiv128=0x00000007,     ///<Master clock/128
            mckDiv256=0x00000008,     ///<Master clock/256
            mckDiv512=0x00000009,     ///<Master clock/512
            mckDiv1024=0x0000000a,     ///<Master clock/1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv2> mckDiv2{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv4> mckDiv4{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv8> mckDiv8{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv16> mckDiv16{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv32> mckDiv32{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv64> mckDiv64{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv128> mckDiv128{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv256> mckDiv256{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv512> mckDiv512{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::mckDiv1024> mckDiv1024{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre)::Type,CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Counter Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ces{}; 
        ///Dead-Time Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dte{}; 
        ///Dead-Time PWMHx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dthi{}; 
        ///Dead-Time PWMLx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dtli{}; 
    }
    namespace PwmCdty3{    ///<PWM Channel Duty Cycle Register (ch_num = 3)
        using Addr = Register::Address<0x4008c264,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Duty-Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdty{}; 
    }
    namespace PwmCdtyupd3{    ///<PWM Channel Duty Cycle Update Register (ch_num = 3)
        using Addr = Register::Address<0x4008c268,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Duty-Cycle Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cdtyupd{}; 
    }
    namespace PwmCprd3{    ///<PWM Channel Period Register (ch_num = 3)
        using Addr = Register::Address<0x4008c26c,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprd{}; 
    }
    namespace PwmCprdupd3{    ///<PWM Channel Period Update Register (ch_num = 3)
        using Addr = Register::Address<0x4008c270,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cprdupd{}; 
    }
    namespace PwmCcnt3{    ///<PWM Channel Counter Register (ch_num = 3)
        using Addr = Register::Address<0x4008c274,0xff000000,0x00000000,std::uint32_t>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnt{}; 
    }
    namespace PwmDt3{    ///<PWM Channel Dead Time Register (ch_num = 3)
        using Addr = Register::Address<0x4008c278,0x00000000,0x00000000,std::uint32_t>;
        ///Dead-Time Value for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dth{}; 
        ///Dead-Time Value for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtl{}; 
    }
    namespace PwmDtupd3{    ///<PWM Channel Dead Time Update Register (ch_num = 3)
        using Addr = Register::Address<0x4008c27c,0x00000000,0x00000000,std::uint32_t>;
        ///Dead-Time Value Update for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dthupd{}; 
        ///Dead-Time Value Update for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtlupd{}; 
    }
    namespace PwmTpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0x4008c108,0x00000000,0x00000000,std::uint32_t>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
    }
    namespace PwmTcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0x4008c10c,0xffff0000,0x00000000,std::uint32_t>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
    }
    namespace PwmTnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0x4008c118,0x00000000,0x00000000,std::uint32_t>;
        ///Transmit Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
    }
    namespace PwmTncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0x4008c11c,0xffff0000,0x00000000,std::uint32_t>;
        ///Transmit Counter Next
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
    }
    namespace PwmPtcr{    ///<Transfer Control Register
        using Addr = Register::Address<0x4008c120,0xfffffcfc,0x00000000,std::uint32_t>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txtdis{}; 
    }
    namespace PwmPtsr{    ///<Transfer Status Register
        using Addr = Register::Address<0x4008c124,0xfffffefe,0x00000000,std::uint32_t>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txten{}; 
    }
    namespace PwmElmr0{    ///<PWM Event Line 0 Mode Register
        using Addr = Register::Address<0x4008c07c,0xffffff00,0x00000000,std::uint32_t>;
        ///Comparison 0 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csel0{}; 
        ///Comparison 1 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csel1{}; 
        ///Comparison 2 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> csel2{}; 
        ///Comparison 3 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csel3{}; 
        ///Comparison 4 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> csel4{}; 
        ///Comparison 5 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> csel5{}; 
        ///Comparison 6 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> csel6{}; 
        ///Comparison 7 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> csel7{}; 
    }
    namespace PwmElmr1{    ///<PWM Event Line 0 Mode Register
        using Addr = Register::Address<0x4008c080,0xffffff00,0x00000000,std::uint32_t>;
        ///Comparison 0 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csel0{}; 
        ///Comparison 1 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csel1{}; 
        ///Comparison 2 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> csel2{}; 
        ///Comparison 3 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csel3{}; 
        ///Comparison 4 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> csel4{}; 
        ///Comparison 5 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> csel5{}; 
        ///Comparison 6 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> csel6{}; 
        ///Comparison 7 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> csel7{}; 
    }
}
