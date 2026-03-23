#include<iostream>
#include<set>

using namespace std;
int main(){
 set<int> s;

 s.insert(1);
 s.insert(2);
 s.insert(3);
 s.insert(4);
 s.insert(5);

 cout<<"size: "<<s.size()<<endl;

 s.insert(4);  // not add duplicate value
 s.insert(5);   // not add duplicate value

 cout<<"size: "<<s.size()<<endl;

 for(int val: s){
    cout<<val<<" ";
 }
 cout<<endl;
}