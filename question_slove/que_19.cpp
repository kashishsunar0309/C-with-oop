/*WAP c++ program to read and dispaly information about employees and managers.
Employee is a class that contains employee numbers,name,address and department. Manager class and a list of employees working under a manager.*/
#include <iostream>
using namespace std;

class Employee
{
public:
    int empId;
    string empName;
    string empAddress;
    string department;

    void setDetails(int id, string name, string address, string dept)
    {
        empId = id;
        empName = name;
        empAddress = address;
        department = dept;
    }

    void showDetails()
    {
        cout << "  ID: " << empId
             << " | Name: " << empName
             << " | Address: " << empAddress
             << " | Department: " << department << endl;
    }
};

class Manager
{
public:
    Employee self;     // the manager's own details (stored as an Employee)
    Employee team[10]; // employees working under this manager
    int teamCount = 0; // how many employees are actually in the team

    void setDetails(int id, string name, string address, string dept)
    {
        self.setDetails(id, name, address, dept);
    }

    void addTeamMember(Employee e)
    {
        if (teamCount < 10)
        {
            team[teamCount] = e;
            teamCount++;
        }
        else
        {
            cout << "Team is full, cannot add more employees.\n";
        }
    }

    void showDetails()
    {
        cout << "\n===================================\n";
        cout << " MANAGER DETAILS\n";
        cout << "===================================\n";
        self.showDetails();

        cout << "\n-----------------------------------\n";
        cout << " EMPLOYEES UNDER THIS MANAGER\n";
        cout << "-----------------------------------\n";

        if (teamCount == 0)
        {
            cout << "  No employees assigned yet.\n";
        }
        else
        {
            for (int i = 0; i < teamCount; i++)
            {
                team[i].showDetails();
            }
        }
    }
};

int main()
{
    // Two regular employees
    Employee ram, sita;
    ram.setDetails(101, "Ram Thapa", "Kathmandu", "IT Service");
    sita.setDetails(102, "Sita Gurung", "Pokhara", "Human Resources");

    // A manager overseeing them
    Manager rahul;
    rahul.setDetails(1, "Rahul Sharma", "Kathmandu", "Management");
    rahul.addTeamMember(ram);
    rahul.addTeamMember(sita);

    rahul.showDetails();

    return 0;
}