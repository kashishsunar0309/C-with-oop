// The pointer
#include <iostream>
#include <cstring>
using namespace std;
class person
{
    char name[20];
    int age;

public:
    void setdata(const char name[], int age)
    {
        strcpy(this->name, name); // name conflict resoltion
        this->age = age;
    }
    void display()
    {
        cout << "Name::" << this->name << endl;
        cout << "Age::" << this->age << endl;
    }
    person isElder(person p)
    {
        if (age > p.age)
            return *this; // returning invoking object
        else
            return p;
    }
};
int main()
{
    person p, p1, p2;
    p1.setdata("Aryan", 1);
    p2.setdata("Binek", 2);
    p = p1.isElder(p2);
    cout << "Elder one is:" << endl;
    p.display();
    return 0;
}