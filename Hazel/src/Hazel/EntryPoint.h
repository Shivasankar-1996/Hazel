#pragma once
#ifdef HZ_WINDOWS_PLATFORM

//extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
	auto app = Hazel::CreateApplication();
	app->run();

	return 0;
}

#endif