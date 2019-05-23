/* 
 * Author: Savanah Torres
 * Created on April 25, 2019 11:46 AM
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
int collatz(int, int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n, i;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    i=1;
    
    //Process/Map inputs to outputs
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            collatz(n,i)<<" steps";
    
    //Output data
    
    //Exit stage right!
    return 0;
}

int collatz(int n, int i){//3n+1 sequenc
    do{ 
        if(n%2==0){ //determine if even
            n/=2;
            i++;
        }else{ //determine if odd
            n=3*n+1;
            i++;
        }
    }while(n!=1);
    return i;
}
    