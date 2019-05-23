/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 28th, 2019, 12:04 PM
 * Purpose:  Calculate the sum of the number of integers entered
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
    int numSum, ttlSum;
    
    //Initialize or input i.e. set variable values
    cin>>numSum;//Last number of total sum
    ttlSum=0;   //Initialize total sum to zero
    
    //Map inputs -> outputs
    for(int sum=0; sum<=numSum; sum++){
        ttlSum+=sum;
    }
    
    //Display the outputs
    cout<<"Sum = "<<ttlSum;
    
    //Exit stage right or left!
    return 0;
}