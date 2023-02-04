#include<iostream>
using namespace std;
main()
{
  
    int size;
    cout<< "enter a number:";
    cin>> size;
    int arr[size]; 
    for(int idx=0;idx<size;idx++){
        cout<< "enter number :";
        cin>> arr[idx];
    }
    for(int idx=size-1;idx>=0;idx--){
        cout<< arr[idx];   
    }
}

    