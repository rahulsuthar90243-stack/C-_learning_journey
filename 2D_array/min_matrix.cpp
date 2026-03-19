#include<iostream>
using namespace std;

int main(){
    int r, c;
    cout<<"Enter rows: ";
    cin>>r;
    cout<<"Enter column: ";
    cin>>c;

    int a[r][c];


    cout<<"Enter element matrix: \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
        
    }

    int min = INT8_MAX;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           if(a[i][j] < min){
            min = a[i][j];
           }
        }
        cout<<endl;
        
    }

    cout<<"Minimum element of matrix: "<<min;
    
}