/*Debug the following code*/
#include <iostream>
using namespace std;
class interest
{
    int principal, rate, year;
    float am;

public:
    interest(int p = 1000, int n = 1, int r = 10);
};
interest::interest(int p, int n, int r)
{
    principal = p;
    year = n;
    rate = r;
    am = principal + (principal * rate * year) / 100.0;
    cout << "Amount = " << am << endl;
}
int main()
{
    interest i1;
    interest i2(2000, 2);
    interest i3(5000, 3, 8);
    return 0;
}