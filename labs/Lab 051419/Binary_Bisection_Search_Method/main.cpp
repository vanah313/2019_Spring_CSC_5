/* 
 * File:   main.cpp
 * Author: Savanah Torres
 * Created on May 14, 2019 10:40 AM
 * Purpose:  Search technique by Bisection
 *           through binary search
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
void markSrt(int [],int);
int binary(int [],int,int);

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
    markSrt(array,SIZE);
    
    //Display outputs 
    prntAry(array,SIZE,10);
    
    //Randomly choose something to Find
    int rndFind=rand()%90+10;
    cout<<rndFind<<" is found at index = "<<binary(array,SIZE,rndFind)<<endl;
    
    //Exit Stage right or left!
    return 0;
}

int binary(int a[],int n,int val){
    int high=n-1,
        low=0;
    do{
        int mid=(high+low)/2;
        if(a[mid]==val)return mid;
        else if(val>a[mid]){
            low=mid+1;
        }else{
            high=mid-1;
        }        
    }while(high>=low);
    return -1;
}

void markSrt(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){      
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
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
        array[i]=rand()%90+10;//2 Digit random number
    }    
}