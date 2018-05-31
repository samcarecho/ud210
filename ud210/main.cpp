/*This program accepts inputs from the input.txt file*/

#include "L1/questions.hpp"
#include "L1/names.hpp"
#include "L1/roomArea.hpp"

#include "L3/shapesVolume.hpp"

#include "L4/truthTable.hpp"
#include "L4/ifElse.hpp"
#include "L4/switch.hpp"
#include "L4/forLoop.hpp"
#include "L4/whileLoop.hpp"

#include "L5/pointers.hpp"

#include "L6/minMax.hpp"
#include "L6/arrays.hpp"
#include "L6/arraySearch.hpp"
#include "L6/arrayPlayground.hpp"
#include "L6/arraymd.hpp"

#include "L7/funcHeader.hpp"
#include "L7/m10FuncRet.hpp"
#include "L7/m16PassByRef.hpp"
#include "L7/m19ArrayAsParam.hpp"
#include "L7/m22Debug.hpp"

#include "L8/m3WhyClasses.hpp"
#include "L8/Dog.hpp"
#include "L8/Cat.hpp"
#include "L8/HelperFunctions.hpp"

int main()
{
    /*
    askQuestions();
    std::cout<<"\n---------------------------\n\n\n";
    
    askName();
    std::cout<<"\n---------------------------\n\n\n";
    
    calcRoomArea();
    std::cout<<"\n---------------------------\n\n\n";
    
    calcVolume();
    std::cout<<"\n---------------------------\n\n\n";
    
    calcTT();
    std::cout<<"\n---------------------------\n\n\n";
    
    runIE();
    std::cout<<"\n---------------------------\n\n\n";
    
    runSQ();
    std::cout<<"\n---------------------------\n\n\n";
    
    runFL();
    std::cout<<"\n---------------------------\n\n\n";
    
    runWL();
    std::cout<<"\n---------------------------\n\n\n";
    
    runP();
    std::cout<<"\n---------------------------\n\n\n";
    
    runMM();
    std::cout<<"\n---------------------------\n\n\n";
    
    runArr();
    std::cout<<"\n---------------------------\n\n\n";
    
    runArrS();
    std::cout<<"\n---------------------------\n\n\n";
    
    runArrP();
    std::cout<<"\n---------------------------\n\n\n";
    
    runArrMD();
    std::cout<<"\n---------------------------\n\n\n";
    
    runFH();
    std::cout<<"\n---------------------------\n\n\n";
    
    
    runFR();
    std::cout<<"\n---------------------------\n\n\n";
    
    runPBRef();
    std::cout<<"\n---------------------------\n\n\n";
    
    runArrAsP();
    std::cout<<"\n---------------------------\n\n\n";
    
    runDebug();
    std::cout<<"\n---------------------------\n\n\n";
    
    runWClass();
    std::cout<<"\n---------------------------\n\n\n";
    */
    
    /*
     * Goal: practice creating and using a class
     * Use the class 'Dog' to create to
     * instances of the class, dog1 and dog2.
     * Assign dog1 the name: Trixie
     * Assign dog2 the name: Kali
     * Assign dog1 the license #1234
     * Assign dog2 the license #5678
     */
    Dog dog1, dog2;
    
    dog1.setName("Trixie");
    dog1.setLicense("#1234");
    dog1.printInfo();
    
    dog2.setName("Kali");
    dog2.setLicense("#5678");
    dog2.printInfo();
    
    std::cout<<"\n---------------------------\n\n\n";
    
    Cat cat1;
    cat1.setName("Garfield");
    cat1.setBreed("Exotic Shorthair");
    cat1.setAge(100);
    cat1.printInfo();
    
    std::cout<<"\n---------------------------\n\n\n";
    
    Gameboard game1;
    
    game1.setGameSpace(0,0,'x');
    game1.setGameSpace(0,1,'x');
    game1.setGameSpace(0,2,'x');
    game1.setGameSpace(0,3,'y');
    game1.setGameSpace(1,0,'x');
    game1.setGameSpace(2,0,'x');
    game1.setGameSpace(3,0,'x');
    game1.setGameSpace(3,1,'x');
    game1.setGameSpace(3,2,'x');
    game1.setGameSpace(3,3,'x');
    
    if(game1.fourInRow() == 1)
    {
        cout<<"X got four in a row! \n\n";
    }
    else
    {
        cout<<"X did not get four in a row :(\n\n";
    }
    game1.printInfo();
    
    std::cout<<"\n---------------------------\n\n\n";
}
