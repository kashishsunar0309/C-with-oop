#include <iostream>
using namespace std;
int display(int a, int b)
{
    return a + b;
}
int main()
{
    int a = 10, b = 20;
    cout << display(a, b);
    return 0;
}