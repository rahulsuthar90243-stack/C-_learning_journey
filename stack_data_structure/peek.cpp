#include<iostream>
using namespace std;

int peek(int stack[], int top){
    if(top == -1){
        cout<<"\nstack is Empty";
        return -1;
    }else{

        return stack[top];
    }
}

int main(){
    int max = 5;
    int stack[max] = {10, 20, 30, 40, 50};
    int top = max-1;

    cout<<"\nstack element: ";
    for (int i = 0; i < top; i++)
    {
       cout<<stack[i]<<" ";
    }
    

    int value = peek(stack, top);

     cout<<"\nTop element (Peek): "<<value;

}