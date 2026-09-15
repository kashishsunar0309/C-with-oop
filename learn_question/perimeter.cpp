#include <iostream>
using namespace std;
int main()
{
    float x, y, z;
    cout << "\nEnter the first number: ";
    cin >> x;
    cout << "\nEnter the second number: ";
    cin >> y;
    cout << "\nEnter the third number: ";
    cin >> z;

    if (x < (y + z) && y < (x + z) && z < (y + x))
    {
        cout << "\nPerimeter of the triangle is: " << x + y + z;
    }
    else
    {
        cout << "\nIt is impossible to form a triangle.";
    }

    return 0;
}