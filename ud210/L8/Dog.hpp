//
//  Dog.hpp
//  ud210
//
//  Created by Sam Carecho on 1/29/18.
//  Copyright © 2018 j4fun. All rights reserved.
//

#ifndef Dog_hpp
#define Dog_hpp

#include <stdio.h>
#include <string>
#include <iostream>

#endif /* Dog_hpp */

using namespace std;

class Dog
{
    string name;
    string license;
    
public:
    void setName(string dog_name);
    void setLicense(string dog_license);
    string getName();
    string getLicense();
    void printInfo();
};

