#include<iostream>
using namespace std;
int main(){
    int Rahul, Mahipal, Vp;
    cout<<"Enter the age of Rahul: ";
    cin>>Rahul;

    cout<<"Enter the age of Mahipal: ";
    cin>>Mahipal;

    cout<<"Enter the age of Vp: ";
    cin>>Vp;

    if(Rahul > Mahipal){
        if(Rahul > Vp){
            cout<<"Rahul is a youngest";
        }else{
            cout<<"Vp is a youngest";
        }

    }else{
        if(Mahipal  > Vp){
            cout<<"Mahipal is a youngest";
        }else{
            cout<<"Vp is a youngest";
        }
    }
}