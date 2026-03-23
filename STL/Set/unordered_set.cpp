#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;

    s.emplace(1);
    s.emplace(2);
    s.emplace(3);
    s.emplace(4);
    s.emplace(5);

    for(int val: s){
        cout<<val<<" ";
    }
    cout << endl;

    s.emplace(1);  // NOT add duplicate value
    s.emplace(2);

    for(int val: s){   // show unique value 
        cout<<val<<" ";
    }
    cout<<endl;
}