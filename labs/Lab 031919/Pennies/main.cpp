/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 19th, 2019, 12:36 PM
 * Purpose:  Salary starting at a penny
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formating Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int CNVPNDL = 100; //Convert Pennies to Dollars

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
        
    //Initialize or input i.e. set variable values
    cout<<"This Program Calculates Pay per Day and sum"<<endl;
    cout<<"Day         Pay          Sum"<<endl;
    
    
    //Map inputs -> outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    for(unsigned int day=1, pay=1, sum=0; day<=31; day++,pay*=2){
        sum+=pay;
        cout<<setw(3)<<day
            <<setw(9)<<(pay/CNVPNDL)<<".";
        if(pay%CNVPNDL<10){
            cout<<'0';
        }
        cout<<pay%CNVPNDL
            <<setw(10)<<(sum/CNVPNDL)<<".";
        if(sum%CNVPNDL<10){
            cout<<'0';
        }
        cout<<sum%CNVPNDL<<endl;
    }
    

    //Exit stage right or left!
    return 0;
}