#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    double a, b, result;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Result: " << a + b << endl;
        break;
    case 2:
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Result: " << a - b << endl;
        break;
    case 3:
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Result: " << a * b << endl;
        break;
    case 4:
        cout << "Enter two numbers: ";
        cin >> a >> b;
        if (b != 0)
            cout << "Result: " << a / b << endl;
        else
            cout << "Error: Division by zero!" << endl;
        break;
    }
}
