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


    for (int i = 0; i < n; i++)
    {
       if(arr[i] % 2 == 0){
        arr[i] += 10;
       }else{
        arr[i] *= 2;
       }
    }
  
    // odd indexed element multiple by second and increment all even indexed value by 10

    cout<<"Element ";
    for(int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
    }


}