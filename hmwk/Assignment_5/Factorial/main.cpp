/* 
 * Author: Savanah Torres
 * Created on April 25, 2019 11:29 AM
 * Purpose:  Create an integer function that outputs the factorial
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n;
    
    //Initialize Variables
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    cin>>n;
    
    //Output data
    cout<<n<<"! = "<<fctrl(n-1); 
    
    //Exit stage right!
    return 0;
}

int fctrl(int n){
    int fact=1; 
    for(int i=0;i<=n;i++){   
        fact*=(1+i);        
    }
    return fact;
}