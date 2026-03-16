#include<iostream>
using namespace std;
int main(){
    int x, y;

    cout<<"Enter coordinates (x,y): ";
    cin>>x>>y;

    if(x == 0 && y == 0){
        cout<<"The Point is at the origin";
    }else if(x == 0){
     cout<<"The Poitn is at the y-axis";
    }else if(y == 0){
      cout<<"The Poitn is at the x-axis";
    }else if(y > 0 && x > 0){
        cout<<"The Poitn is at the 1st ouadrant";
    }else if(y > 0 && x < 0){
        cout<<"The Poitn is at the 2st ouadrant";
    }else if(y < 0 && x < 0){
        cout<<"The Poitn is at the 3st ouadrant";
    }else{
        cout<<"The Poitn is at the 4th ouadrant";
    }

}