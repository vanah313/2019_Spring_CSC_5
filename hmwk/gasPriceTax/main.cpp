/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on February 21, 2019, 11:28 AM
 * Purpose:  Calculate base price before taxes and percentage in taxes
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float pPrice, fdTax,caTax, repTax, base, perTax;
        pPrice = 2.95f,
        fdTax = .184f,  //federal excise tax in $'s
        caTax = .3f,    //CA State gas tax in $'s
        repTax = .173f; // Replace State Sales tax per Gallon
    
    //Process/Calculations Here
    base = pPrice - fdTax - caTax - repTax;         //Base Price
    perTax = ((fdTax + caTax + repTax)/ base) *100; //Percent tax
    
    //Output Located Here
    cout<<"The base price before taxes is $"<<base<<endl;
    cout<<"The percentage in taxes is "<<perTax<<"%"<<endl;

    //Exit
    return 0;
}

