#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Generic Clock Generator
    namespace GclkCtrla{    ///<Control
        using Addr = Register::Address<0x40001c00,0xfffffffe,0x00000000,std::uint8_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace GclkSyncbusy{    ///<Synchronization Busy
        using Addr = Register::Address<0x40001c04,0xffffc002,0x00000000,std::uint32_t>;
        ///Software Reset Synchroniation Busy bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
        ///Generic Clock Generator Control 0 Synchronization Busy bits
        enum class Genctrl0Val {
            gclk0=0x00000001,     ///<Generic clock generator 0
            gclk1=0x00000002,     ///<Generic clock generator 1
            gclk2=0x00000004,     ///<Generic clock generator 2
            gclk3=0x00000008,     ///<Generic clock generator 3
            gclk4=0x00000010,     ///<Generic clock generator 4
            gclk5=0x00000020,     ///<Generic clock generator 5
            gclk6=0x00000040,     ///<Generic clock generator 6
            gclk7=0x00000080,     ///<Generic clock generator 7
            gclk8=0x00000100,     ///<Generic clock generator 8
            gclk9=0x00000200,     ///<Generic clock generator 9
            gclk10=0x00000400,     ///<Generic clock generator 10
            gclk11=0x00000800,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Genctrl0Val> genctrl0{}; 
        namespace Genctrl0ValC{
            constexpr Register::FieldValue<decltype(genctrl0)::Type,Genctrl0Val::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(genctrl0)::Type,Genctrl0Val::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(genctrl0)::Type,Genctrl0Val::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(genctrl0)::Type,Genctrl0Val::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(genctrl0)::Type,Genctrl0Val::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(genctrl0)::Type,Genctrl0Val::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(genctrl0)::Type,Genctrl0Val::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(genctrl0)::Type,Genctrl0Val::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(genctrl0)::Type,Genctrl0Val::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(genctrl0)::Type,Genctrl0Val::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(genctrl0)::Type,Genctrl0Val::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(genctrl0)::Type,Genctrl0Val::gclk11> gclk11{};
        }
        ///Generic Clock Generator Control 1 Synchronization Busy bits
        enum class Genctrl1Val {
            gclk0=0x00000001,     ///<Generic clock generator 0
            gclk1=0x00000002,     ///<Generic clock generator 1
            gclk2=0x00000004,     ///<Generic clock generator 2
            gclk3=0x00000008,     ///<Generic clock generator 3
            gclk4=0x00000010,     ///<Generic clock generator 4
            gclk5=0x00000020,     ///<Generic clock generator 5
            gclk6=0x00000040,     ///<Generic clock generator 6
            gclk7=0x00000080,     ///<Generic clock generator 7
            gclk8=0x00000100,     ///<Generic clock generator 8
            gclk9=0x00000200,     ///<Generic clock generator 9
            gclk10=0x00000400,     ///<Generic clock generator 10
            gclk11=0x00000800,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Genctrl1Val> genctrl1{}; 
        namespace Genctrl1ValC{
            constexpr Register::FieldValue<decltype(genctrl1)::Type,Genctrl1Val::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(genctrl1)::Type,Genctrl1Val::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(genctrl1)::Type,Genctrl1Val::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(genctrl1)::Type,Genctrl1Val::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(genctrl1)::Type,Genctrl1Val::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(genctrl1)::Type,Genctrl1Val::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(genctrl1)::Type,Genctrl1Val::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(genctrl1)::Type,Genctrl1Val::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(genctrl1)::Type,Genctrl1Val::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(genctrl1)::Type,Genctrl1Val::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(genctrl1)::Type,Genctrl1Val::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(genctrl1)::Type,Genctrl1Val::gclk11> gclk11{};
        }
        ///Generic Clock Generator Control 2 Synchronization Busy bits
        enum class Genctrl2Val {
            gclk0=0x00000001,     ///<Generic clock generator 0
            gclk1=0x00000002,     ///<Generic clock generator 1
            gclk2=0x00000004,     ///<Generic clock generator 2
            gclk3=0x00000008,     ///<Generic clock generator 3
            gclk4=0x00000010,     ///<Generic clock generator 4
            gclk5=0x00000020,     ///<Generic clock generator 5
            gclk6=0x00000040,     ///<Generic clock generator 6
            gclk7=0x00000080,     ///<Generic clock generator 7
            gclk8=0x00000100,     ///<Generic clock generator 8
            gclk9=0x00000200,     ///<Generic clock generator 9
            gclk10=0x00000400,     ///<Generic clock generator 10
            gclk11=0x00000800,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Genctrl2Val> genctrl2{}; 
        namespace Genctrl2ValC{
            constexpr Register::FieldValue<decltype(genctrl2)::Type,Genctrl2Val::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(genctrl2)::Type,Genctrl2Val::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(genctrl2)::Type,Genctrl2Val::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(genctrl2)::Type,Genctrl2Val::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(genctrl2)::Type,Genctrl2Val::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(genctrl2)::Type,Genctrl2Val::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(genctrl2)::Type,Genctrl2Val::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(genctrl2)::Type,Genctrl2Val::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(genctrl2)::Type,Genctrl2Val::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(genctrl2)::Type,Genctrl2Val::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(genctrl2)::Type,Genctrl2Val::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(genctrl2)::Type,Genctrl2Val::gclk11> gclk11{};
        }
        ///Generic Clock Generator Control 3 Synchronization Busy bits
        enum class Genctrl3Val {
            gclk0=0x00000001,     ///<Generic clock generator 0
            gclk1=0x00000002,     ///<Generic clock generator 1
            gclk2=0x00000004,     ///<Generic clock generator 2
            gclk3=0x00000008,     ///<Generic clock generator 3
            gclk4=0x00000010,     ///<Generic clock generator 4
            gclk5=0x00000020,     ///<Generic clock generator 5
            gclk6=0x00000040,     ///<Generic clock generator 6
            gclk7=0x00000080,     ///<Generic clock generator 7
            gclk8=0x00000100,     ///<Generic clock generator 8
            gclk9=0x00000200,     ///<Generic clock generator 9
            gclk10=0x00000400,     ///<Generic clock generator 10
            gclk11=0x00000800,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Genctrl3Val> genctrl3{}; 
        namespace Genctrl3ValC{
            constexpr Register::FieldValue<decltype(genctrl3)::Type,Genctrl3Val::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(genctrl3)::Type,Genctrl3Val::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(genctrl3)::Type,Genctrl3Val::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(genctrl3)::Type,Genctrl3Val::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(genctrl3)::Type,Genctrl3Val::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(genctrl3)::Type,Genctrl3Val::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(genctrl3)::Type,Genctrl3Val::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(genctrl3)::Type,Genctrl3Val::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(genctrl3)::Type,Genctrl3Val::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(genctrl3)::Type,Genctrl3Val::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(genctrl3)::Type,Genctrl3Val::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(genctrl3)::Type,Genctrl3Val::gclk11> gclk11{};
        }
        ///Generic Clock Generator Control 4 Synchronization Busy bits
        enum class Genctrl4Val {
            gclk0=0x00000001,     ///<Generic clock generator 0
            gclk1=0x00000002,     ///<Generic clock generator 1
            gclk2=0x00000004,     ///<Generic clock generator 2
            gclk3=0x00000008,     ///<Generic clock generator 3
            gclk4=0x00000010,     ///<Generic clock generator 4
            gclk5=0x00000020,     ///<Generic clock generator 5
            gclk6=0x00000040,     ///<Generic clock generator 6
            gclk7=0x00000080,     ///<Generic clock generator 7
            gclk8=0x00000100,     ///<Generic clock generator 8
            gclk9=0x00000200,     ///<Generic clock generator 9
            gclk10=0x00000400,     ///<Generic clock generator 10
            gclk11=0x00000800,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Genctrl4Val> genctrl4{}; 
        namespace Genctrl4ValC{
            constexpr Register::FieldValue<decltype(genctrl4)::Type,Genctrl4Val::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(genctrl4)::Type,Genctrl4Val::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(genctrl4)::Type,Genctrl4Val::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(genctrl4)::Type,Genctrl4Val::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(genctrl4)::Type,Genctrl4Val::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(genctrl4)::Type,Genctrl4Val::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(genctrl4)::Type,Genctrl4Val::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(genctrl4)::Type,Genctrl4Val::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(genctrl4)::Type,Genctrl4Val::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(genctrl4)::Type,Genctrl4Val::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(genctrl4)::Type,Genctrl4Val::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(genctrl4)::Type,Genctrl4Val::gclk11> gclk11{};
        }
        ///Generic Clock Generator Control 5 Synchronization Busy bits
        enum class Genctrl5Val {
            gclk0=0x00000001,     ///<Generic clock generator 0
            gclk1=0x00000002,     ///<Generic clock generator 1
            gclk2=0x00000004,     ///<Generic clock generator 2
            gclk3=0x00000008,     ///<Generic clock generator 3
            gclk4=0x00000010,     ///<Generic clock generator 4
            gclk5=0x00000020,     ///<Generic clock generator 5
            gclk6=0x00000040,     ///<Generic clock generator 6
            gclk7=0x00000080,     ///<Generic clock generator 7
            gclk8=0x00000100,     ///<Generic clock generator 8
            gclk9=0x00000200,     ///<Generic clock generator 9
            gclk10=0x00000400,     ///<Generic clock generator 10
            gclk11=0x00000800,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Genctrl5Val> genctrl5{}; 
        namespace Genctrl5ValC{
            constexpr Register::FieldValue<decltype(genctrl5)::Type,Genctrl5Val::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(genctrl5)::Type,Genctrl5Val::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(genctrl5)::Type,Genctrl5Val::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(genctrl5)::Type,Genctrl5Val::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(genctrl5)::Type,Genctrl5Val::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(genctrl5)::Type,Genctrl5Val::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(genctrl5)::Type,Genctrl5Val::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(genctrl5)::Type,Genctrl5Val::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(genctrl5)::Type,Genctrl5Val::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(genctrl5)::Type,Genctrl5Val::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(genctrl5)::Type,Genctrl5Val::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(genctrl5)::Type,Genctrl5Val::gclk11> gclk11{};
        }
        ///Generic Clock Generator Control 6 Synchronization Busy bits
        enum class Genctrl6Val {
            gclk0=0x00000001,     ///<Generic clock generator 0
            gclk1=0x00000002,     ///<Generic clock generator 1
            gclk2=0x00000004,     ///<Generic clock generator 2
            gclk3=0x00000008,     ///<Generic clock generator 3
            gclk4=0x00000010,     ///<Generic clock generator 4
            gclk5=0x00000020,     ///<Generic clock generator 5
            gclk6=0x00000040,     ///<Generic clock generator 6
            gclk7=0x00000080,     ///<Generic clock generator 7
            gclk8=0x00000100,     ///<Generic clock generator 8
            gclk9=0x00000200,     ///<Generic clock generator 9
            gclk10=0x00000400,     ///<Generic clock generator 10
            gclk11=0x00000800,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Genctrl6Val> genctrl6{}; 
        namespace Genctrl6ValC{
            constexpr Register::FieldValue<decltype(genctrl6)::Type,Genctrl6Val::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(genctrl6)::Type,Genctrl6Val::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(genctrl6)::Type,Genctrl6Val::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(genctrl6)::Type,Genctrl6Val::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(genctrl6)::Type,Genctrl6Val::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(genctrl6)::Type,Genctrl6Val::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(genctrl6)::Type,Genctrl6Val::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(genctrl6)::Type,Genctrl6Val::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(genctrl6)::Type,Genctrl6Val::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(genctrl6)::Type,Genctrl6Val::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(genctrl6)::Type,Genctrl6Val::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(genctrl6)::Type,Genctrl6Val::gclk11> gclk11{};
        }
        ///Generic Clock Generator Control 7 Synchronization Busy bits
        enum class Genctrl7Val {
            gclk0=0x00000001,     ///<Generic clock generator 0
            gclk1=0x00000002,     ///<Generic clock generator 1
            gclk2=0x00000004,     ///<Generic clock generator 2
            gclk3=0x00000008,     ///<Generic clock generator 3
            gclk4=0x00000010,     ///<Generic clock generator 4
            gclk5=0x00000020,     ///<Generic clock generator 5
            gclk6=0x00000040,     ///<Generic clock generator 6
            gclk7=0x00000080,     ///<Generic clock generator 7
            gclk8=0x00000100,     ///<Generic clock generator 8
            gclk9=0x00000200,     ///<Generic clock generator 9
            gclk10=0x00000400,     ///<Generic clock generator 10
            gclk11=0x00000800,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Genctrl7Val> genctrl7{}; 
        namespace Genctrl7ValC{
            constexpr Register::FieldValue<decltype(genctrl7)::Type,Genctrl7Val::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(genctrl7)::Type,Genctrl7Val::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(genctrl7)::Type,Genctrl7Val::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(genctrl7)::Type,Genctrl7Val::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(genctrl7)::Type,Genctrl7Val::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(genctrl7)::Type,Genctrl7Val::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(genctrl7)::Type,Genctrl7Val::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(genctrl7)::Type,Genctrl7Val::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(genctrl7)::Type,Genctrl7Val::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(genctrl7)::Type,Genctrl7Val::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(genctrl7)::Type,Genctrl7Val::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(genctrl7)::Type,Genctrl7Val::gclk11> gclk11{};
        }
        ///Generic Clock Generator Control 8 Synchronization Busy bits
        enum class Genctrl8Val {
            gclk0=0x00000001,     ///<Generic clock generator 0
            gclk1=0x00000002,     ///<Generic clock generator 1
            gclk2=0x00000004,     ///<Generic clock generator 2
            gclk3=0x00000008,     ///<Generic clock generator 3
            gclk4=0x00000010,     ///<Generic clock generator 4
            gclk5=0x00000020,     ///<Generic clock generator 5
            gclk6=0x00000040,     ///<Generic clock generator 6
            gclk7=0x00000080,     ///<Generic clock generator 7
            gclk8=0x00000100,     ///<Generic clock generator 8
            gclk9=0x00000200,     ///<Generic clock generator 9
            gclk10=0x00000400,     ///<Generic clock generator 10
            gclk11=0x00000800,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Genctrl8Val> genctrl8{}; 
        namespace Genctrl8ValC{
            constexpr Register::FieldValue<decltype(genctrl8)::Type,Genctrl8Val::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(genctrl8)::Type,Genctrl8Val::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(genctrl8)::Type,Genctrl8Val::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(genctrl8)::Type,Genctrl8Val::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(genctrl8)::Type,Genctrl8Val::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(genctrl8)::Type,Genctrl8Val::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(genctrl8)::Type,Genctrl8Val::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(genctrl8)::Type,Genctrl8Val::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(genctrl8)::Type,Genctrl8Val::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(genctrl8)::Type,Genctrl8Val::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(genctrl8)::Type,Genctrl8Val::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(genctrl8)::Type,Genctrl8Val::gclk11> gclk11{};
        }
        ///Generic Clock Generator Control 9 Synchronization Busy bits
        enum class Genctrl9Val {
            gclk0=0x00000001,     ///<Generic clock generator 0
            gclk1=0x00000002,     ///<Generic clock generator 1
            gclk2=0x00000004,     ///<Generic clock generator 2
            gclk3=0x00000008,     ///<Generic clock generator 3
            gclk4=0x00000010,     ///<Generic clock generator 4
            gclk5=0x00000020,     ///<Generic clock generator 5
            gclk6=0x00000040,     ///<Generic clock generator 6
            gclk7=0x00000080,     ///<Generic clock generator 7
            gclk8=0x00000100,     ///<Generic clock generator 8
            gclk9=0x00000200,     ///<Generic clock generator 9
            gclk10=0x00000400,     ///<Generic clock generator 10
            gclk11=0x00000800,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Genctrl9Val> genctrl9{}; 
        namespace Genctrl9ValC{
            constexpr Register::FieldValue<decltype(genctrl9)::Type,Genctrl9Val::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(genctrl9)::Type,Genctrl9Val::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(genctrl9)::Type,Genctrl9Val::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(genctrl9)::Type,Genctrl9Val::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(genctrl9)::Type,Genctrl9Val::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(genctrl9)::Type,Genctrl9Val::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(genctrl9)::Type,Genctrl9Val::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(genctrl9)::Type,Genctrl9Val::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(genctrl9)::Type,Genctrl9Val::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(genctrl9)::Type,Genctrl9Val::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(genctrl9)::Type,Genctrl9Val::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(genctrl9)::Type,Genctrl9Val::gclk11> gclk11{};
        }
        ///Generic Clock Generator Control 10 Synchronization Busy bits
        enum class Genctrl10Val {
            gclk0=0x00000001,     ///<Generic clock generator 0
            gclk1=0x00000002,     ///<Generic clock generator 1
            gclk2=0x00000004,     ///<Generic clock generator 2
            gclk3=0x00000008,     ///<Generic clock generator 3
            gclk4=0x00000010,     ///<Generic clock generator 4
            gclk5=0x00000020,     ///<Generic clock generator 5
            gclk6=0x00000040,     ///<Generic clock generator 6
            gclk7=0x00000080,     ///<Generic clock generator 7
            gclk8=0x00000100,     ///<Generic clock generator 8
            gclk9=0x00000200,     ///<Generic clock generator 9
            gclk10=0x00000400,     ///<Generic clock generator 10
            gclk11=0x00000800,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Genctrl10Val> genctrl10{}; 
        namespace Genctrl10ValC{
            constexpr Register::FieldValue<decltype(genctrl10)::Type,Genctrl10Val::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(genctrl10)::Type,Genctrl10Val::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(genctrl10)::Type,Genctrl10Val::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(genctrl10)::Type,Genctrl10Val::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(genctrl10)::Type,Genctrl10Val::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(genctrl10)::Type,Genctrl10Val::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(genctrl10)::Type,Genctrl10Val::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(genctrl10)::Type,Genctrl10Val::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(genctrl10)::Type,Genctrl10Val::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(genctrl10)::Type,Genctrl10Val::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(genctrl10)::Type,Genctrl10Val::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(genctrl10)::Type,Genctrl10Val::gclk11> gclk11{};
        }
        ///Generic Clock Generator Control 11 Synchronization Busy bits
        enum class Genctrl11Val {
            gclk0=0x00000001,     ///<Generic clock generator 0
            gclk1=0x00000002,     ///<Generic clock generator 1
            gclk2=0x00000004,     ///<Generic clock generator 2
            gclk3=0x00000008,     ///<Generic clock generator 3
            gclk4=0x00000010,     ///<Generic clock generator 4
            gclk5=0x00000020,     ///<Generic clock generator 5
            gclk6=0x00000040,     ///<Generic clock generator 6
            gclk7=0x00000080,     ///<Generic clock generator 7
            gclk8=0x00000100,     ///<Generic clock generator 8
            gclk9=0x00000200,     ///<Generic clock generator 9
            gclk10=0x00000400,     ///<Generic clock generator 10
            gclk11=0x00000800,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Genctrl11Val> genctrl11{}; 
        namespace Genctrl11ValC{
            constexpr Register::FieldValue<decltype(genctrl11)::Type,Genctrl11Val::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(genctrl11)::Type,Genctrl11Val::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(genctrl11)::Type,Genctrl11Val::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(genctrl11)::Type,Genctrl11Val::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(genctrl11)::Type,Genctrl11Val::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(genctrl11)::Type,Genctrl11Val::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(genctrl11)::Type,Genctrl11Val::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(genctrl11)::Type,Genctrl11Val::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(genctrl11)::Type,Genctrl11Val::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(genctrl11)::Type,Genctrl11Val::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(genctrl11)::Type,Genctrl11Val::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(genctrl11)::Type,Genctrl11Val::gclk11> gclk11{};
        }
    }
    namespace GclkGenctrl0{    ///<Generic Clock Generator Control
        using Addr = Register::Address<0x40001c20,0x0000c0f0,0x00000000,std::uint32_t>;
        ///Source Select
        enum class SrcVal {
            xosc0=0x00000000,     ///<XOSC0 oscillator output
            xosc1=0x00000001,     ///<XOSC1 oscillator output
            gclkin=0x00000002,     ///<Generator input pad
            gclkgen1=0x00000003,     ///<Generic clock generator 1 output
            osculp32k=0x00000004,     ///<OSCULP32K oscillator output
            xosc32k=0x00000005,     ///<XOSC32K oscillator output
            dfll=0x00000006,     ///<DFLL output
            dpll0=0x00000007,     ///<DPLL0 output
            dpll1=0x00000008,     ///<DPLL1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc0> xosc0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc1> xosc1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkin> gclkin{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkgen1> gclkgen1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::osculp32k> osculp32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc32k> xosc32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dfll> dfll{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll0> dpll0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll1> dpll1{};
        }
        ///Generic Clock Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> genen{}; 
        ///Improve Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> idc{}; 
        ///Output Off Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oov{}; 
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oe{}; 
        ///Divide Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace GclkGenctrl1{    ///<Generic Clock Generator Control
        using Addr = Register::Address<0x40001c24,0x0000c0f0,0x00000000,std::uint32_t>;
        ///Source Select
        enum class SrcVal {
            xosc0=0x00000000,     ///<XOSC0 oscillator output
            xosc1=0x00000001,     ///<XOSC1 oscillator output
            gclkin=0x00000002,     ///<Generator input pad
            gclkgen1=0x00000003,     ///<Generic clock generator 1 output
            osculp32k=0x00000004,     ///<OSCULP32K oscillator output
            xosc32k=0x00000005,     ///<XOSC32K oscillator output
            dfll=0x00000006,     ///<DFLL output
            dpll0=0x00000007,     ///<DPLL0 output
            dpll1=0x00000008,     ///<DPLL1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc0> xosc0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc1> xosc1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkin> gclkin{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkgen1> gclkgen1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::osculp32k> osculp32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc32k> xosc32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dfll> dfll{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll0> dpll0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll1> dpll1{};
        }
        ///Generic Clock Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> genen{}; 
        ///Improve Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> idc{}; 
        ///Output Off Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oov{}; 
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oe{}; 
        ///Divide Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace GclkGenctrl2{    ///<Generic Clock Generator Control
        using Addr = Register::Address<0x40001c28,0x0000c0f0,0x00000000,std::uint32_t>;
        ///Source Select
        enum class SrcVal {
            xosc0=0x00000000,     ///<XOSC0 oscillator output
            xosc1=0x00000001,     ///<XOSC1 oscillator output
            gclkin=0x00000002,     ///<Generator input pad
            gclkgen1=0x00000003,     ///<Generic clock generator 1 output
            osculp32k=0x00000004,     ///<OSCULP32K oscillator output
            xosc32k=0x00000005,     ///<XOSC32K oscillator output
            dfll=0x00000006,     ///<DFLL output
            dpll0=0x00000007,     ///<DPLL0 output
            dpll1=0x00000008,     ///<DPLL1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc0> xosc0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc1> xosc1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkin> gclkin{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkgen1> gclkgen1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::osculp32k> osculp32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc32k> xosc32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dfll> dfll{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll0> dpll0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll1> dpll1{};
        }
        ///Generic Clock Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> genen{}; 
        ///Improve Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> idc{}; 
        ///Output Off Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oov{}; 
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oe{}; 
        ///Divide Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace GclkGenctrl3{    ///<Generic Clock Generator Control
        using Addr = Register::Address<0x40001c2c,0x0000c0f0,0x00000000,std::uint32_t>;
        ///Source Select
        enum class SrcVal {
            xosc0=0x00000000,     ///<XOSC0 oscillator output
            xosc1=0x00000001,     ///<XOSC1 oscillator output
            gclkin=0x00000002,     ///<Generator input pad
            gclkgen1=0x00000003,     ///<Generic clock generator 1 output
            osculp32k=0x00000004,     ///<OSCULP32K oscillator output
            xosc32k=0x00000005,     ///<XOSC32K oscillator output
            dfll=0x00000006,     ///<DFLL output
            dpll0=0x00000007,     ///<DPLL0 output
            dpll1=0x00000008,     ///<DPLL1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc0> xosc0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc1> xosc1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkin> gclkin{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkgen1> gclkgen1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::osculp32k> osculp32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc32k> xosc32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dfll> dfll{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll0> dpll0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll1> dpll1{};
        }
        ///Generic Clock Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> genen{}; 
        ///Improve Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> idc{}; 
        ///Output Off Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oov{}; 
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oe{}; 
        ///Divide Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace GclkGenctrl4{    ///<Generic Clock Generator Control
        using Addr = Register::Address<0x40001c30,0x0000c0f0,0x00000000,std::uint32_t>;
        ///Source Select
        enum class SrcVal {
            xosc0=0x00000000,     ///<XOSC0 oscillator output
            xosc1=0x00000001,     ///<XOSC1 oscillator output
            gclkin=0x00000002,     ///<Generator input pad
            gclkgen1=0x00000003,     ///<Generic clock generator 1 output
            osculp32k=0x00000004,     ///<OSCULP32K oscillator output
            xosc32k=0x00000005,     ///<XOSC32K oscillator output
            dfll=0x00000006,     ///<DFLL output
            dpll0=0x00000007,     ///<DPLL0 output
            dpll1=0x00000008,     ///<DPLL1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc0> xosc0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc1> xosc1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkin> gclkin{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkgen1> gclkgen1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::osculp32k> osculp32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc32k> xosc32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dfll> dfll{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll0> dpll0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll1> dpll1{};
        }
        ///Generic Clock Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> genen{}; 
        ///Improve Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> idc{}; 
        ///Output Off Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oov{}; 
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oe{}; 
        ///Divide Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace GclkGenctrl5{    ///<Generic Clock Generator Control
        using Addr = Register::Address<0x40001c34,0x0000c0f0,0x00000000,std::uint32_t>;
        ///Source Select
        enum class SrcVal {
            xosc0=0x00000000,     ///<XOSC0 oscillator output
            xosc1=0x00000001,     ///<XOSC1 oscillator output
            gclkin=0x00000002,     ///<Generator input pad
            gclkgen1=0x00000003,     ///<Generic clock generator 1 output
            osculp32k=0x00000004,     ///<OSCULP32K oscillator output
            xosc32k=0x00000005,     ///<XOSC32K oscillator output
            dfll=0x00000006,     ///<DFLL output
            dpll0=0x00000007,     ///<DPLL0 output
            dpll1=0x00000008,     ///<DPLL1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc0> xosc0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc1> xosc1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkin> gclkin{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkgen1> gclkgen1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::osculp32k> osculp32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc32k> xosc32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dfll> dfll{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll0> dpll0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll1> dpll1{};
        }
        ///Generic Clock Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> genen{}; 
        ///Improve Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> idc{}; 
        ///Output Off Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oov{}; 
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oe{}; 
        ///Divide Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace GclkGenctrl6{    ///<Generic Clock Generator Control
        using Addr = Register::Address<0x40001c38,0x0000c0f0,0x00000000,std::uint32_t>;
        ///Source Select
        enum class SrcVal {
            xosc0=0x00000000,     ///<XOSC0 oscillator output
            xosc1=0x00000001,     ///<XOSC1 oscillator output
            gclkin=0x00000002,     ///<Generator input pad
            gclkgen1=0x00000003,     ///<Generic clock generator 1 output
            osculp32k=0x00000004,     ///<OSCULP32K oscillator output
            xosc32k=0x00000005,     ///<XOSC32K oscillator output
            dfll=0x00000006,     ///<DFLL output
            dpll0=0x00000007,     ///<DPLL0 output
            dpll1=0x00000008,     ///<DPLL1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc0> xosc0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc1> xosc1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkin> gclkin{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkgen1> gclkgen1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::osculp32k> osculp32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc32k> xosc32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dfll> dfll{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll0> dpll0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll1> dpll1{};
        }
        ///Generic Clock Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> genen{}; 
        ///Improve Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> idc{}; 
        ///Output Off Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oov{}; 
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oe{}; 
        ///Divide Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace GclkGenctrl7{    ///<Generic Clock Generator Control
        using Addr = Register::Address<0x40001c3c,0x0000c0f0,0x00000000,std::uint32_t>;
        ///Source Select
        enum class SrcVal {
            xosc0=0x00000000,     ///<XOSC0 oscillator output
            xosc1=0x00000001,     ///<XOSC1 oscillator output
            gclkin=0x00000002,     ///<Generator input pad
            gclkgen1=0x00000003,     ///<Generic clock generator 1 output
            osculp32k=0x00000004,     ///<OSCULP32K oscillator output
            xosc32k=0x00000005,     ///<XOSC32K oscillator output
            dfll=0x00000006,     ///<DFLL output
            dpll0=0x00000007,     ///<DPLL0 output
            dpll1=0x00000008,     ///<DPLL1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc0> xosc0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc1> xosc1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkin> gclkin{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkgen1> gclkgen1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::osculp32k> osculp32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc32k> xosc32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dfll> dfll{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll0> dpll0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll1> dpll1{};
        }
        ///Generic Clock Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> genen{}; 
        ///Improve Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> idc{}; 
        ///Output Off Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oov{}; 
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oe{}; 
        ///Divide Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace GclkGenctrl8{    ///<Generic Clock Generator Control
        using Addr = Register::Address<0x40001c40,0x0000c0f0,0x00000000,std::uint32_t>;
        ///Source Select
        enum class SrcVal {
            xosc0=0x00000000,     ///<XOSC0 oscillator output
            xosc1=0x00000001,     ///<XOSC1 oscillator output
            gclkin=0x00000002,     ///<Generator input pad
            gclkgen1=0x00000003,     ///<Generic clock generator 1 output
            osculp32k=0x00000004,     ///<OSCULP32K oscillator output
            xosc32k=0x00000005,     ///<XOSC32K oscillator output
            dfll=0x00000006,     ///<DFLL output
            dpll0=0x00000007,     ///<DPLL0 output
            dpll1=0x00000008,     ///<DPLL1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc0> xosc0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc1> xosc1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkin> gclkin{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkgen1> gclkgen1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::osculp32k> osculp32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc32k> xosc32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dfll> dfll{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll0> dpll0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll1> dpll1{};
        }
        ///Generic Clock Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> genen{}; 
        ///Improve Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> idc{}; 
        ///Output Off Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oov{}; 
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oe{}; 
        ///Divide Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace GclkGenctrl9{    ///<Generic Clock Generator Control
        using Addr = Register::Address<0x40001c44,0x0000c0f0,0x00000000,std::uint32_t>;
        ///Source Select
        enum class SrcVal {
            xosc0=0x00000000,     ///<XOSC0 oscillator output
            xosc1=0x00000001,     ///<XOSC1 oscillator output
            gclkin=0x00000002,     ///<Generator input pad
            gclkgen1=0x00000003,     ///<Generic clock generator 1 output
            osculp32k=0x00000004,     ///<OSCULP32K oscillator output
            xosc32k=0x00000005,     ///<XOSC32K oscillator output
            dfll=0x00000006,     ///<DFLL output
            dpll0=0x00000007,     ///<DPLL0 output
            dpll1=0x00000008,     ///<DPLL1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc0> xosc0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc1> xosc1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkin> gclkin{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkgen1> gclkgen1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::osculp32k> osculp32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc32k> xosc32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dfll> dfll{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll0> dpll0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll1> dpll1{};
        }
        ///Generic Clock Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> genen{}; 
        ///Improve Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> idc{}; 
        ///Output Off Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oov{}; 
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oe{}; 
        ///Divide Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace GclkGenctrl10{    ///<Generic Clock Generator Control
        using Addr = Register::Address<0x40001c48,0x0000c0f0,0x00000000,std::uint32_t>;
        ///Source Select
        enum class SrcVal {
            xosc0=0x00000000,     ///<XOSC0 oscillator output
            xosc1=0x00000001,     ///<XOSC1 oscillator output
            gclkin=0x00000002,     ///<Generator input pad
            gclkgen1=0x00000003,     ///<Generic clock generator 1 output
            osculp32k=0x00000004,     ///<OSCULP32K oscillator output
            xosc32k=0x00000005,     ///<XOSC32K oscillator output
            dfll=0x00000006,     ///<DFLL output
            dpll0=0x00000007,     ///<DPLL0 output
            dpll1=0x00000008,     ///<DPLL1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc0> xosc0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc1> xosc1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkin> gclkin{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkgen1> gclkgen1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::osculp32k> osculp32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc32k> xosc32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dfll> dfll{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll0> dpll0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll1> dpll1{};
        }
        ///Generic Clock Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> genen{}; 
        ///Improve Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> idc{}; 
        ///Output Off Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oov{}; 
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oe{}; 
        ///Divide Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace GclkGenctrl11{    ///<Generic Clock Generator Control
        using Addr = Register::Address<0x40001c4c,0x0000c0f0,0x00000000,std::uint32_t>;
        ///Source Select
        enum class SrcVal {
            xosc0=0x00000000,     ///<XOSC0 oscillator output
            xosc1=0x00000001,     ///<XOSC1 oscillator output
            gclkin=0x00000002,     ///<Generator input pad
            gclkgen1=0x00000003,     ///<Generic clock generator 1 output
            osculp32k=0x00000004,     ///<OSCULP32K oscillator output
            xosc32k=0x00000005,     ///<XOSC32K oscillator output
            dfll=0x00000006,     ///<DFLL output
            dpll0=0x00000007,     ///<DPLL0 output
            dpll1=0x00000008,     ///<DPLL1 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc0> xosc0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc1> xosc1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkin> gclkin{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkgen1> gclkgen1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::osculp32k> osculp32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc32k> xosc32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dfll> dfll{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll0> dpll0{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dpll1> dpll1{};
        }
        ///Generic Clock Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> genen{}; 
        ///Improve Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> idc{}; 
        ///Output Off Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oov{}; 
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oe{}; 
        ///Divide Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace GclkPchctrl0{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001c80,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl1{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001c84,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl2{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001c88,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl3{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001c8c,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl4{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001c90,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl5{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001c94,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl6{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001c98,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl7{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001c9c,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl8{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001ca0,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl9{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001ca4,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl10{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001ca8,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl11{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001cac,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl12{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001cb0,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl13{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001cb4,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl14{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001cb8,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl15{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001cbc,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl16{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001cc0,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl17{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001cc4,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl18{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001cc8,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl19{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001ccc,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl20{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001cd0,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl21{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001cd4,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl22{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001cd8,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl23{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001cdc,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl24{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001ce0,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl25{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001ce4,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl26{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001ce8,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl27{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001cec,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl28{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001cf0,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl29{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001cf4,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl30{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001cf8,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl31{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001cfc,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl32{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001d00,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl33{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001d04,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl34{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001d08,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl35{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001d0c,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl36{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001d10,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl37{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001d14,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl38{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001d18,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl39{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001d1c,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl40{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001d20,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl41{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001d24,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl42{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001d28,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl43{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001d2c,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl44{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001d30,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl45{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001d34,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl46{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001d38,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkPchctrl47{    ///<Peripheral Clock Control
        using Addr = Register::Address<0x40001d3c,0xffffff30,0x00000000,std::uint32_t>;
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
            gclk8=0x00000008,     ///<Generic clock generator 8
            gclk9=0x00000009,     ///<Generic clock generator 9
            gclk10=0x0000000a,     ///<Generic clock generator 10
            gclk11=0x0000000b,     ///<Generic clock generator 11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk8> gclk8{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk9> gclk9{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk10> gclk10{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk11> gclk11{};
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
}
