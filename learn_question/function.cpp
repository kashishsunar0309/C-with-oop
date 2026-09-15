#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    cout << add(45, 34) << endl;
    cout << add(3.5, 4.3) << endl;
    return 0;
}
