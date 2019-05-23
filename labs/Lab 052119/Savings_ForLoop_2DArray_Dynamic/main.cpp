/* 
 * File:   main.cpp
 * Author: Savanah Torres
 * Created on May 21, 2019, 11:33 PM
 * Purpose:  Savings Functions using 2D Arrays 
 *           and MCV design pattern
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formating Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float **alocate(int,int);
void savings(float **, float, float,int,int);
void display(float **,int,int);
void destroy(float **,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int cols=2,              //Number of columns for future value array
        nmcmpds=51;          //Number of Compounding periods in years
    
    float presVal,           //Present Value in Dollars
            intRate,         //Interest Rate in %/year            
            **futVal;        //future value using power function
                             //Future value using loops corrected to pennies
    //Initialize or input i.e. set variable values
    futVal=alocate(nmcmpds,cols);
    presVal=1000.0f; //100$
    intRate=0.06f;  //6%
    futVal[0][0]=futVal[0][1]=presVal;//Future Values set to present Values
    
    //Display the Headings and the initial Values
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year      Future Values 1     Future Value 2"<<endl;
    cout<<setw(4)<<0<<setw(16)<<futVal[0][0]<<setw(18)<<futVal[0][1]<<endl;
    
    //Fill the Savings array
    savings(futVal,presVal,intRate,nmcmpds,cols);
    
    //Output the resulting table
    display(futVal,nmcmpds,cols);
    
    //Deallocate memory
    destroy(futVal,nmcmpds);
    
    //Exit stage right or left!
    return 0;
}

float **alocate(int row,int cols){
    float **array=new float*[row];
    for(int i=0;i<row;i++){
        array[i]=new float[cols];
    }
    return array;
}

void destroy(float **a,int rows){
    for(int i=0;i<rows;i++){
        delete []a[i];
    }
    delete []a;
}

void display(float **futVal, int nmcmpds,int cols){
    for(int year=1; year<nmcmpds; year++){
        cout<<setw(4)<<year<<setw(16)<<futVal[year][0]
                    <<setw(18)<<futVal[year][1]<<endl;
    }
}

void savings(float **futVal, float presVal, float intRate, int nmcmpds,int cols){
    for(int year=1; year<nmcmpds; year++){
        futVal[year][0]=presVal*pow(1+intRate, year);
        futVal[year][1]=futVal[year-1][1]*(1+intRate);
        int util=(futVal[year][1]+0.005)*100; //Calculate the number of pennies
        futVal[year][1]=util/100.0f;  //Convert back to dollars
    }
}