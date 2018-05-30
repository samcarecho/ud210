//
//  minMax.cpp
//  ud210
//
//  Created by Sam Carecho on 1/22/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

/*Find the min and max and average of 15 numbers that a user will input.
 **The numbers range from 0 to 100.
 **We will do it now for practice and again later when we learn arrays and
 **functions. So you do not have to keep all fifteen numbers stored in memory.
 **HINT: you will need to use scanf for input text.
 */

#include "minMax.hpp"

void runMM(void)
{
    int iterations = 15;
    float n;
    float max = 0;
    float min = 100;
    float sum = 0;
    
    std::cout<<"type "<<iterations<<" numbers:\n";
    
    for (int i=0; i<iterations; i++)
    {
        std::cin>>n;

        if (n > max)
            max = n;
        else if (n < min)
            min = n;

        sum += n;
    }
    
    float average = sum / iterations;
    
    std::cout<<"The biggest typed number is: "<<max<<"\n";
    std::cout<<"The smallest typed number is: "<<min<<"\n";
    std::cout<<"The average is: "<<average<<"\n";
    
}
