/* 
 * File:   main.cpp
 * Author: Savanah Torres
 * Created on May 9, 2019, 12:03 PM
 * Purpose:  Savings Functions using 2D Vectors
 *           and MCV design pattern
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formating Library
#include <cmath>     //Math Library
#include <vector>    //STL Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void savings(vector< vector<float> > &, float, float);
void display(vector< vector<float> > &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int NMCMPDS=51;   //Number of Compounding periods in years 
    int cols=2;
    float presVal,           //Present Value in Dollars
          intRate;           //Interest Rate in %/year            
    vector< vector<float> > futVal(NMCMPDS);
    //future value using power function index[0] column 1
    //Future value using loops corrected to pennies index[] column 2
    
    //Initialize or input i.e. set variable values
    for(int i=0; i<NMCMPDS; i++){
        //declare the i-th row to size of column
        futVal[i]= vector<float>(cols);
    }    
    presVal=1000.0f; //100$
    intRate=0.06f;  //6%
    futVal[0][0]=futVal[0][1]=presVal;//Future Values set to present Values
    
    //Display the Headings and the initial Values
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year     Future Values 1      Future Value 2"<<endl;
    cout<<setw(4)<<0<<setw(16)<<futVal[0][0]<<setw(18)<<futVal[0][1]<<endl;
    
    //Fill the Savings array
    savings(futVal,presVal,intRate);
    
    //Output the resulting table
    display(futVal);
    
    //Exit stage right or left!
    return 0;
}
void display(vector< vector<float> > &futVal){
    for(int year=1; year<futVal.size(); year++){
        cout<<setw(4)<<year<<setw(16)<<futVal[year][0]
                    <<setw(18)<<futVal[year][1]<<endl;
    }
}

void savings(vector< vector<float> > &futVal, float presVal, float intRate){
    for(int year=1; year<futVal.size(); year++){
        futVal[year][0]=presVal*pow(1+intRate, year);
        futVal[year][1]=futVal[year-1][1]*(1+intRate);
        int util=(futVal[year][1]+0.005)*100; //Calculate the number of pennies
        futVal[year][1]=util/100.0f;  //Convert back to dollars
    }
}