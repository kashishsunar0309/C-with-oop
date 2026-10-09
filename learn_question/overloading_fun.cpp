#include <iostream>
using namespace std;

int calc(int a, int b)
{
    return a + b;
}

double calc(double a, double b)
{
    return a / b;
}

int calc(int a, int b, int c)
{
    return a * b * c;
}

double calc(double a, double b, double c)
{
    return a - b - c;
}

int main()
{
    cout << calc(40, 50) << endl;
    cout << calc(20.0, 10.0) << endl;
    cout << calc(4, 5, 6) << endl;
    cout << calc(50.0, 20.0, 20.0) << endl;
    return 0;
}
