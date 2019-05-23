/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on February 25th, 2019, 10:36 AM
 * Purpose:  Calculate subtotal, amount of sales tax, and total
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVDLP=100.0f; //Conversion from Dollars to Pennies

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float itm1, itm2, itm3, itm4, itm5,
            sTtl,
            sTax,
            ttl;
    
    //Initialize or input i.e. set variable values
    itm1 = 19.95; //price of item 1
    itm2 = 24.95; //price of item 2
    itm3 = 6.95;  //price of item 3
    itm4 = 12.95; //price of item 4
    itm5 = 3.95;  //price of item 5
    
    sTtl = itm1 + itm2 + itm3 + itm4 +itm5; //Total price before tax
    sTax = sTtl * .07;                      //Sales tax
    int ibsSTax = sTax * CNVDLP;            //Shifts decimal to the right
    sTax = ibsSTax / CNVDLP;                //Shifts decimal back to the left
    ttl = sTtl + sTax;                      //Total price with taxes
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Item 1 =  $"<<itm1<<endl;
    cout<<"Item 2 =  $"<<itm2<<endl;
    cout<<"Item 3 =  $"<<itm3<<endl;
    cout<<"Item 4 =  $"<<itm4<<endl;
    cout<<"Item 5 =  $"<<itm5<<endl;
    cout<<endl;
    cout<<"Subtotal  $"<<sTtl<<endl;
    cout<<"Sales Tax $"<<sTax<<endl;
    cout<<"Total     $"<<ttl<<endl;
    
    //Exit stage right or left!
    return 0;
}