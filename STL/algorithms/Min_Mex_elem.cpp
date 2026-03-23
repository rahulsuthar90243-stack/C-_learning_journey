#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};

    cout<<"Minimum element: "<<*(min_element(vec.begin(), vec.end()))<<endl;
    cout<<"Meximum element: "<<*(max_element(vec.begin(), vec.end()));

}