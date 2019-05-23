/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on April 4th, 2019, 11:36 AM
 * Purpose:  Generate the Fibonacci Sqequence
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
int fibo(int);  //Fibonacci Sequence function
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int stop;
    
    //Initialize or input i.e. set variable values
    stop=47;
    
    //Generate the Sequence
    for(int i=1; i<=stop; i++){
        cout<<fibo(i)<<" ";
    }
    
    //Exit stage right or left!
    return 0;
}
int fibo(int n){
    //Base Conditions
    if(n<=2)return 1;
    if(n>46){
        cout<<endl<<"Function Overflow"<<endl;
        return -1;
    }
    
    //Sequence swap
    int fi, fim1, fim2, cnt;
    
    //Initialize or input i.e. set variable values
    cnt=2;
    fim1=fim2=1;
    
    //Generate the Sequence
    do{
        fi=fim1+fim2;
        fim2=fim1;
        fim1=fi;
    }while(++cnt<n);
    return fi;
}