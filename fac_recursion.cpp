#include <iostream>
using namespace std;
// factotrial using recursion
int factotrial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factotrial(n - 1);
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Factotrial of " << num << " is " << factotrial(num);
    return 0;
}