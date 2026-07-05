#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "Show A" << endl;
    }
};
class B
{
public:
    void show()
    {
        cout << "Show B" << endl;
    }
};
class C : public A, public B
{
public:
    void show()
    {
        A::show();
        B::show();
    }
};
int main()
{
    C obj;
    obj.show();
    return 0;
}