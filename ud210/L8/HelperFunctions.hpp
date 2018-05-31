//
//  HelperFunctions.hpp
//  ud210
//
//  Created by Sam Carecho on 5/31/18.
//  Copyright © Sam Carecho. All rights reserved.
//

#ifndef HelperFunctions_hpp
#define HelperFunctions_hpp

#include <stdio.h>
#include <iostream>
#include <iomanip>

#endif /* HelperFunctions_hpp */

using namespace std;

class Gameboard
{
    char gameSpace[4][4];
public:
    Gameboard(); //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
    char getGameSpace(int row,int column);
    int fourInRow(); //four 'x's in any row 'wins'
    void printInfo(); //print the game board in a 4x4 matrix
};
