#pragma once

#ifdef HM_PLATFORM_WINDOWS
	#ifdef HM_BUILD_DLL
		#define HELIUM_API __declspec(dllexport)
	#else
		#define HELIUM_API __declspec(dllimport)
	#endif
#else
	#error Helium is only available for Windows devices.
#endif // HM_PLATFORM_WINDOWS

