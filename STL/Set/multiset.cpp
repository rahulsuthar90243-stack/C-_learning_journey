#include<iostream>
#include<set>
using namespace std;

int main(){

    multiset<int> s;

    s.emplace(1);
    s.emplace(2);
    s.emplace(3);
    s.emplace(4);

    for(int val: s){
        cout<<val<<" ";
    }
    cout<<endl;

    s.emplace(1);  // add duplicate value
    s.emplace(2);

    for(int val: s){   //sort to ascending order
        cout<<val<<" ";
    }
    cout<<endl;

}