#include<iostream>
#include<map>
using namespace std;

int main(){

    multimap<string, int> m;

    m.emplace("watch", 50);
    m.emplace("watch", 50);
    m.emplace("watch", 50);
    m.emplace("watch", 50);

    // m.erase("watch");   all key remove
    m.erase(m.find("watch"));   // one key remove

    cout<<"m size: "<< m.size()<<endl;
    for(auto p: m){
        cout<<p.first<<" "<< p.second<<endl;
    }
    cout<<endl;
}