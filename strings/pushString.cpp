#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Please enter your name: ";
    getline(cin, name);
    cout<<name<<endl;

    // add character 
    name.push_back('S');
    cout<<name<<endl;

}