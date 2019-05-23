/* 
 * File:   main.cpp
 * Author: Savanah Torres
 * Created on May 16, 2019 10:40 PM
 * Purpose:  Pointer examples
 */

//System Libraries Here
#include <iostream> //Input/Output Library
#include <cstdlib>  //Random function
#include <ctime>    //Time Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions


//Function Prototypes Here
int *fillAry(int);
void prntAry(int *,int,int);
void markSrt(int *,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed  
    srand(static_cast<unsigned int>(time(0))); //Keeps number sequence random
    
    //Declare all Variables Here
    int size=100;
    int *array;
    
    //Initialize or input i.e. set variables    
    array=fillAry(size);
    
    prntAry(array,size,10);
    //Map inputs -> outputs
    markSrt(array,size);
    
    //Display outputs 
    prntAry(array,size,10);
    
    //Deallocate memory
    delete []array;
    
    //Exit Stage right or left!
    return 0;
}

void markSrt(int *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){      //
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    } 
}

void prntAry(int *array,int n,int perLine){
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<*(array+i)<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

int *fillAry(int n){
    //Allocate memory
    int *array=new int[n];
    //Fill with random values
    for(int i=0; i<n; i++){
        //array[i]=rand()%90+10;//2 Digit random number
        *(array+i)=rand()%90+10;//2 Digit random number
    }   
    return array;
}