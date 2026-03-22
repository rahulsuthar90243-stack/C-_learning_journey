#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> vec = {1, 2, 3};

  // add new element
  vec.push_back(4);
  vec.push_back(5);

  for(int val : vec){
    cout<<val<<" ";
  }
}