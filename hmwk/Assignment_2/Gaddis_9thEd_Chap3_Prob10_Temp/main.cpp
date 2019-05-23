/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 7, 2019, 9:00 AM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>  //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   fht, //Fahrenheit temperatures
            celc;//Centigrade conversion
    
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>fht;
    
    celc = (fht-32.0f)*(5.0f/9);
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<fht<<setw(21)<<"Degrees Fahrenheit ="<<setw(6)
            <<celc<<" Degrees Centigrade";            
    
    //Exit stage right or left!
    return 0;
}