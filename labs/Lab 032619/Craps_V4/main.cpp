/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 26th, 2019, 10:30 AM
 * Purpose:  Play Craps and take Stats
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time Function
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
#include <fstream>   //Reading/Writing to files
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
    int w2, w3, w4, w5, w6, w7, w8, w9, w10, w11, w12;//Number of Wins
    int l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12;//Number of Losses
    int nGames;//How many times to roll the dice
    string input="input.dat";//file name for input
    const int line=80;//How large the file name can be
    char output[line]="output.dat";//File name for output
    ifstream in;
    ofstream out;   
    
    //Initialize or input i.e. set variable values
    w2=w3=w4=w5=w6=w7=w8=w9=w10=w11=w12=0;
    l2=l3=l4=l5=l6=l7=l8=l9=l10=l11=l12=0;
    nGames = 36000;
    in.open(input.c_str());
    out.open(output);
    
    //Loop on playing the game
    for(int game=1; game<=nGames; game++){
        char die1=rand()%6+1;//[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum=die1+die2;
        if(sum==7)w7++;
        else if(sum==11)w11++;
        else if(sum==2)l2++;
        else if(sum==3)l3++;
        else if(sum==12)l12++;
        else{
           bool rollAgn=false;
           do{
               die1=rand()%6+1;//[1,6]
               die2=rand()%6+1;//[1,6]
               char sumAgn=die1+die2;
               if(sumAgn==7){
                   rollAgn=false;
                   switch(sum){
                        case 4: l4++;break;
                        case 5: l5++;break;
                        case 6: l6++;break;
                        case 8: l8++;break;
                        case 9: l9++;break;
                        case 10: l10++;break;
                        default:cout<<"Bad Number"<<endl;            
                    }
               }else if(sum==sumAgn){
                   rollAgn=false;
                   switch(sum){
                        case 4: w4++;break;
                        case 5: w5++;break;
                        case 6: w6++;break;
                        case 8: w8++;break;
                        case 9: w9++;break;
                        case 10: w10++;break;
                        default:cout<<"Bad Number"<<endl;            
                    }
               }else{
                   rollAgn=true;
               }
            }while(rollAgn=false);
        }
    }
    //Display results
    cout<<"Total Number of Games = "<<nGames<<endl;
    cout<<"Total Number of Wins = "
            <<100.0f*(w2+w3+w4+w5+w6+w7+w8+w9+w10+w11+w12)/nGames<<"%"<<endl;
    cout<<"Total Number of Losses = "
            <<100.0f*(l2+l3+l4+l5+l6+l7+l8+l9+l10+l11+l12)/nGames<<"%"<<endl;
    cout<<"Throw       Wins       Losses"<<endl;
    cout<<setw(3)<<2<<setw(11)<<w2<<setw(12)<<l2<<endl;
    cout<<setw(3)<<3<<setw(11)<<w3<<setw(12)<<l3<<endl;
    cout<<setw(3)<<4<<setw(11)<<w4<<setw(12)<<l4<<endl;
    cout<<setw(3)<<5<<setw(11)<<w5<<setw(12)<<l5<<endl;
    cout<<setw(3)<<6<<setw(11)<<w6<<setw(12)<<l6<<endl;
    cout<<setw(3)<<7<<setw(11)<<w7<<setw(12)<<l7<<endl;
    cout<<setw(3)<<8<<setw(11)<<w8<<setw(12)<<l8<<endl;
    cout<<setw(3)<<9<<setw(11)<<w9<<setw(12)<<l9<<endl;
    cout<<setw(3)<<10<<setw(11)<<w10<<setw(12)<<l10<<endl;
    cout<<setw(3)<11<<setw(11)<<w11<<setw(12)<<l11<<endl;
    cout<<setw(3)<<12<<setw(11)<<w12<<setw(12)<<l12<<endl;
    cout<<"Total Number of Games = "
            <<w2+w3+w4+w5+w6+w7+w8+w9+w10+w11+w12+
            l2+l3+l4+l5+l6+l7+l8+l9+l10+l11+l12<<endl;
    
    //read in from file and modify the number of games when larger
    int fGames;
    while(in>>fGames);
    nGames=abs(fGames>nGames?fGames:nGames);    
    
    //Close files
    in.close;
    out.close;
    

    //Exit stage right or left!
    return 0;
}