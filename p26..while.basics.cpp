#include <iostream>
using namespace std;

int main()
{
    int number;
    while (true)
    {
        cout << "Guess the number" << endl;
        cin>>number;
        if(number==5)
        {
            break;
        }
    }
}