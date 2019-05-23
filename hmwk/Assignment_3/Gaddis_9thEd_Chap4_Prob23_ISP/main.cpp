/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 20th, 2019, 9:36 AM
 * Purpose:  Calculate a customer’s monthly bill.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char pkg;           //Internet Service Provider Package
    short int numHrs;   //Number of hours used
    float ttlBill,      //Total Bill
          extHrs;       //Extra hours used    
    
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>pkg;
    cin>>numHrs;
    
    //Map inputs -> outputs
    if(pkg == 'a' || pkg == 'A'){
        if(numHrs > 10 && numHrs<744){
            extHrs = (numHrs - 10)*2;
        }else{
            extHrs = 0;
        }
        ttlBill = 9.95 + extHrs;
    }else if(pkg == 'b' || pkg == 'B'){
        if(numHrs > 20 && numHrs<=744){
            extHrs = numHrs-20;
        }else{
            extHrs = 0;
        }
        ttlBill = 14.95 + extHrs;
    }else{
        ttlBill = 19.95;
    }
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Bill = $"<<setw(6)<<ttlBill;

    //Exit stage right or left!
    return 0;
}