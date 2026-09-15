#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    if (x - y == 0)
    {
        cout << "The two numbers are equivalent";
    }
    else
    {
        cout << "The two numbers are not equivalent";
    }
    return 0;
}
