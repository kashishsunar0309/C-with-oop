#include <iostream>
using namespace std;
int main()
{
    int x = 43;
    if (x % 12 == 0 || x % 12 == 1)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}