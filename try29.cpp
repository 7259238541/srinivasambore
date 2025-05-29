#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter the value of x" << endl;
    cin >> x;
    cout << "Enter the value of y" << endl;
    cin >> y;

    if (x < y)
    {
        cout << "given condition is correct " << endl;
    }

    else
    {
        cout << "given condition is incorrect" << endl;
    }
    return 0;
}