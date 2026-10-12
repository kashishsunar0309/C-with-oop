// return by reference method.
#include <iostream>
using namespace std;
int &min(int &x, int &y)
{
    if (x < y)
        return x;
    else
        return y;
}
int main()
{
    int a, b, r;
    cout << "Enter two number: " << endl;
    cin >> a >> b;
    min(a, b) = 0;
    cout << "======================" << endl;
    cout << "a=" << a << endl
         << "b=" << b;
    return 0;
}