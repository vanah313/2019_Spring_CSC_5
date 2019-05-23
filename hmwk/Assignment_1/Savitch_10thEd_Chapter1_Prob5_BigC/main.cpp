/* 
 * File:   main.cpp
 * Author: Torres, Savanah 
 * Created on February 19, 2016, 12:10 PM
 * Purpose:  How to make a banner test with Big C
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string sp1=" ",  //1 Space
           sp2="  ", //2 Space
           sp3="   ";//2 Space
    char l;          //Letter used in Banner Characters
            
    //Input or initialize values Here
    cout<<"What letter would you like to use in Big Banner C"<<endl;
    cout<<"Input your preference"<<endl;
    cin>>l;
    
    //Output Located Here
    cout<<sp2<<sp2<<l<<l<<l<<endl;
    cout<<sp3<<l<<sp3<<l<<endl;
    cout<<sp2<<l<<endl;
    cout<<sp2<<l<<endl;
    cout<<sp2<<l<<endl;
    cout<<sp2<<l<<endl;
    cout<<sp3<<l<<sp3<<l<<endl;
    cout<<sp2<<sp2<<l<<l<<l<<endl;
    
    //Exit
    return 0;
}

