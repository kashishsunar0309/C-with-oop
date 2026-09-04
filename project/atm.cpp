#include <iostream>
using namespace std;
void function()
{
    cout << "*******MENU*******" << endl;
    cout << "1:Balance" << endl;
    cout << "2.Depoist" << endl;
    cout << "3.Withdraw" << endl;
    cout << "4: Exit " << endl;
    cout << "*****************" << endl;
}
int main()
{
    int option;
    int balance = 500;
    function();
    system("cls");
    do
    {
        cout << "OPTION:";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Balance: " << balance << "$" << endl;
            break;
        case 2:
        {
            cout << "Deposit: ";
            double deposit;
            cin >> deposit;
            balance += deposit;
            break;
        }
        case 3:
        {
            cout << "Withdraw: ";
            double withdraw;
            cin >> withdraw;
            if (balance >= withdraw)
            {
                balance -= withdraw;
            }
            else
            {
                cout << "***NOT ENOUGH MONEY***" << endl;
            }
            break;
        }
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid option! Please choose 1–4." << endl;
        }
    } while (option != 4);
    return 0;
}