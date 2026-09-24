/*WAP to create a class account with data members account_no,account holders name,balance and
minimum balance. Add member functions create_account,depoist,withdraw and balance_inquary to the class.
Create an object of the account class and show all operation with this*/
#include <iostream>
using namespace std;
class Account
{
private:
    int account_no;
    string account_holder_name;
    double balance;
    double minimum_balance;

public:
    void create_account(int a, string h, double b, double m)
    {
        account_no = a;
        account_holder_name = h;
        balance = b;
        minimum_balance = m;
    }
    void depoist(double amount)
    {
        balance = balance + amount;
        cout << "\nDepoist_Balance: " << amount;
    }
    void withdraw(double amount)
    {
        if (balance - amount < minimum_balance)
        {
            cout << "Balance is less then or equal to 500";
        }
        else
        {
            balance = balance - amount;
            cout << "\nWithDraw_Balance: " << amount;
        }
    }
    void inquary()
    {
        cout << " Account_name: " << account_no << "\n Account_Holder_Name: " << account_holder_name << "\n Balance: " << balance << "\n Minimum_Balance: " << minimum_balance << endl;
    }
};
int main()
{
    Account a1;
    int x;
    string y;
    double z, z1 = 500;
    cout << "Enter the account_number: ";
    cin >> x;
    cin.ignore();
    cout << "Enter the Account_holder_name:";
    getline(cin, y);
    cout << "Enter the Balance: ";
    cin >> z;
    a1.create_account(x, y, z, z1);
    a1.inquary();
    a1.depoist(5000);
    a1.withdraw(2500);
    cout << "\n\nCalucation: " << endl;
    a1.inquary();
    return 0;
}