#include<iostream>
using namespace std;
int main(){
    int num1;

    cout<<"Please enter three Number: ";
    cin>>num1;

    if(num1 % 5 == 0 or num1 % 3 == 0){
        cout<<"Divisible by 5 or 3";
    }
    else{
        cout<<"Not divisible by 5 or 3";
    }

}