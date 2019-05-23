/* 
 * File:   main.cpp
 * Author: Savanah Torres
 * Created on May 16, 2019 10:40 PM
 * Purpose:  Pointers and Dynamic Memory examples
 */

//System Libraries Here
#include <iostream> //Input/Output Library
#include <cstdlib>  //Random function
#include <ctime>    //Time Library
#include <vector>   //Vector Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions


//Function Prototypes Here
void fillAry(vector<int> &);
void prntAry(vector<int> &,int);
void markSrt(vector<int> &);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed  
    srand(static_cast<unsigned int>(time(0))); //Keeps number sequence random
    
    //Declare all Variables Here
    int size=100;
    vector<int> array(size);
    
    //Initialize or input i.e. set variables    
    fillAry(array);
    
    prntAry(array,10);
    //Map inputs -> outputs
    markSrt(array);
    
    //Display outputs 
    prntAry(array,10);
    
    //Exit Stage right or left!
    return 0;
}

void markSrt(vector<int> &a){
    for(int i=0;i<a.size()-1;i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]>a[j]){      //
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    } 
}

void prntAry(vector<int> &array,int perLine){
    cout<<endl;
    for(int i=0; i<array.size(); i++){
        cout<<array[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(vector<int> &array){
    //Fill with random values
    for(int i=0; i<array.size(); i++){
        //array[i]=rand()%90+10;//2 Digit random number
        array[i]=rand()%90+10;//2 Digit random number
    }
}