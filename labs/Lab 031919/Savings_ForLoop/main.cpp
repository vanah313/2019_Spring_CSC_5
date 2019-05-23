/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 19th, 2019, 12:03 PM
 * Purpose:  Savings Function
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formating Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float presVal,      //Present Value in Dollars
            intRate,    //Interest Rate in %/year
            numCmpds,   //Number of Compounding periods in years
            futVal1,    //future value using power function
            futVal2;   //Future value using loops corrected to pennies
    
    //Initialize or input i.e. set variable values
    presVal=1000.0f; //100$
    intRate=0.06f;  //6%
    numCmpds=50;    //Up to 50 Years
    futVal1=futVal2=presVal;//Future Values set to present Values
    
    //Display the Headings and the initial Values
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year Future Values 1  Future Value 2"<<endl;
    cout<<setw(4)<<0<<setw(16)<<futVal1<<setw(18)<<futVal2<<endl;
    
    //Map inputs -> outputs
    for(int year=1; year<=numCmpds; year++){
        futVal1=presVal*pow(1+intRate, year);
        futVal2*=(1+intRate);
        int util=(futVal2+0.005)*100; //Calculate the number of pennies
        futVal2=util/100.0f;  //Convert back to dollars
        cout<<setw(4)<<year<<setw(16)<<futVal1<<setw(18)<<futVal2<<endl;
    }
    
    //Exit stage right or left!
    return 0;
}