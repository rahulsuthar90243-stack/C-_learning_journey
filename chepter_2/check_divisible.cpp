#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please enter number: ";
    cin>>n;

    if((n % 5 == 0 || n % 3 == 0) && (n % 15 != 0)){
        cout << "Number is divisible by 3 or 5 but not divisible by 15";
    }
}