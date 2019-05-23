/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 7, 2019, 12:00 PM
 * Purpose:  Calculate the retroactive pay, the new annual salary,
 *           and new monthly salary
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
    float   prvSal, //previous annual salary
            payInc, //pay increase
            rtPay,  //retroactive pay
            anSal,  //new annual salary
            mthPay; //new monthly salary
    
    
    //Initialize or input i.e. set variable values
    cout<<"Input previous annual salary."<<endl;
    cin>>prvSal;
    
    payInc = .076; 
    
    //Map inputs -> outputs
    rtPay = (prvSal * payInc)/2;
    anSal = prvSal + (rtPay * 2);
    mthPay = anSal/12;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Retroactive pay"<<setw(7)<<"= $"<<setw(7)<<rtPay<<endl;
    cout<<"New annual salary"<<setw(5)<<"= $"<<setw(7)<<anSal<<endl;
    cout<<"New monthly salary"<<setw(4)<<"= $"<<setw(7)<<mthPay;
    
    //Exit stage right or left!
    return 0;
}