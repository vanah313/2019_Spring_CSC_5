/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 7, 2019, 10:36 PM
 * Purpose:  Calculate the number of people 
 *           the room can hold
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main() {
    //Declare Variables
    int rmCap,      //Room Capacity
        attendPp,   //Number of people attended
        invPpl;     // Room capacity, people attended, people invited

    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>rmCap; 
    cin>>attendPp; 
    
    //Map inputs -> outputs
    
        
    //Display the outputs
    if (attendPp <= rmCap) { //if the people attended is less than room cap
            cout<<"Meeting can be held."<<endl;
            if (rmCap - attendPp) {
            
                cout<<"Increase number of people by "<<(rmCap - attendPp)<<" will be allowed without violation."; 
                
            }
            }
            else {
                cout<< "Meeting cannot be held."<<endl;
              
                cout<<"Reduce number of people by "<<(attendPp - rmCap)<< " to avoid fire violation.";
            }
    //Exit stage right or left!
    return 0;
}