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

    int sumEven = 0;
    int sumOdd = 0;


    for (int i = 0; i < n; i++)
    {
       if(arr[i] % 2 == 0){
        sumEven += arr[i];
       }else{
        sumOdd += arr[i];
       }
    }

    cout<<"Sum of Even element: "<<sumEven<<endl;
    cout<<"Sum of Odd element: "<<sumOdd;


}