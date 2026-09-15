#include <iostream>
using namespace std;
int main()
{
    char str[1000];
    cout << "Enter a string to calculate its length: ";
    cin >> str;
    cout << "The Length of the entered string is :" << strlen(str);

    return 0;
}