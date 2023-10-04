// file      : Helium/src/core/KeyCodes.hpp
// copyright : Copyright (c) 2022-present, Kyle Chapman
// license   : GPL-3.0; see accompanying LICENSE file

#pragma once

#ifndef Z_CORE_KEYCODES_HPP
#define Z_CORE_KEYCODES_HPP

#include "Types.hpp"

namespace Helium {

	using KeyCode = u16;

	namespace Key {

		/**
		 * @brief Modifiers for the keys.
		 * Adapted from : https://www.glfw.org/docs/3.3/group__mods.html
		 */
		enum class Modifier : c8 {
			Shift = 0x0001,
			Control = 0x0002,
			Alt = 0x0004,
			Super = 0x0008,
			CapsLock = 0x0010,
			NumLock = 0x0020,

			NONE
		};

		/**
		 * @brief Codes for each key available.
		 * Adapted from : https://www.glfw.org/docs/3.3/group__keys.html
		 */
		enum class Code : KeyCode {
			Unknown = 0,

			/* Base keys */

			Space = 32,
			Apostrophe = 39, /* ' */
			Comma = 44,      /* , */
			Minus,           /* - */
			Period,          /* . */
			Slash,           /* / */

			D0 = 48,
			D1,
			D2,
			D3,
			D4,
			D5,
			D6,
			D7,
			D8,
			D9,

			Semicolon = 59, /* ; */
			Equal = 61,     /* = */

			A = 65,
			B,
			C,
			D,
			E,
			F,
			G,
			H,
			I,
			J,
			K,
			L,
			M,
			N,
			O,
			P,
			Q,
			R,
			S,
			T,
			U,
			V,
			W,
			X,
			Y,
			Z,

			LeftBracket = 91, /* [ */
			Backslash,        /* \ */
			RightBracket,     /* ] */
			GraveAccent = 96, /* ` */

			World1 = 161, /* non-US #1 */
			World2 = 162, /* non-US #2 */

			/* Surrounding keys */

			Escape = 256,
			Enter,
			Tab,
			Backspace,
			Insert,
			Delete,

			/* Arrow keys */

			Right = 262,
			Left,
			Down,
			Up,

			PageUp,
			PageDown,
			Home,
			End,

			CapsLock = 280,
			ScrollLock,
			NumLock,
			PrintScreen,
			Pause,

			/* Function keys */

			F1 = 290,
			F2,
			F3,
			F4,
			F5,
			F6,
			F7,
			F8,
			F9,
			F10,
			F11,
			F12,
			F13,
			F14,
			F15,
			F16,
			F17,
			F18,
			F19,
			F20,
			F21,
			F22,
			F23,
			F24,
			F25,

			/* Numpad keys */

			Numpad0 = 320,
			Numpad1,
			Numpad2,
			Numpad3,
			Numpad4,
			Numpad5,
			Numpad6,
			Numpad7,
			Numpad8,
			Numpad9,

			NumpadDecimal = 330,
			NumpadDivide,
			NumpadMultiply,
			NumpadSubtract,
			NumpadAdd,
			NumpadEnter,
			NumpadEqual,

			LeftShift = 340,
			LeftControl,
			LeftAlt,
			LeftSuper,

			RightShift,
			RightControl,
			RightAlt,
			RightSuper,

			Menu,

			NONE
		};

	} // namespace Key

} // namespace Helium

#endif // Z_CORE_KEYCODES_HPP
