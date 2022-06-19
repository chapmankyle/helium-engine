// file      : Helium/core/Logger.hpp
// copyright : Copyright (c) 2022-present, Kyle Chapman
// license   : GPL-3.0; see accompanying LICENSE file

#pragma once

#ifndef CORE_LOGGER_HPP
#define CORE_LOGGER_HPP

// Ignore warnings from inside spdlog itself
#pragma warning(push, 0)
#include <spdlog/spdlog.h>
#pragma warning(pop)

#include "Base.hpp"
#include "Types.hpp"

namespace Helium {

	namespace log {

		/* @brief Type of log to produce. */
		enum class State {
			Info = 0,
			Warn,
			Error,
			Fatal
		};

	} // namespace log

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

#endif // CORE_LOGGER_HPP
