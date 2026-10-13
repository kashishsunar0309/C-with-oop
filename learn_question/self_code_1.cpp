#include <iostream>
using namespace std;
int cal(int a, int b, string oper)
{
    if (oper == "+")
        return a + b;
    else if (oper == "-")
        return a - b;
    else if (oper == "*")
        return a * b;
    else if (oper == "/")
    {
        if (b == 0)
        {
            cout << "Undefined...";
            return 0;
        }
        return a / b;
    }
    else
    {
        cout << "Invalid syntax";
        return 0;
    }
}
int main()
{
    int x, y;
    string oper;
    cout << "Enter the value of a and b: " << endl;
    cin >> x >> y;
    cout << "Enter the symbol:(+,-,*,/): " << endl;
    cin >> oper;
    cout << "OUTPUT: " << cal(x, y, oper) << endl;
    return 0;
}