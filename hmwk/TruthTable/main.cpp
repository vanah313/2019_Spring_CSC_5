/* 
 * File:   main.cpp
 * Author: Torres, Savanah
 * Created on February 11th, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    bool x, y;
    
    //display heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y";
    cout<<"X^Y^Y X^Y^X !(X&&Y) !X||!Y";
    cout<<"!(X||Y) !X&&!Y"<<endl;
    
    //First Row
    x = true;
    y = true;
    cout<<(x?'T': 'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"    ";
    cout<<(!(x&&y)?'T':'F')<<"    ";
    cout<<(!x||!y?'T':'F')<<"    ";
    cout<<(!(x||y)?'T':'F')<<"    ";
    cout<<(!x&&!y?'T':'F')<<"    ";
    cout<<endl;   
    
    //Second Row
    x = true;
    y = false;
    cout<<(x?'T': 'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"    ";
    cout<<(!(x&&y)?'T':'F')<<"    ";
    cout<<(!x||!y?'T':'F')<<"    ";
    cout<<(!(x||y)?'T':'F')<<"    ";
    cout<<(!x&&!y?'T':'F')<<"    ";
    cout<<endl;   
    
    //Third Row
    x = false;
    y = true;
    cout<<(x?'T': 'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"    ";
    cout<<(!(x&&y)?'T':'F')<<"    ";
    cout<<(!x||!y?'T':'F')<<"    ";
    cout<<(!(x||y)?'T':'F')<<"    ";
    cout<<(!x&&!y?'T':'F')<<"    ";
    cout<<endl;   
    
    //Fourth Row
    x = false;
    y = false;
    cout<<(x?'T': 'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"    ";
    cout<<(!(x&&y)?'T':'F')<<"    ";
    cout<<(!x||!y?'T':'F')<<"    ";
    cout<<(!(x||y)?'T':'F')<<"    ";
    cout<<(!x&&!y?'T':'F')<<"    ";
    cout<<endl;   
    
    //Exit stage right or left!
    return 0;
}