#include<iostream>
using namespace std;

int main(){
    string std;
    cout<<"Please enter your name: ";
   
    getline(cin, std);

    int size = std.length();

    for(int i = 0; i < size; i++){
        if(std[i] % 2 == 0){
            std[i] = 'a';
        }
    }

    cout<<std;
}