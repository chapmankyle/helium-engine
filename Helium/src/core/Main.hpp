#pragma once

#ifndef CORE_MAIN_HPP
#define CORE_MAIN_HPP

#ifdef HELIUM_PLATFORM_WINDOWS

extern Helium::Application* Helium::Create();

int main(int argc, char** argv) {

	// Create the application with the given arguments
	auto app = Helium::Create();

	// Run the main loop
	app->Run();

	// Cleanup after exiting
	delete app;

}

#endif // HELIUM_PLATFORM_WINDOWS

#endif // CORE_MAIN_HPP


