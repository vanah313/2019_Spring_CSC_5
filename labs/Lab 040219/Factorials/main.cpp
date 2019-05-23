/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on April 2nd, 2019, 10:37 AM
 * Purpose:  Calculating a Factorial
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random Number seed
    int nFact, fact;
    
    //Declare Variables
    nFact=13;
    fact=1;
    
    //Initialize or input i.e. set variable values
    
    
    //Find Min and Max Random number
    for(int i=1; i<=nFact; i++){
        fact*=i;
    }
    
    //Display the outputs
    cout<<nFact<<"! = "<<fact<<endl;
        
    //Exit stage right or left!
    return 0;
}