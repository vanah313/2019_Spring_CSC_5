/* 
 * Author: Savanah Torres
 * Created on May 1, 2019 11:29 AM
 * Purpose:  Calculate the present value 
 *           using a function for calculations
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const float PERCENT=100.0f;

//Function Prototypes
float psntVal(float,float,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float futVal, intRate, pv;
    int  nYrs;
    
    //Initialize Variables
    cout<<"This is a Present Value Computation"<<endl;
    cout<<"Input the Future Value in Dollars"<<endl;
    cout<<"Input the Number of Years"<<endl;
    cout<<"Input the Interest Rate %/yr"<<endl;
    cin>>futVal>>nYrs>>intRate;
    
    //Process/Map inputs to outputs
    pv=psntVal(futVal,intRate/PERCENT,nYrs);
     
    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value = $"<<pv;
    
    //Exit stage right!
    return 0;
}

float psntVal(float futVal,float intRate,int nYrs){
    float pv;
    pv=futVal/pow(1+intRate,nYrs);
    return pv;
}