#include<iostream>
using namespace std;

void push(int value, int stack[], int max, int &top){
 if(top == max-1){
    cout<<"\nStack is overflow";
 }else{
    top++;
    stack[top] = value;
 }

 cout<<"\nAfter push: ";
 for (int i = 0; i < max; i++)
 {
    cout<<stack[i]<<" ";
 }
 
}

int main(){
    int max;
    cout<<"Enter Size of stask: ";
    cin>>max;
    int stack[max];
    int top = -1;

    cout<<"\nEnter element: ";
    for (int i = 0; i < max-1; i++){
     cin>>stack[i];
     top++;
    }

    cout<<"\nElement of stack: ";
    for (int i = 0; i < max-1; i++){
        cout<<stack[i]<<" ";
    }
    

    int a;
    cout<<"\nAdd new Element value: ";
    cin>>a;
    push(a, stack, max, top);

}




// #include<iostream>
// using namespace std;

// void push(int stack[], int value, int max, int top){
//     if(top == max-1){
//         cout<<"Stack is overflow\n";
//     }else{
//         top++;
//         stack[top] = value;
//     }

//     cout<<"After push: ";
//     for (int i = 0; i < max; i++)
//     {
//         cout<<stack[i]<<" ";
//     }
    

// }

// int main(){
//     int max = 5;
//     int stack[max] = {1, 2, 3, 4, 5};
//     int top = 4;
//     int a;
//     cout<<"Enter push value: ";
//     cin>>a;

//     push(stack, a, max, top);
// }