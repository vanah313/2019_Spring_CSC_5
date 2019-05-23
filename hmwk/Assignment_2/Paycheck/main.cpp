/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 5th, 2019, 1:00 PM
 * Purpose:  Calculate the gross pay
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library -> shown in Gaddis
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int CNVYRM = 12;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   payRt,  //Pay Rate in $'s/hr
            grsPay, //Pay Rate under 40 hours
            ovrTmS, //Overtime Salary addition
            ttlPay, //Overall total pay
            rmdrPay;//Remainder Pay
    int numHrs, //number of hours inputed
        minHrs, //minimum number of hours
        ovrTm;  //overtime hours       
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>payRt;
    cin>>numHrs;
    
    minHrs = 40; //number of hours paid straight until pay is doubled
    ovrTm = numHrs-minHrs;
    ovrTmS = (payRt*2)*ovrTm;
    rmdrPay = minHrs * payRt;
    grsPay = payRt * numHrs;
    
    //Map inputs -> outputs
    if (numHrs>minHrs) {
        ttlPay = ovrTmS + rmdrPay;
    }
    else{
        ttlPay = grsPay;
    }    
        
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $"<<setw(7)<<ttlPay;

    //Exit stage right or left!
    return 0;
}