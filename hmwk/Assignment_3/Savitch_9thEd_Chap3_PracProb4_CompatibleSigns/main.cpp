/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 19th, 2019, 8:36 PM
 * Purpose:  Compare zodiac signs
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
    string sign1, //Zodiac sign for first user input
           sign2; //Zodiac sign for second user input
    
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>sign1;
    cin>>sign2;
    
    //Map inputs -> outputs
    //Comparing Fire signs to the same signs and to other signs
    if(sign1=="Aries" || sign1=="Leo" || sign1=="Sagittarius"){
        if(sign2=="Aries" || sign2=="Leo" || sign2=="Sagittarius"){
            cout<<sign1<<" and "<<sign2<<" are compatible Fire signs.";
        }else{
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
        }
    //Comparing Earth signs to the same signs and to other signs
    }else if(sign1=="Taurus" || sign1=="Virgo" || sign1=="Capricorn"){
        if(sign2=="Taurus" || sign2=="Virgo" || sign2=="Capricorn"){
            cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
        }else{
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
        }
    //Comparing Air signs to the same signs and to other signs
    }else if(sign1=="Gemini" || sign1=="Libra" || sign1=="Aquarius"){
        if(sign2=="Gemini" || sign2=="Libra" || sign2=="Aquarius"){
            cout<<sign1<<" and "<<sign2<<" are compatible Air signs.";
        }else{
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
        }
    //Comparing Water signs to the same signs and to other signs
    }else{
        if(sign2=="Cancer" || sign2=="Scorpio" || sign2=="Pisces"){
            cout<<sign1<<" and "<<sign2<<" are compatible Water signs.";
        }else{
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
        }
    }

    //Exit stage right or left!
    return 0;
}