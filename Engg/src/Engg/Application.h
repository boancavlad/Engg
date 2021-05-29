#pragma once

#include "Core.h"

namespace Engg {
	class ENGG_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

