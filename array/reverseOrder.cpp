#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of arr: ";
    cin>>n;
    int arr[n];
    int srr[n];

    cout<<"Enter element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++){
        int j = n -1 -i;
        srr[i] = arr[j];
    }

    cout<<"Element of arr: ";
    for(int i =0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Element of srr: ";
    for(int i = 0; i < n; i++){
        cout<<srr[i]<<" ";
    }
    

}