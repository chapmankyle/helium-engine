// file      : Helium/src/core/Main.hpp
// copyright : Copyright (c) 2022-present, Kyle Chapman
// license   : GPL-3.0; see accompanying LICENSE file

#pragma once

#ifndef Z_CORE_MAIN_HPP
#define Z_CORE_MAIN_HPP

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

#endif // Z_CORE_MAIN_HPP
