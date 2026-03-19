#include<iostream>
using namespace std;

int productArray(int arr[], int n){
  int product = 1;
  for (int i = 0; i < n; i++)
  {
    product *= arr[i];
  }

  return product;
  
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

    int result = productArray(arr, n);
    cout<<"Product of Element: "<<result;
    

}