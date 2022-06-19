#include <Helium.h>

class Sandbox : public Helium::Application {

public:

	Sandbox() {
	}

	~Sandbox() {
	}

};

/*
 * @brief Creates the sandbox.
 */
Helium::Application* Helium::create() {
	return new Sandbox();
}
