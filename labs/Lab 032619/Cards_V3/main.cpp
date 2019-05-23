/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 26th, 2019, 11:55 AM
 * Purpose:  Picking 5 Cards
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File Library
#include <cstdlib>   //Random Number generation
#include <ctime>     //Setting random seed with time
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
    const int NCARDS=52;
    string card1,card2,card3,card4,card5;//5 Cards
    string fileNm="Cards.dat";
    ifstream crdFile;
    
    //Initialize or input i.e. set variable values
    
    //Pick the first Card
    int pckCard=rand()%NCARDS;
    crdFile.open(fileNm.c_str());
    for(int num=0;num<=pckCard;num++){
        crdFile>>card1;
    }
    crdFile.close();
    cout<<"Card Pick = "<<pckCard<<" -> "<<card1<<endl;
    
    //Pick the second Card
    do{
        pckCard=rand()%NCARDS;
        crdFile.open(fileNm.c_str());
        for(int num=0;num<=pckCard;num++){
            crdFile>>card2;
        }
        crdFile.close();
    }while(card1==card2);
    cout<<"Card Pick = "<<pckCard<<" -> "<<card2<<endl;
    
    //Pick the third Card
    do{
        pckCard=rand()%NCARDS;
        crdFile.open(fileNm.c_str());
        for(int num=0;num<=pckCard;num++){
            crdFile>>card3;
        }
        crdFile.close();
    }while(card1==card3||card2==card3);
    cout<<"Card Pick = "<<pckCard<<" -> "<<card3<<endl;
    
    //Pick the fourth Card
    do{
        pckCard=rand()%NCARDS;
        crdFile.open(fileNm.c_str());
        for(int num=0;num<=pckCard;num++){
            crdFile>>card4;
        }
        crdFile.close();
    }while(card1==card4||card2==card4||card3==card4);
    cout<<"Card Pick = "<<pckCard<<" -> "<<card4<<endl;
    
    //Pick the fifth Card
    do{
        pckCard=rand()%NCARDS;
        crdFile.open(fileNm.c_str());
        for(int num=0;num<=pckCard;num++){
            crdFile>>card5;
        }
        crdFile.close();
    }while(card1==card5||card2==card5||card3==card5||card4==card5);
    cout<<"Card Pick = "<<pckCard<<" -> "<<card5<<endl;
    
    //Exit stage right or left!
    return 0;
}