//
//  arrays.cpp
//  ud210
//
//  Created by Sam Carecho on 1/23/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

/* Goal: Practice array manipulation in C++.
 * The user will input 40 integers.
 * Put them into an array. Then print the array in the order the numbers were
 * entered. Then print in reverse order. Then sort the array in
 * ascending order
 * and print it.
 * The each print of the array should separate the numbers in the array by
 * one space.
 * For example: the array were [3,4,55] the printout would be 3 4 55
 */

#include "arrays.hpp"


void insertionSort(int arr[], int length)
{
    int i, j, tmp;
    for (i = 1; i < length; i++) {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}

void runArr(void)
{
    int iterations = 5;
    int userInput[iterations];
    
    std::cout<<"type "<<iterations<<" numbers:\n";
    
    for(int i = 0; i < iterations; i++)
    {
        std::cin>>userInput[i];
    }
    
    std::cout<<"Array in input order:\n";
    for(int i = 0; i < iterations; i++)
    {
        std::cout<<userInput[i]<<" ";
    }
    std::cout<<"\n";
    
    std::cout<<"Array in reverse input order:\n";
    for(int i = iterations -1; i >= 0; i--)
    {
        std::cout<<userInput[i]<<" ";
    }
    std::cout<<"\n";
    
    insertionSort(userInput, iterations);
    std::cout<<"Sorted Array:\n";
    for(int i = 0; i < iterations; i++)
    {
        std::cout<<userInput[i]<<" ";
    }
    std::cout<<"\n";
}
