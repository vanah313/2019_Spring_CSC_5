/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on April 2nd, 2019, 10:37 AM
 * Purpose:  Max and min random number
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
#include <cstdlib>   //Random number Library
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI=4*atan(1);//Trig Identity

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int min, max, nLoops;
    unsigned int mx;
    //Initialize or input i.e. set variable values
    nLoops=10000000000;
    mx=1;
    
    //Find Min and Max Random number
    min=max=rand();
    for(int i=1; i<=nLoops; i++){
        int temp=rand();
        if(temp>max)max=temp;
        if(temp<min)min=temp;
    }
    mx<<=31;//Shifts 1 31 places
    mx--;   //Subtracting 1
    
    //Map inputs -> outputs
    
    
    //Display the outputs
    cout<<"2^31 - 1   = "<<mx<<endl;
    cout<<"Max Random = "<<max<<endl;
    cout<<"Min Random = "<<min<<endl;
    
    //Exit stage right or left!
    return 0;
}