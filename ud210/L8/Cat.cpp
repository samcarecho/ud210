//
//  Cat.cpp
//  ud210
//
//  Created by Sam Carecho on 5/30/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

/*Goal: practice creating and using classes.
 **Create a class called Cat.
 **Create the following members:
 **private members: name, breed, age
 **public members: setName, setBreed,setAge
 **getName, getBreed, getAge, printInfo*/

#include "Cat.hpp"

void Cat::setName(string cat_name)
{
    name = cat_name;
};

void Cat::setBreed(string cat_breed)
{
    breed = cat_breed;
};

void Cat::setAge(int cat_age)
{
    age = cat_age;
};

string Cat::getName()
{
    return name;
};

string Cat::getBreed()
{
    return name;
};

int Cat::getAge()
{
    return age;
};

void Cat::printInfo()
{
    cout << name << endl;
    cout << breed << endl;
    cout << age << endl;
};
