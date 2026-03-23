#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int arr[5] = {1, 5, 3, 6, 2};

    sort(arr, arr + 5);

    cout<<"Ascending to arr: ";
    for(int val: arr){
        cout<< val <<" ";
    }
    cout<<endl;

    vector<int> vec = {5, 7, 2, 5 ,1};

    sort(vec.begin(), vec.end());

    cout<<"Ascending to vector: ";
    for(int val: vec){
        cout<<val <<" ";
    }
    cout<<endl;


    // vector of pair

    vector<pair<int, int>> vec2 = {{1, 2}, {4, 1}, {6, 7}};

    sort(vec.begin(), vec.end());

    cout<<"Ascending to vector of pair: \n";
    for(auto p: vec2){
        cout<<p.first<<" "<<p.second<< endl;
    }

}