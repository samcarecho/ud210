//
//  roomArea.cpp
//  ud210
//
//  Created by Sam Carecho on 1/5/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

#include "roomArea.hpp"

/*Goal: practice using stringstream
 **Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room.
 **Print out the area of the room.
 */

void calcRoomArea(void)
{
    std::string stringLength;
    float length;
    float width;
    float area;
    
    std::cout << "Enter the length: ";
    std::getline(std::cin,stringLength);
    std::stringstream(stringLength)>>length;
    
    std::cout << "\nEnter the width: ";
    std::getline(std::cin,stringLength);
    std::stringstream(stringLength)>>width;
    
    area = length * width;
    
    std::cout<<"\nThe area of the room is: "<<area<<" m^2\n\n";
}
