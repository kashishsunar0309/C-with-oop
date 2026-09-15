#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "\nEnter the first number: ";
    cin >> x;
    cout << "\nEnter the second number: ";
    cin >> y;
    cout << "\nEnter the third number: ";
    cin >> z;

    // if x is greater than both y and z, x is the largest
    if (x >= y && x >= z)
        cout << x << " is the largest number.";

    // if y is greater than both x and z, y is the largest
    if (y >= x && y >= z)
        cout << y << " is the largest number.";

    // if z is greater than both x and y, z is the largest
    if (z >= x && z >= y)
        cout << z << " is the largest number.";

    return 0;
}