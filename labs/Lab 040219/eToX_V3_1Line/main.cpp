/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on April 2nd, 2019, 10:37 AM
 * Purpose:  Calculating e^x
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random Number seed
    int nFact, fact, nTerms;
    float eToX, x, term;
    
    //Declare Variables
    nTerms=12;
    eToX=1;
    term=1;
    x=2;
    
    //Find Min and Max Random number
    for(int nFact=1; nFact<=nTerms;term*=(x/nFact),eToX+=term, nFact++){}
    
    
    //Display the outputs
    cout<<"Exact       e^"<<x<<" = "<<exp(x)<<endl;
    cout<<"Approximate e^"<<x<<" = "<<eToX<<endl;
    cout<<"Number of terms in the approximation = "<<nTerms<<endl;
        
    //Exit stage right or left!
    return 0;
}