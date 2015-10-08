#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//GPIO Tasks and Events
    namespace NonetasksOut0{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is configured in CONFIG[0].POLARITY.
        using Addr = Register::Address<0x40006000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksOut1{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is configured in CONFIG[0].POLARITY.
        using Addr = Register::Address<0x40006004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksOut2{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is configured in CONFIG[0].POLARITY.
        using Addr = Register::Address<0x40006008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksOut3{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is configured in CONFIG[0].POLARITY.
        using Addr = Register::Address<0x4000600c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksOut4{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is configured in CONFIG[0].POLARITY.
        using Addr = Register::Address<0x40006010,0xffffffff,0,unsigned>;
    }
    namespace NonetasksOut5{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is configured in CONFIG[0].POLARITY.
        using Addr = Register::Address<0x40006014,0xffffffff,0,unsigned>;
    }
    namespace NonetasksOut6{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is configured in CONFIG[0].POLARITY.
        using Addr = Register::Address<0x40006018,0xffffffff,0,unsigned>;
    }
    namespace NonetasksOut7{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is configured in CONFIG[0].POLARITY.
        using Addr = Register::Address<0x4000601c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSet0{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it high.
        using Addr = Register::Address<0x40006030,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSet1{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it high.
        using Addr = Register::Address<0x40006034,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSet2{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it high.
        using Addr = Register::Address<0x40006038,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSet3{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it high.
        using Addr = Register::Address<0x4000603c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSet4{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it high.
        using Addr = Register::Address<0x40006040,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSet5{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it high.
        using Addr = Register::Address<0x40006044,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSet6{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it high.
        using Addr = Register::Address<0x40006048,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSet7{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it high.
        using Addr = Register::Address<0x4000604c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksClr0{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it low.
        using Addr = Register::Address<0x40006060,0xffffffff,0,unsigned>;
    }
    namespace NonetasksClr1{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it low.
        using Addr = Register::Address<0x40006064,0xffffffff,0,unsigned>;
    }
    namespace NonetasksClr2{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it low.
        using Addr = Register::Address<0x40006068,0xffffffff,0,unsigned>;
    }
    namespace NonetasksClr3{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it low.
        using Addr = Register::Address<0x4000606c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksClr4{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it low.
        using Addr = Register::Address<0x40006070,0xffffffff,0,unsigned>;
    }
    namespace NonetasksClr5{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it low.
        using Addr = Register::Address<0x40006074,0xffffffff,0,unsigned>;
    }
    namespace NonetasksClr6{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it low.
        using Addr = Register::Address<0x40006078,0xffffffff,0,unsigned>;
    }
    namespace NonetasksClr7{    ///<Description collection[0]:  Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it low.
        using Addr = Register::Address<0x4000607c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsIn0{    ///<Description collection[0]:  Event generated from pin specified in CONFIG[0].PSEL
        using Addr = Register::Address<0x40006100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsIn1{    ///<Description collection[0]:  Event generated from pin specified in CONFIG[0].PSEL
        using Addr = Register::Address<0x40006104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsIn2{    ///<Description collection[0]:  Event generated from pin specified in CONFIG[0].PSEL
        using Addr = Register::Address<0x40006108,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsIn3{    ///<Description collection[0]:  Event generated from pin specified in CONFIG[0].PSEL
        using Addr = Register::Address<0x4000610c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsIn4{    ///<Description collection[0]:  Event generated from pin specified in CONFIG[0].PSEL
        using Addr = Register::Address<0x40006110,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsIn5{    ///<Description collection[0]:  Event generated from pin specified in CONFIG[0].PSEL
        using Addr = Register::Address<0x40006114,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsIn6{    ///<Description collection[0]:  Event generated from pin specified in CONFIG[0].PSEL
        using Addr = Register::Address<0x40006118,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsIn7{    ///<Description collection[0]:  Event generated from pin specified in CONFIG[0].PSEL
        using Addr = Register::Address<0x4000611c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsPort{    ///<Event generated from multiple input GPIO pins with SENSE mechanism enabled
        using Addr = Register::Address<0x4000617c,0xffffffff,0,unsigned>;
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40006304,0x7fffff00,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_IN[0] event
        enum class in0Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace in0ValC{
            constexpr MPL::Value<in0Val,in0Val::disabled> disabled{};
            constexpr MPL::Value<in0Val,in0Val::enabled> enabled{};
            constexpr MPL::Value<in0Val,in0Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,in0Val> in0{}; 
        ///Write '1' to Enable interrupt on EVENTS_IN[1] event
        enum class in1Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace in1ValC{
            constexpr MPL::Value<in1Val,in1Val::disabled> disabled{};
            constexpr MPL::Value<in1Val,in1Val::enabled> enabled{};
            constexpr MPL::Value<in1Val,in1Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,in1Val> in1{}; 
        ///Write '1' to Enable interrupt on EVENTS_IN[2] event
        enum class in2Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace in2ValC{
            constexpr MPL::Value<in2Val,in2Val::disabled> disabled{};
            constexpr MPL::Value<in2Val,in2Val::enabled> enabled{};
            constexpr MPL::Value<in2Val,in2Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,in2Val> in2{}; 
        ///Write '1' to Enable interrupt on EVENTS_IN[3] event
        enum class in3Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace in3ValC{
            constexpr MPL::Value<in3Val,in3Val::disabled> disabled{};
            constexpr MPL::Value<in3Val,in3Val::enabled> enabled{};
            constexpr MPL::Value<in3Val,in3Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,in3Val> in3{}; 
        ///Write '1' to Enable interrupt on EVENTS_IN[4] event
        enum class in4Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace in4ValC{
            constexpr MPL::Value<in4Val,in4Val::disabled> disabled{};
            constexpr MPL::Value<in4Val,in4Val::enabled> enabled{};
            constexpr MPL::Value<in4Val,in4Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,in4Val> in4{}; 
        ///Write '1' to Enable interrupt on EVENTS_IN[5] event
        enum class in5Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace in5ValC{
            constexpr MPL::Value<in5Val,in5Val::disabled> disabled{};
            constexpr MPL::Value<in5Val,in5Val::enabled> enabled{};
            constexpr MPL::Value<in5Val,in5Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,in5Val> in5{}; 
        ///Write '1' to Enable interrupt on EVENTS_IN[6] event
        enum class in6Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace in6ValC{
            constexpr MPL::Value<in6Val,in6Val::disabled> disabled{};
            constexpr MPL::Value<in6Val,in6Val::enabled> enabled{};
            constexpr MPL::Value<in6Val,in6Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,in6Val> in6{}; 
        ///Write '1' to Enable interrupt on EVENTS_IN[7] event
        enum class in7Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace in7ValC{
            constexpr MPL::Value<in7Val,in7Val::disabled> disabled{};
            constexpr MPL::Value<in7Val,in7Val::enabled> enabled{};
            constexpr MPL::Value<in7Val,in7Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,in7Val> in7{}; 
        ///Write '1' to Enable interrupt on EVENTS_PORT event
        enum class portVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace portValC{
            constexpr MPL::Value<portVal,portVal::disabled> disabled{};
            constexpr MPL::Value<portVal,portVal::enabled> enabled{};
            constexpr MPL::Value<portVal,portVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,portVal> port{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40006308,0x7fffff00,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_IN[0] event
        enum class in0Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace in0ValC{
            constexpr MPL::Value<in0Val,in0Val::disabled> disabled{};
            constexpr MPL::Value<in0Val,in0Val::enabled> enabled{};
            constexpr MPL::Value<in0Val,in0Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,in0Val> in0{}; 
        ///Write '1' to Clear interrupt on EVENTS_IN[1] event
        enum class in1Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace in1ValC{
            constexpr MPL::Value<in1Val,in1Val::disabled> disabled{};
            constexpr MPL::Value<in1Val,in1Val::enabled> enabled{};
            constexpr MPL::Value<in1Val,in1Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,in1Val> in1{}; 
        ///Write '1' to Clear interrupt on EVENTS_IN[2] event
        enum class in2Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace in2ValC{
            constexpr MPL::Value<in2Val,in2Val::disabled> disabled{};
            constexpr MPL::Value<in2Val,in2Val::enabled> enabled{};
            constexpr MPL::Value<in2Val,in2Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,in2Val> in2{}; 
        ///Write '1' to Clear interrupt on EVENTS_IN[3] event
        enum class in3Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace in3ValC{
            constexpr MPL::Value<in3Val,in3Val::disabled> disabled{};
            constexpr MPL::Value<in3Val,in3Val::enabled> enabled{};
            constexpr MPL::Value<in3Val,in3Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,in3Val> in3{}; 
        ///Write '1' to Clear interrupt on EVENTS_IN[4] event
        enum class in4Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace in4ValC{
            constexpr MPL::Value<in4Val,in4Val::disabled> disabled{};
            constexpr MPL::Value<in4Val,in4Val::enabled> enabled{};
            constexpr MPL::Value<in4Val,in4Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,in4Val> in4{}; 
        ///Write '1' to Clear interrupt on EVENTS_IN[5] event
        enum class in5Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace in5ValC{
            constexpr MPL::Value<in5Val,in5Val::disabled> disabled{};
            constexpr MPL::Value<in5Val,in5Val::enabled> enabled{};
            constexpr MPL::Value<in5Val,in5Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,in5Val> in5{}; 
        ///Write '1' to Clear interrupt on EVENTS_IN[6] event
        enum class in6Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace in6ValC{
            constexpr MPL::Value<in6Val,in6Val::disabled> disabled{};
            constexpr MPL::Value<in6Val,in6Val::enabled> enabled{};
            constexpr MPL::Value<in6Val,in6Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,in6Val> in6{}; 
        ///Write '1' to Clear interrupt on EVENTS_IN[7] event
        enum class in7Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace in7ValC{
            constexpr MPL::Value<in7Val,in7Val::disabled> disabled{};
            constexpr MPL::Value<in7Val,in7Val::enabled> enabled{};
            constexpr MPL::Value<in7Val,in7Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,in7Val> in7{}; 
        ///Write '1' to Clear interrupt on EVENTS_PORT event
        enum class portVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace portValC{
            constexpr MPL::Value<portVal,portVal::disabled> disabled{};
            constexpr MPL::Value<portVal,portVal::enabled> enabled{};
            constexpr MPL::Value<portVal,portVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,portVal> port{}; 
    }
    namespace Noneconfig0{    ///<Description collection[0]:  Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event
        using Addr = Register::Address<0x40006510,0xffece0fc,0,unsigned>;
        ///Mode
        enum class modeVal {
            disabled=0x00000000,     ///<Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module.
            event=0x00000001,     ///<Event mode
            task=0x00000003,     ///<Task mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::disabled> disabled{};
            constexpr MPL::Value<modeVal,modeVal::event> event{};
            constexpr MPL::Value<modeVal,modeVal::task> task{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event.
        enum class polarityVal {
            none=0x00000000,     ///<Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity.
            lotohi=0x00000001,     ///<Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin.
            hitolo=0x00000002,     ///<Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin.
            toggle=0x00000003,     ///<Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin.
        };
        namespace polarityValC{
            constexpr MPL::Value<polarityVal,polarityVal::none> none{};
            constexpr MPL::Value<polarityVal,polarityVal::lotohi> lotohi{};
            constexpr MPL::Value<polarityVal,polarityVal::hitolo> hitolo{};
            constexpr MPL::Value<polarityVal,polarityVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,polarityVal> polarity{}; 
        ///When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect.
        enum class outinitVal {
            low=0x00000000,     ///<Task mode: Initial value of pin before task triggering is low
            high=0x00000001,     ///<Task mode: Initial value of pin before task triggering is high
        };
        namespace outinitValC{
            constexpr MPL::Value<outinitVal,outinitVal::low> low{};
            constexpr MPL::Value<outinitVal,outinitVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,outinitVal> outinit{}; 
    }
    namespace Noneconfig1{    ///<Description collection[0]:  Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event
        using Addr = Register::Address<0x40006514,0xffece0fc,0,unsigned>;
        ///Mode
        enum class modeVal {
            disabled=0x00000000,     ///<Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module.
            event=0x00000001,     ///<Event mode
            task=0x00000003,     ///<Task mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::disabled> disabled{};
            constexpr MPL::Value<modeVal,modeVal::event> event{};
            constexpr MPL::Value<modeVal,modeVal::task> task{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event.
        enum class polarityVal {
            none=0x00000000,     ///<Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity.
            lotohi=0x00000001,     ///<Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin.
            hitolo=0x00000002,     ///<Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin.
            toggle=0x00000003,     ///<Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin.
        };
        namespace polarityValC{
            constexpr MPL::Value<polarityVal,polarityVal::none> none{};
            constexpr MPL::Value<polarityVal,polarityVal::lotohi> lotohi{};
            constexpr MPL::Value<polarityVal,polarityVal::hitolo> hitolo{};
            constexpr MPL::Value<polarityVal,polarityVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,polarityVal> polarity{}; 
        ///When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect.
        enum class outinitVal {
            low=0x00000000,     ///<Task mode: Initial value of pin before task triggering is low
            high=0x00000001,     ///<Task mode: Initial value of pin before task triggering is high
        };
        namespace outinitValC{
            constexpr MPL::Value<outinitVal,outinitVal::low> low{};
            constexpr MPL::Value<outinitVal,outinitVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,outinitVal> outinit{}; 
    }
    namespace Noneconfig2{    ///<Description collection[0]:  Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event
        using Addr = Register::Address<0x40006518,0xffece0fc,0,unsigned>;
        ///Mode
        enum class modeVal {
            disabled=0x00000000,     ///<Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module.
            event=0x00000001,     ///<Event mode
            task=0x00000003,     ///<Task mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::disabled> disabled{};
            constexpr MPL::Value<modeVal,modeVal::event> event{};
            constexpr MPL::Value<modeVal,modeVal::task> task{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event.
        enum class polarityVal {
            none=0x00000000,     ///<Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity.
            lotohi=0x00000001,     ///<Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin.
            hitolo=0x00000002,     ///<Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin.
            toggle=0x00000003,     ///<Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin.
        };
        namespace polarityValC{
            constexpr MPL::Value<polarityVal,polarityVal::none> none{};
            constexpr MPL::Value<polarityVal,polarityVal::lotohi> lotohi{};
            constexpr MPL::Value<polarityVal,polarityVal::hitolo> hitolo{};
            constexpr MPL::Value<polarityVal,polarityVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,polarityVal> polarity{}; 
        ///When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect.
        enum class outinitVal {
            low=0x00000000,     ///<Task mode: Initial value of pin before task triggering is low
            high=0x00000001,     ///<Task mode: Initial value of pin before task triggering is high
        };
        namespace outinitValC{
            constexpr MPL::Value<outinitVal,outinitVal::low> low{};
            constexpr MPL::Value<outinitVal,outinitVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,outinitVal> outinit{}; 
    }
    namespace Noneconfig3{    ///<Description collection[0]:  Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event
        using Addr = Register::Address<0x4000651c,0xffece0fc,0,unsigned>;
        ///Mode
        enum class modeVal {
            disabled=0x00000000,     ///<Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module.
            event=0x00000001,     ///<Event mode
            task=0x00000003,     ///<Task mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::disabled> disabled{};
            constexpr MPL::Value<modeVal,modeVal::event> event{};
            constexpr MPL::Value<modeVal,modeVal::task> task{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event.
        enum class polarityVal {
            none=0x00000000,     ///<Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity.
            lotohi=0x00000001,     ///<Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin.
            hitolo=0x00000002,     ///<Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin.
            toggle=0x00000003,     ///<Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin.
        };
        namespace polarityValC{
            constexpr MPL::Value<polarityVal,polarityVal::none> none{};
            constexpr MPL::Value<polarityVal,polarityVal::lotohi> lotohi{};
            constexpr MPL::Value<polarityVal,polarityVal::hitolo> hitolo{};
            constexpr MPL::Value<polarityVal,polarityVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,polarityVal> polarity{}; 
        ///When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect.
        enum class outinitVal {
            low=0x00000000,     ///<Task mode: Initial value of pin before task triggering is low
            high=0x00000001,     ///<Task mode: Initial value of pin before task triggering is high
        };
        namespace outinitValC{
            constexpr MPL::Value<outinitVal,outinitVal::low> low{};
            constexpr MPL::Value<outinitVal,outinitVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,outinitVal> outinit{}; 
    }
    namespace Noneconfig4{    ///<Description collection[0]:  Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event
        using Addr = Register::Address<0x40006520,0xffece0fc,0,unsigned>;
        ///Mode
        enum class modeVal {
            disabled=0x00000000,     ///<Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module.
            event=0x00000001,     ///<Event mode
            task=0x00000003,     ///<Task mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::disabled> disabled{};
            constexpr MPL::Value<modeVal,modeVal::event> event{};
            constexpr MPL::Value<modeVal,modeVal::task> task{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event.
        enum class polarityVal {
            none=0x00000000,     ///<Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity.
            lotohi=0x00000001,     ///<Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin.
            hitolo=0x00000002,     ///<Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin.
            toggle=0x00000003,     ///<Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin.
        };
        namespace polarityValC{
            constexpr MPL::Value<polarityVal,polarityVal::none> none{};
            constexpr MPL::Value<polarityVal,polarityVal::lotohi> lotohi{};
            constexpr MPL::Value<polarityVal,polarityVal::hitolo> hitolo{};
            constexpr MPL::Value<polarityVal,polarityVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,polarityVal> polarity{}; 
        ///When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect.
        enum class outinitVal {
            low=0x00000000,     ///<Task mode: Initial value of pin before task triggering is low
            high=0x00000001,     ///<Task mode: Initial value of pin before task triggering is high
        };
        namespace outinitValC{
            constexpr MPL::Value<outinitVal,outinitVal::low> low{};
            constexpr MPL::Value<outinitVal,outinitVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,outinitVal> outinit{}; 
    }
    namespace Noneconfig5{    ///<Description collection[0]:  Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event
        using Addr = Register::Address<0x40006524,0xffece0fc,0,unsigned>;
        ///Mode
        enum class modeVal {
            disabled=0x00000000,     ///<Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module.
            event=0x00000001,     ///<Event mode
            task=0x00000003,     ///<Task mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::disabled> disabled{};
            constexpr MPL::Value<modeVal,modeVal::event> event{};
            constexpr MPL::Value<modeVal,modeVal::task> task{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event.
        enum class polarityVal {
            none=0x00000000,     ///<Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity.
            lotohi=0x00000001,     ///<Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin.
            hitolo=0x00000002,     ///<Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin.
            toggle=0x00000003,     ///<Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin.
        };
        namespace polarityValC{
            constexpr MPL::Value<polarityVal,polarityVal::none> none{};
            constexpr MPL::Value<polarityVal,polarityVal::lotohi> lotohi{};
            constexpr MPL::Value<polarityVal,polarityVal::hitolo> hitolo{};
            constexpr MPL::Value<polarityVal,polarityVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,polarityVal> polarity{}; 
        ///When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect.
        enum class outinitVal {
            low=0x00000000,     ///<Task mode: Initial value of pin before task triggering is low
            high=0x00000001,     ///<Task mode: Initial value of pin before task triggering is high
        };
        namespace outinitValC{
            constexpr MPL::Value<outinitVal,outinitVal::low> low{};
            constexpr MPL::Value<outinitVal,outinitVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,outinitVal> outinit{}; 
    }
    namespace Noneconfig6{    ///<Description collection[0]:  Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event
        using Addr = Register::Address<0x40006528,0xffece0fc,0,unsigned>;
        ///Mode
        enum class modeVal {
            disabled=0x00000000,     ///<Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module.
            event=0x00000001,     ///<Event mode
            task=0x00000003,     ///<Task mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::disabled> disabled{};
            constexpr MPL::Value<modeVal,modeVal::event> event{};
            constexpr MPL::Value<modeVal,modeVal::task> task{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event.
        enum class polarityVal {
            none=0x00000000,     ///<Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity.
            lotohi=0x00000001,     ///<Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin.
            hitolo=0x00000002,     ///<Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin.
            toggle=0x00000003,     ///<Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin.
        };
        namespace polarityValC{
            constexpr MPL::Value<polarityVal,polarityVal::none> none{};
            constexpr MPL::Value<polarityVal,polarityVal::lotohi> lotohi{};
            constexpr MPL::Value<polarityVal,polarityVal::hitolo> hitolo{};
            constexpr MPL::Value<polarityVal,polarityVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,polarityVal> polarity{}; 
        ///When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect.
        enum class outinitVal {
            low=0x00000000,     ///<Task mode: Initial value of pin before task triggering is low
            high=0x00000001,     ///<Task mode: Initial value of pin before task triggering is high
        };
        namespace outinitValC{
            constexpr MPL::Value<outinitVal,outinitVal::low> low{};
            constexpr MPL::Value<outinitVal,outinitVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,outinitVal> outinit{}; 
    }
    namespace Noneconfig7{    ///<Description collection[0]:  Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event
        using Addr = Register::Address<0x4000652c,0xffece0fc,0,unsigned>;
        ///Mode
        enum class modeVal {
            disabled=0x00000000,     ///<Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module.
            event=0x00000001,     ///<Event mode
            task=0x00000003,     ///<Task mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::disabled> disabled{};
            constexpr MPL::Value<modeVal,modeVal::event> event{};
            constexpr MPL::Value<modeVal,modeVal::task> task{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event.
        enum class polarityVal {
            none=0x00000000,     ///<Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity.
            lotohi=0x00000001,     ///<Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin.
            hitolo=0x00000002,     ///<Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin.
            toggle=0x00000003,     ///<Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin.
        };
        namespace polarityValC{
            constexpr MPL::Value<polarityVal,polarityVal::none> none{};
            constexpr MPL::Value<polarityVal,polarityVal::lotohi> lotohi{};
            constexpr MPL::Value<polarityVal,polarityVal::hitolo> hitolo{};
            constexpr MPL::Value<polarityVal,polarityVal::toggle> toggle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,polarityVal> polarity{}; 
        ///When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect.
        enum class outinitVal {
            low=0x00000000,     ///<Task mode: Initial value of pin before task triggering is low
            high=0x00000001,     ///<Task mode: Initial value of pin before task triggering is high
        };
        namespace outinitValC{
            constexpr MPL::Value<outinitVal,outinitVal::low> low{};
            constexpr MPL::Value<outinitVal,outinitVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,outinitVal> outinit{}; 
    }
}