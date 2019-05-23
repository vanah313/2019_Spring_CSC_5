/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on February 25th, 2019, 9:30 AM
 * Purpose:  Calculate distance with the number of seconds the user inputs
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//Execution Begins Here!
int main(int argc, char** argv) {    
    //Declare Variables
    int time, acel, dst;    
    
    //Initialize or input i.e. set variable values
    acel = 32; //feet per second        
       
    //Map inputs -> outputs
    cout<<"Enter the time in seconds to find the distance the object traveled."
            <<endl;
    cin>>time;
    
    time = time * time;      //time squared
    dst = ((acel * time)/2); //distance formula
    
    //Display the outputs
    cout<<"The object landed "<<dst<<"ft away."<<endl;
    
    //Exit stage right or left!
    return 0;
}