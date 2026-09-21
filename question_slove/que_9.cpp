/*WAP to calculate the area of circle,rectangle and triangle using function overloading*/
#include <iostream>
using namespace std;
double circle(double pi, double r)
{
    return (pi * r * r);
}
double rectangle(double l, double w)
{
    return (l * w);
}
double triangle(double b, double h)
{
    return (b * h / 2);
}
int main()
{
    double pi = 3.14, r = 7;
    double b = 4, h = 8;
    double l = 5, w = 9;
    cout << circle(pi, r) << endl;
    cout << rectangle(l, w) << endl;
    cout << triangle(b, h) << endl;
    return 0;
}