#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int flag = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<flag<<" ";
        }
        cout<<endl;
        flag++;
    }
}