#include <iostream>
#include <fstream>
#include <string>
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
    cout << "\n1. Login";
    cout << "\n2. Sign up";
    cout << "\n3. Forget Password";
    cout << "\n4. Exit\n";
    cout << "Enter Your Choice: ";
    cin >> choice;
    cin.ignore(); // clear buffer for getline

    switch (choice)
    {
    case '1':
        obj.login();
        break;
    case '2':
        obj.signUP();
        break;
    case '3':
        obj.forget();
        break;
    case '4':
        return 0;
    default:
        cout << "Invalid Selection...!";
    }
    return 0;
}

// ===========------- SIGNUP -------===========
void temp::signUP()
{
    cout << "\nEnter Your User Name: ";
    getline(cin, userName);
    cout << "Enter Your Email Address: ";
    getline(cin, Email);
    cout << "Enter Your Password: ";
    getline(cin, password);

    file.open("loginData.txt", ios::out | ios::app);
    file << userName << "*" << Email << "*" << password << endl;
    file.close();

    cout << "\nAccount Created Successfully!\n";
}

// ---------------- LOGIN ----------------
void temp::login()
{
    string searchName, searchPass;
    cout << "\n===== LOGIN =====\n";
    cout << "Enter the User Name: ";
    getline(cin, searchName);
    cout << "Enter the Password: ";
    getline(cin, searchPass);

    file.open("loginData.txt", ios::in);
    bool found = false;

    while (getline(file, userName, '*') &&
           getline(file, Email, '*') &&
           getline(file, password, '\n'))
    {
        if (userName == searchName)
        {
            found = true;
            if (password == searchPass)
            {
                cout << "\nAccount Login Successful!";
                cout << "\nUsername: " << userName;
                cout << "\nEmail: " << Email << endl;
            }
            else
            {
                cout << "\nPassword is Incorrect...!";
            }
            break;
        }
    }

    if (!found)
    {
        cout << "\nUser not found...!";
    }

    file.close();
}

// ============== FORGOT PASSWORD ==========
void temp::forget()
{
    string searchName, searchEmail;
    cout << "\nEnter Your UserName: ";
    getline(cin, searchName);
    cout << "Enter Your Email Address: ";
    getline(cin, searchEmail);

    file.open("loginData.txt", ios::in);
    bool found = false;

    while (getline(file, userName, '*') &&
           getline(file, Email, '*') &&
           getline(file, password, '\n'))
    {
        if (userName == searchName && Email == searchEmail)
        {
            found = true;
            cout << "\nAccount Found!";
            cout << "\nYour password is: " << password << endl;
            break;
        }
    }

    if (!found)
    {
        cout << "\nAccount NOT FOUND...!" << endl;
    }

    file.close();
}
