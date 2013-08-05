//
//  main.cpp
//  TextBasedStrategy
//
//  Created by mbillock on 7/31/13.
//
//

#include <iostream>
#include "ansi_escape_sequences.h"

int main(int argc, const char * argv[])
{

    // This is a cheap method that only works for linux/osx. Windows will need to create text art some other way
    std::cout << ANSI_CLEAR_SCREEN<< ANSI_MOVE_TO_1_1 << ANSI_ESCAPE_YELLOW << "Hello, World!" << ANSI_ESCAPE_RESET << "\n";
    std::cout<<ANSI_MOVE_TO_1_1;
    for(int i = 1; i <= 40; ++i)
    {
        for(int j=1; j <= 160; ++j)
        {
            std::cout << "\033["<<i<<";"<<j<<"H"<< '.';
        }
    }
    std::cout << std::endl;
    return 0;
}

