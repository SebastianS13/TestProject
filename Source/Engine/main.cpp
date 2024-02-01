#include <GLFW/glfw3.h>

#include <Engine/Window.hpp>

int main(void)
{
    if (!Test::Init())
    {
        return -1;
    }

    GLFWwindow* window = Test::CreateWindow(1920, 1080, "Test Window");
    
    if (!window)
	{
   	    return -1;
   	}

    while (!glfwWindowShouldClose(window))
    {
	    /* Render here */
   	    glClear(GL_COLOR_BUFFER_BIT);

    	/* Swap front and back buffers */
   	    glfwSwapBuffers(window);

   	    /* Poll for and process events */
   	    glfwPollEvents();

    }

    glfwTerminate();
    return 0;
}