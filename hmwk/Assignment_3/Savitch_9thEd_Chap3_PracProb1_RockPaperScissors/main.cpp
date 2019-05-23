/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 19th, 2019, 7:36 PM
 * Purpose:  Rock, paper, scissors
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char plyr1, //Player 1 input
         plyr2; //Player 2 input
    
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>plyr1;
    cin>>plyr2;
    
    //Map inputs -> outputs
    //Comparing Rock input of player 1 to possible player 2 input
    if(plyr1 == 'r' || plyr1 == 'R'){
        if(plyr2 == 'p' || plyr2 == 'P'){
            cout<<"Paper covers rock.";
        }else if(plyr2 == 's' || plyr2 == 'S'){
            cout<<"Rock breaks scissors.";
        }else{
            cout<<"Nobody Wins.";
        }
    //Comparing Paper input of player 1 to possible player 2 input
    }else if(plyr1 == 'p' || plyr1 == 'P'){
        if(plyr2 == 'r' || plyr2 == 'R'){
            cout<<"Paper covers rock.";
        }else if(plyr2 == 's' || plyr2 == 'S'){
            cout<<"Scissors cuts paper.";
        }else{
            cout<<"Nobody Wins.";
        }
    //Comparing last response of player 1 to possible player 2 response
    }else{
        if(plyr2 == 'p' || plyr2 == 'P'){
            cout<<"Scissors cuts paper.";
        }else if(plyr2 == 'r' || plyr2 == 'R'){
            cout<<"Rock breaks scissors.";
        }else{
            cout<<"Nobody Wins.";
        }
    }
    
    //Exit stage right or left!
    return 0;
}