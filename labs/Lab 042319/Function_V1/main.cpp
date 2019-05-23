/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on April 23, 2019
 * Purpose:  
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PERCENT=100.0f;

//Future value saving functions
//Function Prototypes Here
float fVal_1(float, float, int);   //Power call
float fVal_2(float, float, int);   //Exponential/Log call
float fVal_3(float, float, int);   //For-loop
float fVal_4(float, float, int);   //Recursion
float fVal_4(float, float, float); //Name over-ride
float fVal_5(float, float, int=12);//Defaulted value
float fVal_6(float, float, int);   //Static Variable
void  fVal_7(float &, float, int); //Pass by reference

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float pv,i;//present value
    int n;
    
    //Initialize or input i.e. set variables    
    pv=100.0f;//100 dollars
    n=12;//12 years
    i=72/n;
    
    //Display outputs
    cout<<"Present Value                       = $"<<pv<<endl;
    cout<<"Number of compounding periods       = "<<n<<" years"<<endl;
    cout<<"Percentage per year                 = "<<i<<" %/year"<<endl;
    cout<<"Future Value using pow()            = $"<<fVal_1(pv,i/PERCENT,n)<<endl;
    cout<<"Future Value using exp()-log()      = $"<<fVal_2(pv,i/PERCENT,n)<<endl;
    cout<<"Future Value using for-loop         = $"<<fVal_3(pv,i/PERCENT,n)<<endl;
    cout<<"Future Value using recursion        = $"<<fVal_4(pv,i/PERCENT,n)<<endl;
    float fv=fVal_4(pv,i/PERCENT,1.0f*n);
    cout<<"Future Value using same name        = $"<<fv<<endl;
    cout<<"Future Value using default          = $"<<fVal_5(pv,i/PERCENT)<<endl;
    cout<<"Future Value using default          = $"<<fVal_5(pv,i/PERCENT,n)<<endl;
    for(int cnt=1;cnt<=5;cnt++){
        float fv=fVal_6(pv,i/PERCENT,n);
        cout<<"Future Value using static call      = $"<<fv<<endl;
    }
    float fv7=pv;
    fVal_7(fv7,i/PERCENT,n);
    cout<<"Future Value using Pass by Reference= $"<<fv7<<endl;
    
    //Exit Stage right or left!
    return 0;
}

void fVal_7(float &pv,float i,int n){
    for(int year=1;year<=n;year++){
        pv*=(1+i);
    }
}

float fVal_6(float pv,float i,int n){
    static int count;
    count++;
    cout<<"Static function count = "<<count<<endl;
    return fVal_5(pv,i,n);
}

float fVal_5(float pv,float i,int n){
    for(int year=1;year<=n;year++){
        pv*=(1+i);
    }
    return pv;
}

float fVal_4(float pv,float i,float n){
    cout<<"Function Name repeated"<<endl;
    return pv*pow(1+i,n);
}

float fVal_4(float pv,float i,int n){
    if(n<=0)return pv;
    return fVal_4(pv,i,n-1)*(1+i);
}

float fVal_3(float pv,float i,int n){
    for(int year=1;year<=n;year++){
        pv*=(1+i);
    }
    return pv;
}

float fVal_2(float pv,float i,int n){
    return pv*exp(n*log(1+i));
}

float fVal_1(float pv,float i,int n){
    return pv*pow(1+i,n);
}