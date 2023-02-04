#include<iostream>
using namespace std;
main()
{
    
    int number;
    int size;
    int multiply;
    cout<< "enter a size:";
    cin>> size;
    int arr[size]; 
    for(int idx=0;idx<size;idx++){
        cout<< "enter number :";
        cin>> arr[idx];
    }
    cout<< "enter number is : ";
    cin>> number;
    for(int idx=0;idx<size;idx++){
      multiply= number*arr[idx];
    }
    cout<< multiply;
}

