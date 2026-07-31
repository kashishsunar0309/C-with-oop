#include <stdio>
#include <fstream>
using namespace std;
class temp
{
    string userName, Email, password;
    fstream file;

public:
    void login();
    void signUP();
    void forget();

} obj;

int main()
{
    char choice;
    cot << endl
        << "1. Login";
    cout << endl
         << "2. Sign up ";
    cout << endl
         << "3. Forget Password";
    cout << endl
         << "4. Exit" << endl;
    cout << "Enter Your Choice: ";
    cin >> choice;
    switch (choice)
    {
    case '1':

        break;
    case '2':

        break;

    case '3':

        break;

    case '4':

        break;
    default:
        cout "Invalid Selection...!";
    }
}
void temp ::signup()
{
    cout << endl
         << "Enter Your User Name:: ";
    getline(cin, userName);
    cout << "Enter Your Email Address:: ";
    getline(cin, Email)
            cout
        << "Enter Your Password:: ";
    getline(cin, password);
    file.open("loignData.txt", ios ::out | ios ::app);
    file << userName << "*" << Email << "*" << password << endl;
    file.close();
}