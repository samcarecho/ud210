//
//  m22Debug.cpp
//  ud210
//
//  Created by Sam Carecho on 1/28/18.
//  Copyright © 2018 Sam Carecho. All rights reserved.
//

/*Debug the program so that it executes correctly.
 **This program calculates floor or wall surface areas
 **For the purpose of remodeling estimates.
 **It asks a user to enter their name, phone, address
 **Then enter the room they wish to remodel
 **The user is asked to select a task
 **then a material.
 **The program will generate an estimate of
 **the cost of the project.
 **
 **The user inputs are in the input.txt file.*/

#include "m22Debug.hpp"

void getUserInformation(std::string &userName, std::string &phoneNumber, std::string &userAddress)
{
    cin.ignore(100, '\n');
    
    std::cout<<"Customer Name: \n";
    getline(cin, userName);
    
    std::cout<<"Customer Phone Number: \n";
    getline(cin, phoneNumber);
    
    std::cout<<"Customer Address: \n";
    getline(cin, userAddress);
}

std::string getRoomChoice()
{//We don't do anything with this information in the program
    std::string room;
    std::cout<<"What room are we remodeling?: \n";
    getline(std::cin, room);
    return room;
}

int getTaskAssignment()
{  //the possible task list
    //enum task {paint, wallpaper, carpet, tile, woodFloor};
    int task;
    std::cout<<"What job needs to be done?\n";
    std::cout<<"0: Wallpaper\n";
    std::cout<<"1: Paint\n";
    std::cout<<"2: Carpet\n";
    std::cout<<"3: Tile\n";
    std::cout<<"4: Wood Floor\n";
    std::cin>>task;
    return task;
}

void printTask(int task)
{//depending on which task was selected, print the corresponding string
    switch(task) {
        case 0:
            std::cout<<" paint ";
            break;
        case 1:
            std::cout<<" wallpaper ";
            break;
        case 2:
            std::cout<<" carpet ";
            break;
        case 3:
            std::cout<<" tile ";
            break;
        case 4:
            std::cout<<" wood floor ";
            break;
        default:
            std::cout<<" Ivalid task ";
    }
    //return task;
}

void getRoomInformation(int task, float &roomWidth, float &roomDepth, float &roomHeight)
{//all the tasks require the width and depth.
    //wall treatments require the height also
    std::cout<<"What is the room width? \n";
    std::cin>>roomWidth;
    std::cout<<"What is the room depth? \n";
    std::cin>>roomDepth;
    if(task == 0 or task == 1)
    {
        std::cout<<"What is the room height? \n";
        std::cin>>roomHeight;
    }
}

void printJobInformation(std::string userName, std::string phoneNumber, std::string userAddress, std::string remodelRoom, int task)
{//print user information. This is the only place the
    //remodel room string is used
    std::cout<<"\n\nPreparing order for:\n\n"<<userName<<"\n";
    std::cout<<"\t"<< phoneNumber<<"\n";
    std::cout<<"\t"<< userAddress<<"\n";
    std::cout<<"\t"<<"Remodeling the "<<remodelRoom<<" with";
    printTask(task);
}

float calcWallSurfaceArea(float roomWidth,float roomDepth,float roomHeight)
{//Calculate the wall surface area. Assume the room is rectangluar
    //Assume the two walls opposite each other are the same
    float wallWide = roomWidth * roomHeight * 2;//two walls
    float wallDeep = roomDepth * roomHeight * 2;//two walls
    return wallWide + wallDeep;
}

float calcPaintCost(const float PAINTCOST, float wallSurfaceArea)
{//cost estimates are simply surface area times material per sq. foot
    return PAINTCOST * wallSurfaceArea;
}

float calcWallPaperCost(const float WALLPAPERCOST, float wallSurfaceArea)
{//cost estimates are simply surface area times material per sq. foot
    return WALLPAPERCOST * wallSurfaceArea;
}

void printWallCostComparisons(float paintCost, float wallpaperCost)
{//print the estimates for the wall coverings
    std::cout<<"\nPaint Estimate: "<<paintCost<<"\n\n";
    std::cout<<"Wallpaper Estimate: "<<wallpaperCost<<"\n\n";
}

float calcFloorArea(float roomWidth, float roomDepth)
{
    return roomWidth * roomDepth;
}

float calcCarpetCost(const float CARPETCOST, float floorArea)
{//cost estimates are simply surface area times material per sq. foot
    return CARPETCOST * floorArea;
}

float calcTileCost(const float TILECOST, float floorArea)
{//cost estimates are simply surface area times material per sq. foot
    return TILECOST * floorArea;
}

float calcWoodFloor(const float WOODCOST, float floorArea)
{//cost estimates are simply surface area times material per sq. foot
    return WOODCOST * floorArea;
}

void printFloorCostComparisons(float carpetCost,float tileCost, float woodFloorCost)
{//print the estimates for the floor coverings
    std::cout<<"\n\t\tCarpet Estimate: "<<carpetCost;
    std::cout<<"\n\t\tTile Estimate: "<<tileCost;
    std::cout<<"\n\t\tWood Estimate: "<<woodFloorCost;
}

void runDebug(void)
{
    //Cost of materials for the remodel
    const float PAINTCOST = .50; //per square foot
    const float WALLPAPERCOST = 2.00; //per square foot
    const float CARPETCOST = 4.00; //per square foot
    const float TILECOST = 5.50; //per square foot
    const float WOODCOST = 6.00; //per square foot
    
    //user information
    string userName;
    string phoneNumber;
    string userAddress;
    string remodelRoom;
    float roomWidth = 0;
    float roomDepth = 0;
    float roomHeight = 0;
    float wallSurfaceArea = 0;
    float floorArea = 0;
    int task = 0;
    
    //estimate variables
    int paintCost = 0;
    int wallpaperCost = 0;
    int carpetCost = 0;
    int tileCost = 0;
    int woodFloorCost = 0;
    
    //the possible task list
    enum task {paint, wallpaper, carpet, tile, woodFloor};
    
    getUserInformation(userName, userAddress, phoneNumber);
    remodelRoom = getRoomChoice();
    task = getTaskAssignment();
    
    getRoomInformation(task, roomWidth, roomDepth, roomHeight);
    
    //print the information of the user and room
    printJobInformation(userName, phoneNumber, userAddress, remodelRoom, task);
    
    //If a wall treatment is to be done, get the wall surface area
    //assume all four walls of the room are to be redone
    if(task == paint or task == wallpaper)
    {
        //calculate and print the estimates
        wallSurfaceArea = calcWallSurfaceArea(roomWidth, roomDepth, roomHeight);
        paintCost = calcPaintCost(PAINTCOST, wallSurfaceArea);
        wallpaperCost = calcWallPaperCost(WALLPAPERCOST, wallSurfaceArea);
        printWallCostComparisons(paintCost, wallpaperCost);
    }
    
    //if a floor is to be done, get the square footage of the room
    if(task == carpet or task == tile or task == woodFloor)
    {
        //calculate and print the estimates
        floorArea = calcFloorArea(roomWidth, roomDepth);
        carpetCost = calcCarpetCost(CARPETCOST, floorArea);
        tileCost = calcTileCost(TILECOST, floorArea);
        woodFloorCost = calcWoodFloor(WOODCOST, floorArea);
        printFloorCostComparisons(carpetCost, tileCost, woodFloorCost);
    }
}

