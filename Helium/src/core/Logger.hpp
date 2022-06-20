// file      : Helium/core/Logger.hpp
// copyright : Copyright (c) 2022-present, Kyle Chapman
// license   : GPL-3.0; see accompanying LICENSE file

#pragma once

#ifndef Z_CORE_LOGGER_HPP
#define Z_CORE_LOGGER_HPP

// Ignore warnings from inside spdlog itself
#pragma warning(push, 0)
#include <spdlog/spdlog.h>
#pragma warning(pop)

#include "Base.hpp"
#include "Types.hpp"

namespace Helium {

	/* @brief Allows logging of messages. */
	class HELIUM_API Logger {

	protected:

		/* @brief Logger for the Engine. */
		static Ref<spdlog::logger> s_engine_logger;

		/* @brief Logger for the client application. */
		static Ref<spdlog::logger> s_client_logger;

	public:

		/* @brief Initializes the logger. */
		static void Init();

		/* @brief Returns the engine logger. */
		static Ref<spdlog::logger>& GetEngineLogger() { return s_engine_logger; }

		/* @brief Returns the client application logger. */
		static Ref<spdlog::logger>& GetClientLogger() { return s_client_logger; }

	};

} // namespace Helium

/* Debug messages are ON */
#ifndef HELIUM_DISABLE_DEBUG

/* -- Core engine macros -- */

#define HELIUM_CORE_TRACE(...)   ::Helium::Logger::GetEngineLogger()->trace(__VA_ARGS__)
#define HELIUM_CORE_INFO(...)    ::Helium::Logger::GetEngineLogger()->info(__VA_ARGS__)
#define HELIUM_CORE_WARN(...)    ::Helium::Logger::GetEngineLogger()->warn(__VA_ARGS__)
#define HELIUM_CORE_ERROR(...)   ::Helium::Logger::GetEngineLogger()->error(__VA_ARGS__)
#define HELIUM_CORE_FATAL(...)   ::Helium::Logger::GetEngineLogger()->critical(__VA_ARGS__)

/* -- Client macros -- */

#define HELIUM_TRACE(...)   ::Helium::Logger::GetClientLogger()->trace(__VA_ARGS__)
#define HELIUM_INFO(...)    ::Helium::Logger::GetClientLogger()->info(__VA_ARGS__)
#define HELIUM_WARN(...)    ::Helium::Logger::GetClientLogger()->warn(__VA_ARGS__)
#define HELIUM_ERROR(...)   ::Helium::Logger::GetClientLogger()->error(__VA_ARGS__)
#define HELIUM_FATAL(...)   ::Helium::Logger::GetClientLogger()->critical(__VA_ARGS__)

/* Debug messages are OFF */
#else

/* -- Core engine macros -- */

#define HELIUM_CORE_TRACE(...)
#define HELIUM_CORE_INFO(...)
#define HELIUM_CORE_WARN(...)
#define HELIUM_CORE_ERROR(...)
#define HELIUM_CORE_FATAL(...) ::Helium::Logger::GetEngineLogger()->critical(__VA_ARGS__)

/* -- Client macros -- */

#define HELIUM_TRACE(...)
#define HELIUM_INFO(...)
#define HELIUM_WARN(...)
#define HELIUM_ERROR(...)
#define HELIUM_FATAL(...) ::Helium::Logger::GetClientLogger()->critical(__VA_ARGS__)

#endif // HELIUM_DISABLE_DEBUG

#endif // Z_CORE_LOGGER_HPP
