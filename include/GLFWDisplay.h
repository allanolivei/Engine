#ifndef GLFWDISPLAY_H
#define GLFWDISPLAY_H

#include <iostream>
#include <GLFW/glfw3.h>
#include <cassert>
#include "IDisplay.h"



class GLFWDisplay : public IDisplay
{

    GLFWwindow* window;

public:
    GLFWDisplay(const char* title, int width, int height);
    ~GLFWDisplay();
    bool IsClosed();
    void Update();
};


#endif //GLFWDISPLAY_H
