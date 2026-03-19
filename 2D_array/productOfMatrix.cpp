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
 
    int product = 1;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
         product *= a[i][j];
        }
        cout<<endl;
        
    }

    cout<<"Product of element matrix: "<<product;
    
}