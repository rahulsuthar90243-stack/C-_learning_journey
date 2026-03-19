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
 
    int sum = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
         sum += a[i][j];
        }
        cout<<endl;
        
    }

    cout<<"Sum of element matrix: "<<sum;
    
}