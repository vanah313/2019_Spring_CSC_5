/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on February 28, 2019, 3:42 PM
 * Purpose:  Calculate the calories the user consumes
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   numC,   //number of cookies consumed
            calCns, //calories consumed
            calPC;  //calories per cookie            
    
    //Initialize or input i.e. set variable values
    calPC = 75;     //calories per cookie
        
    //Map inputs -> outputs
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>numC;  //Users input of how many cookies they've consumed
    
    calCns = numC * calPC;
    
    //Display the outputs
    cout<<"You consumed "<<calCns<<" calories.";
    
    //Exit stage right or left!
    return 0;
}