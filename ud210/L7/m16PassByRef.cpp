//
//  m16PassByRef.cpp
//  ud210
//
//  Created by Sam Carecho on 1/27/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

/*Goal: Use 'pass by reference' to a function
 **to write this program.
 **There are two functions that you need to write
 **for this program:
 **calculate(input1, input2, operation, result);
 **printEquation(input1, input2, operation, result);
 **Pass by reference any value that is modified
 **in the function.
 **
 **Put the declaration and the definitions of the
 **functions in the header file.
 **
 **
 **Input, input2, and result are floats.
 **Operation is a char. The choices are '+', '-', '*', '/'
 **The result is modified by the function called calculate.
 */

#include "m16PassByRef.hpp"

void calculate(float input1, float input2, char operation, float &result)
{
    bool processed = false;
    
    switch(operation)
    {
        case '+':
            result = input1 + input2;
            processed = true;
            break;
        case '-':
            result = input1 - input2;
            processed = true;
            break;
        case '*':
            result = input1 * input2;
            processed = true;
            break;
        case '/':
            result = input1 / input2;
            processed = true;
            break;
        default:
            std::cout<<"You need to provide '+', '-', '*' or '/' as the operation./n/n";
    }
    
}

void printEquation(float input1, float input2, char operation, float result)
{
    std::cout<<input1<<" "<<operation<<" "<<input2<<" = "<<result<<"\n";
}

void runPBRef(void)
{
    char operation = '*';
    float input1 = 9.8;
    float input2 = 2.3;
    float result;
    
    cout << "Type a float.";
    cin>>input1;
    
    cout << "Type an arithmetic operator.";
    cin>>operation;
    
    cout << "Type another float.";
    cin>>input2;
    
    
    calculate(input1, input2, operation, result);
    printEquation(input1, input2, operation, result);
    
    
}
    
