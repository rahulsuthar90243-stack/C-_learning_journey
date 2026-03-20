#include<iostream>
using namespace std;

int main(){
   string words;
   cout<<"Enter your words: ";
   getline(cin, words);

   int size = words.length();
   int count = 0;
   for(int i = 0; i < size; i++){
    if((words[i] =='a' || words[i] =='e' || words[i] =='i' || words[i] =='o' || words[i] =='u') ||
       (words[i] =='A' || words[i] =='E' || words[i] =='I' || words[i] =='O' || words[i] =='U')){
        count++;
       }
   }

   cout<<"This text number of vowels: "<<count;
}