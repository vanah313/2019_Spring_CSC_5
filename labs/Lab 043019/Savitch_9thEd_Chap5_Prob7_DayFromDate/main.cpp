/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on April 30, 2019
 * Purpose:  Date to Days 
 * 
 */

//System Libraries Here
#include <iostream> //Input/Output Library
#include <string>   //String Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int cnvMnth(string);
int cnvDay(string);
bool isLpYr(int);
int gtCntVl(int);           //Get the century value for conversion
int gtYrVal(int);           //Get the year value for conversion
int gtMthVl(string, int);   //Get the month value
string dayOfWk(string, int, int);//output the day of the week
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed      
    
    //Declare all Variables Here
    int month,day,year;
    string sMnth,sDay;
    
    //Initialize or input i.e. set variables 
    cout<<"This program displays the day given"<<endl;
    cout<<"a date is the input."<<endl;
    cout<<"Input a date like July 4, 2019"<<endl;
    cin>>sMnth>>sDay>>year;
    
    //Display the inputs
    cout<<"Date Input: "<<sMnth<<" "<<sDay<<year<<endl;
    month=cnvMnth(sMnth);
    day=cnvDay(sDay);
    cout<<"Date Input: "<<month<<"/"<<day<<"/"<<year<<endl;
    
    //Map inputs -> outputs
    cout<<"The day is a "<<dayOfWk(sMnth,day,year)<<endl;
    
    //Display outputs    
    
    //Exit Stage right or left!
    return 0;
}

string dayOfWk(string sMnth, int day, int year){
    int dayWk=day+gtMthVl(sMnth,year)
                +gtYrVal(year)+gtCntVl(year);
    dayWk%=7;
    switch(dayWk){
        case 0: return "Sunday";
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6: return "Saturday";
        default: return "Bad Day";
    }
}

int gtMthVl(string sMnth, int year){
    if(sMnth=="January"){
        return isLpYr(year)?6:0;
    }
    else if(sMnth=="February"){
        return isLpYr(year)?2:3;
    }
    else if(sMnth=="March")     return 3;
    else if(sMnth=="April")     return 4;
    else if(sMnth=="May")       return 1;
    else if(sMnth=="June")      return 4;
    else if(sMnth=="July")      return 6;
    else if(sMnth=="August")    return 2;
    else if(sMnth=="September") return 5;
    else if(sMnth=="October")   return 0;
    else if(sMnth=="November")  return 3;
    else if(sMnth=="December")  return 5;
    else{
        cout<<"Bad month conversion."<<endl;
    }
    return 0;
}

int gtYrVal(int year){
    year%=100;
    return year+year/4;
}

int gtCntVl(int year){
    year/=100;
    return 2*(3-year%4);
}

bool isLpYr(int year){
    if(year%400==0 ||((year%4==0)&&(year%100!=0)))
    return false;
}

int cnvMnth(string sMnth){
    if(sMnth=="January")        return 1;
    else if(sMnth=="February")  return 2;
    else if(sMnth=="March")     return 3;
    else if(sMnth=="April")     return 4;
    else if(sMnth=="May")       return 5;
    else if(sMnth=="June")      return 6;
    else if(sMnth=="July")      return 7;
    else if(sMnth=="August")    return 8;
    else if(sMnth=="September") return 9;
    else if(sMnth=="October")   return 10;
    else if(sMnth=="November")  return 11;
    else if(sMnth=="December")  return 12;
    else{
        cout<<"Bad month conversion."<<endl;
    }
    return 0;
}

int cnvDay(string sDay){
    if(sDay.length()==2){
        return sDay[0]-48;
    }else{
        return (sDay[0]-48)*10+sDay[1]-48;
    }
}