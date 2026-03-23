#include<iostream>
#include<map>

using namespace std;

int main(){
    map<string,int> m;

    m["leptop"] = 50;
    m["tv"] = 20;
    m["watch"] = 100;
    m["headphone"] = 200;

    // for(pair<string,int> p: m){
    //  cout<<p.first<< " " << p.second << " "<< endl;
    // }

    for(auto p: m){
    cout<<p.first<< " " << p.second << " "<< endl;
    }


} 