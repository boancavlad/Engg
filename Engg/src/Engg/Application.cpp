#include "enpch.h"
#include "Application.h"

#include "Engg/Events/ApplicationEvent.h"
#include "Engg/Log.h"

#include <GLFW/glfw3.h>

namespace Engg {

	Application::Application() {
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application() {

	}

	void Application::Run() {
		while (m_Running) {
			m_Window->OnUpdate();
		}
	}
}