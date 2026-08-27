#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "\nEnter the first number: ";
    cin >> a;
    cout << "\nEnter the second number: ";
    cin >> b;
    cout << "\nEnter the third number: ";
    cin >> c;
    if (a > b && a > c)
    {
        if (b > c)
            cout << b << " is second largest number among three numbers";
        else
            cout << c << " is second largest number among three numbers";
    }
    else if (b > c && b > a)
    {
        if (c > a)
            cout << c << " is second largest number among three numbers";
        else
            cout << a << " is second largest number among three numbers";
    }
    else if (a > b)
        cout << a << " is second largest number among three numbers";
    else
        cout << b << " is second largest number among three numbers";
    return 0;
}