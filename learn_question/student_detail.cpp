#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    string name;
    int roll_no;
    int marks;
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll_no: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main()
{
    Student s;
    s.name = "Ram";
    s.roll_no = 27;
    s.marks = 79;
    s.display();
    return 0;
}