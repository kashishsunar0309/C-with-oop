#include <iostream>
using namespace std;
int multiply(int *a, int *b)
{
    return *a * *b;
}
int main()
{
    int a = 20, b = 30;
    cout << "MUltiply: " << multiply(&a, &b);
    return 0;
}