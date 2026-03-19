#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];

    cout<<"Enter element: ";
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }

    
    int i = 0; 
    int j = n - 1;
    int isPalindrome = true;

    while (i < j){

       if (arr[i] != arr[j]){
        isPalindrome = false;
        break;
       }
        i++;
        j--;
    }

    if(isPalindrome == true){
        cout<<"Palindrome Array";
    }else{
        cout<<"Not Palindrome Array";
    }
    
    

}