#include <iostream>
using namespace std;
int multiply(int *a, int *b)
{ // BY POINTER PASS
    return *a * *b;
}
void num(int x)
{ // BY VALUE PASS
    x = 300;
}
void num_1(int &x)
{ // BY REFERENCE PASS
    x = 500;
}
int main()
{
    int a = 20, b = 30;
    int x = 50; // Original
    num(x);
    cout << "Pass-By-Value :" << x << endl;
    num_1(x);
    cout << "Pass-By-reference :" << x << endl;
    cout << "MUltiply: " << multiply(&a, &b);
    return 0;
}