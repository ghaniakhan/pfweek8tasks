#include<iostream>
using namespace std;
main()
{
    int sum=0;
    int arr[5];
    for(int idx=0;idx<5;idx++){
    cout<< "enter element";
    cin >> arr[idx];

    sum=sum+arr[idx];
    }
    cout<< sum;
}
