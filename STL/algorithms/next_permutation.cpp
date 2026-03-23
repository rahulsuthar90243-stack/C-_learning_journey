#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    string next = "acb";

    next_permutation(next.begin(), next.end());

    cout<<"Next permutatin is: "<<next<<endl;


    string s = "bac";
    prev_permutation(s.begin(), s.end());

    cout<<"Next permutatin is: "<<s;



}