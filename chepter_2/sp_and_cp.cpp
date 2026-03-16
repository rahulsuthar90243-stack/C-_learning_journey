#include<iostream>
using namespace std;

int main(){
   int sp, cp;
   cout<<"Enter Selling Price: ";
   cin>>sp;
   cout<<"Enter Cost Price: ";
   cin>>cp;

   if(sp > cp){
    cout<<"Profit is: "<<sp;
   }else if(sp < cp){
    cout<<"Loss is: "<<cp;
   }else{
    cout<<"no profit and no loss";
   }
}