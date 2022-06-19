#include <Helium.h>

class Sandbox : public Helium::Application {

public:

	Sandbox() {
	}

	~Sandbox() {
	}

};

int main() {
	Sandbox* sandbox = new Sandbox();
	sandbox->run();
	delete sandbox;
}
