// file      : Helium/src/core/Logger.cpp
// copyright : Copyright (c) 2022-present, Kyle Chapman
// license   : GPL-3.0; see accompanying LICENSE file

#include "Logger.hpp"

// Ignore warnings from inside spdlog itself
#pragma warning(push, 0)
#include <spdlog/sinks/stdout_color_sinks.h>
#pragma warning(pop)

namespace Helium {

	/* Initial definitions */

	Ref<spdlog::logger> Logger::s_engine_logger;
	Ref<spdlog::logger> Logger::s_client_logger;

	void Logger::Init() {
		// Set the global pattern
		spdlog::set_pattern("[%H:%M:%S] [%^%=7l%$] [thread %5t] %n: %v");

		// Create engine logger
		s_engine_logger = spdlog::stdout_color_mt("HELIUM");
		s_engine_logger->set_level(spdlog::level::trace);

		// Create client logger
		s_client_logger = spdlog::stdout_color_mt("APP");
		s_client_logger->set_level(spdlog::level::trace);
	}

} // namespace Helium
