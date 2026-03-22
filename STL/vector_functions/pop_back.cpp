#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3};

    // remose last element
    vec.pop_back();
    for(int val: vec){
        cout<<val<<" ";
    }

}