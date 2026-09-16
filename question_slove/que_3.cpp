/*WAP that use two nested for loop and the modulus operator(%) to detect and print prime number (integral numbers that are not evenly divisible by any other number except for themselves and 1.)*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    bool isprime = true;
    for (int i = 2; i < num; i++)
    {
        if (num % 2 == 0)
        {
            isprime = false;
            break;
        }
    }
    if (isprime && num > 1)
    {
        cout << "PRIME NUMBER. ";
    }
    else
    {
        cout << "NOT PRIME NUMBER. ";
    }
    return 0;
}