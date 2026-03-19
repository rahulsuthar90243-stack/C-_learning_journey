#include<iostream>
using namespace std;

int main(){
    int r, c;
    cout<<"Enter rows: ";
    cin>>r;
    cout<<"Enter column: ";
    cin>>c;

    int arr[r][c];

    cout<<"Enter element matrix: \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    cout<<"Element of matrix: \n";
     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}