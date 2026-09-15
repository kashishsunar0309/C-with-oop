#include <iostream>
using namespace std;
int main()
{
    int pin;
    cout << "Enter the the pin: ";
    cin >> pin;
    while (pin != 1234)
    {
        cout << "Incorrect PIN";
        cout << "Enter the the pin: ";
        cin >> pin;
    }
    cout << "Aceess";
}