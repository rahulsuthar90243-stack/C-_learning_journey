#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of arr: ";
    cin>>n;
    int arr[n];

    cout<<"Enter Element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int mn = INT8_MAX;

    for (int i = 0; i < n; i++)
    {
      mn = min(mn, arr[i]);
    }
    
    cout<<"Minimum Element is: "<<mn;
    

}