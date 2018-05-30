//
//  switch.cpp
//  ud210
//
//  Created by Sam Carecho on 1/10/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

#include "switch.hpp"

void runSQ(void)
{
    float in1, in2, result = 0;
    char oper;
    int hasResult = 0;
    
    std::cout<<"Enter two numbers:\n";
    std::cin>>in1;
    std::cin>>in2;
    
    std::cout<<"Enter the operation '+','-','*','/':\n";
    std::cin>>oper;
    
    switch (oper)
    {
        case '+':
        {
            result = in1 + in2;
            hasResult = 1;
            break;
        }
        case '-':
        {
            result = in1 - in2;
            hasResult = 1;
            break;
        }
        case '*':
        {
            result = in1 * in2;
            hasResult = 1;
            break;
        }
        case '/':
        {
            result = in1 / in2;
            hasResult = 1;
            break;
        }
        default:
        {
            std::cout<<"Please type a valid operation!\n";
        }
    }
    
    if (hasResult)
    {
        std::cout<<in1<<" "<<oper<<" "<<in2<<" = "<<result<<"\n";
    }
}

