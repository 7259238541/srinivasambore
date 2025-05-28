#include <iostream>
using namespace std;

int main()
{
    cout << "enter your age" << endl;
    int x;
    cin >> x;
    int myage = x;
    int votingage = 18;

    if (myage >= votingage)
    {
        cout << "Old enough to vote";
    }
    else
    {
        cout << "Not old enough to vote";
    }
}
