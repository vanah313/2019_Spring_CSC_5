/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 21st, 2019, 10:30 AM
 * Purpose:  Menu Template
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
    char choice, nProbs;
    
    //Initialize or input i.e. set variable values
    nProbs ='3';
    do{
        //Present Menu to th User
        cout<<"Choose from the following menu"<<endl<<endl;
        cout<<"1 Problem 1"<<endl;
        cout<<"2 Problem 2"<<endl;
        cout<<"3 Problem 3"<<endl;
        cout<<endl;
        cin>>choice;
        //Select Problem to execute
        switch(choice){
            case '1':{
                cout<<"Place problem 1 here"<<endl<<endl;
                break;
            }
            case '2':{
                cout<<"Place problem 2 here"<<endl<<endl;;
                break;
            }
            case '3':{
                cout<<"Place problem 3 here"<<endl<<endl;
                break;
            }
            default:
                cout<<"Exiting Menu"<<endl<<endl;
        }
        
    }while(choice<=nProbs);
    
    //Exit stage right or left!
    return 0;
}