#ifndef SDLDISPLAY_H
#define SDLDISPLAY_H

#include "Display.h"


class SDLDisplay : public Display
{
public:
    Display(char* title, int width, int height);
    bool IsClosed();
    void Update();
};


#endif //SDLDISPLAY_H
