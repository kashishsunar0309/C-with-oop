#include <iostream>
using namespace std;
bool isprimenumber(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main()
{
    for (int i = 1; i <= 10000; i++)
    {
        bool isprime = isprimenumber(i);
        if (isprime)
            cout << i << endl;
    }
    return 0;
}