// #include<iostream>
// using namespace std;

// void sum(int i, int n, int s){
//     if(i > n){
//         cout<<"Sum: "<<s;
//         return;
//     }
//     sum(i+1, n, s+i);
// }

// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     sum(1, n, 0);
// }


#include<iostream>
using namespace std;

int sum(int n){
   if(n == 1) return 1;
   return n + sum(n-1);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<sum(n);
}