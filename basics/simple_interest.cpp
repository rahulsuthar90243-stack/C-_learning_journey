#include<iostream>
using namespace std;

int main(){
    float price = 540;
    float r = 32;
    float time = 3;
    float interest = 0;
    interest += price * r * time / 100;

    cout<<"Simple Interest: ";
    cout<<interest;

}