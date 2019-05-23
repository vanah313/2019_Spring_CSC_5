/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 11th, 2019, 1:00 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library -> shown in Gaddis
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   rntPrc,     //rental price $'s/hour
            rntChrg;    //rental charge $'s
    int     numHrs,     //number of hours rented
            minHrs;     //min hours rented
    
    //Initialize or input i.e. set variable values
    cout<<"Calculate Rental Charge of Breaker"<<endl;
    cout<<"Input hours to Rent"<<endl;
    cin>>numHrs;
    rntChrg = 4e2f; //$400/hr
    minHrs = 5;     //Minimum number of hours to rent
    
    //Map inputs -> outputs
    numHrs = numHrs <minHrs?    //Boolean? True:False;
                     minHrs:
                     numHrs;
    rntPrc = numHrs * rntChrg;
        
    //Display the outputs]
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Bill = $"<<setw(7)<<rntPrc<<endl;

    //Exit stage right or left!
    return 0;
}