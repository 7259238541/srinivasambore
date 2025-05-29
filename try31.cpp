#include <iostream>
#include <istream>
using namespace std;

int main()
{
    int time;
    cout << "Enter the time" << endl;
    cin >> time;
    string result = (time < 18) ? "Good day" : "Good evening";
    cout << result;
    return 0;
}