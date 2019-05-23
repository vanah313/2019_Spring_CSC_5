/* 
 * File:   main.cpp
 * Author: Savanah Torres
 * Created on May 23, 2019 10:05 AM
 * Purpose:  Database Concept -> using an Index
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
void fillAry(int [],int [],int);
void prntAry(int [],int,int);
void prntAry(int [],int [],int,int);
void markSrt(int [],int [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed  
    srand(static_cast<unsigned int>(time(0))); //Keeps number sequence random
    
    //Declare all Variables Here
    const int SIZE=100;
    int array[SIZE];
    int index[SIZE];
    
    //Initialize or input i.e. set variables    
    fillAry(array,index,SIZE);
    
    //Print Array
    cout<<"The original Array before sorting."<<endl;
    prntAry(array,SIZE,10);
    cout<<"The indexed Array before sorting."<<endl;
    prntAry(index,SIZE,10);
    cout<<"The Array using the index before sorting."<<endl;
    prntAry(array,index,SIZE,10);
    //Map inputs -> outputs
    markSrt(array,index,SIZE);
    
    //Display outputs 
    //Print Array
    cout<<"The original Array after sorting."<<endl;
    prntAry(array,SIZE,10);
    cout<<"The indexed Array after sorting."<<endl;
    prntAry(index,SIZE,10);
    cout<<"The Array using the index after sorting."<<endl;
    prntAry(array,index,SIZE,10);
    
    //Exit Stage right or left!
    return 0;
}

void markSrt(int a[],int indx[],int n){
    for(int pos=0;pos<n-1;pos++){
        for(int i=pos+1;i<n;i++){
            if(a[indx[pos]]>a[indx[i]]){      
                int temp=indx[i];
                indx[i]=indx[pos];
                indx[pos]=temp;
            }
        }
    } 
}

void prntAry(int array[],int indx[],int n,int perLine){
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<array[indx[i]]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void prntAry(int array[],int n,int perLine){
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(int array[],int indx[],int n){
    for(int i=0; i<n; i++){
        array[i]=rand()%90+10;//2 Digit random number
        indx[i]=i;
    }    
}