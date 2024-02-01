#include "Engine/Window.hpp"

#include <GLFW/glfw3.h>
#include <string>

bool Initialised = false;

namespace Test {
	bool Init()
	{
		if (!glfwInit())
        	return false;
		
		Initialised = true;
		return true;
	}

    GLFWwindow* CreateWindow(int Width, int Height, const char* Title)
	{
		GLFWwindow* window;
		window = glfwCreateWindow(Width, Height, Title, NULL, NULL);
    	if (!window)
    	{
    	    glfwTerminate();
    	    return nullptr;
    	}

    	/* Make the window's context current */
    	glfwMakeContextCurrent(window);

		return window;

    	/* Loop until the user closes the window */
	}
    	
}	