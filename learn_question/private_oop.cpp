#include <iostream>
using namespace std;

class Student
{
private:
    string name = "Unknown";
    int age = 0;

public:
    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        if (a > 0 && a < 100)
        {
            age = a;
        }
        else
        {
            cout << "Invalid age!" << endl;
        }
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Student s1;

    // Take input from user
    string n;
    int a;
    cout << "Enter name: ";
    cin >> n;
    cout << "Enter age: ";
    cin >> a;

    s1.setName(n);
    s1.setAge(a);

    s1.display();
    return 0;
}
