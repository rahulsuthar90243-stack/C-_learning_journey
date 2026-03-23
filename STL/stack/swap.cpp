#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    stack<int> s2;

    s.swap(s2);

    cout << "s size: " << s.size() << endl;
    cout << "s2 size: " << s2.size() << endl;
}