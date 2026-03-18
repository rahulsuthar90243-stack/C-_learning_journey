// count digit of giving number

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n: ";
cin>>n;

int count = 0;
do{
    n /= 10;
    count++;
} while (n != 0);

cout<<"Number of digit: "<<count;

}