//
//  m10FuncRet.cpp
//  ud210
//
//  Created by Sam Carecho on 1/27/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

/*Goal: practice writing functions with parameters and return values.*/

#include "m10FuncRet.hpp"

void printEquation(int m1, int m2, int sum, char operation)
{
    std::cout<<m1<<" "<<operation<<" "<<m2<<" = "<<sum<<"\n";
}

int sum(int m1, int m2)
{
    return m1 + m2;
}

void runFR(void)
{
    int m1, m2, result;
    
    cout << "Type an integer.";
    cin>>m1;
    
    cout << "Type another integer.";
    cin>>m2;
    
    result = sum(m1, m2);
    printEquation(m1, m2, result, '+');
}
