// Multiple Inheritance
#include <iostream>
using namespace std;
class Teacher
{
    int tid;
    char subject[20];

public:
    void getTeacher()
    {
        cout << "Enter Teacher id and subject " << endl;
        cin >> tid >> subject;
    }
    void displayTeacher()
    {
        cout << "Teacher ID::" << tid << endl;
        cout << "Subject::" << subject << endl;
    }
};
class Staff
{
    int sid;
    char level[10];

public:
    void getStaff()
    {
        cout << "Enter staff ID and level::" << endl;
        cin >> sid >> level;
    }
    void displayStaff()
    {
        cout << "Staff ID::" << sid << endl;
        cout << "Level::" << level << endl;
    }
};
class cooridnator : public Teacher, public Staff
{
    char program[10];

public:
    void getdata()
    {
        getTeacher();
        getStaff();
        cout << "Enter Program::" << endl;
        cin >> program;
    }
    void displaydata()
    {
        displayTeacher();
        displayStaff();
        cout << "Program::" << program;
    }
};
int main()
{
    coordinator c;
    c.getdata();
    cout << "_________Coordinator details_______"
}