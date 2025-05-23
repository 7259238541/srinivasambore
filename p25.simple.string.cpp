#include <iostream>
using namespace std;

int main()
{
    char op;
    int a, b;
    cout << "Enter 2 numbers: " << endl;
    cin >> a >> b;
    cout << "Enter the operation: +, -, *, /"  << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout  << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;  
    default:
        cout << "Invalid operation";
        break;
    }
}