#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> q; 
    // priority_queue<int , vector<int>, greater<int>> q;   
    q.push(2);
    q.push(5);
    q.push(4);
    q.push(11);
    q.push(10);

    while (!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }

    cout << endl;
    
}