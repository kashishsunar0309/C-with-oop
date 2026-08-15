#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    int id;
    string name;
    float salary;
    void insert(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }
    void display()
    {
        cout << "=======================================|" << endl;
        cout << "ID" << "  " << "NAME" << " " << "SALARY" << "\t\t\t\t\t\t   |" << endl;
        cout << id << " " << name << " " << salary << "\t\t\t\t\t\t   |" << endl;
        cout << "=======================================|" << endl;
    }
};
int main()
{
    Student s1;
    Student s2;
    s1.insert(45, "Ram", 45000.23);
    s2.insert(60, "Hari", 60000.45);
    s1.display();
    s2.display();
    return 0;
}