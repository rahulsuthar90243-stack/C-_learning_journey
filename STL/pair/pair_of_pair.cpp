#include<iostream>
using namespace std;

int main(){
    pair<int, pair<char, int>> p = {1, {'R', 6}};

    cout<<p.first<<endl;
    cout<<p.second.first<<" ";
    cout<<p.second.second<<endl;
}