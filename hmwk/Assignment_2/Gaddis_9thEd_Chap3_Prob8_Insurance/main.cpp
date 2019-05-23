/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 5, 2019, 9:23 AM
 * Purpose:  Calculate the minimum amount of insurance he or she 
 *           should buy for the property.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables            
    float   rplCst, //replacement cost
            minIns; //minimum insurance
            
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cin>>rplCst;   
    
    //Map inputs -> outputs
    minIns = (rplCst *.8);     
    
    //Display the outputs
    cout<<"You need $"<<minIns<<setw(14)<<"of insurance.";
    
    //Exit stage right or left!
    return 0;
}