//
//  VisibleObject.h
//  TextBasedStrategy
//
//  Created by mbillock on 8/5/13.
//
//

#ifndef __TextBasedStrategy__VisibleObject__
#define __TextBasedStrategy__VisibleObject__

#include <iostream>

class VisibleObject
{
public:
    VisibleObject(int x=0, int y=0);
    void draw();
protected:
    int m_x, m_y;
};

#endif /* defined(__TextBasedStrategy__VisibleObject__) */
