/* 
 * File:   main.cpp
 * Author: Savanah Torres
 * Created on May 2, 2019, 12:03 PM
 * Purpose:  Savings Functions using Vectors
 *           and MCV design pattern
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formating Library
#include <cmath>     //Math Library
#include <vector>    //STL Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void savings(vector<float> &, vector<float> &, float, float);
void display(vector<float> &, vector<float> &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int NMCMPDS=51;   //Number of Compounding periods in years    
    float presVal,           //Present Value in Dollars
          intRate;           //Interest Rate in %/year            
    vector<float> futVal1(NMCMPDS);//future value using power function
    vector<float> futVal2(NMCMPDS);//Future value using loops corrected to pennies
    
    //Initialize or input i.e. set variable values
    presVal=1000.0f; //100$
    intRate=0.06f;  //6%
    futVal1[0]=futVal2[0]=presVal;//Future Values set to present Values
    
    //Display the Headings and the initial Values
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year Future Values 1  Future Value 2"<<endl;
    cout<<setw(4)<<0<<setw(16)<<futVal1[0]<<setw(18)<<futVal2[0]<<endl;
    
    //Fill the Savings array
    savings(futVal1,futVal2,presVal,intRate);
    
    //Output the resulting table
    display(futVal1,futVal2);
    
    //Exit stage right or left!
    return 0;
}
void display(vector<float> &futVal1,vector<float> &futVal2){
    for(int year=1; year<futVal1.size(); year++){
        cout<<setw(4)<<year<<setw(16)<<futVal1[year]
                    <<setw(18)<<futVal2[year]<<endl;
    }
}

void savings(vector<float> &futVal1,vector<float> &futVal2, float presVal, float intRate){
    for(int year=1; year<futVal1.size(); year++){
        futVal1[year]=presVal*pow(1+intRate, year);
        futVal2[year]=futVal2[year-1]*(1+intRate);
        int util=(futVal2[year]+0.005)*100; //Calculate the number of pennies
        futVal2[year]=util/100.0f;  //Convert back to dollars
    }
}