#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//VREFBUF
    namespace VrefbufVrefbufCsr{    ///<VREFBUF control and status          register
        using Addr = Register::Address<0x58003c00,0xffffff84,0x00000000,std::uint32_t>;
        ///Voltage reference buffer mode enable              This bit is used to enable the voltage reference              buffer mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> envr{}; 
        ///High impedance mode This bit controls              the analog switch to connect or not the VREF+ pin.              Refer to Table196: VREF buffer modes for the mode              descriptions depending on ENVR bit              configuration.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hiz{}; 
        ///Voltage reference buffer              ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vrr{}; 
        ///Voltage reference scale These bits              select the value generated by the voltage reference              buffer. Other: Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> vrs{}; 
    }
    namespace VrefbufVrefbufCcr{    ///<VREFBUF calibration control          register
        using Addr = Register::Address<0x58003c04,0xffffffc0,0x00000000,std::uint32_t>;
        ///Trimming code These bits are              automatically initialized after reset with the              trimming value stored in the Flash memory during the              production test. Writing into these bits allows to              tune the internal reference buffer              voltage.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> trim{}; 
    }
}
