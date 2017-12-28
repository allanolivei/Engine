#ifndef IDISPLAY_H
#define IDISPLAY_H

#include <iostream>

class IDisplay
{
public:
    virtual ~IDisplay(){ std::cout << "ABSTRACT IS DESTROIED" << std::endl; }
    virtual bool IsClosed()=0;
    virtual void Update()=0;
    virtual void SetColor(float r, float g, float b)=0;
    virtual void GetColor(float* r, float* g, float* b)=0;
};

#endif //IDISPLAY_H
