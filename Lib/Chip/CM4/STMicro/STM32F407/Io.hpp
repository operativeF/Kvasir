#pragma once
#include <Io/Io.hpp>
#include <Register/Register.hpp>
namespace Kvasir{
    namespace Io{
        // Starting GPIO Address, PortA
        // Every other GPIO port is offset by 0x400, respectively
        constexpr int BASE_GPIO_ADDR = 0x40020000;
        
        constexpr int PORT_OFFSET = 0x400;

        constexpr int GPIOx_OTYPER_OFFSET  = 0x04;
        constexpr int GPIOx_OSPEEDR_OFFSET = 0x08;
        constexpr int GPIOx_PUPDR_OFFSET   = 0x0C;
        constexpr int GPIOx_IDR_OFFSET     = 0x10;
        constexpr int GPIOx_ODR_OFFSET     = 0x14;
        constexpr int GPIOx_BSRR_OFFSET    = 0x18;
        constexpr int GPIOx_LCKR_OFFSET    = 0x1C;
        constexpr int GPIOx_AFRL_OFFSET    = 0x20;
        constexpr int GPIOx_AFRH_OFFSET    = 0x24;
        constexpr int GPIOx_BRR_OFFSET     = 0x28;

        template<int Port>
        constexpr int GPIOx_ODR_ADDR  = BASE_GPIO_ADDR + Port * PORT_OFFSET + GPIOx_ODR_OFFSET;

        template<int Port>
        constexpr int GPIOx_BSRR_ADDR = BASE_GPIO_ADDR + Port * PORT_OFFSET + GPIOx_BSRR_OFFSET;

        template<int Port>
        constexpr int GPIOx_PORT_ADDR()
        { 
            if constexpr((Port >= 0) && (Port <= 15))
            {
                return BASE_GPIO_ADDR + Port * 0x400;
            }
            else
            {
                static_assert("Value not valid!");
                return 0;
            }
        };

        template<int Port, int Pin>
        struct MakeAction<Action::Input,Register::PinLocation<Port,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<GPIOx_PORT_ADDR<Port>(),0x00000000>,(0b00<<(Pin*2))>,Register::WriteLiteralAction<(0b00<<(Pin*2))>>{};

        template<int Port, int Pin>
        struct MakeAction<Action::Output,Register::PinLocation<Port,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<GPIOx_PORT_ADDR<Port>(),0x00000000>,(0b01<<(Pin*2))>,Register::WriteLiteralAction<(0b01<<(Pin*2))>>{};

        template<int Port, int Pin>
        struct MakeAction<Action::Analog,Register::PinLocation<Port,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<GPIOx_PORT_ADDR<Port>(),0x00000000>,(0b11<<(Pin*2))>,Register::WriteLiteralAction<(0b11<<(Pin*2))>>{};

        // High alternate register action
        template<int Port, int Pin>
        struct MakeAction<Action::PinFunction<2>,Register::PinLocation<Port,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<GPIOx_PORT_ADDR<Port>() + 0x24,0x00000000>,(0b01<<(Pin*4))>,Register::WriteLiteralAction<(0b10<<(Pin*4))>>{};
    }
}
