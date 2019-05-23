/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 28th, 2019, 12:44 PM
 * Purpose:  Display the largest and smallest number
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
    int large, small;
    
    //Initialize or input i.e. set variable values
    large=0;
    small=1;
    
    //Map inputs -> outputs
    for(int i=1, num=0; i>0; ++i){
        cin>>num;
        if(num==-99)break;  //When user enters -99 loop will end          
        if(num>large){  //Comparing number inputed to previous input
            large=num;
        }else if(num<large || num<small){
                small=num;
        }
        
    }
    //Display the outputs
    cout<<"Smallest number in the series is "<<small<<endl;
    cout<<"Largest  number in the series is "<<large;
    
    //Exit stage right or left!
    return 0;
}