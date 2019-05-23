/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 12, 2019, 10:15 AM
 * Purpose:  Take a Score and Grade
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
    char grade;
    unsigned short score;
    
    //Initialize or input i.e. set variable values
    cout<<"Get a grade by inputing the score"<<endl;
    cout<<"A valid score in range of 0-100"<<endl;
    cin>>score;   
    
    //Map inputs -> outputs
     
    //Give Grade
    if(score>=90)      grade= 'A';
    else if(score>=80) grade= 'B';
    else if(score>=70) grade= 'C';
    else if(score>=60) grade= 'D';
    else               grade= 'F';
    
    //Display the outputs
    cout<<"A score of "<<score<<" = "<<grade<<endl;
    
    //Exit stage right or left!
    return 0;
}