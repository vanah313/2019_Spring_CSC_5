/* 
 * File:   main.cpp
 * Author: Savanah Torres
 * Created on May 5, 2019 2:45 PM
 * Purpose:   Calculates the average of a group of test scores, where the lowest
 *            score in the group is dropped.
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void getScre(int &,int &,int &,int &,int &);//Check for valid values with the range of (1,100)
float calcAvg(int,int,int,int,int);         //Calulates and displays the average of the four highest scores
int fndLwst(int,int,int,int,int);           //Finds and returns the lowest of the five scores passed 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int scr1, scr2, scr3, scr4, scr5;
    
    //Initialize or input i.e. set variables
    getScre(scr1, scr2, scr3, scr4, scr5);
    
    //Map inputs -> outputs
    
    
    //Display outputs    
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"The average test score = "<<calcAvg(scr1, scr2, scr3, scr4, scr5);
    //Exit Stage right or left!
    return 0;
}

int fndLwst(int scr1,int scr2,int scr3,int scr4,int scr5){
    int lowest=0;
    if(scr1<scr2 && scr1<scr3 && scr1<scr4 && scr1<scr5){      
        lowest=scr1;
    }
    if(scr2<scr1 && scr2<scr3 && scr2<scr4 && scr2<scr5){      
        lowest=scr2;
    }
    if(scr3<scr1 && scr3<scr2 && scr3<scr4 && scr3<scr5){      
        lowest=scr3;
    }
    if(scr4<scr1 && scr4<scr2 && scr4<scr3 && scr4<scr5){
        lowest=scr4;
    }
    if(scr5<scr1 && scr5<scr2 && scr5<scr3 && scr5<scr4){
        lowest=scr5;
    }
    return lowest;
}

float calcAvg(int scr1,int scr2,int scr3,int scr4,int scr5){
    int lowest,avrg;
    lowest=fndLwst(scr1, scr2, scr3, scr4, scr5);
    avrg=0;
    if(lowest==scr1){
        avrg=(scr2+scr3+scr4+scr5)/4.0f;
    }
    if(lowest==scr2){
        avrg=(scr1+scr3+scr4+scr5)/4.0f;
    }
    if(lowest==scr3){
        avrg=(scr1+scr2+scr4+scr5)/4.0f;
    }
    if(lowest==scr4){
        avrg=(scr1+scr2+scr3+scr5)/4.0f;
    }
    if(lowest==scr5){
        avrg=(scr1+scr2+scr3+scr4)/4.0f;
    }
    return avrg;
}

void getScre(int &scr1,int &scr2,int &scr3,int &scr4,int &scr5){
    cout<<"Find the Average of Test Scores"<<endl;
    cout<<"by removing the lowest value."<<endl;
    cout<<"Input the 5 test scores."<<endl;
    cin>>scr1>>scr2>>scr3>>scr4>>scr5;
    if(scr1<1 || scr1>100) cout<<"Invalid input."<<endl;
    if(scr2<1 || scr2>100) cout<<"Invalid input."<<endl;
    if(scr3<1 || scr3>100) cout<<"Invalid input."<<endl;
    if(scr4<1 || scr4>100) cout<<"Invalid input."<<endl;
    if(scr5<1 || scr5>100) cout<<"Invalid input."<<endl;
}