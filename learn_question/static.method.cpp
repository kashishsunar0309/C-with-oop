#include <iostream>
using namespace std;
class Bank
{
public:
    int balance;
    static float rate;
};
float Bank::rate = 6.5;
int main()
{
    Bank a, b;
    a.balance = 1000;
    b.balance = 2000;
    cout << a.balance << endl;
    cout << b.balance << endl;
    cout << Bank::rate;
}