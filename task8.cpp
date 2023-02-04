#include<iostream>
using namespace std;
main()
{
     
    int size;
    int number;
    bool flag= false;
    cout<< "enter size:";
    cin>> size;
    int arr[size];
    cout<<"enter another number:" ;
    cin>> number;
    for(int idx=0;idx<size;idx++){
        cout<< "enter number :";
        cin>> arr[idx];
    }
    for(int num=0;num<size;num++){
        if(arr[num]==number){
            flag= true;}
        }
        if(flag==true){
            cout<< "number found";
        }
    
    else{
        cout<<"not found ";
    }

}