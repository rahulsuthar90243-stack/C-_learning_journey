#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> vec = {1, 2, 3};

  vec.emplace_back(4);

//   for(int val : vec){
//     cout<<val<<" ";
//   }
  
  cout<<"val at idx2: "<<vec[2]<<" or "<< vec.at(2)<<endl;

}