#pragma once

#ifdef EN_PLATFORM_WINDOWS
	#ifdef EN_BUILD_DLL
		#define ENGG_API __declspec(dllexport)
	#else 
		#define ENGG_API __declspec(dllimport)
	#endif
#else
	#error Engg only supports Windows, for now!
#endif

#define BIT(x) (1 << x)
