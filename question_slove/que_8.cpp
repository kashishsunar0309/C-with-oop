/* WAP that uses overloaded functions for converting temperature celsius to kelvin scale */
#include <iostream>
using namespace std;
double convert(int c)
{
    return c + 273.15;
}
double convert(double c)
{
    return c - 273.15;
}
int main()
{
    int a = 45;
    double b = 318.15;

    cout << "Celsius " << a << " -> Kelvin: " << convert(a) << endl;
    cout << "Celsius " << b << " -> Kelvin: " << convert(b) << endl;

    return 0;
}