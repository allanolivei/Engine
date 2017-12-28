#ifndef IDISPLAY_H
#define IDISPLAY_H

#include <iostream>

class IDisplay
{
public:
    virtual ~IDisplay(){ std::cout << "IAM ABSTRACT" << std::endl; }
    virtual bool IsClosed()=0;
    virtual void Update()=0;
};

#endif //IDISPLAY_H
