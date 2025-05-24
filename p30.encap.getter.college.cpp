#include <iostream>
using namespace std;

class student
{
private:
    string name;
    string college = " CITY ENGINEERING COLLEGE"
public:
    student(string n)
    {
        name=n;
    }

    string getCollege()
    {
        return college;
    }

    void getDetails()
    {
        cout << "Name:" << name << endl;
        cout << "College:" << college << endl;
    }
};

int main()
{
    student s1("seenu");
    cout << s1.getCollege() << endl;
    s1.getDetails();
}