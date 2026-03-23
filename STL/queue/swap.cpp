#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q;

    // add elem
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<"q size: " << q.size() <<endl;

    queue<int> q2;

    q.swap(q2);

    cout<<"q size: " << q.size() <<endl;
    cout<<"q2 size: " << q2.size() <<endl;

}