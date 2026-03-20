#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Please enter your name: ";
    getline(cin, name);
    cout<<name<<" "<<name.length()<<endl;

    // add character 
    name.clear();
    cout<<name<<name.length()<<endl;


}