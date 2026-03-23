#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> m;

    m.emplace("tv", 50);
    m.emplace("leptop", 50);
    m.emplace("phone", 50);
    m.emplace("watch", 50);

    m.erase("leptop");

    for(auto p: m){
        cout<<p.first <<" " <<p.second<<endl;
    }

}