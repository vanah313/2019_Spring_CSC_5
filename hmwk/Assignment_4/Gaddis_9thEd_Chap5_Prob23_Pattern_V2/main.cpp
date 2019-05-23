/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 31st, 2019, 03:16 AM
 * Purpose:  Display a pattern given an output of 10
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int numLns, decLns;
    string sign;
    
    //Initialize or input i.e. set variable values
    cin>>numLns;
    sign="+";
    
    //Map inputs -> outputs
    for(int row=1; row<=numLns; ++row){//Determining how many rows
        for(int col=1; col<=row; ++col){//Increasing number of symbols per line
            cout<<sign;
        }
        cout<<endl<<endl;
    }
    
     for(int row= numLns; row >= 1; --row){//Number of rows needed
        for(int col=1; col<= row; ++col){//Decreasing number of symbols
            cout<<sign;
        }
        if(row>1)cout<<endl<<endl;
    }
    //Exit stage right or left!
    return 0;
}           