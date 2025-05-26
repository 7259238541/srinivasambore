#include <iostream>
using namespace std;

class person
{
public:
    string name;
    char gender;
    int age;
};

class student:public person
{
public:
     string college;
     string department;
     student(string user_college,string user_department)
     {
        college=user_college;
        cout<<"enter the college"<<college<<endl;
        department=user_department;
        cout<<"enter the department"<<department<<endl;
     }
};

class teacher:public person
{
public:
    string college1;
    int salary;
    string designation;
    teacher(string user_college1,int user_salary,string user_designation)
    {
        college1=user_college1;
        cout<<"entyer the college name"<<college1<<endl;
        salary=user_salary;
        cout<<"enter the salary"<<salary<<endl;
        designation=user_designation;
        cout<<"enter the designation"<<designation<<endl;
    }
};

int main()
{
    student s1("cec","ece");
    teacher t1("rms",20,"bangalore");
}