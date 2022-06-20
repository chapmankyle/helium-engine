// file      : Helium/core/Application.hpp
// copyright : Copyright (c) 2022-present, Kyle Chapman
// license   : GPL-3.0; see accompanying LICENSE file

#pragma once

#ifndef Z_CORE_APPLICATION_HPP
#define Z_CORE_APPLICATION_HPP

#include "Base.hpp"

namespace Helium {

	class HELIUM_API Application {

	public:
		Application();
		virtual ~Application();

		void Run();
	};

	/*
	 * @brief Used to create the application.
	 * Implementation should be defined in the client.
	 */
	Application* Create();

} // namespace Helium

#endif // Z_CORE_APPLICATION_HPP
