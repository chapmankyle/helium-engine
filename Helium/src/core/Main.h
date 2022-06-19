#pragma once

#ifdef HM_PLATFORM_WINDOWS

extern Helium::Application* Helium::create();

int main(int argc, char** argv) {

	// Create the application with the given arguments
	auto app = Helium::create();

	// Run the main loop
	app->run();

	// Cleanup after exiting
	delete app;

}

#endif
