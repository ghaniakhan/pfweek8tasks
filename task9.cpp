#include<iostream>
using namespace std;
main()
{
    int size;
    int numbers;
    int largest=-1000;
    cout<< "enter size is :";
    cin>> size;
    int arr[size];
    for(int idx=0;idx<size;idx++){
        cout<< "enter numbers/elementsof array :";
        cin>> arr[idx];}
        for(int idx =0; idx<size;idx++){

             if(arr[idx]>largest){
           largest=arr[idx];}
        }  
         cout<< "the largest number is :"<<largest;

        
}
    