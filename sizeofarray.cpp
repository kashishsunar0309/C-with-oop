#include <iostream>
using namespace std;
int main()
{
    int num[] = {11, 22, 33, 44, 55, 66};
    int n = sizeof(num) / sizeof(num[0]);
    cout << "Size of the array is: " << n;
    return 0;
}