/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on March 17th, 2019, 9:16 PM
 * Purpose:  Compute and display the bank’s service fees
*            for the month.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formating Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float bnkBlnc, numChk, chkF, mnthF, lwBlnc, nwBlnc;
    
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>bnkBlnc; //Balance Input
    cin>>numChk;  //Number of Checks
    
    mnthF = 10.00f; //Monthly Fee   
    lwBlnc = 0;     //Low Balance Fee
    
    //Map inputs -> outputs
    if(bnkBlnc<0){
        cout<<"Your account is overdrawn!"<<endl;
    }else{
        if(bnkBlnc<400){
            lwBlnc += 15.00f;//Low Balance Fee
        }else{
            lwBlnc += 0.00f;//No Balance Fee
        }
        if(numChk < 20){
            numChk *= .10f;
        }else if(numChk >= 20 && numChk <= 39){
            numChk *= .08f;
        }else if(numChk >= 40 && numChk <= 59){
            numChk *= .06f;
        }else{
            numChk *= .04f;
        }
    }
    
    nwBlnc = bnkBlnc - (numChk + mnthF + lwBlnc); //Calculation of new balance
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<left<<setw(12)<<"Balance"<<"$"<<right<<setw(9)<<bnkBlnc<<endl;
    cout<<left<<setw(12)<<"Check Fee"<<"$"<<right<<setw(9)<<numChk<<endl;
    cout<<left<<setw(12)<<"Monthly Fee"<<"$"<<right<<setw(9)<<mnthF<<endl;
    cout<<left<<setw(12)<<"Low Balance"<<"$"<<right<<setw(9)<<lwBlnc<<endl;
    cout<<left<<setw(12)<<"New Balance"<<"$"<<right<<setw(9)<<nwBlnc;
    
    //Exit stage right or left!
    return 0;
}