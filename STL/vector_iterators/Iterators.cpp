#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};
    vector<int>::iterator itr;

    for(itr = vec.begin(); itr != vec.end(); itr++){
        cout<< *(itr)<<" ";
    }
    cout<<endl;

    vector<int>:: reverse_iterator it;

    for(it = vec.rbegin(); it != vec.rend(); it++){
        cout<<*(it)<<" ";
    }

    cout<<endl;

    // vector<int>:: reverse_iterator it;

    for(auto it = vec.rbegin(); it != vec.rend(); it++){
        cout<<*(it)<<" ";
    }

}