#include <iostream>
using namespace std;

class security
{
public:
    virtual void camera()=0;
    virtual void dogs()=0;
    virtual void bodyguard()=0;
  
};

class home : public security
{
public:
    void camera()override
    {
        cout << "cctv" << endl;
    }

    void dogs()override
    {
        cout << "husky" << endl;
    }

    void bodyguard()override
    {
        cout << "russian boudyguard" << endl;
    }
};

int main()
{
    home h1;
    h1.camera();
    h1.dogs();
    h1.bodyguard();
}