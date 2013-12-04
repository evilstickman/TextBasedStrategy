//
//  main.cpp
//  TextBasedStrategy
//
//  Created by mbillock on 7/31/13.
//
//

#include <iostream>
#include <vector>
#include "ansi_escape_sequences.h"
#include "VisibleObject.h"
#include "MovingObject.h" 
#include <unistd.h>

int main(int argc, const char * argv[])
{
    std::vector<VisibleObject *> renderable_objects;
    // This is a cheap method that only works for linux/osx. Windows will need to create text art some other way
    std::cout << ANSI_CLEAR_SCREEN<< ANSI_MOVE_TO_1_1 << ANSI_ESCAPE_YELLOW << "Hello, World!" << ANSI_ESCAPE_RESET << "\n";
    std::cout<<ANSI_MOVE_TO_1_1;
    for(int i = 1; i <= 40; ++i)
    {
        for(int j=1; j <= 160; ++j)
        {
            renderable_objects.push_back(new VisibleObject(j, i));
        }
    }
    renderable_objects.push_back(new MovingObject(1,1));
    for(int i = 1; i <= 40; ++i)
    {
        for(int j = 0; j < 100; ++j)
        {
            std::cout << std::endl;
        }
        renderable_objects[renderable_objects.size()-1]->move_to(i,i);
        for(std::vector<VisibleObject *>::const_iterator iter = renderable_objects.begin();
            iter != renderable_objects.end();
            ++iter)
        {
            (*iter)->draw();
        }
        char c = '\0';
        while(c != 'q')
        {
            std::cin >> c;
        }
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    return 0;
}

