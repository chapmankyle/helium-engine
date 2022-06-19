#include <Helium.hpp>

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
Helium::Application* Helium::Create() {
	return new Sandbox();
}
