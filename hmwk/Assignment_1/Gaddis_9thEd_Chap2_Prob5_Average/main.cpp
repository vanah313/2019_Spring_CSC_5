/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on February 14th, 2019, 11:31 AM
 * Purpose:  Calculate the average.
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
    unsigned short x1, x2,x3,x4,x5;
    float average;
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the average of 5, 2 digit integers"<<endl;
    cout<<"Input 5, 1-2 digit integers"<<endl;
    cin>>x1>>x2>>x3>>x4>>x5;
    
    //Map inputs -> outputs
    average=static_cast<float>(x1+x2+x3+x4+x5)/5;
    
    //Display the outputs
    cout<<"The average of ("<<x1<<","<<x2<<","
            <<x3<<","<<x4<<","<<x5<<") = "<<average<<endl;
    
    //Exit stage right or left!
    return 0;
}