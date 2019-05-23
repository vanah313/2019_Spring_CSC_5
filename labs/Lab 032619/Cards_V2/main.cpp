/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 26th, 2019, 11:55 AM
 * Purpose:  Generate Card Deck
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File Library  
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char face,suit;//Face values and suits for each card
    string fileNm="Cards.dat";
    ofstream crdFile;
    
    //Initialize or input i.e. set variable values
    crdFile.open(fileNm.c_str());
    
    //Generate Cards
    for(char card=0;card<52;card++){
        switch(card%13){
            case 0: face='A';break;
            case 1: face='2';break;
            case 2: face='3';break;
            case 3: face='4';break;
            case 4: face='5';break;
            case 5: face='6';break;
            case 6: face='7';break;
            case 7: face='8';break;
            case 8: face='9';break;
            case 9: face='T';break;
            case 10: face='J';break;
            case 11: face='Q';break;
            case 12: face='K';break;
            default: face='?';
        }
        if(card<13)     suit='S';//Spades
        else if(card<26)suit='D';//Diamonds
        else if(card<39)suit='C';//Clubs
        else            suit='H';//Hearts
        cout<<face<<suit<<" ";
        if(card%13==12) cout<<endl;
        crdFile<<face<<suit<<endl;
    }
    
    //Close the File
    crdFile.close();

    //Exit stage right or left!
    return 0;
}