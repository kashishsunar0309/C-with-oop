#include <iostream>
using namespace std;
int mul(int, int);
double mul(float, int);
int mul(int a, int b)
{
    return (a * b);
}
double mul(double x, int y)
{
    return (x * y);
}
int main()
{
    int r1 = mul(4, 5);
    int r2 = mul(4.5, 2);
    cout << "Interger: " << r1 << endl;
    cout << "Float: " << r2 << endl;
    return 0;
}