#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> vec = {1, 2, 3, 4, 5};

    reverse(vec.begin(), vec.end()); //5, 4, 3, 2, 1


    for(int val: vec){
        cout<<val<<" ";
    }
    cout<<endl;

    vector<int> v2 = {1, 3, 5, 7, 8};

    reverse(v2.begin()+2, v2.begin()+4);

    for(int val: v2){
        cout<<val<<" ";
    }
    cout<<endl;

}