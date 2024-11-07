#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    int age;
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class student : public person
{
public:
    int rollno;
    student(string name, int age, int rollno) : person(name, age)
    {
        this->age = age;
    }
    void getInfo()
    {
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
    }
};

int main()
{
    student p1("Divith", 20, 23);
    p1.getInfo();
}