//
//  funcHeader.cpp
//  ud210
//
//  Created by Sam Carecho on 1/26/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

#include "funcHeader.hpp"

void printProduct(int m1, int m2, int product)
{
    std::cout<<m1<<" * "<<m2<<" = "<<product<<"\n";
}

void runFH(void)
{
    int m1 = 4;
    int m2 = 5;
    int product;
    
    product = m1 * m2;
    
    printProduct(m1, m2, product);
}
