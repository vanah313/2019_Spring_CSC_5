/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on April 2nd, 2019, 10:23 AM
 * Purpose:  Approximate PI
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI=4*atan(1);//Trig Identity

//Function Prototypes
float apprxPi(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float apprxPI; 
    unsigned int nTerms;
    float sign;
    
    //Initialize or input i.e. set variable values
    apprxPI=0;
    nTerms=1;
    
    //Map inputs -> outputs
    apprxPI=apprxPi(nTerms);
    apprxPI*=4;
    
    //Display the outputs
    cout<<"Number of terms in PI sequence = "<<nTerms<<endl;
    cout<<"Pi              = "<<PI<<endl;
    cout<<"Pi approximated = "<<apprxPI<<endl;
    //Exit stage right or left!
    return 0;
}

float apprxPi(int nTerms){
    //Declare Variables
    float apprxPI,sign; 
        
    //Initialize or input i.e. set variable values
    apprxPI=0;
    sign=-1;
    
    //Map inputs -> outputs
    for(int term=1, den=1; term<=nTerms; term++, den+=2){
        sign*=-1;
        apprxPI+=sign/den;
    }
    apprxPI*=4;
    
    //Return the results
    return apprxPI;
}