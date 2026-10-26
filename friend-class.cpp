// Friend Class
#include <iostream>
using namespace std;
class alpha
{
private:
    int x;

public:
    void setdata(int d)
    {
        x = d;
    }
    friend class beta;
};
class beta
{
public:
    void func(alpha a)
    {
        cout << a.x << endl;
    }
};
int main()
{
    alpha a;
    a.setdata(99);
    beta b;
    b.func(a);
    return 0;
}