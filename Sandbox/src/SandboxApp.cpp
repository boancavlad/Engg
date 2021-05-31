#include <Engg.h>

class ExampleLayer : public Engg::Layer {
public:
	ExampleLayer()
		: Layer("Example") {}

	void OnUpdate() override {
		EN_INFO("ExampleLayer::Update");
	}

	void OnEvent(Engg::Event & event) override {
		EN_TRACE("{0}", event);
	}
};

class Sandbox : public Engg::Application {

public:
	Sandbox() {
		PushLayer(new ExampleLayer());
		PushOverlay(new Engg::ImGuiLayer());
	}
	
	~Sandbox() {

	}
};

Engg::Application* Engg::CreateApplication() {
	return new Sandbox();
}