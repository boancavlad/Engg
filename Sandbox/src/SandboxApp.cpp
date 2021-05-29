#include <Engg.h>

class Sandbox : public Engg::Application {

public:
	Sandbox() {

	}
	
	~Sandbox() {

	}
};

Engg::Application* Engg::CreateApplication() {
	return new Sandbox();
}