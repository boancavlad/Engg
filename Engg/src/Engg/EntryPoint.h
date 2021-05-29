#pragma once

#ifdef EN_PLATFORM_WINDOWS

extern Engg::Application* Engg::CreateApplication();

int main(int argc, char** argv) {

	auto app = Engg::CreateApplication();
	app->Run();
	delete app;
}

#endif