/* why this code this code for understand the concept of sturct where the different
between c and c++ structure i only show what thing c hasn't but exist in c++ show:
function:
void show() is the function. that facility we don't have in c.
encapsulation:
private,public,protect which is for secure concept which doesn't exist in c.
sturct define:
that define in main function.
c = struct Employee e;
but
c++ = Employee e; that it */
#include <iostream>
using namespace std;
struct Employee
{
private:
    int eid, salary;

public:
    void show()
    {
        cout << "Enter the ID  and Name: ";
        cin >> eid >> salary;
    }
    void display()
    {
        cout << "ID: " << eid << endl
             << "SALARY: " << salary;
    }
};
int main()
{
    Employee e;
    e.show();
    cout << "Employee_Detail: " << endl;
    cout << "-----------------------" << endl;
    e.display();
    return 0;
}