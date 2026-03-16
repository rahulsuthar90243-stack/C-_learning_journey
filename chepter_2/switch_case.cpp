#include <iostream>
using namespace std;
int main()
{

    int a, b;
    char ch;
    cout << "Enter Operation: ";
    cin >> a >> ch >>b;

    switch (ch)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        if (b != 0)
        {
            cout << a / b;
        }
        else
        {
            cout << "Not devide zero";
        }
        break;
    default:
        cout << "Invalid Operator";
        break;
    }
}