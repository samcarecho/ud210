//
//  Dog.cpp
//  ud210
//
//  Created by Sam Carecho on 1/29/18.
//  Copyright © 2018 j4fun. All rights reserved.
//

/*Goal: practice creating and using a class
 **Use the class 'Dog' to create to
 **instances of the class, dog1 and dog2.
 **Assign dog1 the name: Trixie
 **Assign dog2 the name: Kali
 **Assign dog1 the license #1234
 **Assign dog2 the license #5678
 */

#include "Dog.hpp"

void Dog::setName(string dog_name)
{
    name = dog_name;
}

void Dog::setLicense(string dog_license)
{
    license = dog_license;
}

string Dog::getName()
{
    return name;
}

string Dog::getLicense()
{
    return license;
}

void Dog::printInfo()
{
    std::cout<<name<<"  "<<license<<endl;
}
