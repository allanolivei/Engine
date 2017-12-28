#ifndef GLFWDISPLAY_H
#define GLFWDISPLAY_H

#include <iostream>
#include <GLFW/glfw3.h>
#include <cassert>
#include "IDisplay.h"



class GLFWDisplay : public IDisplay
{

    GLFWwindow* window;
    int r,g,b;

public:
    GLFWDisplay(const char* title, int width, int height);
    ~GLFWDisplay();
    bool IsClosed();
    void Update();
    void SetColor(float r, float g, float b);
    void GetColor(float* r, float* g, float* b);
};


#endif //GLFWDISPLAY_H
