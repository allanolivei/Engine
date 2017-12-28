
#include "GLFWDisplay.h"


GLFWDisplay::GLFWDisplay(const char* title, int width, int height)
{
    assert(glfwInit() != GL_NO_ERROR);
    window = glfwCreateWindow(width, height, title, NULL, NULL);
    assert(window != NULL);
    glfwMakeContextCurrent(window);

    std::cout << "Initialized GLFW Window" << std::endl;
}


GLFWDisplay::~GLFWDisplay()
{
    glfwDestroyWindow(window);
    glfwTerminate();

    std::cout << "Destroied GLFW Window" << std::endl;
}

bool GLFWDisplay::IsClosed()
{
    return glfwWindowShouldClose(window);
}

void GLFWDisplay::Update()
{
    glfwSwapBuffers(window);
    glfwPollEvents();
}
