//
//  names.cpp
//  ud210
//
//  Created by Sam Carecho on 1/5/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

#include "names.hpp"

void askName(void)
{
    std::string name;
    std::string address;
    std::string phone;
    
    for (int a = 0; a < 1; a++) {
        cout<<"What is your name?\n";
        getline(cin, name);
        
        cout<<"What is your address?\n";
        getline(cin, address);
        
        cout<<"What is your phone number?\n";
        getline(cin, phone);
        
        //output response to user
        std::cout<<"\n"<<name<<"\n";
        std::cout<<address<<"\n";
        std::cout<<phone<<"\n\n\n";
    }
}
