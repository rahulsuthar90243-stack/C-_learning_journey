#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){

    // array
    int arr[5] = {1, 2, 3, 4, 5};

    sort(arr, arr + 5, greater<int>());

    cout<<"Descending to arr: ";
    for(int val: arr){
        cout<<val << " ";
    }
    cout<<endl;


    // vector
    vector<int> marks = {45, 78, 56, 78};

    sort(marks.begin(), marks.end(), greater<int>());

    cout<<"Descending to vector: ";
    for(int val: marks){
        cout<<val <<" ";
    }
    cout<<endl;


}