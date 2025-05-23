#include <iostream>
using namespace std;

class person
{
public:
    string name;
    person(string user_name)
    {
        name = user_name;
        cout << "Object Constructed:" << name << endl;
    }

    ~person()
    {
        cout << "Object Destructed:" << name <<  endl;
    }
};

int main()
{
    person p1("anu");
    person p2("anush");
}