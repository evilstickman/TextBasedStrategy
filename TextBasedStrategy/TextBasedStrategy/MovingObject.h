//
//  MovingObject.h
//  TextBasedStrategy
//
//  Created by mbillock on 12/4/13.
//
//

#ifndef __TextBasedStrategy__MovingObject__
#define __TextBasedStrategy__MovingObject__

#include <iostream>
#include "VisibleObject.h"

class MovingObject : public VisibleObject
{
public:
    MovingObject(int i, int j) : VisibleObject(i,j) {}
    
    virtual void draw();

};

#endif /* defined(__TextBasedStrategy__MovingObject__) */
