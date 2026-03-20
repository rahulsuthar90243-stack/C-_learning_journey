#include<iostream>
#include<string>
// #include<algorithm>
using namespace std;

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    // to_string();
    // convert integer to string
    string num2 = to_string(num);
    cout<<num2<<endl;

    num2 += " String integer";
    cout<<num2;
}