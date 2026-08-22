#include <iostream>
using namespace std;
class Student
{
private:
    int id;
    string name;
    float marks1, marks2, marks3;

public:
    void getdata(int a, string b, float m1, float m2, float m3)
    {
        id = a;
        name = b;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
    void display()
    {
        cout << "ID: " << id << endl
             << "NAME: " << name << endl
             << "MARKS1: " << marks1 << endl
             << "MARKS2: " << marks2 << endl
             << "MARKS3: " << marks3 << endl;
    }
    float average()
    {
        return (marks1 + marks2 + marks3) / 3;
        // We need use this if we want to direct with help of s1.average on main function.
        // float avg = (marks1 + marks2 + marks3) / 3;
        // cout << "AVERAGE: " << avg << endl;
        // return avg;
    }
};
int main()
{
    Student s1;
    s1.getdata(456, "Ramson", 45, 67, 89);
    s1.display();
    cout << "AVERAGE: " << s1.average() << endl;
    // That for average() function comment
    // s1.average();
    return 0;
}