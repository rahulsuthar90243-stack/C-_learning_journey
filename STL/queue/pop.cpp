#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q;

    // add elem
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<"q size: " << q.size() <<endl;

    // remove elem
    q.pop();
    q.pop();
    q.pop();

    cout<<"q size: " << q.size() <<endl;

}