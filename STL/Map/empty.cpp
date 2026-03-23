#include<iostream>
#include<map>

using namespace std;

int main(){
    map<string,int> m;

    m["leptop"] = 50;
    m["tv"] = 20;
    m["watch"] = 100;
    m["headphone"] = 200;

    cout<<"is Empty: " << m.empty() << endl;
    

    while (!m.empty())
    {
        auto it = m.begin();

        cout<<it->first<< " " << it->second << endl;
        m.erase(it);
    }

    cout<<"is Empty: " << m.empty();

} 