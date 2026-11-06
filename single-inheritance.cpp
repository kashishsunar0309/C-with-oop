// Single inheritance
#include <iostream>
using namespace std;

class Student
{
    const char *name;
    int age;

public:
    Student(const char *n, int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout << "Name:-" << name << endl;
        cout << "Age:-" << age << endl;
    }
};

class ForeignStudent : public Student
{
    const char *country;

public:
    ForeignStudent(const char *n, int a, const char *c) : Student(n, a)
    {
        country = c;
    }
    void displayForeign()
    {
        display();
        cout << "Country::" << country << endl;
    }
};

int main()
{
    ForeignStudent fs("Steven", 21, "UK");
    fs.displayForeign();
    return 0;
}