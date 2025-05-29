#include <iostream>
using namespace std;

double add(double a, double b)
{
    double c = a + b;
    return c;
}

int main()
{
    double x, y, result;
    cout << "enter the value of x" << endl;
    cin >> x;
    cout << "enter the value of y" << endl;
    cin >> y;
    result = add(x, y);
    cout << "result;" << result << endl;
}