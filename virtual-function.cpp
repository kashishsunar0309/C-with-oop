// Virtual Functions.
#include <iostream>
using namespace std;

class point
{
    int x;
    int y;

public:
    virtual void display()
    {
        cout << "Hello My name is Virtual Function" << endl;
    }
};

class ans : public point
{
public:
    void display() override
    {
        cout << "Fantastic! that cool" << endl;
    }
};

int main()
{
    point *p;
    ans a;
    p = &a;
    p->display(); // prints "Fantastic! that cool" because display is virtual
    return 0;
}