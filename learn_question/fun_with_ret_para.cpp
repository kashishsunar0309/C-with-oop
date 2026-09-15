#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int sum = add(9 + 4);
    cout << sum;
    return 0;
}