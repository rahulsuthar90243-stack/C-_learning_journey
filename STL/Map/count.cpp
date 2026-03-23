#include<iostream>
#include<map>

using namespace std;

int main(){
    map<string,int> m;

    m["leptop"] = 50;
    m["tv"] = 20;
    m["watch"] = 100;
    m["headphone"] = 200;


    cout<<"size: " << m.size() <<endl;
    cout<<"count: " << m.count("leptop")<<endl;

} 