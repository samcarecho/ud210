//
//  HelperFunctions.cpp
//  ud210
//
//  Created by Sam Carecho on 5/31/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

#include "HelperFunctions.hpp"

//initialize the board with '-' in all 16 spaces
Gameboard::Gameboard()
{
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            gameSpace[i][j] = '-';
        }
    }
}

//x,y,or '-' in each game square
void Gameboard::setGameSpace(int row, int column, char value)
{
    gameSpace[row][column] = value;
}

char Gameboard::getGameSpace(int row, int column)
{
    return gameSpace[row][column];
}

//four 'x's in any row 'wins'
int Gameboard::fourInRow()
{
    int HasWon = 0;
    
    for (int i=0; i<4; i++) {
        int count = 0;
        
        for (int j=0; j<4; j++) {
            char space = getGameSpace(i, j);
            
            if (space == 'x') {
                count += 1;
            }
        }
        
        if (count == 4) {
            HasWon = 1;
        }
    }
    
    return HasWon;
}

//print the game board in a 4x4 matrix
void Gameboard::printInfo()
{
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            cout << gameSpace[i][j] << " ";
        }
        cout << endl;
    }
}
