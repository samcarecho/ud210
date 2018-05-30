//
//  ifElse.cpp
//  ud210
//
//  Created by Sam Carecho on 1/10/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

#include "ifElse.hpp"


void runIE(void)
{
    char skin, location;
    std::cout<<"Would you like an animal with fur(f), feathers(t), or scales(s)?";
    std::cin>>skin;
    std::cout<<skin<<"\n";

    //Use if-else statements to control program flow

    if (skin == 'f')
    {
        std::cout<<"Get a dog"<<"\n";
    }
    else if (skin == 't')
    {
        std::cout<<"Get a bird"<<"\n";
    }
    else if (skin == 's')
    {
        std::cout<<"Would you like an animal that lives in water(w), land(l), or both(b)?";
        std::cin>>location;
        std::cout<<location<<"\n";
        
        if (location == 'w')
        {
            std::cout<<"Get a fish"<<"\n";
        }
        else if (location == 'l')
        {
            std::cout<<"Get a gecko"<<"\n";
        }
        else if (location == 'b')
        {
            std::cout<<"Get a frog"<<"\n";
        }
        else
        {
            std::cout<<"You must choose a valid location option!"<<"\n";
        }
    }
    else
    {
        std::cout<<"You must choose a valid skin option!"<<"\n";
    }
}
