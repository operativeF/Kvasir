#pragma once
#include <Io/Io.hpp>
#include <Register/Register.hpp>
namespace Kvasir{
    namespace Io{
        // Starting GPIO Address
        constexpr int BASE_GPIO_ADDR = 0x40020000;

        template<int Port>
        constexpr int GPIOx_PORT_ADDR = BASE_GPIO_ADDR + Port * 0x400;

        template<int Port, int Pin>
        struct MakeAction<Action::Clear,Register::PinLocation<Port,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<BASE_GPIO_ADDR + Port,0x00000000>,(1<<Pin),Register::WriteLiteralAction<(1<<Pin)>>{};
    }
}
