/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on April 4th, 2019, 12:16 PM
 * Purpose:  Monty Hall Simulation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Number Generator
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int prize, cntstnt, drOpn;
    bool win;
    
    //Initialize or input i.e. set variable values
    prize  =rand()%3+1;//[1,2,3]
    cntstnt=rand()%3+1;//[1,2,3]
        
    //Choose door to open
    do{
        drOpn=rand()%3+1;//[1,2,3]
    }while(drOpn==prize || drOpn==cntstnt);
    win==cntstnt==prize?true:false;
    
    //Display the outputs
    cout<<"Contestant Door = "<<cntstnt<<endl;
    cout<<"Prize Door      = "<<prize<<endl;
    cout<<"Door Open       = "<<drOpn<<endl;
    if(win)cout<<"The Contestant wins the Game"<<endl;
    
    //Exit stage right or left!
    return 0;
}