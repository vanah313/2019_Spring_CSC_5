/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 11th, 2019, 1:00 PM
 * Purpose:  calculate the monthly payment
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
    float              loan,    //loan Amount in $'s
                       intRate, //interest Rate %/year
                       mntPay,  //monthly payment + interest rate per year
                       ttlPay,
                       intPay; 
    unsigned short     numMnt;  //number of months to pay off loan             
    
    //Initialize or input i.e. set variable values
    loan = 10000;
    intRate = .12/ CNVYRM;
    numMnt = 36;
    
    //Map inputs -> outputs
    mntPay = (intRate*(pow(intRate + 1, numMnt)) * loan)/
             (pow(1 + intRate, numMnt)-1);
    ttlPay = mntPay * numMnt;
    
    intPay = ttlPay - loan;
        
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The monthly payment = $"<<setw(7)<<mntPay<<endl;

    //Exit stage right or left!
    return 0;
}