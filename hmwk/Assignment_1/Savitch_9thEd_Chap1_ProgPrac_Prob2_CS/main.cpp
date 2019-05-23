/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on February 24th, 2019, 12:36 PM
 * Purpose:  Create big CS and exclamation point with *s for the border
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Library
using namespace std;

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string brdr = "********************",//border
            spc1 = " ",                  //1 space
            spc2 = "  ",                 //2 space
            spc3 = "   ",                //3 space
            spc4 = "    ",               //4 space
            spc5 = "     ";              //5 space
             
    //Display the outputs
    cout<<brdr<<brdr<<endl;     //border
    cout<<endl;                 //space
    
    cout<<spc5<<spc4<<"c"<<"c"<<"c"<<spc5<<spc5<<"s"<<"s"<<"s"<<"s"
            <<spc4<<"!!"<<endl; //line 1
    
    cout<<spc5<<spc2<<"c"<<spc5<<"c"<<spc5<<spc1<<"s"<<spc5<<"s"
            <<spc3<<"!!"<<endl; //line 2
    
    cout<<spc4<<spc1<<"c"<<spc5<<spc5<<spc3<<"s"<<spc5<<spc5
            <<"!!"<<endl;       //line 3
    
    cout<<spc3<<spc1<<"c"<<spc5<<spc5<<spc5<<"s"<<spc5<<spc4
            <<"!!"<<endl;       //line 4
    
    cout<<spc3<<spc1<<"c"<<spc5<<spc5<<spc5<<spc2<<"s"<<"s"<<"s"<<"s"
            <<spc4<<"!!"<<endl; //line 5
    
    cout<<spc3<<spc1<<"c"<<spc5<<spc5<<spc5<<spc5<<spc1<<"s"<<spc3
            <<"!!"<<endl;       //line 6
    
    cout<<spc4<<spc1<<"c"<<spc5<<spc5<<spc5<<spc5<<spc1<<"s"<<spc2
            <<"!!"<<endl;       //line 7
    
    cout<<spc5<<spc2<<"c"<<spc5<<"c"<<spc5<<spc1<<"s"<<spc5<<"s"
            <<spc1<<endl;       //line 8
    
    cout<<spc5<<spc4<<"c"<<"c"<<"c"<<spc5<<spc5<<"s"<<"s"<<"s"<<"s"
            <<spc4<<"00"<<endl; //line 9
    
    cout<<endl;                 //space
    cout<<brdr<<brdr<<endl;     //border
    
    cout<<endl;                 //space
    cout<<spc3<<"Computer Science is Cool Stuff!!!"<<endl;
    
    //Exit stage right or left!
    return 0;
}