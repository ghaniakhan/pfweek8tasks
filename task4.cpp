#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"enter word : ";
  getline (cin,word);
  int idx=0;
  while(word[idx]!= '\0'){
    cout<< "the character at index  :"<< idx<<"is"<<word[idx];
    idx++;
  }
  

}
