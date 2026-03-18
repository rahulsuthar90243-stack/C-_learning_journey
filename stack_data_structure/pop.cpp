#include<iostream>
using namespace std;

int pop(int stack[],int &top){
 if(top == -1){
    cout<<"\nStack is underflow";
    return -1;
 }else{
    int value = stack[top];
    top--;
    return value;
 }
}

int main(){
    int max = 5;
    int stack[max] = {1, 2, 3, 4, 5};
    int top = 4;

    cout<<"\nElement of stack: ";
    for (int i = 0; i < max; i++){
        cout<<stack[i]<<" ";
    }

    int remove = pop(stack,top);

    cout<<"\nPopped element: "<< remove;

    cout<<"\nAtfer pop: ";
    for (int i = 0; i <= top; i++)
    {
        cout<<stack[i]<<" ";
    }
    
}
