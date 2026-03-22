#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    vector<int> vec = {1, 2, 3, 4, 5};

    // vec.erase(vec.begin()+1);  
    vec.erase(vec.begin()+1, vec.begin()+3);  // 1 4 5

    for(int val: vec){
        cout<<val<<" ";
    }
}