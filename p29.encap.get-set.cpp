#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
public:
    void setName(string n)
    {
        name = n;
    }

    string getName()
    {
        return name;
    }

    void setAge(int a)
    {
        age = a;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{
    Person P1;
    P1.setName("Seenu");
    cout << P1.getName() << endl;
    P1.setAge(20);
    cout << P1.getAge() << endl;
}