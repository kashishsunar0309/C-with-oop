#include <iostream>
using namespace std;
int num(int a, int b);
double num(double a, double b);
float num(float a, float b, float c);
int main()
{
    cout << "Integer: " << num(5, 4) << endl;
    cout << "Double: " << num(5.5, 4.4) << endl;
    cout << "Float: " << num(4.4, 3.3, 2.2) << endl;
    return 0;
}
int num(int a, int b)
{
    return a + b;
}
double num(double a, double b)
{
    return a + b;
}
float num(float a, float b, float c)
{
    return a + b + c;
}