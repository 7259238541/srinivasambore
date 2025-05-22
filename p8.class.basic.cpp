// To compile the program "g++ <filenmae.cpp> =0 <filename>"
// To run. /<filename>.exe

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

int main()
{
    Person P1;
    P1.name = "Seenu";
    P1.age = 19;

    Person P2;
    P2.name = "Srinivas";
    P2.age = 19;

    cout <<P1.name << endl
          <<P1.age <<endl;  

    cout <<P2.name << endl
          <<P2.age <<endl;  
}