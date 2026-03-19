#include<iostream>
using namespace std;

int main(){
    int r = 5, c = 4;
    // cout<<"Enter rows: ";
    // cin>>r;
    // cout<<"Enter column: ";
    // cin>>c;

    int a[r][c];


    cout<<"Enter element matrix: \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
        
    }

    cout<<"element matrix: \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;
 
    int sum = 0;

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
         sum += a[i][j];
        }
        cout<<endl;
        
    }

    cout<<"Sum of element matrix: "<<sum;
    
}