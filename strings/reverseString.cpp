#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string name = "Rahul";
    cout<<"Please enter your name: ";
    getline(cin, name);
    cout<<name<<" "<<name.length()<<endl;

  
    reverse(name.begin(), name.end());
    cout<<name<<" "<<name.length()<<endl;


}