#include<iostream>
#include<set>

using namespace std;
int main(){
 set<int> s;

 s.insert(10);
 s.insert(20);
 s.insert(30);
 s.insert(40);
 s.insert(50);

 cout<<"size: "<<s.size()<<endl;
 for(int val: s){
    cout<<val<<" ";
 }
 cout<<endl;

 if(s.find(30) != s.end()){
    cout<<"found";
 }else{
    cout<<"Not found";
 }

 cout<<endl;
}