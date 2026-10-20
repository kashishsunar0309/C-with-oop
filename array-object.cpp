#include <iostream>
using namespace std;
const int MAX = 100;
class Employee
{
private:
    int salary;
    int id;

public:
    void getdata()
    {
        cout << "Enter the ID: ";
        cin >> id;
        cout << "Enter the Salary: ";
        cin >> salary;
    }
    void putdata()
    {
        cout << "ID:" << id << "\tSalary: " << salary << endl;
    }
};
int main()
{
    Employee e[MAX];
    int n = 0;
    char ans;
    do
    {
        cout << "Enter the Employee Number: " << n + 1 << endl;
        e[n++].getdata();
        cout << "Enter another(y/n): " << endl;
        cin >> ans;
    } while (ans != 'n');
    cout << endl
         << "******Employee Details******" << endl;
    for (int j = 0; j < n; j++)
    {
        cout << "\nEmployee Number is:: " << j + 1;
        e[j].putdata();
    }
    return 0;
}