// Greatest of Three Number

#include<iostream>
using namespace std;

int main(){
    int a = 9, b = 8, c = 7;

    if(a > b){
        if(a > c){
            cout<<a<<" is greatest";
        }else{
            cout<<c<<" is greatest";
        }
    }else{
        if(b > c){
        cout<<b<<" is greasted";
        }else{
            cout<<c<<" is greasted";
        }
    }
}