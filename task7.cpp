#include<iostream>
using namespace std;
main()
{
      string word;
    cout<<"enter word : ";
  getline (cin,word);
  char letter[1];
      cout<< "enter letter:";
      cin>>letter;
  int idx=0;
  while(word[idx]== '\0'){
    idx++; 
  } 
  for(int n=idx;n>0;n--){
    
    cin>>word[n];
  
  if(word[n]==letter[1]){
  cout<< "true";
}
}
}
