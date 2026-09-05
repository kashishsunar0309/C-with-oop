#include <iostream>
using namespace std;
int recursion_function(int a, int b)
{
    if (a == b)
        return a;
    return a + recursion_function(a + 1, b);
}

int main()
{
    int a = 2, b = 4;
    int sum = 0;
    cout << "Sum = " << recursion_function(a, b);
}