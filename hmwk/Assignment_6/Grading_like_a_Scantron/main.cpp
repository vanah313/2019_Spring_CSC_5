/* 
 * File:   main.cpp
 * Author:  Savanah Torres
 * Created on:  May 14, 2019 8:52 AM
 * Purpose: Sum the square of difference of each value with the mean.  
 *          Divide that sum by n-1. Take the square root and you
 *          have the standard deviation.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float [],int);       //Initialize the array
void  print(float [],int,int);  //Print the array
float avgX(float [],int);       //Calculate the Average
float stdX(float [],int);       //Calculate the standard deviation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    float test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    print(test,SIZE,5);
    cout<<"The average            = "<<avgX(test,SIZE)<<endl;
    cout<<"The standard deviation = "<<stdX(test,SIZE)<<endl;

    //Exit stage right or left!
    return 0;
}

float stdX(float test[],int SIZE){
    float std=0,
          sum=0,
          average=0;
    for(int i=0; i<SIZE; i++){
        sum+=test[i];
    }
    average=sum/SIZE;
    for(int j=0; j<SIZE; j++){
        std+=(test[j]-average)*(test[j]-average);
    }
    std=sqrt(std/(SIZE-1));
    return std;
}

float avgX(float test[],int SIZE){
    float average=0.0f;
    for(int i=0; i<SIZE; i++){
        average+=test[i];
    }
    average/=SIZE;
}

void  print(float test[],int SIZE,int n){
    for(int i=0; i<SIZE; i++){
        cout<<fixed<<setprecision(7)<<showpoint;
    }
}

void  init(float test[],int SIZE){
    float n=0;
    for(int i=0; i<SIZE; i++){
        cin>>n;
        test[i]=n;
    }
}