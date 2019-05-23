/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on February 28, 2019, 1:42 PM
 * Purpose:  Calculate the average of 5 test scores
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float scr1, scr2, scr3, scr4, scr5, avgScr; //All test score and 
                                                //average score
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average."<<endl;
    cin>>scr1;
    cin>>scr2;
    cin>>scr3;
    cin>>scr4;
    cin>>scr5;
    //Map inputs -> outputs  
    avgScr = (scr1 + scr2 + scr3 + scr4 + scr5)/5;
    
    //Display the outputs
    cout<<"The average = "<<fixed<<setprecision(1)<<avgScr;
    
    //Exit stage right or left!
    return 0;
}