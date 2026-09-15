#include <iostream>
using namespace std;
int sum(int a, int b);
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int k = 100;
    int l = 200;
    int m = sum(k, l);
    cout << m;
    return 0;
}