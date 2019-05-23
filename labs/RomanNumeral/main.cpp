/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 14th, 2019, 12:36 PM
 * Purpose:  Convert decimal to Roman numeral
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random functions amoung other things
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
    int decimal;  //Decimal value between (1000-3000)
    string rmNum; //Roman numeral representation
    
    //Initialize or input i.e. set variable values
    rmNum="";
    decimal=rand()%2001+1000;//Range 1000 - 3000
    
    //Map inputs -> outputs
    if(decimal<1000||decimal>3000){
        cout<<"Dr. Lehr doesn't know what he is doing"<<endl;
    }else{
        //Determine number of 1000's
        switch(decimal/1000%10){
            case 3:rmNum+='M';
            case 2:rmNum+='M';
            case 1:rmNum+='M';
        }
        //Determine number of 100's
        switch(decimal/100%10){
            case 9:rmNum+="CM";break;
            case 8:rmNum+="DCCC";break;
            case 7:rmNum+="DCC";break;
            case 6:rmNum+="DC";break;
            case 5:rmNum+='D';break;
            case 4:rmNum+="CD";break;
            case 3:rmNum+='C';
            case 2:rmNum+='C';
            case 1:rmNum+='C';
        }
        //Determine number of 10's
        switch(decimal/10%10){
            case 9:rmNum+="XC";break;
            case 8:rmNum+="LXXX";break;
            case 7:rmNum+="LXX";break;
            case 6:rmNum+="LX";break;
            case 5:rmNum+='L';break;
            case 4:rmNum+="XL";break;
            case 3:rmNum+='X';
            case 2:rmNum+='X';
            case 1:rmNum+='X';
        }
        //Determine number of 10's
        switch(decimal%10){
            case 9:rmNum+="IX";break;
            case 8:rmNum+="VIII";break;
            case 7:rmNum+="VII";break;
            case 6:rmNum+="VI";break;
            case 5:rmNum+='V';break;
            case 4:rmNum+="IV";break;
            case 3:rmNum+='I';
            case 2:rmNum+='I';
            case 1:rmNum+='I';
        }
    }
    
    //Display the outputs
    cout<<decimal<<" = "<<rmNum<<endl;

    //Exit stage right or left!
    return 0;
}