/* Design a BankAccount class in C++ with the following requirements:

Private data members:

accountNumber (int)

balance (double)

Public methods:

deposit(double amount) → adds money to the balance.

withdraw(double amount) → subtracts money if there’s enough balance, otherwise show an error message.

showBalance() → displays the current balance.

In main(), create one account object, deposit some money, withdraw some money, and display the balance after each operation.*/
#include <iostream>
using namespace std;
class BankAccount
{
private:
    int account_number;
    float balance;

public:
    void getdata(int acc, float b)
    {
        account_number = acc;
        balance = b;
    }
    void show()
    {
        cout << "Account-Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }
    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited $" << amount << endl;
    }
    void withdraw(double amount)
    {
        balance -= amount;
        cout << "Withdraw $" << amount << endl;
    }
};
int main()
{
    BankAccount b;
    b.getdata(123456, 500000.57);
    b.show();
    b.deposit(65000);
    // After deposit;
    b.show();
    b.withdraw(100000);
    // After withdraw;
    b.show();
    return 0;
}