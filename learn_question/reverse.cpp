#include <iostream>
using namespace std;
int main()
{
    int num, rev = 0, rem;
    cout << "Enter a number: ";
    cin >> num;
    do
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    } while (num > 0);
    cout << "Reverse=" << rev << endl;
    return 0;
}