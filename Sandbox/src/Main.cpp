// file      : Sandbox/src/Main.cpp
// copyright : Copyright (c) 2022-present, Kyle Chapman
// license   : GPL-3.0; see accompanying LICENSE file

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
