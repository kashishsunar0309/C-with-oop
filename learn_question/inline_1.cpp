// Inline function
#include <iostream>
using namespace std;
inline void mod(int a, int b)
{
    int m;
    m = a % b;
    cout << "MODE: " << m << endl;
}
int main()
{
    int x, y;
    cout << "Enter the num1: ";
    cin >> x;
    cout << "Enter the num2: ";
    cin >> y;
    mod(x, y);
    return 0;
}