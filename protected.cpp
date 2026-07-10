#include <iostream>
using namespace std;

class person
{
protected:
    string name;
    int age;

public:
    void setperson(string n, int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
class student : public person
{
private:
    string course;

public:
    void setstudent(string n, int a, string c)
    {
        name = n;
        age = a;
        course = c;
    }
    void displaystudent()
    {
        cout << "Name: " << name << ", Age: " << age
             << ", Course: " << course << endl;
    }
};
int main()
{
    student s1;
    person p1;
    p1.setperson("Shyam", 32);
    s1.setstudent("Kashish", 21, "Computer Science");
    s1.displaystudent();
    p1.display();
    return 0;
}