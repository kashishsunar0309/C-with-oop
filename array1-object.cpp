#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int roll_no;

public:
    void setdata(string n, int r)
    {
        name = n;
        roll_no = r;
    }
    void display()
    {
        cout << "Name: " << name << endl
             << "Roll-No: " << roll_no << endl;
        cout << "============================" << endl;
    }
};
int main()
{
    Student stu[3];
    stu[0].setdata("Aashish", 1);
    stu[1].setdata("Deepson", 2);
    stu[2].setdata("Ritik", 3);
    for (int i = 0; i <= 3; i++)
    {
        stu[i].display();
    }
    return 0;
}