#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"enter word : ";
  getline (cin,word);
  int idx=0;
  while(word[idx]!= '\0'){
    idx++;
  }
  if(idx%2==0){
    cout<< "true";
  }
  else{
    cout<< "false";
  }
}
