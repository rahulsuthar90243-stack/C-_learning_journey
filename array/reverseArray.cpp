#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int arr[n];

    cout<<"Enter Element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int i = 0; 
    int j = n - 1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    

    // // sorted array
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n-i; j++){
    //      if ((arr[j] > arr[j+1])){
    //       int temp = arr[j];
    //       arr[j] = arr[j+1];
    //       arr[j+1] = temp;
    //      }
         
    //     }
    // }

     for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}