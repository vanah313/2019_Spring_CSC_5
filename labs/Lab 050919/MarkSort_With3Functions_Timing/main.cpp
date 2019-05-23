/* 
 * File:   main.cpp
 * Author: Savanah Torres
 * Created on May 9, 2019 10:40 PM
 * Purpose:  First Sort Program
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
void fillAry(int [],int);
void prntAry(int [],int,int);
void swap1(int &, int &);
void swap2(int &, int &);
void smlLst(int [],int,int);
void markSrt(int [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed  
    srand(static_cast<unsigned int>(time(0))); //Keeps number sequence random
    
    //Declare all Variables Here
    const int SIZE=40000;
    int array[SIZE];
    
    //Initialize or input i.e. set variables    
    fillAry(array,SIZE);
    
    //Map inputs -> outputs
    int beg=time(0);
    markSrt(array,SIZE);
    int end=time(0);  
    
    //Display outputs 
    cout<<"The total time for Mark Sort give SIZE = "<<SIZE<<" to sort"<<endl;
    cout<<"Total time with 3 Functions"<<end-beg<<" sec"<<endl;
    
    //Exit Stage right or left!
    return 0;
}

void markSrt(int a[],int n){
   for(int i=0;i<n-1;i++){
        smlLst(a,n,i);
    } 
}

void smlLst(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap1(a[pos],a[i]);
    }
}

void prntAry(int array[],int n,int perLine){
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(int array[],int n){
    for(int i=0; i<n; i++){
        array[i]=rand();//2 Digit random number
    }
    
}

void swap1(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

void swap2(int &a, int &b){
    a=a^b;
    b=a^b;
    a=a^b;
    
}