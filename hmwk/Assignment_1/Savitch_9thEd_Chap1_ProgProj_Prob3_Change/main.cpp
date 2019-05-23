/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on February 24th, 2019, 1:36 PM
 * Purpose:  Change number of quarters, dimes, 
 *              and nickels to monetary value.
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int qrtConv, dimConv, nikConv,
            numQrt,   //number of quarters
            numDim,   //number of dimes
            numNik,   //number of nickels
            ttl;      //total amount of change
    
    //Map inputs -> outputs
    cout<<"Enter the number of quarters, dimes, and nickels you have."<<endl;
    
    cout<<"Quarters:"<<endl;
    cin>>numQrt;
    
    cout<<"Dimes:"<<endl;
    cin>>numDim;
    
    cout<<"Nickels:"<<endl;
    cin>>numNik;
    
    qrtConv = numQrt * 25;             //quarter conversion
    dimConv = numDim * 10;             //dime conversion
    nikConv = numNik * 5;              //nickel conversion
    ttl = qrtConv + dimConv + nikConv; //total amount of change in cents
    
    //Display the outputs
    cout<<"Your total change is "<<ttl<<" cents."<<endl;
    
    
    //Exit stage right or left!
    return 0;
}