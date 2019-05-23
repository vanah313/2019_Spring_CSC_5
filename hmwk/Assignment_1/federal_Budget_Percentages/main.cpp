/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on February 21, 2019, 11:28 AM
 * Purpose:  Calculate the percentage of federal funds going to the
 *           military and NASA in 2019
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float fedBudg, milBudg, nasaBudg, milP, nasaP;
    
    //Input or initialize values Here
    fedBudg = 4.4e12f; //Federal Budget in dollars
    milBudg = 716e9f;  //Military funds in dollars
    nasaBudg = 20.9e9f;//NASA funds in dollars
    
    //Process/Calculations Here
    milP = (milBudg/fedBudg)*100;  //% of Federal fund going to the military
    nasaP = (nasaBudg/fedBudg)*100;//% of Federal funds going to NASA
    
    //Output Located Here
    cout<<"The military gets "<<milP<<"% of the Federal Budget for 2019"<<endl;
    cout<<"NASA gets "<<nasaP<<"% of the Federal Budget for 2019"<<endl;

    //Exit
    return 0;
}

