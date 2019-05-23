/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on February 26, 2019, 11:21 AM
 * Purpose:  
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int CNVMYR = 12;

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float loanAmt = 1000,//Loan amount in dollars
          faceVal,       //Was $1000 but now is being solved for 
          intRate = .15, //Interest rate 15%/year           
          intrst,        //Interest to be paid up front in $'s
          mnPay;         //monthly payment in $'s
    int span = 18;       //Duration of Loan = 18 months  
    
    //Map inputs -> outputs
    faceVal = loanAmt/(1-intRate*span/CNVMYR);  //Initial computation
    mnPay = faceVal/span;                       //Initial computation
    int imnPay = (mnPay+0.005)*100;             //Round up to the penny
    mnPay = imnPay/100.0f;                      //Truncate the exact penny
    faceVal = span*mnPay;                       //New face value
    intrst = faceVal-loanAmt;                   //Total interest paid
            
    //Input or initialize values Here
    
    
    //Process/Calculations Here
    
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Revised Simple Loan Calculation for in-hand desired Loan Amount"
            <<endl;
    cout<<"Loan Amount:  $"<<setw(8)<<loanAmt<<endl;
    cout<<"Face Value :  $"<<setw(8)<<faceVal<<endl;
    cout<<"Interest Rate: "<<setw(5)<<static_cast<int>(intRate*100)
            <<" %/year"<<endl;
    cout<<"Span/Duration: "<<setw(5)<<span<<" months"<<endl;
    cout<<"Interest   :  $"<<setw(8)<<intrst<<endl;
    cout<<"Payment    :  $"<<setw(8)<<mnPay<<"/month"<<endl;
            
    //Exit
    return 0;
}

