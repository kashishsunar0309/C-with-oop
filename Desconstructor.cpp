#include <iostream>
using namespace std;
class Employee
{
public:
    Employee()
    {
        cout << "Constructor" << endl;
    }
    ~Employee()
    {
        cout << "Desconstructor" << endl;
    }
};
int main()
{
    Employee e1;
    Employee e2;
    return 0;
}