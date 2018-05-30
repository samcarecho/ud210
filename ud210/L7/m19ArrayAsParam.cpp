//
//  m19ArrayAsParam.cpp
//  ud210
//
//  Created by Sam Carecho on 1/28/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

/*
 * Goal: create a function that searches an array for
 * a given value.
 *
 * If the array contains the value, return the index where the key is located.
 * If the array does not contain the value, return a -1.
 */

#include "m19ArrayAsParam.hpp"

int search(int array[], int size, int searchKey)
{
    for (int i=0; i < size; i++)
    {
        if (array[i] == searchKey)
        {
            return i;
        }
    }
    
    return -1;
}

void runArrAsP(void)
{
    const int size = 4;
    int array[] = {345,75896,2,543};
    int searchKey = 543;
    
    cout << "Search for? (options: 345, 75896, 2, 543)";
    cin>>searchKey;
    cout<<"Found at index "<<search(array, size, searchKey)<<"\n";
}
