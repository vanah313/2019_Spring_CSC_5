/* 
 * File:   main.cpp
 * Author:  Savanah Torres
 * Created on:  May 14, 2019 12:30 PM
 * Purpose: Compare the answer sheet to the key
 *          and grade
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File I/O
#include <string.h>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void print(const string &);
void read(const char [],string &);
int  compare(const string &,const string &,string &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string key,answers,score;
    char fileKey[]="key.dat",   //Correct Answers to test
         fileAns[]="answer.dat";//Students Answers
    float pRight;
    int SIZE=20;
    ifstream inFile;            //Input File
    ofstream outFile;           //Output File
    
    //Initialize or input i.e. set variable values
    inFile.open("key.dat");
    for(int i=0; i<SIZE; i++){
        cin>>fileKey[i];
    }
    read(fileKey,key);
    inFile.close();
    
    inFile.open("answer.dat");
    for(int i=0; i<SIZE; i++){
        cin>>fileAns[i];
    }
    read(fileAns,answers);
    inFile.close();
    
    //Score the exam
    pRight=compare(key,answers,score);
    
    //Display the outputs
    cout<<"Key     ";print(key);
    cout<<"Answers ";print(answers);
    cout<<"C/W     ";print(score);
    cout<<"Percentage Correct = "<<pRight/score.size()*100<<"%"<<endl;
    

    //Exit stage right or left!
    return 0;
}

int  compare(const string &key,const string &answers,string &score){
    
}

void read(const char file[],string &val){
    for(int i=0; i<20; i++){
        cout<<file[i];
    }
    cout<<endl;
}

void print(const string &val){
    
}