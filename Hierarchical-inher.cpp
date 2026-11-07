// Hierarchical Inheritance
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int eid, salary;

public:
    void getEmp()
    {
        cout << "Enter id and salary of employee:-" << endl;
        cin >> eid >> salary;
    }
    void display()
    {
        cout << "Emp ID::" << eid << endl;
        cout << "Salary::" << salary << endl;
    }
};

class Engineer : public Employee
{
    string dept;

public:
    void getdata()
    {
        getEmp();
        cout << "Enter the Department:-" << endl;
        cin >> dept;
    }
    void display()
    {
        Employee::display();
        cout << "Department::" << dept << endl;
    }
};

class Typist : public Employee
{
    int ts; // typing speed
public:
    void getdata()
    {
        getEmp();
        cout << "Enter typing Speed:-" << endl;
        cin >> ts;
    }
    void display()
    {
        Employee::display();
        cout << "Typing Speed::" << ts << endl;
    }
};

int main()
{
    Engineer e;
    e.getdata();
    cout << "------Employee Details----------" << endl;
    cout << "=================================" << endl;
    e.display();

    Typist t;
    t.getdata();
    cout << "------Employee Details----------" << endl;
    cout << "=================================" << endl;
    t.display();

    return 0;
}