// file      : Helium/src/core/Base.hpp
// copyright : Copyright (c) 2022-present, Kyle Chapman
// license   : GPL-3.0; see accompanying LICENSE file

#pragma once

#ifndef Z_CORE_BASE_HPP
#define Z_CORE_BASE_HPP

#ifdef HELIUM_PLATFORM_WINDOWS

	#ifdef HELIUM_BUILD_DLL
		#define HELIUM_API __declspec(dllexport)
	#else
		#define HELIUM_API __declspec(dllimport)
	#endif // HELIUM_BUILD_DLL

#else

	#error Helium is only available on Windows.

#endif // HELIUM_PLATFORM_WINDOWS

#endif // Z_CORE_BASE_HPP
