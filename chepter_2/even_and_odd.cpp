#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Please enter Number: ";
    cin>>num;
    
    // if(num % 2 == 0){
    //     cout<<"Even Number: "<<num;
    // }else{
    //     cout<<"Odd Number: "<<num;
    // }

    if(num % 5 == 0){
        cout<<"Divisible to 5";
    }else{
        cout<<"Not Divisibe";
    }
}