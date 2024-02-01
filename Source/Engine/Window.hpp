#pragma once

#include <GLFW/glfw3.h>

namespace Test {
	bool Init();

    GLFWwindow* CreateWindow(int Width, int Height, const char* Title);
}