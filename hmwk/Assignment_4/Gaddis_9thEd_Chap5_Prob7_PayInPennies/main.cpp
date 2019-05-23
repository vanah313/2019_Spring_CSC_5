/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 31st, 2019, 12:23 AM
 * Purpose:  Calculate how much a person would earn over
 *           a period of time if the number of pennies they
 *           earned doubled each day
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formating Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int CNVPNDL=100;//Convert Pennies to Dollars

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int days;  //Number of days worked
    float ttlPay;       //Total payment in dollars
    
    //Initialize or input i.e. set variable values
    cin>>days;
    ttlPay=0;
    
    //Map inputs -> outputs
    if(days>=1){                             //Checking for valid number of days
        for (unsigned int i=1;i<=days;i++) { //loop going through days
            if (days>1) {                    //when # of days>1 pay doubles
                ttlPay*=2;
                ttlPay+=0.01;
                
            }
            if (ttlPay==0) {
                ttlPay=0.01;
            }
        }
    }else{
        cout<<"Your input is invalid"<<endl;
    }
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Pay = $"<<ttlPay;

    //Exit stage right or left!
    return 0;
}