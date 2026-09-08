#include <iostream>
using namespace std;
inline int square(int x)
{
    return x * x;
}
int main()
{
    int x = 9;
    cout << square(x);
    return 0;
}