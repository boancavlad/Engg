#include "Application.h"

#include "Engg/Events/ApplicationEvent.h"
#include "Engg/Log.h"

namespace Engg {

	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {

		WindowResizeEvent e(1280, 720);
		EN_TRACE(e);
		while (true);
	}
}