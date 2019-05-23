/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 19th, 2019, 12:36 PM
 * Purpose:  Alphabetize names
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstring>   //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string name1, //Name of first person
           name2, //Name of second person
           name3; //Name of third person
    
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name1;
    cin>>name2;
    cin>>name3;
    
    //Map inputs -> outputs
    //Comparing name 1 to name 2 and 3 to see if name 1 is first
    if(name1 < name2 && name1< name3){
        cout<<name1<<endl;
        //Comparing names 2 and 3 to see which will be displayed 2nd & 3rd
        if(name2<name3 && name3>name1){
            cout<<name2<<endl;
            cout<<name3;
        }else{
            cout<<name3<<endl;
            cout<<name2;
        }
    //Comparing name 2 to name 1 and 3 to see if name 2 is first
    }else if(name2<name1 && name2<name3){
        cout<<name2<<endl;
        //Comparing names 1 and 3 to see which will be displayed 2nd & 3rd
        if(name1<name3 && name3<name2){
            cout<<name1<<endl;
            cout<<name3;
        }else{
            cout<<name3<<endl;
            cout<<name1;
        }
    //Comparing name 3 to name 1 and 2 to see if name 3 is first
    }else{
        cout<<name3<<endl;
        //Comparing names 1 and 2 to see which will be displayed 2nd & 3rd
        if(name1>name3 && name1<name2){
            cout<<name1<<endl;
            cout<<name2;
        }else{
            cout<<name2<<endl;
            cout<<name1;
        }
    }

    //Exit stage right or left!
    return 0;
}