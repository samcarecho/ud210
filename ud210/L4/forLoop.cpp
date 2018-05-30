//
//  forLoop.cpp
//  ud210
//
//  Created by Sam Carecho on 1/10/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

/*Write a program that asks a user for five numbers.
 **Print out the sum and average of the five numbers.
 */

#include "forLoop.hpp"


void runFL(void)
{
    float numsList[5], sum = 0, avg = 0;
    
    for (int i=0; i<5; i++)
    {
        std::string ordenal;
        switch(i)
        {
            case 0:
                ordenal = "first";
                break;
            case 1:
                ordenal = "second";
                break;
            case 2:
                ordenal = "third";
                break;
            case 3:
                ordenal = "fourth";
                break;
            case 4:
                ordenal = "fifty";
                break;
        }
        std::cout<<"Type the "<<ordenal<<" number..."<<std::endl;
        std::cin>>numsList[i];
    }
    
    std::cout<<"Typed numbers are: [";
    for (int i=0; i<5; i++)
    {
        if (i == 4) {
            std::cout<<numsList[i];
        }
        else std::cout<<numsList[i]<<", ";
        sum+=numsList[i];
    }
    std::cout<<"]"<<std::endl;
    
    avg = sum / 5.0;
    
    std::cout<<"The sum is: "<<sum<<std::endl;
    std::cout<<"The average is: "<<avg<<std::endl;
}
