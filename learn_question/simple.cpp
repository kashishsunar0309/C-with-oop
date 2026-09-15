#include <iostream>
using namespace std;
int main()
{
    int p, t, r, sim = 0;
    cout << "Enter the value of p,t,r : " << endl;
    cin >> p >> t >> r;
    sim = (p * t * r) / 100;
    cout << endl
         << sim;
    return 0;
}