#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int choice;
    double num1, num2, result;

    do
    {
        cout << "\nScientific Calculator\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Square Root\n";
        cout << "6. Exponentiation\n";
        cout << "7. Sine\n";
        cout << "8. Cosine\n";
        cout << "9. Tangent\n";
        cout << "10. Logarithm (base 10)\n";
        cout << "11. Natural Logarithm (ln)\n";
        cout << "12. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        case 5:
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 >= 0)
                cout << "Result: " << sqrt(num1) << endl;
            else
                cout << "Error: Negative input for square root!" << endl;
            break;
        case 6:
            cout << "Enter base and exponent: ";
            cin >> num1 >> num2;
            cout << "Result: " << pow(num1, num2) << endl;
            break;
        case 7:
            cout << "Enter an angle in radians: ";
            cin >> num1;
            cout << "Result: " << sin(num1) << endl;
            break;
        case 8:
            cout << "Enter an angle in radians: ";
            cin >> num1;
            cout << "Result: " << cos(num1) << endl;
            break;
        case 9:
            cout << "Enter an angle in radians: ";
            cin >> num1;
            cout << "Result: " << tan(num1) << endl;
            break;
        case 10:
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 > 0)
                cout << "Result: " << log10(num1) << endl;
            else
                cout << "Error: Non-positive input for logarithm!" << endl;
            break;
        case 11:
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 > 0)
                cout << "Result: " << log(num1) << endl;
            else
                cout << "Error: Non-positive input for natural logarithm!" << endl;
            break;
        case 12:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 12);

    return 0;
}
