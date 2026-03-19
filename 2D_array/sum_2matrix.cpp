#include<iostream>
using namespace std;

int main(){
    int r, c;
    cout<<"Enter rows: ";
    cin>>r;
    cout<<"Enter column: ";
    cin>>c;

    int a[r][c];
    int b[r][c];
    int sum[r][c];

    cout<<"Enter element matrix A: \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
        
    }

    cout<<"Enter element matrix B: \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>b[i][j];
        }
        
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           sum[i][j] = a[i][j] + b[i][j];
        }
        cout<<endl;
        
    }

    cout<<"Sum of 2 matrix: \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           cout<<sum[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}