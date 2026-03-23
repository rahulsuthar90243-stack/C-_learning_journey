#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;

    s.emplace(1);
    s.emplace(2);
    s.emplace(3);
    s.emplace(4);
    s.emplace(5);

    cout<<"lower_bount: " << *(s.lower_bound(0))<<endl;  // 1   should NOT be less then key
    cout<<"upper_bound: " << *(s.upper_bound(2))<<endl;    // 3    greater then key

}