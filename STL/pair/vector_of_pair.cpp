#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<pair<int, int>> vec = {{1, 2}, {3, 4}, {5, 6}};

    // for(pair<int, int> p: vec){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    for(auto p: vec){
        cout<<p.first<<" "<<p.second<<endl;
    }

    vec.push_back({7, 8}); // insert
    vec.emplace_back(9, 10);     //in-place objects creates

    for(auto p: vec){
        cout<<p.first<<" "<<p.second<<endl;
    }

}