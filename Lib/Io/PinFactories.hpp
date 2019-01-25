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
#include "Mpl/Utility.hpp"
#include "Utility.hpp"

namespace Kvasir {
	namespace Io {
		/// This generic Metafunction which all pin factories resolve to. 
		/// It relies on the user to include a chip file which specializes this template
		/// with the proper resulting Register::Action
		template<typename TAction, typename TPinLocation>
		struct MakeAction {
			static_assert(MPL::AlwaysFalse<TAction>::value, "could not find this configuration in the included chip file");
		};
		template<typename TAction, typename TPinLocation>
		using MakeActionT = typename MakeAction<TAction, TPinLocation>::Type;

		namespace Detail {
			//make sure we actually got a PinLocation as a parameter
			template<typename TAction, typename TPortPin>
			struct MakeActionIfPinLocation {
				//static_assert(MPL::AlwaysFalse<TAction>::value,"parameter is not a PinLocation");	
			};
			template<typename TAction, int Port, int Pin>
			struct MakeActionIfPinLocation<TAction, Register::PinLocation<Port, Pin>> {
				using Type = MakeActionT<TAction, Register::PinLocation<Port, Pin>>;
			};
			template<typename TAction, typename TPinLocation>
			using MakeActionIfPinLocationT = typename MakeActionIfPinLocation<TAction, TPinLocation>::Type;
		}
		template<typename TPort, typename TPin>
		constexpr Register::PinLocation<TPort::value, TPin::value>
			makePinLocation(TPort, TPin) {
			return{};
		}
	}
	namespace Register {
		template<typename TAction, typename T>
		constexpr Io::Detail::MakeActionIfPinLocationT<TAction, T>
			action(TAction, T) {
			return{};
		}

		//create a register::action which configures a gpio pin as input
		template<typename T>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::Input, T>
			makeInput(T) {
			return{};
		}

		//create a register::action which configures a gpio pin as input variadic
		template<typename T, typename U, typename... Ts>
		constexpr decltype(MPL::list(makeInput(T{}), makeInput(U{}), makeInput(Ts{})...))
			makeInput(T, U, Ts...) {
			return{};
		}

		//create a register::action which configures a gpio pin as output
		template<typename T>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::Output, T>
			makeOutput(T) {
			return{};
		}

		//create a register::action which configures a gpio pin as output variadic
		template<typename T, typename U, typename... Ts>
		constexpr decltype(MPL::list(makeOutput(T{}), makeOutput(U{}), makeOutput(Ts{})...))
			makeOutput(T, U, Ts...) {
			return{};
		}

		//create a register::action which sets a pins output
		template<typename T>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::Set, T>
			set(T) {
			return{};
		}

		//create a register::action which clears a pins output
		template<typename T>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::Clear, T>
			clear(T) {
			return{};
		}

		//create a register::action wich toggles a pins output
		template<typename T>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::Toggle, T>
			toggle(T) {
			return{};
		}

		//create a register::action which makes the pin a pullup
		template<typename T>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::Pullup, T>
			makePullUp(T) {
			return{};
		}

		//create a register::action which configures a gpio pin as pullup variadic
		template<typename T, typename U, typename... Ts>
		constexpr decltype(MPL::list(makePullUp(T{}), makePullUp(U{}), makePullUp(Ts{})...))
			makePullUp(T, U, Ts...) {
			return{};
		}

		//create a register::action which configures a gpio pin as analog
		template<typename T>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::Analog, T>
			makeAnalog(T) {
			return{};
		}

		//create a register::action which configures a gpio pin as analog variadic
		template<typename T, typename U, typename... Ts>
		constexpr decltype(MPL::list(makeAnalog(T{}), makeAnalog(U{}), makeAnalog(Ts{})...))
			makeAnalog(T, U, Ts...) {
			return{};
		}

		//create a register::action which makes the pin a pulldown
		template<typename T>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::Pulldown, T>
			makePullDown(T) {
			return{};
		}

		//create a register::action which configures a gpio pin as pulldown variadic
		template<typename T, typename U, typename... Ts>
		constexpr decltype(MPL::list(makePullDown(T{}), makePullDown(U{}), makePullDown(Ts{})...))
			makePullDown(T, U, Ts...) {
			return{};
		}

		//create a register::action which makes the pin open drain
		template<typename T>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::OpenDrain, T>
			makeOpenDrain(T) {
			return{};
		}

		//create a register::action which configures a gpio pin as open drain variadic
		template<typename T, typename U, typename... Ts>
		constexpr decltype(MPL::list(makeOpenDrain(T{}), makeOpenDrain(U{}), makeOpenDrain(Ts{})...))
			makeOpenDrain(T, U, Ts...) {
			return{};
		}

		//create a register::action which makes locks the pin's configuration
		template<typename T>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::Lock, T>
			lock(T) {
			return{};
		}

		//create a register::action which configures a gpio pin as locked variadic
		template<typename T, typename U, typename... Ts>
		constexpr decltype(MPL::list(lock(T{}), lock(U{}), lock(Ts{})...))
			lock(T, U, Ts...) {
			return{};
		}

		//create a register::action which makes unlocks the pin's configuration
		template<typename T>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::Unlock, T>
			unlock(T) {
			return{};
		}

		//create a register::action which configures a gpio pin as unlocked variadic
		template<typename T, typename U, typename... Ts>
		constexpr decltype(MPL::list(unlock(T{}), unlock(U{}), unlock(Ts{})...))
			unlock(T, U, Ts...) {
			return{};
		}

		/*
		//create a register::action which makes the pin use the alt function
		template<typename T>
		constexpr Io::Detail::MakeActionIfPinLocation<Io::Action::Alt, T>
			makeAltFunc(T) {
			return{};
		}
		*/

		//create a register::action which makes the pin use the 2nd alt function
		template<typename T>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::PinFunction<2>, T>
			makeAltFunc2(T) {
			return{};
		}

		//variadic toggle
		template<typename TPP1, typename TPP2, typename... TPortPins>
		constexpr brigand::list<Io::Detail::MakeActionIfPinLocationT<Io::Action::Toggle, TPP1>,
			Io::Detail::MakeActionIfPinLocationT<Io::Action::Toggle, TPP2>,
			Io::Detail::MakeActionIfPinLocationT<Io::Action::Toggle, TPortPins>...>
			toggle(TPP1, TPP2, TPortPins...) {
			return{};
		}

		//create read register::action from a gpio pin.
		template<typename T>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::Read, T>
			read(T) {
			return{};
		}

	}
}
