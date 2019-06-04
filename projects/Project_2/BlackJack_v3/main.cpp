/* 
 * File:   main.cpp
 * Author: Savanah Torres
 * Created on May 30, 2019 12:45 PM
 * Purpose:  Create cards and deal to player and computer
 *           and make sure cards differ(shuffle)
 *           Add value to the cards
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
void shuffle(string [],int);                     //Shuffle deck of cards
int  stCrdVl(string [],int);

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
    int usrSum=0,
        dlrSum=0;
    
    //Creating deck file
    string flNmDk="Deck.dat";
    ofstream outFile;
    
    //Initialize or input i.e. set variables
    //Create the Deck
    outFile.open(flNmDk.c_str());
    crtDeck(outFile,deck,face,suit);
    outFile.close();
    
    //Map inputs -> outputs
    cout<<"Welcome to a game of BlackJack!!!"<<endl<<endl;
    cout<<"The Rules:"<<endl;
    cout<<"The objective of the game is to beat the dealer and get the highest"<<endl;
    cout<<"total without passing the number 21."<<endl;
    cout<<"If your total passes 21 then you bust and the dealer automatically wins."<<endl<<endl;
    cout<<"Now, are you ready to play?"<<endl;
    cout<<"Enter 'Y' for 'Yes' and any other key for 'No.'"<<endl;
    cin>>answer;
    
    //Game Begins
    if(answer=='Y'||answer=='y'){
        //Deal cards to User
        cout<<"Your Cards are:"<<endl;
        shuffle(deck,NCARDS);
        inUsrDk(deck,usrCrds,NCARDS);
        for(int i=0;i<2;i++){
            pckCard=rand()%NCARDS; //Randomly pick card
            usrSum+=stCrdVl(usrCrds,pckCard);
            cout<<setw(3)<<usrCrds[pckCard-1];
            cout<<setw(3)<<usrSum<<endl;
        }
        cout<<endl;
        cout<<"Total= "<<usrSum<<endl;
        
        //Deal Cards to Dealer
        cout<<"Dealers Cards are:"<<endl;
        dlrDk(deck,dlrCrds,NCARDS);
        for(int i=0; i<2; i++){
            pckCard=rand()%NCARDS; //Randomly pick card
            dlrSum+=stCrdVl(dlrCrds,pckCard);
            cout<<setw(3)<<dlrCrds[pckCard-1];
            cout<<setw(3)<<dlrSum<<endl;
        }
        cout<<endl;
        cout<<"Total= "<<dlrSum<<endl;
    //Automatic End to game    
    }else cout<<"Goodbye!"<<endl;
    
    //Display outputs    
    
    //Exit Stage right or left!
    return 0;
}

int stCrdVl(string deck[],int pckCard){
    int sum=0;
    for(int i=0;i<pckCard;i++){
         if(deck[i]=="2S"||deck[i]=="2D"||deck[i]=="2C"||deck[i]=="2H"){
            sum=2;
        }else if(deck[i]=="3S"||deck[i]=="3D"||deck[i]=="3C"||deck[i]=="3H"){
            sum=3;
        }else if(deck[i]=="4S"||deck[i]=="4D"||deck[i]=="4C"||deck[i]=="4H"){
            sum=4;
        }else if(deck[i]=="5S"||deck[i]=="5D"||deck[i]=="5C"||deck[i]=="5H"){
            sum=5;
        }else if(deck[i]=="6S"||deck[i]=="6D"||deck[i]=="6C"||deck[i]=="6H"){
            sum=6;
        }else if(deck[i]=="7S"||deck[i]=="7D"||deck[i]=="7C"||deck[i]=="7H"){
            sum=7;
        }else if(deck[i]=="8S"||deck[i]=="8D"||deck[i]=="8C"||deck[i]=="8H"){
            sum=8;
        }else if(deck[i]=="9S"||deck[i]=="9D"||deck[i]=="9C"||deck[i]=="9H"){
            sum=9;
        }else if(deck[i]=="TS"||deck[i]=="TD"||deck[i]=="TC"||deck[i]=="TH"){
            sum=10;
        }else if(deck[i]=="JS"||deck[i]=="JD"||deck[i]=="JC"||deck[i]=="JH"){
            sum=10;
        }else if(deck[i]=="QS"||deck[i]=="QD"||deck[i]=="QC"||deck[i]=="QH"){
            sum=10;
        }else if(deck[i]=="KS"||deck[i]=="KD"||deck[i]=="KC"||deck[i]=="KH"){
            sum=10;
        }else if(deck[i]=="AS"||deck[i]=="AD"||deck[i]=="AC"||deck[i]=="AH"){
            if(sum<10){
                sum=11;
            }
            if(sum>21){
                sum=1;
            }
        }
    }
    return sum;
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

void dlrDk(string deck[],string dlrCrds[],int NCARDS){
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