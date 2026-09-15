#include <iostream>
using namespace std;
int main()
{
    int bytes;
    cout << "\nEnter number of bytes: ";
    cin >> bytes;
    cout << "\nKilobytes: " << (bytes / 1024);
    return 0;
}
