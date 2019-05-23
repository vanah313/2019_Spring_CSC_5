/* 
 * File:   main.cpp
 * Author: Savanah Torres
 * Created on May 16, 2019 10:40 PM
 * Purpose:  3 function sort program with Pointer
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
void swap1(int &, int &);
void smlLst(int *,int,int);
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
    
    //Deallocate Memory
    delete []array;
    
    //Exit Stage right or left!
    return 0;
}

void markSrt(int *a,int n){
   for(int i=0;i<n-1;i++){
        smlLst(a,n,i);
    } 
}

void smlLst(int *a,int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(*(a+pos)>*(a+i))swap1(*(a+pos),*(a+i));
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
    //Fill array with random values
    for(int i=0; i<n; i++){
        //array[i]=rand()%90+10;//2 digit random number
        *(array+i)=rand()%90+10;//2 digit random number
    }
    return array;
}

void swap1(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}