#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
    // list<int> l = {1,, 2, 3};
    list<int> l;

    l.push_back(1);  // add back
    l.push_back(2);
    l.push_back(3);
    l.push_front(5);   // add front
    l.push_front(6);
    
    for(int val: l){
        cout<<val<<" ";
    }
    cout<<endl;

    list<int> marks = {45, 78, 56};

    marks.pop_back();  // remove last marks  56
    marks.pop_front();  // remove first marks   45

    for(int val: marks){
        cout<<val<<" ";  // 78
    }


}