// file      : Helium/core/Base.hpp
// copyright : Copyright (c) 2022-present, Kyle Chapman
// license   : GPL-3.0; see accompanying LICENSE file

#pragma once

#ifndef CORE_BASE_HPP
#define CORE_BASE_HPP

#ifdef HELIUM_PLATFORM_WINDOWS
	#ifdef HELIUM_BUILD_DLL
		#define HELIUM_API __declspec(dllexport)
	#else
		#define HELIUM_API __declspec(dllimport)
	#endif
#else
	#error Helium is only available for Windows devices.
#endif // HELIUM_PLATFORM_WINDOWS

#endif // CORE_BASE_HPP
