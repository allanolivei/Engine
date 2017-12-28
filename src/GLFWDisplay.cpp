
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

void GLFWDisplay::SetColor(float r, float g, float b)
{
    this->r = r;
    this->g = g;
    this->b = b;
}

void GLFWDisplay::GetColor(float* r, float* g, float* b)
{
    *r = this->r;
    *g = this->g;
    *b = this->b;
}

void GLFWDisplay::Update()
{
    int width, height;


    glfwGetFramebufferSize(window, &width, &height);
    glViewport(0,0,width,height);

    glClearColor(r, g, b, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(window);
    glfwPollEvents();
}
