#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of arr: ";
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    int fl = INT8_MIN;
    int sl = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
      fl = max(fl, arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
       if(arr[i] != fl) sl = max(sl, arr[i]);
    }
    
    cout<<"First large: "<<fl<<endl;
        cout<<"Second large: "<<sl<<endl;


}