#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string name = "Rahul";
    cout<<"Please enter your name: ";
    getline(cin, name);
    int size = name.length();
    cout<<name<<" "<<name.length()<<endl;

  
    reverse(name.begin(), name.begin()+size/2);
    cout<<name<<" "<<name.length()<<endl;

    // reverse(name.begin()+2, name.begin()+4);
    // cout<<name<<" "<<name.length()<<endl;


    // int i = 0; 
    // int j = size / 2 - 1;
    // while (i < j)
    // {
    //     char temp = name[i];
    //     name[i] = name[j];
    //     name[j] = temp;
    //     i++;
    //     j--;
    // }

    // cout<<name<<" "<<name.length()<<endl;
    

}