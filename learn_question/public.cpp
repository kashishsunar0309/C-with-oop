#include <iostream>
using namespace std;
int main()
{
    class student
    {
    public:
        string name;
        int age;
        void display()
        {
            cout << "Name: " << name << ",Age" << age << endl;
        }
    };
}