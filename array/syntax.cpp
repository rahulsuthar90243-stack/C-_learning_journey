#include<iostream>
using namespace std;

int main(){
    // int num[4];
    // num[0] = 1;
    // num[1] = 2;
    // num[2] = 3;
    // num[3] = 4;
    // cout<<num[3];


    // int arr[] = {1, 2, 3, 4, 5};

    // for (int  i = 0; i < 5; i++)
    // {
    //    cout<<arr[i];
    // }

    int arr[5];

    cout<<"Enter elemetnt: ";
    for(int i = 0; i < 5; i++){
        cin>>arr[i];
    }

    cout<<"Elemetnt: ";
    for(int i = 0; i < 5; i++){
    cout<<arr[i]<<" ";
    }

    cout<<endl;
    // reverse array
    cout<<"Reverse array: ";
    for(int i = 4; i >= 0; i--){
    cout<<arr[i]<<" ";
    }
    
}