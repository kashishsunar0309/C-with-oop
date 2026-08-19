#include <iostream>
using namespace std;
class Student
{
private:
    int id;
    string name;
    float marks1, marks2, marks3;

public:
    Student()
    {
        id = 0;
        name = "Unknown";
        marks1 = marks2 = marks3 = 0;
    }
    Student(int i, string n, float m1, float m2, float m3)
    {
        id = i;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks1 << ", " << marks2 << ", " << marks3 << endl;
        cout << "Average: " << average() << endl;
        cout << "=========================" << endl;
    }
    float average()
    {
        return (marks1 + marks2 + marks3) / 3;
    }
};
int main()
{
    Student s1;
    Student s2(101, "Ram", 80, 75, 90);
    cout << "Student 1: " << endl;
    s1.display();
    cout << "Student 2: " << endl;
    s2.display();
}