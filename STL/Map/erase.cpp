#include<iostream>
#include<map>

using namespace std;

int main(){
    map<string,int> m;

    m["watch"] = 100;
    m["headphone"] = 200;

    m.emplace("camera", 100);
    m.emplace("watch", 60);

    for(auto p: m){
    cout<<p.first<< " " << p.second << " "<< endl;
    }
    cout<<endl;

    m.erase("camera");  //remove key

    for(auto p: m){
    cout<<p.first<< " " << p.second << " "<< endl;
    }

} 