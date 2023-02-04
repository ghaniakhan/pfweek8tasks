#include<iostream>
using namespace std;
main()
{
   string word;
   char vowels[6]={'a','e','i','o','u','\0'};
   char space;
   cout<< "enter word :";
   getline(cin,word);
   int idx=0;
   while(word[idx]!='\0'){
    if(word[idx]=='a' || word[idx]=='e'||word[idx]=='i'||word[idx]=='o'||word[idx]=='u'){
        cout << "";
         
    }
    else
    {
        cout << word[idx];
    }
      
      idx++;

   }
  
}