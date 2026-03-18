#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n: ";
cin>>n;

int rev = 0, rew;


while (n != 0){
   int ld = n % 10;
   rev *= 10;
   rev += ld;
   n /= 10;
}


cout<<"reverse number: "<<rev;

}