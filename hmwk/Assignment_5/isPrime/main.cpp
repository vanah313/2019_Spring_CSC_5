/* 
 * Author: Savanah Torres
 * Created on April 30, 2019 12:25 PM
 * Purpose:  Determine whether number is prime
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n,      //Number being checked if prime
        prm;    //Storage for result if isPrime function
    
    //Initialize Variables
    cout<<"Input a number to test if Prime."<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    prm=isPrime(n);
    
    //Output data
    if(prm==1)cout<<n<<" is prime."; //Check if variable has remainder to check if prime
    else cout<<n<<" is not prime.";
    
    //Exit stage right!
    return 0;
}

bool isPrime(int n){
    if(n%2==1) return true;
    else return false;
    
}