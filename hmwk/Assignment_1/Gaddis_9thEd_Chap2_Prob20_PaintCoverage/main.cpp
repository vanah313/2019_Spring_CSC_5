/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on February 19, 2016, 11:33 AM
 * Purpose:  Paint Coverage Calculation
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
    float fncHgt,         //Fence Height in feet
          fncLn,          //Fence Length in feet
          ptCovrg,        //Number of ft^2/Gallon
          areaCovrg;      //Area Covered in ft^2
    unsigned int numCans; //Number of cans of paint required.   
            
    //Input or initialize values Here
    fncHgt=6.0f;    //6ft
    fncLn=1e2f;     //100 feet
    ptCovrg=3.4e2f; //340 ft^2/gallon
    
    //Process/Calculations Here
    areaCovrg=2*(2*(fncLn*fncHgt)); //Front on Back painted twice
    numCans=areaCovrg/ptCovrg+1;    //Can't have fractional paint cans
    
    //Output Located Here
    cout<<"Area Covered = "<<areaCovrg<<" ft^2"<<endl;
    cout<<"The number of Paint Cans required = "<<numCans<<endl;
    
    //Exit
    return 0;
}

