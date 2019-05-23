/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 5th, 2019, 11:25 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library -> shown in Gaddis
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVLBG = 453.592;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float massMs,       //mass of mouse in grams
            massSw,     //mass of sweetener in grams
            prnMass,    //dieter's mass in pounds
            sdaPop,     //soda pop mass in grams
            cnst,       //consentration 
            rtMsw,      //
            sdaCnst,    //soda consentration
            massK;      //mass to kill dieter
    
    //Initialize or input i.e. set variable values
    massMs = 35;
    massSw = 5;
    sdaPop = 350;
    cnst = .001;
    sdaCnst = sdaPop * cnst;
    rtMsw = massMs / massSw;
    
    //Map inputs -> outputs
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>prnMass;
    
    massK = prnMass * CNVLBG/ rtMsw/sdaCnst;
    
    //Display the outputs
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<static_cast<int>(massK)<<" cans";
    
    //Exit stage right or left!
    return 0;
}