/*WAP to determine the sum of the harmonic series (1+1/2+1/3+1/4+.....+1/n)for a given value of n.
 */
#include <iostream>
using namespace std;

int main()
{
    int n;
    double sum = 0.0;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Harmonic series H_" << n << " = ";

    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;

        // Print each term
        cout << "1/" << i;

        // Add plus sign between terms
        if (i < n)
        {
            cout << " + ";
        }
    }

    cout << endl;
    cout << "Sum = " << sum << endl;

    return 0;
}
