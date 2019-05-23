/* 
 * File:   main.cpp
 * Author: Savanah Torres
 * Created on May 21, 2019 10:04 PM
 * Purpose:  Bubble sort
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
void bubSrt(int [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed  
    srand(static_cast<unsigned int>(time(0))); //Keeps number sequence random
    
    //Declare all Variables Here
    const int SIZE=100;
    int array[SIZE];
    
    //Initialize or input i.e. set variables    
    fillAry(array,SIZE);
    
    prntAry(array,SIZE,10);
    //Map inputs -> outputs
    bubSrt(array,SIZE);
    
    //Display outputs 
    prntAry(array,SIZE,10);
    
    //Exit Stage right or left!
    return 0;
}

void bubSrt(int a[],int n){
    bool swap;
    do{
        swap=false;
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){      
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                swap=true;
            }
        }
    } while(swap);
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
        array[i]=rand()%90+10;//2 Digit random number
    }    
}