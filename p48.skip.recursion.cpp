#include <iostream>
using namespace std;

int add_recurstion(int num)
{
    if (num % 2 == 0)
    {
        return add_recurstion(num - 1);
    }
    return add_recurstion(num - 1);
}

int main()
{
    cout << add_recurstion(100) << endl;
}