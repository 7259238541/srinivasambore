#include <iostream>
using namespace std;

int main()
{
    int time;
    cout << "Enter the time" << endl;
    cin >> time;
    if (time <= 11)
    {
        cout << "Good morning" << endl;
    }
    else if (time <= 16)
    {
        cout << "Good afternoon" << endl;
    }
    else if (time <= 18)
    {
        cout << "Good evening" << endl;
    }
    else
    {
        cout << "Good evening" << endl;
    }
}