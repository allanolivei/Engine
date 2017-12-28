#include <iostream>
#include "IDisplay.h"
#include "GLFWDisplay.h"

int main( int charc, char* charv[] )
{
    std::cout << "Initialize" << std::endl;

    IDisplay* display = new GLFWDisplay("Ola mundo", 400, 200);

    while( !display->IsClosed() )
    {
        display->Update();
    }

    delete display;

    std::cin.get();

    return 0;
}
