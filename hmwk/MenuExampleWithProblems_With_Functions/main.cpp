/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 21st, 2019, 10:30 AM
 * Purpose:  Menu Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random functions amoung other things
#include <iomanip>   //Formating Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int CNVPNDL = 100; //Convert Pennies to Dollars

//Function Prototypes
void prob1();
void prob2();
void prob3();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice, nProbs;
    
    //Initialize or input i.e. set variable values
    nProbs ='3';
    do{
        //Present Menu to th User
        cout<<"Choose from the following menu"<<endl<<endl;
        cout<<"1 Roman Numeral Conversion"<<endl;
        cout<<"2 Penny Accuracy"<<endl;
        cout<<"3 Big Savings"<<endl;
        cout<<endl;
        cin>>choice;
        //Select Problem to execute
        switch(choice){
            case '1': prob1();break;
            case '2': prob2();break;
            case '3': prob3();break;
            default:
                cout<<"Exiting Menu"<<endl<<endl;
        }
        
    }while(choice<=nProbs);
    
    //Exit stage right or left!
    return 0;
}

void prob1(){
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare Variables
    int decimal;  //Decimal value between (1000-3000)
    string rmNum; //Roman numeral representation

    //Initialize or input i.e. set variable values
    rmNum="";
    decimal=rand()%2001+1000;//Range 1000 - 3000

    //Map inputs -> outputs
    if(decimal<1000||decimal>3000){
        cout<<"Dr. Lehr doesn't know what he is doing"<<endl;
    }else{
        //Determine number of 1000's
        switch(decimal/1000%10){
            case 3:rmNum+='M';
            case 2:rmNum+='M';
            case 1:rmNum+='M';
        }
        //Determine number of 100's
        switch(decimal/100%10){
            case 9:rmNum+="CM";break;
            case 8:rmNum+="DCCC";break;
            case 7:rmNum+="DCC";break;
            case 6:rmNum+="DC";break;
            case 5:rmNum+='D';break;
            case 4:rmNum+="CD";break;
            case 3:rmNum+='C';
            case 2:rmNum+='C';
            case 1:rmNum+='C';
        }
        //Determine number of 10's
        switch(decimal/10%10){
            case 9:rmNum+="XC";break;
            case 8:rmNum+="LXXX";break;
            case 7:rmNum+="LXX";break;
            case 6:rmNum+="LX";break;
            case 5:rmNum+='L';break;
            case 4:rmNum+="XL";break;
            case 3:rmNum+='X';
            case 2:rmNum+='X';
            case 1:rmNum+='X';
        }
        //Determine number of 10's
        switch(decimal%10){
            case 9:rmNum+="IX";break;
            case 8:rmNum+="VIII";break;
            case 7:rmNum+="VII";break;
            case 6:rmNum+="VI";break;
            case 5:rmNum+='V';break;
            case 4:rmNum+="IV";break;
            case 3:rmNum+='I';
            case 2:rmNum+='I';
            case 1:rmNum+='I';
        }
    }                
    //Display the outputs
    cout<<decimal<<" = "<<rmNum<<endl<<endl;

}
void prob2(){
    //Initialize or input i.e. set variable values
    cout<<"This Program Calculates Pay per Day and sum"<<endl;
    cout<<"Day         Pay          Sum"<<endl;

    //Map inputs -> outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    for(unsigned int day=1, pay=1, sum=0; day<=31; day++,pay*=2){
        sum+=pay;
        cout<<setw(3)<<day
            <<setw(9)<<(pay/CNVPNDL)<<".";
        if(pay%CNVPNDL<10){
            cout<<'0';
        }
        cout<<pay%CNVPNDL
            <<setw(10)<<(sum/CNVPNDL)<<".";
        if(sum%CNVPNDL<10){
            cout<<'0';
        }
        cout<<sum%CNVPNDL<<endl;
    }
}
void prob3(){
    //Declare Variables
    float presVal,   //Present Value in Dollars
            intRate, //Interest Rate in %/year
            numCmpds,//Number of Compounding periods in years
            futVal1, //future value using power function
            futVal2; //Future value using loops corrected to pennies

    //Initialize or input i.e. set variable values
    presVal=1000.0f; //100$
    intRate=0.06f;  //6%
    numCmpds=50;    //Up to 50 Years
    futVal1=futVal2=presVal;//Future Values set to present Values

    //Display the Headings and the initial Values
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year Future Values 1  Future Value 2"<<endl;
    cout<<setw(4)<<0<<setw(16)<<futVal1<<setw(18)<<futVal2<<endl;

    //Map inputs -> outputs
    for(int year=1; year<=numCmpds; year++){
        futVal1=presVal*pow(1+intRate, year);
        futVal2*=(1+intRate);
        int util=(futVal2+0.005)*100; //Calculate the number
                                      //of pennies
        futVal2=util/100.0f;          //Convert back to dollars
        cout<<setw(4)<<year<<setw(16)<<futVal1<<setw(18)
            <<futVal2<<endl;
    }
}