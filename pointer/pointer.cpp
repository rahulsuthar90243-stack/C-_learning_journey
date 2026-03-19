#include<iostream>
using namespace std;

int main(){
    int age = 22;
    int *ptr = &age;

    cout<<*ptr<<endl;
    cout<<&ptr;

}