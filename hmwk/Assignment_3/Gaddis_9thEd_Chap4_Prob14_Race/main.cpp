/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 14th, 2019, 12:36 PM
 * Purpose:  Compare 3 runners times
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string rnnrA, rnnrB, rnnrC;     //Runner's names
    float rnnrTA, rnnrTB, rnnrTC;   //Runner's times
    bool aVb, aVc, bVc;
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>rnnrA; cin>>rnnrTA;
    cin>>rnnrB; cin>>rnnrTB;
    cin>>rnnrC; cin>>rnnrTC;
    
    aVb = rnnrTA > rnnrTB; //Comparing runner A's time to runner B's
    aVc = rnnrTA > rnnrTC; //Comparing runner A's time to runner C's
    bVc = rnnrTB > rnnrTC; //Comparing runner B's time to runner C's
    
    //Map inputs -> outputs
    if (rnnrTA<rnnrTB && rnnrTA<rnnrTC){
        cout<<rnnrA<<"\t"<<setw(3)<<rnnrTA<<endl;
        if (!bVc && !aVc){
            cout<<rnnrB<<"\t"<<setw(3)<<rnnrTB<<endl;
            cout<<rnnrC<<"\t"<<setw(3)<<rnnrTC;
        }else{
            cout<<rnnrC<<"\t"<<setw(3)<<rnnrTC<<endl;
            cout<<rnnrB<<"\t"<<setw(3)<<rnnrTB;
        }
    } else if(aVb && !bVc){
        cout<<rnnrB<<"\t"<<setw(3)<<rnnrTB<<endl;
        if(!aVc && aVb){
            cout<<rnnrA<<"\t"<<setw(3)<<rnnrTA<<endl;
            cout<<rnnrC<<"\t"<<setw(3)<<rnnrTC;
        }else{
            cout<<rnnrC<<"\t"<<setw(3)<<rnnrTC<<endl;
            cout<<rnnrA<<"\t"<<setw(3)<<rnnrTA;
        }
    }else{
        cout<<rnnrC<<"\t"<<setw(3)<<rnnrTC<<endl;
        if(!aVb && aVc){
            cout<<rnnrA<<"\t"<<setw(3)<<rnnrTA<<endl;
            cout<<rnnrB<<"\t"<<setw(3)<<rnnrTB;
        }else{
            cout<<rnnrB<<"\t"<<setw(3)<<rnnrTB<<endl;
            cout<<rnnrA<<"\t"<<setw(3)<<rnnrTA;
        }
    }
    //Display the outputs
    
    //Exit stage right or left!
    return 0;
}