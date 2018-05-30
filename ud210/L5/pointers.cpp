//
//  pointers.cpp
//  ud210
//
//  Created by Sam Carecho on 1/22/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

/*For this program print for each variable
 **print the value of the variable,
 **then print the address where it is stored.
 */

#include "pointers.hpp"

void runP(void)
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;
    
    std::cout<<"Type an integer.\n";
    std::cin>>givenInt;
    std::cout<<"\n"<<givenInt;
    std::cout<<"\n"<<&givenInt<<"\n\n";
    
    std::cout<<"Type a float.\n";
    std::cin>>givenFloat;
    std::cout<<"\n"<<givenFloat;
    std::cout<<"\n"<<&givenFloat<<"\n\n";
    
    std::cout<<"Type a double.\n";
    std::cin>>givenDouble;
    std::cout<<"\n"<<givenDouble;
    std::cout<<"\n"<<&givenDouble<<"\n\n";
    
    std::cout<<"Type a string.\n";
    std::cin.ignore();
    std::getline(std::cin, givenString);
    std::cout<<"\n"<<givenString;
    std::cout<<"\n"<<&givenString<<"\n\n";
    
    std::cout<<"Type a char.\n";
    std::cin>>givenChar;
    std::cout<<"\n"<<(char)givenChar;
    std::cout<<"\n"<<(void *) &givenChar<<"\n\n";
    
}
