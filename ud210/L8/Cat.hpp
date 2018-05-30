//
//  Cat.hpp
//  ud210
//
//  Created by Sam Carecho on 5/30/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

#ifndef Cat_hpp
#define Cat_hpp

#include <stdio.h>
#include <string>
#include <iostream>

#endif /* Cat_hpp */

using namespace std;

class Cat
{
    string name;
    string breed;
    int age;
    
public:
    void setName(string name);
    void setBreed(string breed);
    void setAge(int age);
    string getName();
    string getBreed();
    int getAge();
    void printInfo();
    
};
