#include <iostream>
#include <limits>
using namespace std;

int main()
{
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    while (!(cin >> num1))
    {
        cout << "Invalid input. Please enter a valid number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    while (!(cin >> num2))
    {
        cout << "Invalid input. Please enter a valid number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    switch (op)
    {
    case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
            cout << "Result: " << num1 / num2 << endl;
        else
            cout << "Error: Division by zero is not allowed." << endl;
        break;
    default:
        cout << "Error: Invalid operator." << endl;
    }

    return 0;
}
