#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d = {1, 2, 3};

    for(int val: d){
        cout<<val<<" ";
    }
    cout<<endl;

    d.emplace_back(4);  // add back elem 4
    d.push_front(0);  // add front elem 0

    for(int val: d){
        cout<<val<<" ";
    }
    cout<<endl;

    d.pop_back();  // remove back elem 4
    d.pop_front();  // remove front elem 0

    for(int val: d){
        cout<<val<<" ";
    }
}