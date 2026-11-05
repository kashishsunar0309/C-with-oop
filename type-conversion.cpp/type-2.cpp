#include <iostream>
using namespace std;
class qqq
{
private:
    int feet;
    int inch;

public:
    qqq(int f, int i)
    {
        feet = f;
        inch = i;
    }
    operator float()
    {
        float a = feet + inch / 12.0;
        return a;
    }
};
int main()
{
    qqq q(8, 6);
    float x = (float)q;
    cout << "x:" << x;
    return 0;
}