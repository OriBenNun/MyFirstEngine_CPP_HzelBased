#pragma once

#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define GE_API __declspec(dllexport)
	#else
		#define GE_API __declspec(dllimport)
	#endif // GE_BUILD_DLL
#else
	#error GE SUPPORTS ONLY WINDOWS
#endif // GE_PLATFORM_WINDOWS
