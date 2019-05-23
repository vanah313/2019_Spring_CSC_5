/* 
 * File:   main.cpp
 * Author: Savanah Torres
 * Created on May 23, 2019 10:20 PM
 * Purpose:  Arrays with Structures
 */

//System Libraries Here
#include <iostream> //Input/Output Library
#include <cstdlib>  //Random function
#include <ctime>    //Time Library
using namespace std;

//User Libraries Here
#include "Array.h"      //User defined datatypes are always Capitalized

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions


//Function Prototypes Here
Array *fillAry(int);
void prntAry(Array *,int);
void markSrt(Array *);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed  
    srand(static_cast<unsigned int>(time(0))); //Keeps number sequence random
    
    //Declare all Variables Here
    int size=100;
    Array *array;
    
    //Initialize or input i.e. set variables    
    array=fillAry(size);
    
    //Print Array
    prntAry(array,10);
   
    markSrt(array);
    
    //Display outputs 
    prntAry(array,10);
    
    //Deallocate memory
    delete []array->data;
    delete array;
    
    //Exit Stage right or left!
    return 0;
}

void markSrt(Array *a){
    for(int pos=0;pos<a->size-1;pos++){
        for(int i=pos+1;i<a->size;i++){
            if(a->data[pos]>a->data[i]){      
                int temp=a->data[i];
                a->data[i]=a->data[pos];
                a->data[pos]=temp;
            }
        }
    } 
}

void prntAry(Array *array,int perLine){
    cout<<endl;
    for(int i=0; i<array->size; i++){
        cout<<array->data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

Array *fillAry(int n){
    //Allocate memory
    Array *array=new Array;
    array->size=n;
    array->data=new int[n];
    //Fill with random values
    for(int i=0; i<n; i++){
        array->data[i]=rand()%90+10;//2 Digit random number
    }   
    return array;
}