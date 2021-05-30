#pragma once

#ifdef EN_PLATFORM_WINDOWS

extern Engg::Application* Engg::CreateApplication();

int main(int argc, char** argv) {
	
	Engg::Log::Init();
	//EN_CORE_WARN("Initialized Log!");
	//EN_INFO("Hello there!");

	auto app = Engg::CreateApplication();
	app->Run();
	delete app;
}

#endif