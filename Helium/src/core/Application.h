#pragma once

#include "Core.h"

namespace Helium {

	class HELIUM_API Application {

	public:
		Application();
		virtual ~Application();

		void run();
	};

	/*
	 * @brief Used to create the application.
	 * Implementation should be defined in the client.
	 */
	Application* create();

}

