#include <iostream>
using namespace std;
void f(int a)
{
    if (a > 0)
    {
        cout << a;
        f(a - 2);
        cout << a;
    }
}
int main()
{
    int a;
    cout << "Enter the number of a: ";
    cin >> a;
    f(a);
    return 0;
}
