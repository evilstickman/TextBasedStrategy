//
//  MovingObject.cpp
//  TextBasedStrategy
//
//  Created by mbillock on 12/4/13.
//
//

#include "MovingObject.h"


void MovingObject::draw()
{
    // ascii escape takes Y, X instead of X, Y
    std::cout << "\033["<<m_y<<";"<<m_x<<"H"<< '&';
}