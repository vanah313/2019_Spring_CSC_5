/* 
 * File: main.cpp
 * Author: Savaanah Torres
 * Created: May 7, 2019 11:22 AM
 * Purpose:  Create a 6x6 2D-Table that holds the 
 *           sum of the rows and columns using 
 *           values 1 to 6
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=6;
    int tablSum[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    fillTbl(tablSum,ROWS);
    
    //Display the outputs
    prntTbl(tablSum,ROWS);

    //Exit stage right or left!
    return 0;
}

void prntTbl(const int tablSum[][COLS],int ROWS){
    cout<<"Think of this as the Sum of Dice Table"<<endl;
    cout<<setw(24)<<"C o l u m n s"<<endl;
    cout<<setw(6)<<"|"<<setw(4)<<"1"<<setw(4)<<"2"<<setw(4)<<"3"<<setw(4)<<"4"
        <<setw(4)<<"5"<<setw(4)<<"6"<<endl;
    cout<<"----------------------------------"<<endl;
    for(int i=1;i<=ROWS;i++){
        if(i==1)cout<<setw(6)<<"1 |";
        if(i==2)cout<<"R  2 |";
        if(i==3)cout<<"O  3 |";
        if(i==4)cout<<"W  4 |";
        if(i==5)cout<<"S  5 |";
        if(i==6)cout<<setw(6)<<"6 |";
        for(int j=1;j<=COLS;j++){
            cout<<setw(4)<<tablSum[i][j];
        }
        cout<<endl;
    }
}

void fillTbl(int tablSum[][COLS],int ROWS){
    for(int i=1;i<=ROWS;i++){
        for(int j=1;j<=COLS;j++){
            tablSum[i][j]= j+i;
        }
    }
}