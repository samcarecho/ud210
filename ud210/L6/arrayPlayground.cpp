//
//  arrayPlayground.cpp
//  ud210
//
//  Created by Sam Carecho on 1/26/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

#include "arrayPlayground.hpp"


void runArrP(void)
{
    const int MAX_ROW = 2;
    const int MAX_COL = 2;
    const int WEIGHT = 2;
    
    int MyArray[MAX_ROW][MAX_COL][WEIGHT] = {1, 2, 3, 4, 5, 6, 7, 8};
    
    for(int r = 0; r < MAX_ROW; ++r)
        for(int c = 0; c < MAX_COL; ++c)
            for(int w = 0; w < WEIGHT; ++w)
                std::cout << "Integer["<<r<<"]["<<c<<"]["<<w<<"] = " <<MyArray[r][c][w]<< std::endl;
}
