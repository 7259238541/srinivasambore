#include <iostream>
using namespace std;

class person
{
    string name;
    int age;

    person(int person_age, string person_name)
    {
        name = person_name;
        age = person_age;
    }

    void intro()
    {
        cout << "My name is " << name << endl
              << "My age is " << age << endl;
    }
};

int main(){
    person p1(19,"seenu");
    person P2(20,"srinivas");
    p1.intro();
    p2.intro();
}