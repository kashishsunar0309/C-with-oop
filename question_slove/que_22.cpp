/*Create class employee with data members eid, ename, and salary and necessary member functions.
Create another class company with name, location and 10 employees.*/
#include <iostream>
using namespace std;

class Employee
{
public:
    int eid;
    string ename;
    float salary;

    void add(int a, string b, float c)
    {
        eid = a;
        ename = b;
        salary = c;
    }
    void show()
    {
        cout << "ID: " << eid << "\t====NAME: " << ename << "\t====SALARY: " << salary << endl;
    }
};

class Company
{
public:
    string name;
    string location;
    Employee staff[10]; // 10 employees working at this company

    void setCompanyData(string n, string l)
    {
        name = n;
        location = l;
    }

    void display()
    {
        cout << "\n===== COMPANY DETAILS =====\n";
        cout << "NAME: " << name << "\nLOCATION: " << location << endl;

        cout << "\n===== EMPLOYEES =====\n";
        for (int i = 0; i < 10; i++)
        {
            staff[i].show();
        }
    }
};

int main()
{
    Company t;
    t.setCompanyData("Cyber_tactok", "Los Angeles");
    t.staff[0].add(1, "Krishna", 50000);
    t.staff[1].add(2, "Rahul", 45000);
    t.staff[2].add(3, "Sita", 60000);
    t.staff[3].add(4, "Hari", 38000);
    t.staff[4].add(5, "Gita", 52000);
    t.staff[5].add(6, "Ram", 47000);
    t.staff[6].add(7, "Shyam", 41000);
    t.staff[7].add(8, "Maya", 55000);
    t.staff[8].add(9, "Bina", 43000);
    t.staff[9].add(10, "Dipak", 49000);
    t.display();
    return 0;
}