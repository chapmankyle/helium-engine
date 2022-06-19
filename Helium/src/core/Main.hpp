// file      : Helium/core/Main.hpp
// copyright : Copyright (c) 2022-present, Kyle Chapman
// license   : GPL-3.0; see accompanying LICENSE file

#pragma once

#ifndef CORE_MAIN_HPP
#define CORE_MAIN_HPP

#ifdef HELIUM_PLATFORM_WINDOWS

extern Helium::Application* Helium::Create();

int main(int argc, char** argv) {

	Helium::Logger::Init();

	// Create the application with the given arguments
	auto app = Helium::Create();

	// Run the main loop
	app->Run();

	// Cleanup after exiting
	delete app;

}

#endif // HELIUM_PLATFORM_WINDOWS

#endif // CORE_MAIN_HPP
