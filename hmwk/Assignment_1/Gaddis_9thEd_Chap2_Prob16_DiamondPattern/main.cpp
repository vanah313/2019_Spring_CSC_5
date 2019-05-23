/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 11th, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string star1 = "*",         //first row of stars
            star3 = "***",      //second row of stars
            star5 = "*****",    //third row of stars
            star7 = "*******",  //fourth row of stars
            spc6 = "      ",    //six spaces
            spc5 = "     ",     //five spaces
            spc4 = "    ",      //four spaces
            spc3 = "   ";       //three spaces
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<spc6<<star1<<endl;
    cout<<spc5<<star3<<endl;
    cout<<spc4<<star5<<endl;
    cout<<spc3<<star7<<endl;
    cout<<spc4<<star5<<endl;
    cout<<spc5<<star3<<endl;
    cout<<spc6<<star1<<endl;
    
    //Exit stage right or left!
    return 0;
}