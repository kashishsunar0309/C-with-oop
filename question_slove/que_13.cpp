/* WAP to calculate the prime number using constructor.*/
#include <iostream>
using namespace std;
class Prime
{
public:
    int num;
    Prime(int n)
    {
        num = n;
    }
    void cal()
    {
        bool isprime = true;
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << "NOT-PRIME-NUMBER" << endl;
                isprime = false;
                break;
            }
        }
        if (isprime)
        {
            cout << "PRIME-NUMBER" << endl;
        }
    }
};
int main()
{
    Prime obj(45);
    cout << obj.num << " which is ";
    obj.cal();
    return 0;
}