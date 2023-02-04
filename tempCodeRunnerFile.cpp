#include<iostream>
using namespace std;
main()
{
      string word;
    cout<<"enter word : ";
  getline (cin,word);
  char letter;
      cout<< "enter letter:";
      cin>>letter;
  int idx=0;
  while(word[idx]== '\0'){
    idx--; 
  } 
  cout<< "true";

  }
  
