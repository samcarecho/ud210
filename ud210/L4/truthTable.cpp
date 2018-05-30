//
//  truthTable.cpp
//  ud210
//
//  Created by Sam Carecho on 1/9/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

#include "truthTable.hpp"

/*
 ** Goal: use logical and relational operators in a C++ program.
 ** Find all possible outputs for the given expression
 ** Hint: there are three inputs, so there are 8 possible
 ** input combinations (2^3)
 ** Which means there is an output for each combination of inputs.
 ** The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
  */

/*
 ** (A and B and C) or (A and( (not B) or (not C))) = Q
 ** Use this output format
 ** std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
  */
    
void calcTT(void)
{
    int A;
    int B;
    int C;
    int Q;
    
    int combinations[8][3] = {
        {0,0,0},
        {0,0,1},
        {0,1,0},
        {0,1,1},
        {1,0,0},
        {1,0,1},
        {1,1,0},
        {1,1,1}
    };
    
    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    
    for ( int i = 0; i < 8; i++ ) {
        A = combinations[i][0];
        B = combinations[i][1];
        C = combinations[i][2];
        
        Q = (A && B && C) || (A && (!B||!C));
        
        std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t\t\t\t"<<(!B||!C)<<"\t\t\t\t\t"<<(A&&(!B||!C))<<"\t\t\t"<<Q<<"\n";

    }
    
    std::cout<<"----------------------------------------------------------------------------\n";
    
    for ( int i = 0; i < 8; i++ ) {
        A = combinations[i][0];
        B = combinations[i][1];
        C = combinations[i][2];
        
        Q = A;
        
        std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t\t\t\t"<<(!B||!C)<<"\t\t\t\t\t"<<(A&&(!B||!C))<<"\t\t\t"<<Q<<"\n";
        
    }
}
