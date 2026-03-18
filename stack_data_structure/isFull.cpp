#include<iostream>
using namespace std;

bool isFull (int top, int max){
 if(top == max-1){
    return true;
 }else{
    return 0;
 }
}

void display(int stack[], int top){
    
    if(top == -1){
        cout<<"stack is Empty";
    }else{
        cout<<"Stack Element: ";
        for (int i = 0; i < top; i++)
        {
            cout<<stack[i]<<" ";
        }
        
    }

}

int main(){
    int max = 5;
    int top = -1;

    int stack[max];

    // cout<<"Fill stack manually: ";
    // for (int i = 0; i < max; i++)
    // {
    //     cin>>stack[++top];
    // }
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    display(stack, top);

    
    if(isFull(top, max)){
        cout<<"\nstack is Full";
    }else{
        cout<<"\nstack is not Full";
    }


}