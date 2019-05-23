/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 7, 2019, 11:32 AM
 * Purpose:  Calculate the sine, cosine, and tangent of angle
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formating Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI = 4*atan(1);    //Pi 
const float CNVRD = PI/180.0f; //conversion from radians to degrees
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int angle;  //angle in degrees
    float sinA, cosA, tanA; //sin, cos, tan output
    
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>angle;
    
    //Map inputs -> outputs
    sinA = sin(angle * CNVRD);
    cosA = cos(angle * CNVRD);
    tanA = sinA/cosA;
    
    //Display the outputs
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"sin("<<angle<<") ="<<setw(7)<<sinA<<endl;
    cout<<"cos("<<angle<<") ="<<setw(7)<<cosA<<endl;
    cout<<"tan("<<angle<<") ="<<setw(7)<<tanA;
    
    //Exit stage right or left!
    return 0;
}