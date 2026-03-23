#include<iostream>
#include<map>

using namespace std;

int main(){
    map<string,int> m;

    m["leptop"] = 50;
    m["tv"] = 20;

    m.insert({"camera", 100});
    m.emplace("watch", 60);  //add create object


    for(auto p: m){
    cout<<p.first<< " " << p.second << " "<< endl;
    }


} 