// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;

//     int fact = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }

//     cout<<"Factorial is: "<<fact;
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for (int i = 1; i <= n; i++){
       int fact = 1;
       for (int j = 1; j <= i; j++){
        fact *= j;
       }

       cout<<i<<"! = "<<fact <<endl;
    }
}