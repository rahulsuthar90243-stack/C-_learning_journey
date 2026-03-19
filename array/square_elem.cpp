#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of arr: ";
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        int naturalNumber = i + 1;
        arr[i] = naturalNumber * naturalNumber;
    }

    cout<<"Square Element: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }


}