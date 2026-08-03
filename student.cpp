#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    int age;
    string name;
    int clas;

public:
    student(int a, string n, int c)
    {
        age = a;
        name = n;
        clas = c;
    }
    void display()
    {
        cout << "AGE: " << age << endl;
        cout << "NAME: " << name << endl;
        cout << "Class: " << clas;
    }
};
int main()
{
    student s(13, "Deepson", 7);
    s.display();
    return 0;
}