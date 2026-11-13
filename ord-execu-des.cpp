// Order of Execution of De-constructor.
#include <iostream>
using namespace std;
class A
{
public:
    ~A()
    {
        cout << "Class A Constructor" << endl;
    }
};
class B : public A
{
public:
    ~B()
    {
        cout << "Class B Constructor" << endl;
    }
};
class C : public B
{
public:
    ~C()
    {
        cout << "Class C Constructor" << endl;
    }
};
int main()
{
    {
        C x;
    } // Destructor is called at this point.
    return 0;
}