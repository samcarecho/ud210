//
//  questions.cpp
//  ud210
//
//  Created by Sam Carecho on 1/5/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

#include "questions.hpp"

void askQuestions(void)
{
    int year = 0;
    int age = 0;
    string name;
    
    //print a message to the user
    cout<<"What year is your favorite? ";
    
    //get the user response and assign it to the variable year
    cin >> year;
    cin.ignore(100, '\n');
    
    //output response to user
    cout<<"How interesting, your favorite year is "<<year<<"!\n";
    
    //print a message to the user
    cout<<"At what age did you learn to ride a bike? ";
    
    //get the user response and assign it to the variable age
    cin >> age;
    cin.ignore(100, '\n');
    
    //output response to user
    cout<<"How interesting you learned to ride at "<<age<<"!\n";
    
    cout<<"What is your name? ";
    getline(std::cin, name);
    cout<<"Hello "<<name<<" !\n";
    
}
