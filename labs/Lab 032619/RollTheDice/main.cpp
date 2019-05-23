/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 26th, 2019, 10:06 AM
 * Purpose:  Take the statistics on the roll of the Dice
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time Function
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;//Number of times thrown
    int nRolls;//How many times to roll the dice
    
    //Initialize or input i.e. set variable values
    n2=n3=n4=n5=n6=n7=n8=n9=n10=n11=n12=0;
    nRolls = 36000;

    //Loop on throwing dice
    for(int roll=1; roll<=nRolls; roll++){
        char die1=rand()%6+1;//[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum=die1+die2;
        switch(sum){
            case 2: n2++;break;
            case 3: n3++;break;
            case 4: n4++;break;
            case 5: n5++;break;
            case 6: n6++;break;
            case 7: n7++;break;
            case 8: n8++;break;
            case 9: n9++;break;
            case 10: n10++;break;
            case 11: n11++;break;
            case 12: n12++;break;
            default:cout<<"Bad Number"<<endl;
            
        }
    }
    //Display results
    cout<<"Total Number of Rolls of the Dice = "<<nRolls<<endl;
    cout<<"2 thrown "<<n2<<" times"<<endl;
    cout<<"3 thrown "<<n3<<" times"<<endl;
    cout<<"4 thrown "<<n4<<" times"<<endl;
    cout<<"5 thrown "<<n5<<" times"<<endl;
    cout<<"6 thrown "<<n6<<" times"<<endl;
    cout<<"7 thrown "<<n7<<" times"<<endl;
    cout<<"8 thrown "<<n8<<" times"<<endl;
    cout<<"9 thrown "<<n9<<" times"<<endl;
    cout<<"10 thrown "<<n10<<" times"<<endl;
    cout<<"11 thrown "<<n11<<" times"<<endl;
    cout<<"12 thrown "<<n12<<" times"<<endl;
    cout<<"Total Number of Rolls of the Dice = "
            <<n2+n3+n4+n5+n6+n7+n8+n9+n10+n11+n12<<endl;
    
    //Map inputs -> outputs
    
    
    //Display the outputs
    

    //Exit stage right or left!
    return 0;
}