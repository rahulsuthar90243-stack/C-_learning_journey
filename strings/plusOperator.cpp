#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Please enter your name: ";
    getline(cin, name);
    cout<<name<<" "<<name.length()<<endl;

    // add string
    // name = name + " Suthar";
    // cout<<name<<" "<<name.length()<<endl;
   
    name = "Suthar " + name;
    cout<<name<<" "<<name.length()<<endl;


}