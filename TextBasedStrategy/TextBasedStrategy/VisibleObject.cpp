//
//  VisibleObject.cpp
//  TextBasedStrategy
//
//  Created by mbillock on 8/5/13.
//
//

#include "VisibleObject.h"
#include "ansi_escape_sequences.h"
VisibleObject::VisibleObject(int x, int y) : m_x(x), m_y(y)
{
}

void VisibleObject::draw()
{
    // ascii escape takes Y, X instead of X, Y
    std::cout << "\033["<<m_y<<";"<<m_x<<"H"<< '.';    
}