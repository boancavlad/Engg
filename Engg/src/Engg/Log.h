#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Engg {
	class ENGG_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr < spdlog::logger> s_CoreLogger;
		static std::shared_ptr < spdlog::logger> s_ClientLogger;



	};
}

// Core log macros
#define EN_CORE_TRACE(...)   ::Engg::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define EN_CORE_INFO(...)    ::Engg::Log::GetCoreLogger()->info(__VA_ARGS__)
#define EN_CORE_WARN(...)    ::Engg::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define EN_CORE_ERROR(...)   ::Engg::Log::GetCoreLogger()->error(__VA_ARGS__)
#define EN_CORE_FATAL(...)   ::Engg::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define EN_TRACE(...)        ::Engg::Log::GetClientLogger()->trace(__VA_ARGS__)
#define EN_INFO(...)         ::Engg::Log::GetClientLogger()->info(__VA_ARGS__)
#define EN_WARN(...)         ::Engg::Log::GetClientLogger()->warn(__VA_ARGS__)
#define EN_ERROR(...)        ::Engg::Log::GetClientLogger()->error(__VA_ARGS__)
#define EN_FATAL(...)        ::Engg::Log::GetClientLogger()->fatal(__VA_ARGS__)



