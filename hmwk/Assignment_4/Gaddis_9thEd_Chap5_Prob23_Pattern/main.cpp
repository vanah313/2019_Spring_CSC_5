/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 31st, 2019, 03:16 AM
 * Purpose:  Display a pattern given an output of 10
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
    //Map inputs -> outputs
    for(int i=0; i<=10; i++){   //Increasing the number of plus signs
        switch(i){
            case 1: cout<<'+'<<endl<<endl;break;
            case 2: cout<<"++"<<endl<<endl;break;
            case 3: cout<<"+++"<<endl<<endl;break;
            case 4: cout<<"++++"<<endl<<endl;break;
            case 5: cout<<"+++++"<<endl<<endl;break;
            case 6: cout<<"++++++"<<endl<<endl;break;
            case 7: cout<<"+++++++"<<endl<<endl;break;
            case 8: cout<<"++++++++"<<endl<<endl;break;
            case 9: cout<<"+++++++++"<<endl<<endl;break;
            case 10: cout<<"++++++++++"<<endl<<endl;break;
        }
        if(i==10){  //Once reached line 10 start decrementing 
            for(int j=10; j>=1; --j){   //Decreasing the number of plus signs 
                switch(j){
                case 1: cout<<'+';break;
                case 2: cout<<"++";break;
                case 3: cout<<"+++";break;
                case 4: cout<<"++++";break;
                case 5: cout<<"+++++";break;
                case 6: cout<<"++++++";break;
                case 7: cout<<"+++++++";break;
                case 8: cout<<"++++++++";break;
                case 9: cout<<"+++++++++";break;
                case 10: cout<<"++++++++++";break;
                }
                if(j>1)cout<<endl<<endl;//Making sure the last line 
                                  //doesn't have an endl
            }
        }
    }
    
    //Exit stage right or left!
    return 0;
}           