/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 28th, 2019, 12:28 AM
 * Purpose:  Display rectangle on screen no bigger than 15 characters
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
    char let;
    int wdth;
    
    //Initialize or input i.e. set variable values
    cin>>wdth;
    cin>>let;
    //Map inputs -> outputs    
    if(wdth<=15 && wdth>=0){
        for(int row=1; row<=wdth; row++){
            for(int col=1; col<=wdth; col++){
                cout<<let;
            }
            if(row<wdth)cout<<endl;
        }
    }else{
        cout<<"You entered an invalid input!"<<endl;
    }
    
    //Exit stage right or left!
    return 0;
}