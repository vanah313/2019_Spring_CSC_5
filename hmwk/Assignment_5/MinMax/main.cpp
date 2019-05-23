/* 
 * Author: Savanah Torres
 * Created on May 1, 2018 9:44 AM
 * Purpose:  Determine the max and min of 3 intergers 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int,int,int,int &,int &); //Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int funmax, funmin,
        num1, num2, num3;
    
    //Initialize or input i.e. set variable values
    cout<<"Input 3 numbers"<<endl;
    cin>>num1>>num2>>num3;

    minmax(num1,num2,num3,funmax,funmin);
    
    //Map inputs -> outputs
    cout<<"Min = "<<funmin<<endl;
    cout<<"Max = "<<funmax;
    //Output data
  
    
    //Exit stage right!
    return 0;
}

void minmax(int num1,int num2,int num3,int &max,int &min){
    if(num1>num2 && num1>num3){      
        max=num1;
        if(num2<num3) min=num2;
        else          min=num3;
    }
    if(num2>num1 && num2>num3){      
        max=num2;
        if(num1<num3) min=num1;
        else          min=num3;
    }
    if(num3>num1 && num3>num2){      
        max=num3;
        if(num1<num2) min=num1;
        else          min=num2;
    }
    if(num1==num2 && num2==num3){
        max=num1;
        min=num1;
    }

}