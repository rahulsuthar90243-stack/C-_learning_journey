#include<iostream>
using namespace std;

bool isEmpty(int top){
    if(top == -1){
        return true;
    }else{

        return false;
    }
}

int main(){
    int max = 5;
    int stack[max];
    int top = -1;

    if(isEmpty(top)){
        cout<<"\nstack is Empty";
    }else{
        cout<<"\nstack is not Empty";
    }

    // add element
    stack[++top] = 10;
    if(isEmpty(top)){
        cout<<"\nstack is Empty";
    }else{
        cout<<"\nstack is not Empty";
    }    
}