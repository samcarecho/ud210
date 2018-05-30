//
//  whileLoop.cpp
//  ud210
//
//  Created by Sam Carecho on 1/22/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

#include "whileLoop.hpp"


void runWL(void)
{
    //use 55 as the number to be guessed
    int target = 55;
    int guess = -1;
    
    while(guess != target)
    {
        std::cout<<"Guess a number between 0 and 100: ";
        std::cin>>guess;
        
        if (guess < target) {
            std::cout<<"Your guess is lower than the target number!\n\n";
        }
        
        if (guess > target) {
            std::cout<<"\nYour guess is higher than the target number!\n\n";
        }
    }
    
    if (guess == target) {
        std::cout<<"You guessed right. The target number is "<<guess<<". Congrats!\n\n";
    }
    
}
