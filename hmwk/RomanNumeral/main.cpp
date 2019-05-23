/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 14, 2019, 11:45 AM
 * Purpose:  Convert decimal to Roman Numeral
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random # Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int dec;    //Decimal value between (1500-300)
    string rmNum;   //Roman Numeral representation    
    
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>dec;
    
    rmNum="";   //rand()-> (0,2^31 - 1)
    dec=dec%2001+1000;
    
    //Map inputs -> outputs
    if(dec<1000||dec>3000){
        cout<<"Dr. Lehr doesn't know what he is doing"<<endl;
    }else{
       //Determine number of thousands
        int n1000s=dec/1000%10;
        switch(n1000s){
            case 3: rmNum+='M';
            case 2: rmNum+='M';
            case 1: rmNum+='M';
        }
        //Determine number of hundreds
        int n100s=dec/100%10;
        switch(n100s){
            case 9: rmNum+="CM";break;
            case 8: rmNum+="DCCC";break;
            case 7: rmNum+="DCC";break;
            case 6: rmNum+="DC";break;
            case 5: rmNum+='D';break;
            case 4: rmNum+="CD";break;
            case 3: rmNum+='C';
            case 2: rmNum+='C';
            case 1: rmNum+='C';
        }
        //Determine number of tens
        int n10s=dec/10%10;
        switch(n10s){
            case 9: rmNum+="XC";break;
            case 8: rmNum+="LXXX";break;
            case 7: rmNum+="LXX";break;
            case 6: rmNum+="LX";break;
            case 5: rmNum+='L';break;
            case 4: rmNum+="XL";break;
            case 3: rmNum+='X';
            case 2: rmNum+='X';
            case 1: rmNum+='X';
        }
        //Determine number of ones
        int n1s=dec/10%10;
        switch(n1s){
            case 9: rmNum+="IX";break;
            case 8: rmNum+="VIII";break;
            case 7: rmNum+="VII";break;
            case 6: rmNum+="VI";break;
            case 5: rmNum+='I';break;
            case 4: rmNum+="IV";break;
            case 3: rmNum+='I';
            case 2: rmNum+='I';
            case 1: rmNum+='I';
        }
    }
    
    //Display the outputs
    cout<<dec<<" = "<<rmNum<<endl;
    //Exit stage right or left!
    return 0;
}