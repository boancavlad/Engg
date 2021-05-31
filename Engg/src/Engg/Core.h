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

#ifdef EN_ENABLE_ASSERTS
	#define EN_ASSERT(x, ...) { if(!(x)) { EN_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define EN_CORE_ASSERT(x, ...) { if(!(X)) { EN_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define EN_ASSERT(x, ...)
	#define EN_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)
