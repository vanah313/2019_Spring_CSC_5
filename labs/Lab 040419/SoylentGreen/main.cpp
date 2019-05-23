/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on April 4th, 2019, 11:36 AM
 * Purpose:  USe Fibonacci to solve Earths Problem with Soylent Green
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formating Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
int fibo(int);  //Fibonacci Sequence function
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int delt, wtSylnt, stop;
    
    //Initialize or input i.e. set variable values
    delt=5;    //Increment by 5 days
    wtSylnt=10;//Starting with 10 pounds of people
    cout<<"How long do you want to generate Soylent Green?"<<endl;
    cout<<"Input the number of days."<<endl;
    cin>>stop;
    
    //Generate the Sequence
    for(int day=0; day<=stop; day+=delt){
        cout<<"Day "<<setw(4)<<day<<" Wt -> "<<wtSylnt*fibo(day/delt+1)<<" lbs"<<endl;
    }
    cout<<endl;
    
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