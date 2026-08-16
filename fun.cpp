#include <iostream>
using namespace std;
class test
{
public:
    int a, b;
    void get()
    {
        a = 10;
        b = 20;
    }
};
int main()
{
    test c;
    c.get();
    cout << "A: " << c.a << endl
         << "B: " << c.b;
    return 0;
}