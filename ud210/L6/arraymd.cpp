//
//  arraymd.cpp
//  ud210
//
//  Created by Sam Carecho on 1/26/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

/* Goal: practice using multidimensional arrays.
 * Write a program that will accept values for a 4x4 array
 * and a vector of size 4.
 * Use the dot product to multiply the array by the vector.
 * Print the resulting vector.
 */

#include "arraymd.hpp"

void runArrMD(void)
{
    //TODO: multiply a 4x4 array with vector of size 4.
    //Print the resultant product vector
    
    int array2d[4][4], vector[4], product[4], sum = 0;
    
    for (int i=0; i < 4; i++)
        for (int j=0; j<4; j++)
        {
            std::cout<<"type array item["<<i<<"]["<<j<<"]: \n";
            std::cin>>array2d[i][j];
        }
    
    for (int i=0; i < 4; i++)
    {
        std::cout<<"type vector item["<<i<<"]"<<": \n";
        std::cin>>vector[i];
    }
    
    for (int i=0; i < 4; i++) {
        for (int j=0; j<4; j++)
        {
            sum += array2d[i][j] * vector[j];
        }
        product[i] = sum;
        sum = 0;
    }
    
    for(int i=0;i<4;i++)
    {
        std::cout<<"product["<<i<<"] = "<<product[i]<<"\n";
    }
}
