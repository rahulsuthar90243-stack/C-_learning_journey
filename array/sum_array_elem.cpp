#include<iostream>
using namespace std;

int sumArray(int arr[], int n){
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  return sum;
  
}

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

    int result = sumArray(arr, n);
    cout<<"Sum of Element: "<<result;
    

}