/* WAP to determine the sum of the series 1 + x^2+3x^2+4x^2+....+nx^2
formula is 1+(n(n+1))/2-1*(x*x)....*/
#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter x: ";
    cin >> x;
    int k = (n * (n + 1)) / 2 - 1;
    int s = 1 + k * (x * x);
    cout << "The sum of the series is " << s;
    return 0;
}