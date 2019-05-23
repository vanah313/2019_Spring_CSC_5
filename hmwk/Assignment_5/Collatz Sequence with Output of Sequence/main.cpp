/* 
 * Author: Savanah Torres
 * Created on May 1, 2019 11:13 AM
 * Purpose:  Count down sequence to one and determine 
 *           the number of steps it took
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n,ns;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz(n);
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";
    
    //Exit stage right!
    return 0;
}

int collatz(int n){
    int i=1;
    cout<<n<<", ";
    do{ 
        if(n%2==0){ //determine if even
            n/=2;
            i++;
            if(n==1)cout<<n<<endl;
            else cout<<n<<", ";
        }else{ //determine if odd
            n=3*n+1;
            i++;
            if(n==1)cout<<n<<endl;
            else cout<<n<<", ";
        }
    }while(n!=1);
    return i;
}