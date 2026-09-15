// WAP on c++ to display and add five numbers.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cout << "Enter five number: ";
    cin >> a >> b >> c >> d >> e;
    int sum = a + b + c + d + e;
    cout << "Sum is " << sum;
    return 0;
}