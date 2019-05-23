/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on April 10th, 2019, 6:19 PM
 * Purpose:  Have user input rank they want and compare
 *           with computer file
 * Version: 3
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File Library
#include <cstdlib>   //Random Number generation
#include <ctime>     //Setting random seed with time
#include <string>    //String Library
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
    char rank, card, suit;       //Rank, Face values, and Suits for each card
    const int NCARDS=52;        //Number of cards in a deck   
    string card1,card2,card3,   //7 Cards for User
           card4,card5,card6,card7;
    string cmCrd1,cmCrd2,cmCrd3,//7 Cards for Computer
           cmCrd4,cmCrd5,cmCrd6,cmCrd7;
    string flNm1="Deck.dat";    //Deck of the 52 cards
    ifstream dekFile;           //Deck file declared as input file
    ifstream inFile;            //Input File
    string flNm2="User.dat";    //Users cards
    ofstream usrFile;           //User file declared as output file
    string flNm3="Com.dat";     //Computer's cards
    ofstream comFile;           //Computer file declared as output file
    
    //Initial 7 Cards for User    
    //User Card 1
    unsigned int pckCard=rand()%NCARDS; //Randomly pick card
    dekFile.open(flNm1.c_str());        //Open deck file to choose card
    for(int num=0; num<=pckCard; num++){//Looping through deck file to find card
        dekFile>>card1;        
    }
    dekFile.close();                    //Closing deck file after card 1 is picked
    usrFile.open(flNm2.c_str());        //Open users file
    usrFile<<card1<<endl;               //Inputing card 1
    cout<<"Card Pick = "<<pckCard<<" -> "<<card1<<endl;
   
    //User Card 2
    do{                                     //Choosing 2nd card
        pckCard=rand()%NCARDS;              //Randomly pick card
        dekFile.open(flNm1.c_str());        //Open deck file to choose card
        for(int num=0; num<=pckCard; num++){//Loop through deck file to find card
            dekFile>>card2;
            
        }
        dekFile.close();            //Closing deck file after 2nd card chosen
        usrFile<<card2<<endl;       //Inputing 2nd card to user file
    }while(card2==card1);           //Choosing 2nd card till conditions not met
    cout<<"Card Pick = "<<pckCard<<" -> "<<card2<<endl;
    
    //User Card 3
    do{                                     //Choosing 3rd card
        pckCard=rand()%NCARDS;              //Randomly pick card
        dekFile.open(flNm1.c_str());        //Open deck file to choose card
        for(int num=0; num<=pckCard; num++){//Loop through deck file to find card
            dekFile>>card3;
        }
        dekFile.close();               //Closing deck file after 3rd card chosen
        usrFile<<card3<<endl;          //Inputing 3rd card to user file
    }while(card3==card1||card3==card2);//Choosing 3rd card till conditions met
    cout<<"Card Pick = "<<pckCard<<" -> "<<card3<<endl;
    
    //User Card 4
    do{                                     //Choosing 4th card
        pckCard=rand()%NCARDS;              //Randomly pick card
        dekFile.open(flNm1.c_str());        //Open deck file to choose card
        for(int num=0; num<=pckCard; num++){//Loop through deck file to find card
            dekFile>>card4;
        }
        dekFile.close();                 //Closing deck file after 4th card chosen
        usrFile<<card4<<endl;            //Inputing 4th card to user file
    }while(card4==card1||card4==card2||  //Choosing 4th card till conditions met
            card4==card3);
    cout<<"Card Pick = "<<pckCard<<" -> "<<card4<<endl;
    
    //User Card 5
    do{                                     //Choosing 5th card
        pckCard=rand()%NCARDS;              //Randomly pick card
        dekFile.open(flNm1.c_str());        //Open deck file to choose card
        for(int num=0; num<=pckCard; num++){//Loop through deck file to find card
            dekFile>>card5;
        }
        dekFile.close();                //Closing deck file after 5th card chosen
        usrFile<<card5<<endl;           //Inputing 5th card to user file
    }while(card5==card1||card5==card2|| //Choosing 5th card till conditions met
            card5==card3||card5==card4);
    cout<<"Card Pick = "<<pckCard<<" -> "<<card5<<endl;
    
    //User Card 6
    do{                                     //Choosing 6th card
        pckCard=rand()%NCARDS;              //Randomly pick card
        dekFile.open(flNm1.c_str());        //Open deck file to choose card
        for(int num=0; num<=pckCard; num++){//Loop through deck file to find card
            dekFile>>card6;
        }
        dekFile.close();                //Closing deck file after 3rd card chosen
        usrFile<<card6<<endl;           //Inputing 6th card to user file
    }while(card6==card1||card6==card2|| //Choosing 6th card till conditions met
           card6==card3||card6==card4||card6==card5);
    cout<<"Card Pick = "<<pckCard<<" -> "<<card6<<endl;
    
    //User Card 7
    do{                                     //Choosing 7th card
        pckCard=rand()%NCARDS;              //Randomly pick card
        dekFile.open(flNm1.c_str());        //Open deck file to choose card
        for(int num=0; num<=pckCard; num++){//Loop through deck file to find card
            dekFile>>card7;
        }
        dekFile.close();                //Closing deck file after 3rd card chosen
        usrFile<<card7;           //Inputing 7th card to user file
        usrFile.close();                //Closing user input file
    }while(card7==card1||card7==card2|| //Choosing 6th card till conditions met
           card7==card3||card7==card4||card7==card5||card7==card6);
    cout<<"Card Pick = "<<pckCard<<" -> "<<card7<<endl;
    
    
    //Initial 7 Cards for Computer    
    //Com Card 1
    do{                                     //Choosing 1st Computer card
        pckCard=rand()%NCARDS;              //Randomly pick card
        dekFile.open(flNm1.c_str());        //Open deck file to choose card
        for(int num=0; num<=pckCard; num++){//Loop through deck file to find card
            dekFile>>cmCrd1;        
        }
        dekFile.close();                 //Closing deck file after 1st card chosen
        comFile.open(flNm3.c_str());     //Open users file
        comFile<<cmCrd1<<endl;           //Input 1st card to computer file
    }while(cmCrd1==card1||cmCrd1==card2||//Comparing 1st computer card to 
           cmCrd1==card3||cmCrd1==card4||//user cards
           cmCrd1==card5||cmCrd1==card6||cmCrd1==card7);
   
    //Com Card 2
    do{
        do{                                     //Choosing 3nd Computer card
            pckCard=rand()%NCARDS;              //Randomly pick card
            dekFile.open(flNm1.c_str());        //Open deck file to choose card
            for(int num=0; num<=pckCard; num++){//Loop through deck to find card
                dekFile>>cmCrd2;

            }
            dekFile.close();             //Closing deck file after 2nd card chosen
            comFile<<cmCrd2<<endl;       //Input 2nd card to computer file
        }while(cmCrd2==cmCrd1);          //Choosing 2nd card till conditions met 
    }while(cmCrd2==card1||cmCrd2==card2||//Comparing 2nd computer card to
           cmCrd2==card3||cmCrd2==card4||//user cards
           cmCrd2==card5||cmCrd2==card6||cmCrd2==card7);
    
    //Com Card 3    
    do{
        do{                                     //Choosing 3rd Computer card
            pckCard=rand()%NCARDS;              //Randomly pick card
            dekFile.open(flNm1.c_str());        //Open deck file to choose card
            for(int num=0; num<=pckCard; num++){//Loop through deck to find card
                dekFile>>cmCrd3;
            }
            dekFile.close();                   //Closing deck file after 3rd card chosen
            comFile<<cmCrd3<<endl;             //Input 3rd card to computer file
        }while(cmCrd3==cmCrd1||cmCrd3==cmCrd2);//Choosing 3rd card till conditions met
    }while(cmCrd3==card1||cmCrd3==card2||//Comparing 3rd computer card to
           cmCrd3==card3||cmCrd3==card4||//user cards
           cmCrd3==card5||cmCrd3==card6||cmCrd3==card7);
    
    //Com Card 4    
    do{
        do{                                     //Choosing 4th Computer card
            pckCard=rand()%NCARDS;              //Randomly pick card
            dekFile.open(flNm1.c_str());        //Open deck file to choose card
            for(int num=0; num<=pckCard; num++){//Loop through deck to find card
                dekFile>>cmCrd4;
            }
            dekFile.close();                   //Closing deck file after 4th card chosen
            comFile<<cmCrd4<<endl;             //Input 4th card to computer file
        }while(cmCrd4==cmCrd1||cmCrd4==cmCrd2||//Choosing 4th card till conditions met
               cmCrd4==cmCrd3);
    }while(cmCrd4==card1||cmCrd4==card2||//Comparing 4th computer card to
           cmCrd4==card3||cmCrd4==card4||//user cards
           cmCrd4==card5||cmCrd4==card6||cmCrd4==card7);
    
    //Com Card 5   
    do{
        do{                                     //Choosing 5th Computer card
            pckCard=rand()%NCARDS;              //Randomly pick card
            dekFile.open(flNm1.c_str());        //Open deck file to choose card
            for(int num=0; num<=pckCard; num++){//Loop through deck to find card
                dekFile>>cmCrd5;
            }
            dekFile.close();                   //Closing deck file after 5th card chosen 
            comFile<<cmCrd5<<endl;             //Input 5th card to computer file
        }while(cmCrd5==cmCrd1||cmCrd5==cmCrd2||//Choosing 5th card till conditions met
               cmCrd5==cmCrd3||cmCrd5==cmCrd4);
    }while(cmCrd5==card1||cmCrd5==card2||//Comparing 5th computer card to
           cmCrd5==card3||cmCrd5==card4||//user cards
           cmCrd5==card5||cmCrd5==card6||cmCrd5==card7);
    
    //Com Card 6    
    do{
        do{                                     //Choosing 6th Computer card
            pckCard=rand()%NCARDS;              //Randomly pick card
            dekFile.open(flNm1.c_str());        //Open deck file to choose card
            for(int num=0; num<=pckCard; num++){//Loop through deck to find card
                dekFile>>cmCrd6;
            }
            dekFile.close();                   //Closing deck file after 5th card chosen 
            comFile<<cmCrd6<<endl;             //Input 6th card to computer file
        }while(cmCrd6==cmCrd1||cmCrd6==cmCrd2||//Choosing 6th card till conditions met
               cmCrd6==cmCrd3||cmCrd6==cmCrd4||
               cmCrd6==cmCrd5);
    }while(cmCrd6==card1||cmCrd6==card2||//Comparing 6th computer card to
           cmCrd6==card3||cmCrd6==card4||//user cards
           cmCrd6==card5||cmCrd6==card6||cmCrd6==card7);
    
    //Com Card 7    
    do{
        do{                                     //Choosing 7th Computer card
            pckCard=rand()%NCARDS;              //Randomly pick card
            dekFile.open(flNm1.c_str());        //Open deck file to choose card
            for(int num=0; num<=pckCard; num++){//Loop through deck to find card
                dekFile>>cmCrd7;
            }
            dekFile.close();                   //Closing deck file after 5th card chosen
            comFile<<cmCrd7;             //Input 7th card to computer file
            comFile.close();                   //Closing computer file
        }while(cmCrd7==cmCrd1||cmCrd7==cmCrd2||//Choosing 7th card till conditions met
               cmCrd7==cmCrd3||cmCrd7==cmCrd4||
               cmCrd7==cmCrd5||cmCrd7==cmCrd6);
    }while(cmCrd7==card1||cmCrd7==card2||//Comparing 7th computer card to
           cmCrd7==card3||cmCrd7==card4||//user cards
           cmCrd7==card5||cmCrd7==card6||cmCrd7==card7);
                                                                                                
    //User asks for card rank
    cout<<"Which rank would you like to ask the Computer for?"<<endl;
    cin>>rank;

    inFile.open(flNm3.c_str());    
    while(inFile>>card>>suit){
        cout<<rank<<endl;
        cout<<card<<suit<<endl;
        if(rank==card){
            cout<<card<<suit<<" has been added to your deck."<<endl;
        }
    }
    inFile.close();
    
    //Exit stage right or left!
    return 0;
}