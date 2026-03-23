#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    int a = 10, b = 20;

    cout<<"max: "<<max(a, b)<<endl;
    cout<<"min: "<<min(a, b)<<endl;

    // swap

    swap(a, b);

    cout<< "a: "<<a<< endl;
    cout<<"b: "<<b;

}