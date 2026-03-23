#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<"s size: "<<s.size()<<endl;

    s.pop(); // top elem remove
    s.pop();    // top elem remove

    cout<<"s size: "<<s.size()<<endl;
}