#include <iostream>
using namespace std;
class one
{
    int x, y;

public:
    one(int);
    one(int, int);
    ~one()
    {
        cout << "Object being destroyed!!";
    }
};
one::one(int a)
{
    x = a;
    y = 0;
}
one::one(int a, int b)
{
    x = a;
    y = b;
}
int main()
{
    one o1(5);
    one o2(25, 30);
}