#pragma once

#include "Core.h"
#include "Window.h"
#include "Engg/LayerStack.h"
#include "Engg/Events/Event.h"
#include "Engg/Events/ApplicationEvent.h"

namespace Engg {
	class ENGG_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);
	private:
		bool OnWindowClose(WindowCloseEvent& e);
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

