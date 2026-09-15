#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    switch (num)
    {
    case 10:
        cout << "Marks is 10";
        break;
    case 20:
        cout << "Marks is 20";
        break;
    case 30:
        cout << "Marks is 30";
        break;
    default:
        cout << "That not in 10,20,30.";
    }
    return 0;
}