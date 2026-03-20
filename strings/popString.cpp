#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Please enter your name: ";
    getline(cin, name);
    cout<<name<<endl;

    // lasr character remove
    name.pop_back();
    cout<<name<<endl;

}