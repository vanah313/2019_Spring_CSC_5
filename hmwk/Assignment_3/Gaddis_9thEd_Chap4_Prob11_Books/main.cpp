/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 17th, 2019, 10:49 PM
 * Purpose:  Calculate the number of points a customer
 *           gets from the number of books they purchased
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int numPnts, //Number of points awarded
        numBks;  //Number of books
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>numBks;
    
    //Map inputs -> outputs
    if(numBks == 0){ 
        numPnts = 0;
    } else if(numBks == 1){
        numPnts = 5;
    } else if(numBks == 2){
        numPnts = 15;
    }else if(numBks == 3){
        numPnts = 30;
    }else{
        if(numBks >= 4){
            numPnts = 60;
        }
    }
    
    //Display the outputs
    cout<<left<<setw(16)<<"Books purchased"<<"="<<right<<setw(3)<<numBks<<endl;
    cout<<left<<setw(16)<<"Points earned"<<"="<<right<<setw(3)<<numPnts;
    
    //Exit stage right or left!
    return 0;
}