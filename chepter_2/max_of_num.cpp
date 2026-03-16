#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;

    cout<<"Please enter three Number: ";
    cin>>num1>>num2>>num3;

    if(num1 > num2 && num1 > num3){
        cout<<"Maximum Number is: "<<num1;
    }
    else if(num2 > num1 && num2 > num3){
        cout<<"Maximum Number is: "<<num2;
    }else{
        cout<<"Maximum Number is: "<<num3;
    }

}