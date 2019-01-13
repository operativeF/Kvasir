/**************************************************************************
Copyright 2015 Odin Holmes
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
****************************************************************************/
#pragma once

namespace Kvasir {
namespace Io{
	namespace Action{
		struct Input{};
		struct Output{};
		struct Set{};
		struct Clear{};
		struct Toggle{};
		struct Read{};
		struct Pullup{};
		struct Pulldown{};
		struct OpenDrain{};
		struct Analog{};
		struct Lock{};
		struct Unlock{};
		template<int I>
		struct PinFunction{ static constexpr int value = I;};
		constexpr Input input{};
		constexpr Output output{};
		constexpr Set set{};
		constexpr Clear clear{};
		constexpr Toggle toggle{};
		constexpr Pullup pullup{};
		constexpr Pulldown pulldown{};
		constexpr OpenDrain opendrain{};
		constexpr Analog analog{};
		constexpr Lock lock{};
		constexpr Unlock unlock{};
		constexpr PinFunction<0> pinFunction0{};
		constexpr PinFunction<1> pinFunction1{};
		constexpr PinFunction<2> pinFunction2{};
		constexpr PinFunction<3> pinFunction3{};
		constexpr PinFunction<4> pinFunction4{};
		constexpr PinFunction<5> pinFunction5{};
		constexpr PinFunction<6> pinFunction6{};
		constexpr PinFunction<7> pinFunction7{};
	}

	template<int I>
	struct HwPort{
		static constexpr int value = I;
		using Type = HwPort<I>;
	};

	template<int I>
	struct Pin{
		static constexpr int value = I;
		using Type = Pin<I>;
	};

	enum class PortAccess{ defaultMode, setClear, toggle, exclusiveMask, sharedMask, readModifyWrite };

	template<PortAccess Access, typename... Ts>
	struct Port{
		using Type = Port<Access, Ts...>;
	};

	namespace Access{
		constexpr MPL::Value<PortAccess,PortAccess::defaultMode> defaultMode{};	//this will try to select the best mode for the chip used
		constexpr MPL::Value<PortAccess,PortAccess::setClear> setClear{};
		constexpr MPL::Value<PortAccess,PortAccess::toggle> toggle{};
		constexpr MPL::Value<PortAccess,PortAccess::exclusiveMask> exclusiveMask{};
		constexpr MPL::Value<PortAccess,PortAccess::sharedMask> sharedMask{};
		constexpr MPL::Value<PortAccess,PortAccess::readModifyWrite> readModifyWrite{};
	}

}
//Pin location needs to live in Register in order for the factory functions to be found by ADL
namespace Register {
	template<int Port, int Pin>
	struct PinLocation {
		using Type = PinLocation<Port, Pin>;
	};
}
}
