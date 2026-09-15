#include <iostream>
using namespace std;
class Base
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
};
class Derived : private Base
{
public:
    int f1(int a, int b)
    {
        return add(a, b);
    }
};
int main(void)
{
    Derived b1;
    cout << b1.f1(2, 3);
    return 0;
}