#include <iostream>
using namespace std;
class kkk
{
    int feet;
    int inch;

public:
    kkk()
    {
        feet = inch = 0;
    }
    kkk(int f, int i)
    {
        feet = f;
        inch = i;
    }
    void display()
    {
        cout << feet << "ft," << inch << "inch" << endl;
    }
};
class dist
{
    int meter;
    int centimeter;

public:
    dist(int m, int c)
    {
        meter = m;
        centimeter = c;
    }
    operator kkk() // operation function
    {
        kkk k;
        int f, i;
        f = meter * 3.3;
        i = centimeter * 0.4;
        f = f + i / 12;
        i = i % 12;
        return kkk(f, i);
    }
};
int main()
{
    kkk k1;
    dist k2(4, 50);
    k1 = k2;
    k1.display();
    return 0;
}