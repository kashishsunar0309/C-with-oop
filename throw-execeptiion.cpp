// Try block throwing exception
#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Enter values of a & b:\n";
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw b;
        else
            cout << "Result==" << (float)a / b;
    }
    catch (int i)
    {
        cout << "Divide by zero exception:b=" << i;
    }
    cout << "\nEnd";
    return 0;
}