/* 
 * File:   main.cpp
 * Author: Savanah Torres
 * Created on May 20, 2019 12:45 PM
 * Purpose:  Create cards and deal to player and computer
 *           and make sure cards differ(shuffle)
 */

//System Libraries Here
#include <iostream>     //Input/Output Library
#include <cstdlib>      //Random Number generation
#include <ctime>        //Unique Seed Value Library
#include <fstream>      //File I/O
#include <string>       //String Library
#include <iomanip>      //Formatting Library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void crtDeck(ofstream &,string [],string,string);//Create deck of 52 Cards
void inUsrDk(string [],string [],int);           //Initial user deck
void dlrDk(string [],string [],int);             //Dealers deck
void shuffle(string [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed      
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int NCARDS=52;    
    unsigned int pckCard=rand()%NCARDS; //Randomly pick card
    string face,suit;
    string deck[NCARDS],
           usrCrds[NCARDS],
           dlrCrds[NCARDS];
    char answer;
    
    //Creating deck file
    string flNmDk="Deck.dat";
    ofstream outFile;
    ifstream inFile;
    
    //Initialize or input i.e. set variables
    cout<<"Welcome to a game of BlackJack!!!"<<endl<<endl;
    cout<<"The Rules:"<<endl;
    cout<<"The objective of the game is to beat the dealer and get the highest"<<endl;
    cout<<"total without passing the number 21."<<endl;
    cout<<"If your total passes 21 then you bust and the dealer automatically wins."<<endl<<endl;
    cout<<"Now, are you ready to play?"<<endl;
    cout<<"Enter 'Y' for yes and any other key for no."<<endl;
    cin>>answer;    
    //Game Begins
    if(answer=='Y'||answer=='y'){
        //Create the Deck
        outFile.open(flNmDk.c_str());
        crtDeck(outFile,deck,face,suit);
        outFile.close();
        
        //Deal cards to User
        cout<<"Your Cards are:"<<endl;
        shuffle(deck,NCARDS);
        inUsrDk(deck,usrCrds,NCARDS);
        for(int i=0;i<2;i++){
            pckCard=rand()%NCARDS; //Randomly pick card
            cout<<setw(3)<<usrCrds[pckCard];
        }
        cout<<endl;
        
        cout<<"Dealers Cards are:"<<endl;
        dlrDk(dlrCrds,deck,NCARDS);
        for(int i=0; i<2; i++){
            pckCard=rand()%NCARDS; //Randomly pick card
            cout<<setw(3)<<dlrCrds[pckCard];
        }
        cout<<endl;
    //Automatic End to game    
    }else cout<<"Goodbye!"<<endl;
    
    //Display outputs    
    
    //Exit Stage right or left!
    return 0;
}

void shuffle(string deck[],int NCARDS){
    for(int i=0; i<=NCARDS; i++){
        int pos1 = rand()%NCARDS;
        int pos2 = rand()%NCARDS;
        string temp=deck[pos1];
        deck[pos1]=deck[pos2];
        deck[pos2]=temp;
    }
}

void dlrDk(string dlrCrds[],string deck[],int NCARDS){
    for(int i=0;i<NCARDS;i++){
        dlrCrds[i]=deck[i];
    }
}

void inUsrDk(string deck[],string usrCrds[],int NCARDS){
    for(int i=0;i<NCARDS;i++){
        usrCrds[i]=deck[i];
    }
}

void crtDeck(ofstream &outFile,string deck[],string face,string suit){
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
        outFile<<face<<suit<<endl;
        deck[card]=face+suit; 
    }
}