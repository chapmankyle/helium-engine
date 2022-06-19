// file      : Helium/core/Application.cpp
// copyright : Copyright (c) 2022-present, Kyle Chapman
// license   : GPL-3.0; see accompanying LICENSE file

#include <iostream>
#include "Application.hpp"

namespace Helium {

	Application::Application() {
	}

	Application::~Application() {
	}

	void Application::Run() {
		std::cout << "Starting run method..." << std::endl;
	}

} // namespace Helium
