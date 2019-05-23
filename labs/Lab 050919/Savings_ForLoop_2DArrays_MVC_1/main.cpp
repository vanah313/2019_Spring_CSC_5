/* 
 * File:   main.cpp
 * Author: Savanah Torres
 * Created on May 9, 2019, 12:03 PM
 * Purpose:  Savings Functions using 2D Arrays 
 *           and MCV design pattern
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formating Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=2;

//Function Prototypes
void savings(float [][COLS], float, float, int);
void display(float [][COLS], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int NMCMPDS=51;   //Number of Compounding periods in years
    
    float presVal,           //Present Value in Dollars
            intRate,         //Interest Rate in %/year            
            futVal[NMCMPDS][COLS];//future value using power function
            //Future value using loops corrected to pennies
    //Initialize or input i.e. set variable values
    presVal=1000.0f; //100$
    intRate=0.06f;  //6%
    futVal[0][0]=futVal[0][1]=presVal;//Future Values set to present Values
    
    //Display the Headings and the initial Values
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year      Future Values 1     Future Value 2"<<endl;
    cout<<setw(4)<<0<<setw(16)<<futVal[0][0]<<setw(18)<<futVal[0][1]<<endl;
    
    //Fill the Savings array
    savings(futVal,presVal,intRate,NMCMPDS);
    
    //Output the resulting table
    display(futVal,NMCMPDS);
    
    //Exit stage right or left!
    return 0;
}

void display(float futVal[][COLS], int NMCMPDS){
    for(int year=1; year<NMCMPDS; year++){
        cout<<setw(4)<<year<<setw(16)<<futVal[year][0]
                    <<setw(18)<<futVal[year][1]<<endl;
    }
}

void savings(float futVal[][COLS], float presVal, float intRate, int NMCMPDS){
    for(int year=1; year<NMCMPDS; year++){
        futVal[year][0]=presVal*pow(1+intRate, year);
        futVal[year][1]=futVal[year-1][1]*(1+intRate);
        int util=(futVal[year][1]+0.005)*100; //Calculate the number of pennies
        futVal[year][1]=util/100.0f;  //Convert back to dollars
    }
}