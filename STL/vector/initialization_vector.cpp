#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector<int> vec = {1, 2, 3, 4};

    // vector<int> vec(5, 10);

    vector<int> vec1(3, 9);
    vector<int> vec2(vec1);
    
    // cout<<"size: "<<vec1.size()<<endl;
    // cout<<"capacity: "<<vec1.capacity()<<endl;


    for(int val: vec2){
        cout<<val<<" ";
    }
}