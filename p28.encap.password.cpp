#include <iostream>
using namespace std;

class passwordchecker
{
private:
    int pin;
public:
    void setpin(int p)
    {
        pin = p;
    }
    void login(int pin_number)
    {
        if (pin == pin_number)
        {
            cout << "Logged in" << endl;
        }
        else
        {
            cout << "Wrong pin" << endl;
        }
    }
};

int main()
{
    passwordchecker P1;
    P1.setpin(1234);
    P1.login(2345);
    P1.setpin(2345);
    P1.login(2345);
}